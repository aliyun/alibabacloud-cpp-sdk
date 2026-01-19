// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIEREDCACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIEREDCACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateTieredCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTieredCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheArchitectureMode, cacheArchitectureMode_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTieredCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheArchitectureMode, cacheArchitectureMode_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateTieredCacheRequest() = default ;
    UpdateTieredCacheRequest(const UpdateTieredCacheRequest &) = default ;
    UpdateTieredCacheRequest(UpdateTieredCacheRequest &&) = default ;
    UpdateTieredCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTieredCacheRequest() = default ;
    UpdateTieredCacheRequest& operator=(const UpdateTieredCacheRequest &) = default ;
    UpdateTieredCacheRequest& operator=(UpdateTieredCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheArchitectureMode_ == nullptr
        && this->siteId_ == nullptr; };
    // cacheArchitectureMode Field Functions 
    bool hasCacheArchitectureMode() const { return this->cacheArchitectureMode_ != nullptr;};
    void deleteCacheArchitectureMode() { this->cacheArchitectureMode_ = nullptr;};
    inline string getCacheArchitectureMode() const { DARABONBA_PTR_GET_DEFAULT(cacheArchitectureMode_, "") };
    inline UpdateTieredCacheRequest& setCacheArchitectureMode(string cacheArchitectureMode) { DARABONBA_PTR_SET_VALUE(cacheArchitectureMode_, cacheArchitectureMode) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateTieredCacheRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The tiered cache architecture mode. Valid values:
    // 
    // *   edge: edge tiered cache.
    // *   edge_smart: edge tiered cache + smart tiered cache.
    // *   edge_regional: edge tiered cache + regional tiered cache.
    // *   edge_regional_smart: edge tiered cache + regional tiered cache + smart tiered cache.
    // 
    // This parameter is required.
    shared_ptr<string> cacheArchitectureMode_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
