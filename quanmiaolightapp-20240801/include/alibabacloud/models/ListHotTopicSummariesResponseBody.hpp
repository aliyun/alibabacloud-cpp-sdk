// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListHotTopicSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListHotTopicSummariesResponseBody() = default ;
    ListHotTopicSummariesResponseBody(const ListHotTopicSummariesResponseBody &) = default ;
    ListHotTopicSummariesResponseBody(ListHotTopicSummariesResponseBody &&) = default ;
    ListHotTopicSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicSummariesResponseBody() = default ;
    ListHotTopicSummariesResponseBody& operator=(const ListHotTopicSummariesResponseBody &) = default ;
    ListHotTopicSummariesResponseBody& operator=(ListHotTopicSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(hotTopic, hotTopic_);
        DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
        DARABONBA_PTR_TO_JSON(hotValue, hotValue_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(news, news_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_PTR_TO_JSON(textSummary, textSummary_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(hotTopic, hotTopic_);
        DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
        DARABONBA_PTR_FROM_JSON(hotValue, hotValue_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(news, news_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_PTR_FROM_JSON(textSummary, textSummary_);
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
      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(summaries, summaries_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(summaries, summaries_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Summaries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Summaries& obj) { 
            DARABONBA_PTR_TO_JSON(summary, summary_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Summaries& obj) { 
            DARABONBA_PTR_FROM_JSON(summary, summary_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          Summaries() = default ;
          Summaries(const Summaries &) = default ;
          Summaries(Summaries &&) = default ;
          Summaries(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Summaries() = default ;
          Summaries& operator=(const Summaries &) = default ;
          Summaries& operator=(Summaries &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->summary_ == nullptr
        && this->title_ == nullptr; };
          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Summaries& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Summaries& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->summaries_ == nullptr; };
        // summaries Field Functions 
        bool hasSummaries() const { return this->summaries_ != nullptr;};
        void deleteSummaries() { this->summaries_ = nullptr;};
        inline const vector<Summary::Summaries> & getSummaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<Summary::Summaries>) };
        inline vector<Summary::Summaries> getSummaries() { DARABONBA_PTR_GET(summaries_, vector<Summary::Summaries>) };
        inline Summary& setSummaries(const vector<Summary::Summaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
        inline Summary& setSummaries(vector<Summary::Summaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


      protected:
        shared_ptr<vector<Summary::Summaries>> summaries_ {};
      };

      class News : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const News& obj) { 
          DARABONBA_PTR_TO_JSON(comments, comments_);
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, News& obj) { 
          DARABONBA_PTR_FROM_JSON(comments, comments_);
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        News() = default ;
        News(const News &) = default ;
        News(News &&) = default ;
        News(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~News() = default ;
        News& operator=(const News &) = default ;
        News& operator=(News &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Comments : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Comments& obj) { 
            DARABONBA_PTR_TO_JSON(text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Comments& obj) { 
            DARABONBA_PTR_FROM_JSON(text, text_);
          };
          Comments() = default ;
          Comments(const Comments &) = default ;
          Comments(Comments &&) = default ;
          Comments(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Comments() = default ;
          Comments& operator=(const Comments &) = default ;
          Comments& operator=(Comments &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->text_ == nullptr; };
          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Comments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->comments_ == nullptr
        && this->content_ == nullptr && this->pubTime_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
        // comments Field Functions 
        bool hasComments() const { return this->comments_ != nullptr;};
        void deleteComments() { this->comments_ = nullptr;};
        inline const vector<News::Comments> & getComments() const { DARABONBA_PTR_GET_CONST(comments_, vector<News::Comments>) };
        inline vector<News::Comments> getComments() { DARABONBA_PTR_GET(comments_, vector<News::Comments>) };
        inline News& setComments(const vector<News::Comments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
        inline News& setComments(vector<News::Comments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline News& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // pubTime Field Functions 
        bool hasPubTime() const { return this->pubTime_ != nullptr;};
        void deletePubTime() { this->pubTime_ = nullptr;};
        inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
        inline News& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline News& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline News& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<vector<News::Comments>> comments_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<string> title_ {};
        // url
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->hotTopic_ == nullptr && this->hotTopicVersion_ == nullptr && this->hotValue_ == nullptr && this->id_ == nullptr && this->news_ == nullptr
        && this->summary_ == nullptr && this->textSummary_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // hotTopic Field Functions 
      bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
      void deleteHotTopic() { this->hotTopic_ = nullptr;};
      inline string getHotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
      inline Data& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


      // hotTopicVersion Field Functions 
      bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
      void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
      inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
      inline Data& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


      // hotValue Field Functions 
      bool hasHotValue() const { return this->hotValue_ != nullptr;};
      void deleteHotValue() { this->hotValue_ = nullptr;};
      inline double getHotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
      inline Data& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // news Field Functions 
      bool hasNews() const { return this->news_ != nullptr;};
      void deleteNews() { this->news_ = nullptr;};
      inline const vector<Data::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<Data::News>) };
      inline vector<Data::News> getNews() { DARABONBA_PTR_GET(news_, vector<Data::News>) };
      inline Data& setNews(const vector<Data::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
      inline Data& setNews(vector<Data::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const Data::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Data::Summary) };
      inline Data::Summary getSummary() { DARABONBA_PTR_GET(summary_, Data::Summary) };
      inline Data& setSummary(const Data::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Data& setSummary(Data::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


      // textSummary Field Functions 
      bool hasTextSummary() const { return this->textSummary_ != nullptr;};
      void deleteTextSummary() { this->textSummary_ = nullptr;};
      inline string getTextSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
      inline Data& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> hotTopic_ {};
      shared_ptr<string> hotTopicVersion_ {};
      shared_ptr<double> hotValue_ {};
      shared_ptr<string> id_ {};
      shared_ptr<vector<Data::News>> news_ {};
      shared_ptr<Data::Summary> summary_ {};
      shared_ptr<string> textSummary_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHotTopicSummariesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListHotTopicSummariesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListHotTopicSummariesResponseBody::Data>) };
    inline vector<ListHotTopicSummariesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListHotTopicSummariesResponseBody::Data>) };
    inline ListHotTopicSummariesResponseBody& setData(const vector<ListHotTopicSummariesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHotTopicSummariesResponseBody& setData(vector<ListHotTopicSummariesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHotTopicSummariesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotTopicSummariesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotTopicSummariesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotTopicSummariesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotTopicSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHotTopicSummariesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHotTopicSummariesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListHotTopicSummariesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
