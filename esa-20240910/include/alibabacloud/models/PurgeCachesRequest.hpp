// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PurgeCachesRequestContent.hpp>
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
    virtual bool empty() const override { this->content_ != nullptr
        && this->edgeComputePurge_ != nullptr && this->force_ != nullptr && this->siteId_ != nullptr && this->type_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const PurgeCachesRequestContent & content() const { DARABONBA_PTR_GET_CONST(content_, PurgeCachesRequestContent) };
    inline PurgeCachesRequestContent content() { DARABONBA_PTR_GET(content_, PurgeCachesRequestContent) };
    inline PurgeCachesRequest& setContent(const PurgeCachesRequestContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline PurgeCachesRequest& setContent(PurgeCachesRequestContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // edgeComputePurge Field Functions 
    bool hasEdgeComputePurge() const { return this->edgeComputePurge_ != nullptr;};
    void deleteEdgeComputePurge() { this->edgeComputePurge_ = nullptr;};
    inline bool edgeComputePurge() const { DARABONBA_PTR_GET_DEFAULT(edgeComputePurge_, false) };
    inline PurgeCachesRequest& setEdgeComputePurge(bool edgeComputePurge) { DARABONBA_PTR_SET_VALUE(edgeComputePurge_, edgeComputePurge) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline PurgeCachesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline PurgeCachesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PurgeCachesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Content to be refreshed.
    std::shared_ptr<PurgeCachesRequestContent> content_ = nullptr;
    // Used for refreshing cached resources in edge computing, such as allowing the refresh of content cached using the CacheAPI interface of an edge function.
    std::shared_ptr<bool> edgeComputePurge_ = nullptr;
    // Indicates whether to refresh all resources under the directory when the content from the origin and the source resource are inconsistent. The default is false.
    // - **true**: Refreshes all resources under the specified directory.
    // - **false**: Refreshes only the changed resources under the specified directory.
    // 
    // > 
    // >  Applies to: Directory refresh, cachetag refresh, ignoreParams refresh, hostname refresh, and purge all cache of the site.
    std::shared_ptr<bool> force_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
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
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
