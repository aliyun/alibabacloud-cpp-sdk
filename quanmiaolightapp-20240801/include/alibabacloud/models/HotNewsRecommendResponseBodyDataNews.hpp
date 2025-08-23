// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODYDATANEWS_HPP_
#define ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODYDATANEWS_HPP_
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
  class HotNewsRecommendResponseBodyDataNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotNewsRecommendResponseBodyDataNews& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(searchSource, searchSource_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, HotNewsRecommendResponseBodyDataNews& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(searchSource, searchSource_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    HotNewsRecommendResponseBodyDataNews() = default ;
    HotNewsRecommendResponseBodyDataNews(const HotNewsRecommendResponseBodyDataNews &) = default ;
    HotNewsRecommendResponseBodyDataNews(HotNewsRecommendResponseBodyDataNews &&) = default ;
    HotNewsRecommendResponseBodyDataNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotNewsRecommendResponseBodyDataNews() = default ;
    HotNewsRecommendResponseBodyDataNews& operator=(const HotNewsRecommendResponseBodyDataNews &) = default ;
    HotNewsRecommendResponseBodyDataNews& operator=(HotNewsRecommendResponseBodyDataNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->imageUrls_ != nullptr && this->pubTime_ != nullptr && this->searchSource_ != nullptr && this->source_ != nullptr && this->title_ != nullptr
        && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline HotNewsRecommendResponseBodyDataNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline HotNewsRecommendResponseBodyDataNews& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline HotNewsRecommendResponseBodyDataNews& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline HotNewsRecommendResponseBodyDataNews& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // searchSource Field Functions 
    bool hasSearchSource() const { return this->searchSource_ != nullptr;};
    void deleteSearchSource() { this->searchSource_ = nullptr;};
    inline string searchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
    inline HotNewsRecommendResponseBodyDataNews& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline HotNewsRecommendResponseBodyDataNews& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline HotNewsRecommendResponseBodyDataNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline HotNewsRecommendResponseBodyDataNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<string>> imageUrls_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> searchSource_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
