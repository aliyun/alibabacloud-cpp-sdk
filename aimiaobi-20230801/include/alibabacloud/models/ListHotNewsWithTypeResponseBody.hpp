// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPERESPONSEBODY_HPP_
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
  class ListHotNewsWithTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotNewsWithTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotNewsWithTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHotNewsWithTypeResponseBody() = default ;
    ListHotNewsWithTypeResponseBody(const ListHotNewsWithTypeResponseBody &) = default ;
    ListHotNewsWithTypeResponseBody(ListHotNewsWithTypeResponseBody &&) = default ;
    ListHotNewsWithTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotNewsWithTypeResponseBody() = default ;
    ListHotNewsWithTypeResponseBody& operator=(const ListHotNewsWithTypeResponseBody &) = default ;
    ListHotNewsWithTypeResponseBody& operator=(ListHotNewsWithTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(News, news_);
        DARABONBA_PTR_TO_JSON(NewsType, newsType_);
        DARABONBA_PTR_TO_JSON(NewsTypeName, newsTypeName_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(News, news_);
        DARABONBA_PTR_FROM_JSON(NewsType, newsType_);
        DARABONBA_PTR_FROM_JSON(NewsTypeName, newsTypeName_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class News : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const News& obj) { 
          DARABONBA_PTR_TO_JSON(Author, author_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
          DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
          DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, News& obj) { 
          DARABONBA_PTR_FROM_JSON(Author, author_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
          DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
          DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        && this->content_ == nullptr && this->docUuid_ == nullptr && this->imageUrls_ == nullptr && this->pubTime_ == nullptr && this->searchSource_ == nullptr
        && this->searchSourceName_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr && this->tag_ == nullptr && this->title_ == nullptr
        && this->updateTime_ == nullptr && this->url_ == nullptr; };
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


        // searchSource Field Functions 
        bool hasSearchSource() const { return this->searchSource_ != nullptr;};
        void deleteSearchSource() { this->searchSource_ = nullptr;};
        inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
        inline News& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


        // searchSourceName Field Functions 
        bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
        void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
        inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
        inline News& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


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


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline News& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline News& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline News& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline News& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> author_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> docUuid_ {};
        shared_ptr<vector<string>> imageUrls_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<string> searchSource_ {};
        shared_ptr<string> searchSourceName_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> tag_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->news_ == nullptr
        && this->newsType_ == nullptr && this->newsTypeName_ == nullptr && this->totalPages_ == nullptr; };
      // news Field Functions 
      bool hasNews() const { return this->news_ != nullptr;};
      void deleteNews() { this->news_ = nullptr;};
      inline const vector<Data::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<Data::News>) };
      inline vector<Data::News> getNews() { DARABONBA_PTR_GET(news_, vector<Data::News>) };
      inline Data& setNews(const vector<Data::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
      inline Data& setNews(vector<Data::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


      // newsType Field Functions 
      bool hasNewsType() const { return this->newsType_ != nullptr;};
      void deleteNewsType() { this->newsType_ = nullptr;};
      inline string getNewsType() const { DARABONBA_PTR_GET_DEFAULT(newsType_, "") };
      inline Data& setNewsType(string newsType) { DARABONBA_PTR_SET_VALUE(newsType_, newsType) };


      // newsTypeName Field Functions 
      bool hasNewsTypeName() const { return this->newsTypeName_ != nullptr;};
      void deleteNewsTypeName() { this->newsTypeName_ = nullptr;};
      inline string getNewsTypeName() const { DARABONBA_PTR_GET_DEFAULT(newsTypeName_, "") };
      inline Data& setNewsTypeName(string newsTypeName) { DARABONBA_PTR_SET_VALUE(newsTypeName_, newsTypeName) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Data& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      shared_ptr<vector<Data::News>> news_ {};
      shared_ptr<string> newsType_ {};
      shared_ptr<string> newsTypeName_ {};
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHotNewsWithTypeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListHotNewsWithTypeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListHotNewsWithTypeResponseBody::Data>) };
    inline vector<ListHotNewsWithTypeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListHotNewsWithTypeResponseBody::Data>) };
    inline ListHotNewsWithTypeResponseBody& setData(const vector<ListHotNewsWithTypeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHotNewsWithTypeResponseBody& setData(vector<ListHotNewsWithTypeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHotNewsWithTypeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotNewsWithTypeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotNewsWithTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHotNewsWithTypeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListHotNewsWithTypeResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
