// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHEROBJECTCACHESBYCACHETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHEROBJECTCACHESBYCACHETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class RefreshErObjectCachesByCacheTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshErObjectCachesByCacheTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTag, cacheTag_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(MergeDomainName, mergeDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshErObjectCachesByCacheTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTag, cacheTag_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(MergeDomainName, mergeDomainName_);
    };
    RefreshErObjectCachesByCacheTagRequest() = default ;
    RefreshErObjectCachesByCacheTagRequest(const RefreshErObjectCachesByCacheTagRequest &) = default ;
    RefreshErObjectCachesByCacheTagRequest(RefreshErObjectCachesByCacheTagRequest &&) = default ;
    RefreshErObjectCachesByCacheTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshErObjectCachesByCacheTagRequest() = default ;
    RefreshErObjectCachesByCacheTagRequest& operator=(const RefreshErObjectCachesByCacheTagRequest &) = default ;
    RefreshErObjectCachesByCacheTagRequest& operator=(RefreshErObjectCachesByCacheTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheTag_ == nullptr
        && this->domain_ == nullptr && this->force_ == nullptr && this->mergeDomainName_ == nullptr; };
    // cacheTag Field Functions 
    bool hasCacheTag() const { return this->cacheTag_ != nullptr;};
    void deleteCacheTag() { this->cacheTag_ = nullptr;};
    inline string getCacheTag() const { DARABONBA_PTR_GET_DEFAULT(cacheTag_, "") };
    inline RefreshErObjectCachesByCacheTagRequest& setCacheTag(string cacheTag) { DARABONBA_PTR_SET_VALUE(cacheTag_, cacheTag) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline RefreshErObjectCachesByCacheTagRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RefreshErObjectCachesByCacheTagRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // mergeDomainName Field Functions 
    bool hasMergeDomainName() const { return this->mergeDomainName_ != nullptr;};
    void deleteMergeDomainName() { this->mergeDomainName_ = nullptr;};
    inline string getMergeDomainName() const { DARABONBA_PTR_GET_DEFAULT(mergeDomainName_, "") };
    inline RefreshErObjectCachesByCacheTagRequest& setMergeDomainName(string mergeDomainName) { DARABONBA_PTR_SET_VALUE(mergeDomainName_, mergeDomainName) };


  protected:
    // This parameter is required.
    shared_ptr<string> cacheTag_ {};
    // This parameter is required.
    shared_ptr<string> domain_ {};
    shared_ptr<bool> force_ {};
    shared_ptr<string> mergeDomainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
