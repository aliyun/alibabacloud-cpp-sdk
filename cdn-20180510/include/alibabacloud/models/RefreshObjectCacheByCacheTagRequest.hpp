// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHOBJECTCACHEBYCACHETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHOBJECTCACHEBYCACHETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class RefreshObjectCacheByCacheTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshObjectCacheByCacheTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTag, cacheTag_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshObjectCacheByCacheTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTag, cacheTag_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    RefreshObjectCacheByCacheTagRequest() = default ;
    RefreshObjectCacheByCacheTagRequest(const RefreshObjectCacheByCacheTagRequest &) = default ;
    RefreshObjectCacheByCacheTagRequest(RefreshObjectCacheByCacheTagRequest &&) = default ;
    RefreshObjectCacheByCacheTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshObjectCacheByCacheTagRequest() = default ;
    RefreshObjectCacheByCacheTagRequest& operator=(const RefreshObjectCacheByCacheTagRequest &) = default ;
    RefreshObjectCacheByCacheTagRequest& operator=(RefreshObjectCacheByCacheTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheTag_ != nullptr
        && this->domainName_ != nullptr && this->force_ != nullptr; };
    // cacheTag Field Functions 
    bool hasCacheTag() const { return this->cacheTag_ != nullptr;};
    void deleteCacheTag() { this->cacheTag_ = nullptr;};
    inline string cacheTag() const { DARABONBA_PTR_GET_DEFAULT(cacheTag_, "") };
    inline RefreshObjectCacheByCacheTagRequest& setCacheTag(string cacheTag) { DARABONBA_PTR_SET_VALUE(cacheTag_, cacheTag) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline RefreshObjectCacheByCacheTagRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RefreshObjectCacheByCacheTagRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // The tags of Cache. If multiple tags are returned, the tags are separated by commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> cacheTag_ = nullptr;
    // The accelerated domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether to purge all resources that you submit if the requested content is one of the resources that you submit to purge. Default value: false.
    // 
    // *   **true**: The nearest POP fetches all resources from the origin server, delivers them to the client, and updates the cache with the new version.
    // *   **false**: The nearest POP checks the Last-Modified parameter of the resource on the origin server. If the parameter value is the same as that of the cached resource, the POP serves the cached resource. If the parameter value is not the same as that of the cached resource, the POP fetches the latest version from the origin server, delivers it to the client, and updates the cache with the new version.
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
