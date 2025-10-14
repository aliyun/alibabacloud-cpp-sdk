// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIEREDCACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTIEREDCACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetTieredCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTieredCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTieredCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetTieredCacheRequest() = default ;
    GetTieredCacheRequest(const GetTieredCacheRequest &) = default ;
    GetTieredCacheRequest(GetTieredCacheRequest &&) = default ;
    GetTieredCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTieredCacheRequest() = default ;
    GetTieredCacheRequest& operator=(const GetTieredCacheRequest &) = default ;
    GetTieredCacheRequest& operator=(GetTieredCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetTieredCacheRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
