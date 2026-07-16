// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECACHERESERVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECACHERESERVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCacheReserveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCacheReserveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheReserveInstanceId, cacheReserveInstanceId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCacheReserveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheReserveInstanceId, cacheReserveInstanceId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateCacheReserveRequest() = default ;
    UpdateCacheReserveRequest(const UpdateCacheReserveRequest &) = default ;
    UpdateCacheReserveRequest(UpdateCacheReserveRequest &&) = default ;
    UpdateCacheReserveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCacheReserveRequest() = default ;
    UpdateCacheReserveRequest& operator=(const UpdateCacheReserveRequest &) = default ;
    UpdateCacheReserveRequest& operator=(UpdateCacheReserveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheReserveInstanceId_ == nullptr
        && this->enable_ == nullptr && this->siteId_ == nullptr; };
    // cacheReserveInstanceId Field Functions 
    bool hasCacheReserveInstanceId() const { return this->cacheReserveInstanceId_ != nullptr;};
    void deleteCacheReserveInstanceId() { this->cacheReserveInstanceId_ = nullptr;};
    inline string getCacheReserveInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveInstanceId_, "") };
    inline UpdateCacheReserveRequest& setCacheReserveInstanceId(string cacheReserveInstanceId) { DARABONBA_PTR_SET_VALUE(cacheReserveInstanceId_, cacheReserveInstanceId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateCacheReserveRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateCacheReserveRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The cache reserve instance ID.
    shared_ptr<string> cacheReserveInstanceId_ {};
    // The switch. Valid values:
    // 
    // - **on**: enabled.
    // - **off**: disabled.
    shared_ptr<string> enable_ {};
    // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
