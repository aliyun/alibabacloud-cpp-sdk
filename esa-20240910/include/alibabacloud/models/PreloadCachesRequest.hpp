// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADCACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRELOADCACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PreloadCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    PreloadCachesRequest() = default ;
    PreloadCachesRequest(const PreloadCachesRequest &) = default ;
    PreloadCachesRequest(PreloadCachesRequest &&) = default ;
    PreloadCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadCachesRequest() = default ;
    PreloadCachesRequest& operator=(const PreloadCachesRequest &) = default ;
    PreloadCachesRequest& operator=(PreloadCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->headers_ == nullptr && this->siteId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<string> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<string>) };
    inline vector<string> getContent() { DARABONBA_PTR_GET(content_, vector<string>) };
    inline PreloadCachesRequest& setContent(const vector<string> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline PreloadCachesRequest& setContent(vector<string> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline PreloadCachesRequest& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline PreloadCachesRequest& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline PreloadCachesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The files to be prefetched.
    shared_ptr<vector<string>> content_ {};
    // By default, prefetch requests include the Accept-Encoding:gzip header. If you want a prefetch request to include other headers or implement multi-replica prefetch, you can specify a custom prefetch header by configuring the Headers parameter.
    shared_ptr<map<string, string>> headers_ {};
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
