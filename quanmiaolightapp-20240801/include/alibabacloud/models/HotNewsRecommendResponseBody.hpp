// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODY_HPP_
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
  class HotNewsRecommendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotNewsRecommendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, HotNewsRecommendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    HotNewsRecommendResponseBody() = default ;
    HotNewsRecommendResponseBody(const HotNewsRecommendResponseBody &) = default ;
    HotNewsRecommendResponseBody(HotNewsRecommendResponseBody &&) = default ;
    HotNewsRecommendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotNewsRecommendResponseBody() = default ;
    HotNewsRecommendResponseBody& operator=(const HotNewsRecommendResponseBody &) = default ;
    HotNewsRecommendResponseBody& operator=(HotNewsRecommendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(news, news_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(news, news_);
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
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
          DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(searchSource, searchSource_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, News& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
          DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(searchSource, searchSource_);
          DARABONBA_PTR_FROM_JSON(source, source_);
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
        virtual bool empty() const override { return this->content_ == nullptr
        && this->imageUrls_ == nullptr && this->pubTime_ == nullptr && this->searchSource_ == nullptr && this->source_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline News& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


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


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline News& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


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
        shared_ptr<string> content_ {};
        shared_ptr<vector<string>> imageUrls_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<string> searchSource_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->news_ == nullptr; };
      // news Field Functions 
      bool hasNews() const { return this->news_ != nullptr;};
      void deleteNews() { this->news_ = nullptr;};
      inline const vector<Data::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<Data::News>) };
      inline vector<Data::News> getNews() { DARABONBA_PTR_GET(news_, vector<Data::News>) };
      inline Data& setNews(const vector<Data::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
      inline Data& setNews(vector<Data::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    protected:
      shared_ptr<vector<Data::News>> news_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotNewsRecommendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const HotNewsRecommendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, HotNewsRecommendResponseBody::Data) };
    inline HotNewsRecommendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, HotNewsRecommendResponseBody::Data) };
    inline HotNewsRecommendResponseBody& setData(const HotNewsRecommendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline HotNewsRecommendResponseBody& setData(HotNewsRecommendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotNewsRecommendResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotNewsRecommendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotNewsRecommendResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<HotNewsRecommendResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
