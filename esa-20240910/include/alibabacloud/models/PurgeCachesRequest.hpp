// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurgeCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurgeCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EdgeComputePurge, edgeComputePurge_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PurgeCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EdgeComputePurge, edgeComputePurge_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PurgeCachesRequest() = default ;
    PurgeCachesRequest(const PurgeCachesRequest &) = default ;
    PurgeCachesRequest(PurgeCachesRequest &&) = default ;
    PurgeCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurgeCachesRequest() = default ;
    PurgeCachesRequest& operator=(const PurgeCachesRequest &) = default ;
    PurgeCachesRequest& operator=(PurgeCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CacheKeys, cacheKeys_);
        DARABONBA_PTR_TO_JSON(CacheTags, cacheTags_);
        DARABONBA_PTR_TO_JSON(Directories, directories_);
        DARABONBA_PTR_TO_JSON(Files, files_);
        DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
        DARABONBA_PTR_TO_JSON(IgnoreParams, ignoreParams_);
        DARABONBA_PTR_TO_JSON(PurgeAll, purgeAll_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CacheKeys, cacheKeys_);
        DARABONBA_PTR_FROM_JSON(CacheTags, cacheTags_);
        DARABONBA_PTR_FROM_JSON(Directories, directories_);
        DARABONBA_PTR_FROM_JSON(Files, files_);
        DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
        DARABONBA_PTR_FROM_JSON(IgnoreParams, ignoreParams_);
        DARABONBA_PTR_FROM_JSON(PurgeAll, purgeAll_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CacheKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CacheKeys& obj) { 
          DARABONBA_PTR_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, CacheKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        CacheKeys() = default ;
        CacheKeys(const CacheKeys &) = default ;
        CacheKeys(CacheKeys &&) = default ;
        CacheKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CacheKeys() = default ;
        CacheKeys& operator=(const CacheKeys &) = default ;
        CacheKeys& operator=(CacheKeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->headers_ == nullptr
        && this->url_ == nullptr; };
        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
        inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
        inline CacheKeys& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline CacheKeys& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline CacheKeys& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // When refreshing, specify the header information corresponding to the cache key. When the custom cache key feature switch is enabled, the cache key will be generated based on the specified header for refreshing.
        // 
        // **UserGeo: Country/Region**
        // - Country/region codes follow the ISO 3166-2 standard.
        // 
        // **UserDeviceType: Device Type, currently there are three enum values**
        // - desktop
        //  - tablet
        //  - mobile
        // 
        // **UserLanguage: Language**
        // - Language codes follow the ISO 639-1 or BCP47 standards. For example, input \\"zh\\" to refresh content in Chinese.
        shared_ptr<map<string, string>> headers_ {};
        // URL address to be refreshed.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->cacheKeys_ == nullptr
        && this->cacheTags_ == nullptr && this->directories_ == nullptr && this->files_ == nullptr && this->hostnames_ == nullptr && this->ignoreParams_ == nullptr
        && this->purgeAll_ == nullptr; };
      // cacheKeys Field Functions 
      bool hasCacheKeys() const { return this->cacheKeys_ != nullptr;};
      void deleteCacheKeys() { this->cacheKeys_ = nullptr;};
      inline const vector<Content::CacheKeys> & getCacheKeys() const { DARABONBA_PTR_GET_CONST(cacheKeys_, vector<Content::CacheKeys>) };
      inline vector<Content::CacheKeys> getCacheKeys() { DARABONBA_PTR_GET(cacheKeys_, vector<Content::CacheKeys>) };
      inline Content& setCacheKeys(const vector<Content::CacheKeys> & cacheKeys) { DARABONBA_PTR_SET_VALUE(cacheKeys_, cacheKeys) };
      inline Content& setCacheKeys(vector<Content::CacheKeys> && cacheKeys) { DARABONBA_PTR_SET_RVALUE(cacheKeys_, cacheKeys) };


      // cacheTags Field Functions 
      bool hasCacheTags() const { return this->cacheTags_ != nullptr;};
      void deleteCacheTags() { this->cacheTags_ = nullptr;};
      inline const vector<string> & getCacheTags() const { DARABONBA_PTR_GET_CONST(cacheTags_, vector<string>) };
      inline vector<string> getCacheTags() { DARABONBA_PTR_GET(cacheTags_, vector<string>) };
      inline Content& setCacheTags(const vector<string> & cacheTags) { DARABONBA_PTR_SET_VALUE(cacheTags_, cacheTags) };
      inline Content& setCacheTags(vector<string> && cacheTags) { DARABONBA_PTR_SET_RVALUE(cacheTags_, cacheTags) };


      // directories Field Functions 
      bool hasDirectories() const { return this->directories_ != nullptr;};
      void deleteDirectories() { this->directories_ = nullptr;};
      inline const vector<string> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<string>) };
      inline vector<string> getDirectories() { DARABONBA_PTR_GET(directories_, vector<string>) };
      inline Content& setDirectories(const vector<string> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
      inline Content& setDirectories(vector<string> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


      // files Field Functions 
      bool hasFiles() const { return this->files_ != nullptr;};
      void deleteFiles() { this->files_ = nullptr;};
      inline const vector<Darabonba::Json> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getFiles() { DARABONBA_PTR_GET(files_, vector<Darabonba::Json>) };
      inline Content& setFiles(const vector<Darabonba::Json> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
      inline Content& setFiles(vector<Darabonba::Json> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


      // hostnames Field Functions 
      bool hasHostnames() const { return this->hostnames_ != nullptr;};
      void deleteHostnames() { this->hostnames_ = nullptr;};
      inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
      inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
      inline Content& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
      inline Content& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


      // ignoreParams Field Functions 
      bool hasIgnoreParams() const { return this->ignoreParams_ != nullptr;};
      void deleteIgnoreParams() { this->ignoreParams_ = nullptr;};
      inline const vector<string> & getIgnoreParams() const { DARABONBA_PTR_GET_CONST(ignoreParams_, vector<string>) };
      inline vector<string> getIgnoreParams() { DARABONBA_PTR_GET(ignoreParams_, vector<string>) };
      inline Content& setIgnoreParams(const vector<string> & ignoreParams) { DARABONBA_PTR_SET_VALUE(ignoreParams_, ignoreParams) };
      inline Content& setIgnoreParams(vector<string> && ignoreParams) { DARABONBA_PTR_SET_RVALUE(ignoreParams_, ignoreParams) };


      // purgeAll Field Functions 
      bool hasPurgeAll() const { return this->purgeAll_ != nullptr;};
      void deletePurgeAll() { this->purgeAll_ = nullptr;};
      inline bool getPurgeAll() const { DARABONBA_PTR_GET_DEFAULT(purgeAll_, false) };
      inline Content& setPurgeAll(bool purgeAll) { DARABONBA_PTR_SET_VALUE(purgeAll_, purgeAll) };


    protected:
      // List of cachekeys to be refreshed, required when the type is cachekey.
      shared_ptr<vector<Content::CacheKeys>> cacheKeys_ {};
      // List of cachetags to be refreshed, required when the type is cachetag.
      shared_ptr<vector<string>> cacheTags_ {};
      // List of directories to be refreshed, required when the type is directory.
      shared_ptr<vector<string>> directories_ {};
      // List of files to be refreshed, required when the type is file.
      shared_ptr<vector<Darabonba::Json>> files_ {};
      // List of hostnames to be refreshed, required when the type is hostname.
      shared_ptr<vector<string>> hostnames_ {};
      // List of files with ignored parameters, required when the type is ignoreParams.
      shared_ptr<vector<string>> ignoreParams_ {};
      // Flag for purging all content. Default is false, set to true when the type is purgeall.
      shared_ptr<bool> purgeAll_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->edgeComputePurge_ == nullptr && this->force_ == nullptr && this->siteId_ == nullptr && this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const PurgeCachesRequest::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, PurgeCachesRequest::Content) };
    inline PurgeCachesRequest::Content getContent() { DARABONBA_PTR_GET(content_, PurgeCachesRequest::Content) };
    inline PurgeCachesRequest& setContent(const PurgeCachesRequest::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline PurgeCachesRequest& setContent(PurgeCachesRequest::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // edgeComputePurge Field Functions 
    bool hasEdgeComputePurge() const { return this->edgeComputePurge_ != nullptr;};
    void deleteEdgeComputePurge() { this->edgeComputePurge_ = nullptr;};
    inline bool getEdgeComputePurge() const { DARABONBA_PTR_GET_DEFAULT(edgeComputePurge_, false) };
    inline PurgeCachesRequest& setEdgeComputePurge(bool edgeComputePurge) { DARABONBA_PTR_SET_VALUE(edgeComputePurge_, edgeComputePurge) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline PurgeCachesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline PurgeCachesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PurgeCachesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Content to be refreshed.
    shared_ptr<PurgeCachesRequest::Content> content_ {};
    // Used for refreshing cached resources in edge computing, such as allowing the refresh of content cached using the CacheAPI interface of an edge function.
    shared_ptr<bool> edgeComputePurge_ {};
    // Indicates whether to refresh all resources under the directory when the content from the origin and the source resource are inconsistent. The default is false.
    // - **true**: Refreshes all resources under the specified directory.
    // - **false**: Refreshes only the changed resources under the specified directory.
    // 
    // > 
    // >  Applies to: Directory refresh, cachetag refresh, ignoreParams refresh, hostname refresh, and purge all cache of the site.
    shared_ptr<bool> force_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The type of refresh task. Possible values:
    // - **file** (default): File refresh.
    // - **cachekey**: Cachekey refresh.
    // - **cachetag**: Cachetag refresh.
    // - **directory**: Directory refresh.
    // - **ignoreParams**: Ignore parameters refresh. Ignoring parameters means removing the ? and everything after it in the request URL. When performing an ignore parameters refresh, the user first submits the URL without parameters through the interface. The submitted URLs to be refreshed will then be matched against the cached resource URLs with the parameters removed. If the cached resource URL, after removing the parameters, matches the URL to be refreshed, the CDN node will refresh the cached resources.
    // - **hostname**: Hostname refresh.
    // - **purgeall**: Purge all cache under the site.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
