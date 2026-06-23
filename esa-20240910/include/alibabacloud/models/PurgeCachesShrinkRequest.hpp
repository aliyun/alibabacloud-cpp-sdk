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
    // The refresh content.
    shared_ptr<string> contentShrink_ {};
    // Specifies whether to refresh edge computing cached resources. For example, this allows you to refresh content cached by the Edge Routine CacheAPI API operation using the edge function.
    shared_ptr<bool> edgeComputePurge_ {};
    // Specifies whether to refresh all resources under the corresponding directory when the back-to-origin content is inconsistent with the origin server resources. Default value: false.
    // - **true**: Refreshes all resources under the corresponding directory.
    // - **false**: Refreshes only the changed resources under the corresponding directory.
    // 
    // > 
    // >  This parameter takes effect for directory refresh, cache tag refresh, parameter-ignored refresh, hostname refresh, and full site refresh.
    shared_ptr<bool> force_ {};
    // The site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The type of the refresh node. Valid values:
    // - **file** (default): file refresh.
    // - **cachekey**: cache key refresh.
    // - **cachetag**: cache label refresh.
    // - **directory**: folder refresh.
    // - **ignoreParams**: parameter-ignored refresh. This refers to removing the question mark (?) and all parameters after it from the request URL. When you commit a parameter-stripped URL through this API operation, the committed URL is matched against cached resource URLs after their parameters are also stripped. If a cached resource URL matches the committed URL after parameter stripping, the point of presence executes the refresh on the cached resource.
    // - **hostname**: hostname refresh.
    // - **purgeall**: refreshes all cached content under the site.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
