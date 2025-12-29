// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTVIEWPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTVIEWPOINTSRESPONSEBODY_HPP_
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
  class ListHotViewPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotViewPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotViewPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHotViewPointsResponseBody() = default ;
    ListHotViewPointsResponseBody(const ListHotViewPointsResponseBody &) = default ;
    ListHotViewPointsResponseBody(ListHotViewPointsResponseBody &&) = default ;
    ListHotViewPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotViewPointsResponseBody() = default ;
    ListHotViewPointsResponseBody& operator=(const ListHotViewPointsResponseBody &) = default ;
    ListHotViewPointsResponseBody& operator=(ListHotViewPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Attitude, attitude_);
        DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
        DARABONBA_PTR_TO_JSON(News, news_);
        DARABONBA_PTR_TO_JSON(Ratio, ratio_);
        DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
        DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
        DARABONBA_PTR_FROM_JSON(News, news_);
        DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
        DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
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
      class ViewPoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ViewPoints& obj) { 
          DARABONBA_PTR_TO_JSON(Outlines, outlines_);
          DARABONBA_PTR_TO_JSON(Point, point_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
        };
        friend void from_json(const Darabonba::Json& j, ViewPoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
          DARABONBA_PTR_FROM_JSON(Point, point_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
        };
        ViewPoints() = default ;
        ViewPoints(const ViewPoints &) = default ;
        ViewPoints(ViewPoints &&) = default ;
        ViewPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ViewPoints() = default ;
        ViewPoints& operator=(const ViewPoints &) = default ;
        ViewPoints& operator=(ViewPoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Outlines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
            DARABONBA_PTR_TO_JSON(Outline, outline_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
          };
          friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
            DARABONBA_PTR_FROM_JSON(Outline, outline_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
          };
          Outlines() = default ;
          Outlines(const Outlines &) = default ;
          Outlines(Outlines &&) = default ;
          Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Outlines() = default ;
          Outlines& operator=(const Outlines &) = default ;
          Outlines& operator=(Outlines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->outline_ == nullptr
        && this->summary_ == nullptr; };
          // outline Field Functions 
          bool hasOutline() const { return this->outline_ != nullptr;};
          void deleteOutline() { this->outline_ = nullptr;};
          inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
          inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Outlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        protected:
          shared_ptr<string> outline_ {};
          shared_ptr<string> summary_ {};
        };

        virtual bool empty() const override { return this->outlines_ == nullptr
        && this->point_ == nullptr && this->summary_ == nullptr; };
        // outlines Field Functions 
        bool hasOutlines() const { return this->outlines_ != nullptr;};
        void deleteOutlines() { this->outlines_ = nullptr;};
        inline const vector<ViewPoints::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ViewPoints::Outlines>) };
        inline vector<ViewPoints::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ViewPoints::Outlines>) };
        inline ViewPoints& setOutlines(const vector<ViewPoints::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
        inline ViewPoints& setOutlines(vector<ViewPoints::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


        // point Field Functions 
        bool hasPoint() const { return this->point_ != nullptr;};
        void deletePoint() { this->point_ = nullptr;};
        inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
        inline ViewPoints& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline ViewPoints& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      protected:
        shared_ptr<vector<ViewPoints::Outlines>> outlines_ {};
        shared_ptr<string> point_ {};
        shared_ptr<string> summary_ {};
      };

      class News : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const News& obj) { 
          DARABONBA_PTR_TO_JSON(Author, author_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DocId, docId_);
          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
          DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, News& obj) { 
          DARABONBA_PTR_FROM_JSON(Author, author_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DocId, docId_);
          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
          DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
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
        virtual bool empty() const override { return this->author_ == nullptr
        && this->content_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->imageUrls_ == nullptr && this->pubTime_ == nullptr
        && this->source_ == nullptr && this->summary_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->topic_ == nullptr
        && this->url_ == nullptr; };
        // author Field Functions 
        bool hasAuthor() const { return this->author_ != nullptr;};
        void deleteAuthor() { this->author_ = nullptr;};
        inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
        inline News& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline News& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline News& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // docUuid Field Functions 
        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
        void deleteDocUuid() { this->docUuid_ = nullptr;};
        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
        inline News& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


        // imageUrls Field Functions 
        bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
        void deleteImageUrls() { this->imageUrls_ = nullptr;};
        inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
        inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
        inline News& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
        inline News& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


        // pubTime Field Functions 
        bool hasPubTime() const { return this->pubTime_ != nullptr;};
        void deletePubTime() { this->pubTime_ = nullptr;};
        inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
        inline News& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline News& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline News& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline News& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline News& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline News& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline News& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline News& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> author_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> docId_ {};
        shared_ptr<string> docUuid_ {};
        shared_ptr<vector<string>> imageUrls_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> topic_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->attitude_ == nullptr
        && this->attitudeType_ == nullptr && this->news_ == nullptr && this->ratio_ == nullptr && this->viewPoints_ == nullptr; };
      // attitude Field Functions 
      bool hasAttitude() const { return this->attitude_ != nullptr;};
      void deleteAttitude() { this->attitude_ = nullptr;};
      inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
      inline Data& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


      // attitudeType Field Functions 
      bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
      void deleteAttitudeType() { this->attitudeType_ = nullptr;};
      inline string getAttitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
      inline Data& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


      // news Field Functions 
      bool hasNews() const { return this->news_ != nullptr;};
      void deleteNews() { this->news_ = nullptr;};
      inline const vector<Data::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<Data::News>) };
      inline vector<Data::News> getNews() { DARABONBA_PTR_GET(news_, vector<Data::News>) };
      inline Data& setNews(const vector<Data::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
      inline Data& setNews(vector<Data::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
      inline Data& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // viewPoints Field Functions 
      bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
      void deleteViewPoints() { this->viewPoints_ = nullptr;};
      inline const vector<Data::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Data::ViewPoints>) };
      inline vector<Data::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Data::ViewPoints>) };
      inline Data& setViewPoints(const vector<Data::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
      inline Data& setViewPoints(vector<Data::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


    protected:
      shared_ptr<string> attitude_ {};
      shared_ptr<string> attitudeType_ {};
      shared_ptr<vector<Data::News>> news_ {};
      shared_ptr<string> ratio_ {};
      shared_ptr<vector<Data::ViewPoints>> viewPoints_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHotViewPointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListHotViewPointsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListHotViewPointsResponseBody::Data>) };
    inline vector<ListHotViewPointsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListHotViewPointsResponseBody::Data>) };
    inline ListHotViewPointsResponseBody& setData(const vector<ListHotViewPointsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHotViewPointsResponseBody& setData(vector<ListHotViewPointsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHotViewPointsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotViewPointsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotViewPointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotViewPointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotViewPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHotViewPointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHotViewPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListHotViewPointsResponseBody::Data>> data_ {};
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
} // namespace AiMiaoBi20230801
#endif
