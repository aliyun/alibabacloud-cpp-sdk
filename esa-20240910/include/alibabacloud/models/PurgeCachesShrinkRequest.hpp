// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurgeCachesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurgeCachesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(EdgeComputePurge, edgeComputePurge_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PurgeCachesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(EdgeComputePurge, edgeComputePurge_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PurgeCachesShrinkRequest() = default ;
    PurgeCachesShrinkRequest(const PurgeCachesShrinkRequest &) = default ;
    PurgeCachesShrinkRequest(PurgeCachesShrinkRequest &&) = default ;
    PurgeCachesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurgeCachesShrinkRequest() = default ;
    PurgeCachesShrinkRequest& operator=(const PurgeCachesShrinkRequest &) = default ;
    PurgeCachesShrinkRequest& operator=(PurgeCachesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && this->edgeComputePurge_ == nullptr && this->force_ == nullptr && this->siteId_ == nullptr && this->type_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline PurgeCachesShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // edgeComputePurge Field Functions 
    bool hasEdgeComputePurge() const { return this->edgeComputePurge_ != nullptr;};
    void deleteEdgeComputePurge() { this->edgeComputePurge_ = nullptr;};
    inline bool getEdgeComputePurge() const { DARABONBA_PTR_GET_DEFAULT(edgeComputePurge_, false) };
    inline PurgeCachesShrinkRequest& setEdgeComputePurge(bool edgeComputePurge) { DARABONBA_PTR_SET_VALUE(edgeComputePurge_, edgeComputePurge) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline PurgeCachesShrinkRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline PurgeCachesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PurgeCachesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Content to be refreshed.
    shared_ptr<string> contentShrink_ {};
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
