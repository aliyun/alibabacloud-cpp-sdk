// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADCACHESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRELOADCACHESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PreloadCachesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadCachesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Headers, headersShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadCachesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Headers, headersShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    PreloadCachesShrinkRequest() = default ;
    PreloadCachesShrinkRequest(const PreloadCachesShrinkRequest &) = default ;
    PreloadCachesShrinkRequest(PreloadCachesShrinkRequest &&) = default ;
    PreloadCachesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadCachesShrinkRequest() = default ;
    PreloadCachesShrinkRequest& operator=(const PreloadCachesShrinkRequest &) = default ;
    PreloadCachesShrinkRequest& operator=(PreloadCachesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentShrink_ != nullptr
        && this->headersShrink_ != nullptr && this->siteId_ != nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string contentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline PreloadCachesShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // headersShrink Field Functions 
    bool hasHeadersShrink() const { return this->headersShrink_ != nullptr;};
    void deleteHeadersShrink() { this->headersShrink_ = nullptr;};
    inline string headersShrink() const { DARABONBA_PTR_GET_DEFAULT(headersShrink_, "") };
    inline PreloadCachesShrinkRequest& setHeadersShrink(string headersShrink) { DARABONBA_PTR_SET_VALUE(headersShrink_, headersShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline PreloadCachesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The files to be prefetched.
    std::shared_ptr<string> contentShrink_ = nullptr;
    // By default, prefetch requests include the Accept-Encoding:gzip header. If you want a prefetch request to include other headers or implement multi-replica prefetch, you can specify a custom prefetch header by configuring the Headers parameter.
    std::shared_ptr<string> headersShrink_ = nullptr;
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
