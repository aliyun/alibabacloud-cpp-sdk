// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETRACEABILITY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETRACEABILITY_HPP_
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
  class GenerateTraceability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTraceability& obj) { 
      DARABONBA_PTR_TO_JSON(News, news_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTraceability& obj) { 
      DARABONBA_PTR_FROM_JSON(News, news_);
    };
    GenerateTraceability() = default ;
    GenerateTraceability(const GenerateTraceability &) = default ;
    GenerateTraceability(GenerateTraceability &&) = default ;
    GenerateTraceability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTraceability() = default ;
    GenerateTraceability& operator=(const GenerateTraceability &) = default ;
    GenerateTraceability& operator=(GenerateTraceability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class News : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const News& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
        DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, News& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
        DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->index_ == nullptr
        && this->pubTime_ == nullptr && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline News& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


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
      shared_ptr<int32_t> index_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> searchSource_ {};
      shared_ptr<string> searchSourceName_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->news_ == nullptr; };
    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<GenerateTraceability::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<GenerateTraceability::News>) };
    inline vector<GenerateTraceability::News> getNews() { DARABONBA_PTR_GET(news_, vector<GenerateTraceability::News>) };
    inline GenerateTraceability& setNews(const vector<GenerateTraceability::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline GenerateTraceability& setNews(vector<GenerateTraceability::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


  protected:
    shared_ptr<vector<GenerateTraceability::News>> news_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
