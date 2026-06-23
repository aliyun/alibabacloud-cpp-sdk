// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGESCRAPEBODY_HPP_
#define ALIBABACLOUD_MODELS_READPAGESCRAPEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageScrapeBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageScrapeBody& obj) { 
      DARABONBA_PTR_TO_JSON(formats, formats_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(maxAge, maxAge_);
      DARABONBA_PTR_TO_JSON(pageTimeout, pageTimeout_);
      DARABONBA_PTR_TO_JSON(readability, readability_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageScrapeBody& obj) { 
      DARABONBA_PTR_FROM_JSON(formats, formats_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(maxAge, maxAge_);
      DARABONBA_PTR_FROM_JSON(pageTimeout, pageTimeout_);
      DARABONBA_PTR_FROM_JSON(readability, readability_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ReadPageScrapeBody() = default ;
    ReadPageScrapeBody(const ReadPageScrapeBody &) = default ;
    ReadPageScrapeBody(ReadPageScrapeBody &&) = default ;
    ReadPageScrapeBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageScrapeBody() = default ;
    ReadPageScrapeBody& operator=(const ReadPageScrapeBody &) = default ;
    ReadPageScrapeBody& operator=(ReadPageScrapeBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Readability : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Readability& obj) { 
        DARABONBA_PTR_TO_JSON(excludeAllImages, excludeAllImages_);
        DARABONBA_PTR_TO_JSON(excludeAllLinks, excludeAllLinks_);
        DARABONBA_PTR_TO_JSON(excludedTags, excludedTags_);
        DARABONBA_PTR_TO_JSON(readabilityMode, readabilityMode_);
      };
      friend void from_json(const Darabonba::Json& j, Readability& obj) { 
        DARABONBA_PTR_FROM_JSON(excludeAllImages, excludeAllImages_);
        DARABONBA_PTR_FROM_JSON(excludeAllLinks, excludeAllLinks_);
        DARABONBA_PTR_FROM_JSON(excludedTags, excludedTags_);
        DARABONBA_PTR_FROM_JSON(readabilityMode, readabilityMode_);
      };
      Readability() = default ;
      Readability(const Readability &) = default ;
      Readability(Readability &&) = default ;
      Readability(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Readability() = default ;
      Readability& operator=(const Readability &) = default ;
      Readability& operator=(Readability &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->excludeAllImages_ == nullptr
        && this->excludeAllLinks_ == nullptr && this->excludedTags_ == nullptr && this->readabilityMode_ == nullptr; };
      // excludeAllImages Field Functions 
      bool hasExcludeAllImages() const { return this->excludeAllImages_ != nullptr;};
      void deleteExcludeAllImages() { this->excludeAllImages_ = nullptr;};
      inline bool getExcludeAllImages() const { DARABONBA_PTR_GET_DEFAULT(excludeAllImages_, false) };
      inline Readability& setExcludeAllImages(bool excludeAllImages) { DARABONBA_PTR_SET_VALUE(excludeAllImages_, excludeAllImages) };


      // excludeAllLinks Field Functions 
      bool hasExcludeAllLinks() const { return this->excludeAllLinks_ != nullptr;};
      void deleteExcludeAllLinks() { this->excludeAllLinks_ = nullptr;};
      inline bool getExcludeAllLinks() const { DARABONBA_PTR_GET_DEFAULT(excludeAllLinks_, false) };
      inline Readability& setExcludeAllLinks(bool excludeAllLinks) { DARABONBA_PTR_SET_VALUE(excludeAllLinks_, excludeAllLinks) };


      // excludedTags Field Functions 
      bool hasExcludedTags() const { return this->excludedTags_ != nullptr;};
      void deleteExcludedTags() { this->excludedTags_ = nullptr;};
      inline const vector<string> & getExcludedTags() const { DARABONBA_PTR_GET_CONST(excludedTags_, vector<string>) };
      inline vector<string> getExcludedTags() { DARABONBA_PTR_GET(excludedTags_, vector<string>) };
      inline Readability& setExcludedTags(const vector<string> & excludedTags) { DARABONBA_PTR_SET_VALUE(excludedTags_, excludedTags) };
      inline Readability& setExcludedTags(vector<string> && excludedTags) { DARABONBA_PTR_SET_RVALUE(excludedTags_, excludedTags) };


      // readabilityMode Field Functions 
      bool hasReadabilityMode() const { return this->readabilityMode_ != nullptr;};
      void deleteReadabilityMode() { this->readabilityMode_ = nullptr;};
      inline string getReadabilityMode() const { DARABONBA_PTR_GET_DEFAULT(readabilityMode_, "") };
      inline Readability& setReadabilityMode(string readabilityMode) { DARABONBA_PTR_SET_VALUE(readabilityMode_, readabilityMode) };


    protected:
      // 是否剔除所有图片
      // 
      // 默认值：false
      shared_ptr<bool> excludeAllImages_ {};
      // 是否剔除所有链接
      // 
      // 默认值：false
      shared_ptr<bool> excludeAllLinks_ {};
      // 指定排除的标签
      shared_ptr<vector<string>> excludedTags_ {};
      // none：不删除信息，默认为 none
      // 
      // normal: 基于自研算法，剔除目标页面无关信息（页头/页脚，导航等）
      // 
      // article: 基于自研算法，获取站点主要正文内容(适用于博客、新闻站点，不适用于目录页、导航页)
      shared_ptr<string> readabilityMode_ {};
    };

    virtual bool empty() const override { return this->formats_ == nullptr
        && this->location_ == nullptr && this->maxAge_ == nullptr && this->pageTimeout_ == nullptr && this->readability_ == nullptr && this->timeout_ == nullptr
        && this->url_ == nullptr; };
    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & getFormats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> getFormats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline ReadPageScrapeBody& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline ReadPageScrapeBody& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ReadPageScrapeBody& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline int32_t getMaxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0) };
    inline ReadPageScrapeBody& setMaxAge(int32_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


    // pageTimeout Field Functions 
    bool hasPageTimeout() const { return this->pageTimeout_ != nullptr;};
    void deletePageTimeout() { this->pageTimeout_ = nullptr;};
    inline int32_t getPageTimeout() const { DARABONBA_PTR_GET_DEFAULT(pageTimeout_, 0) };
    inline ReadPageScrapeBody& setPageTimeout(int32_t pageTimeout) { DARABONBA_PTR_SET_VALUE(pageTimeout_, pageTimeout) };


    // readability Field Functions 
    bool hasReadability() const { return this->readability_ != nullptr;};
    void deleteReadability() { this->readability_ = nullptr;};
    inline const ReadPageScrapeBody::Readability & getReadability() const { DARABONBA_PTR_GET_CONST(readability_, ReadPageScrapeBody::Readability) };
    inline ReadPageScrapeBody::Readability getReadability() { DARABONBA_PTR_GET(readability_, ReadPageScrapeBody::Readability) };
    inline ReadPageScrapeBody& setReadability(const ReadPageScrapeBody::Readability & readability) { DARABONBA_PTR_SET_VALUE(readability_, readability) };
    inline ReadPageScrapeBody& setReadability(ReadPageScrapeBody::Readability && readability) { DARABONBA_PTR_SET_RVALUE(readability_, readability) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ReadPageScrapeBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ReadPageScrapeBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The format of the parsing result.
    // 
    // - rawHtml: the HTML of the target site.
    // - html: the page content processed based on readabilityMode.
    // - markdown: the Markdown content converted from the HTML.
    // - text: the text content extracted from the HTML.
    // - screenshot: a screenshot of the target site.
    shared_ptr<vector<string>> formats_ {};
    // This parameter does not need to be specified.
    shared_ptr<string> location_ {};
    // The maximum cache validity period. Unit: seconds. Default value: 1296000.
    // 1. If the cache duration is less than the value of maxAge, cached content is returned.
    // 2. If maxAge is set to 0, caching is not used.
    shared_ptr<int32_t> maxAge_ {};
    // The timeout period for waiting for the target site resources to fully load. The value of pageTimeout must be less than the value of timeout.
    // 
    // Default value: 15000.
    shared_ptr<int32_t> pageTimeout_ {};
    // The readability configuration for the parsing result.
    shared_ptr<ReadPageScrapeBody::Readability> readability_ {};
    // The end-to-end processing timeout period. Unit: ms.
    // 
    // Valid values: [0, 180000].
    // 
    // Default value: 60000.
    shared_ptr<int32_t> timeout_ {};
    // The target URL to parse. The URL must start with http:// or https://.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
