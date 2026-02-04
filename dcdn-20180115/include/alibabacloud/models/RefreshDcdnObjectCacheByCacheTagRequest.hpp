// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHDCDNOBJECTCACHEBYCACHETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHDCDNOBJECTCACHEBYCACHETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class RefreshDcdnObjectCacheByCacheTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshDcdnObjectCacheByCacheTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTag, cacheTag_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshDcdnObjectCacheByCacheTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTag, cacheTag_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    RefreshDcdnObjectCacheByCacheTagRequest() = default ;
    RefreshDcdnObjectCacheByCacheTagRequest(const RefreshDcdnObjectCacheByCacheTagRequest &) = default ;
    RefreshDcdnObjectCacheByCacheTagRequest(RefreshDcdnObjectCacheByCacheTagRequest &&) = default ;
    RefreshDcdnObjectCacheByCacheTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshDcdnObjectCacheByCacheTagRequest() = default ;
    RefreshDcdnObjectCacheByCacheTagRequest& operator=(const RefreshDcdnObjectCacheByCacheTagRequest &) = default ;
    RefreshDcdnObjectCacheByCacheTagRequest& operator=(RefreshDcdnObjectCacheByCacheTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheTag_ == nullptr
        && this->domainName_ == nullptr && this->force_ == nullptr; };
    // cacheTag Field Functions 
    bool hasCacheTag() const { return this->cacheTag_ != nullptr;};
    void deleteCacheTag() { this->cacheTag_ = nullptr;};
    inline string getCacheTag() const { DARABONBA_PTR_GET_DEFAULT(cacheTag_, "") };
    inline RefreshDcdnObjectCacheByCacheTagRequest& setCacheTag(string cacheTag) { DARABONBA_PTR_SET_VALUE(cacheTag_, cacheTag) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline RefreshDcdnObjectCacheByCacheTagRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RefreshDcdnObjectCacheByCacheTagRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // This parameter is required.
    shared_ptr<string> cacheTag_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
