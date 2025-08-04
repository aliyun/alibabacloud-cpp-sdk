// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTARTICLES_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTARTICLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2RequestArticles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2RequestArticles& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2RequestArticles& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    RunWritingV2RequestArticles() = default ;
    RunWritingV2RequestArticles(const RunWritingV2RequestArticles &) = default ;
    RunWritingV2RequestArticles(RunWritingV2RequestArticles &&) = default ;
    RunWritingV2RequestArticles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2RequestArticles() = default ;
    RunWritingV2RequestArticles& operator=(const RunWritingV2RequestArticles &) = default ;
    RunWritingV2RequestArticles& operator=(RunWritingV2RequestArticles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->pubTime_ != nullptr && this->searchSourceName_ != nullptr && this->source_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunWritingV2RequestArticles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunWritingV2RequestArticles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // searchSourceName Field Functions 
    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
    inline string searchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
    inline RunWritingV2RequestArticles& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline RunWritingV2RequestArticles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunWritingV2RequestArticles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunWritingV2RequestArticles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> searchSourceName_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
