// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODYINSTANCEINFOSITES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESRESPONSEBODYINSTANCEINFOSITES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRatePlanInstancesResponseBodyInstanceInfoSites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRatePlanInstancesResponseBodyInstanceInfoSites& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(SiteStatus, siteStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRatePlanInstancesResponseBodyInstanceInfoSites& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(SiteStatus, siteStatus_);
    };
    ListUserRatePlanInstancesResponseBodyInstanceInfoSites() = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfoSites(const ListUserRatePlanInstancesResponseBodyInstanceInfoSites &) = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfoSites(ListUserRatePlanInstancesResponseBodyInstanceInfoSites &&) = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfoSites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRatePlanInstancesResponseBodyInstanceInfoSites() = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfoSites& operator=(const ListUserRatePlanInstancesResponseBodyInstanceInfoSites &) = default ;
    ListUserRatePlanInstancesResponseBodyInstanceInfoSites& operator=(ListUserRatePlanInstancesResponseBodyInstanceInfoSites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && return this->siteName_ == nullptr && return this->siteStatus_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfoSites& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfoSites& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // siteStatus Field Functions 
    bool hasSiteStatus() const { return this->siteStatus_ != nullptr;};
    void deleteSiteStatus() { this->siteStatus_ = nullptr;};
    inline string siteStatus() const { DARABONBA_PTR_GET_DEFAULT(siteStatus_, "") };
    inline ListUserRatePlanInstancesResponseBodyInstanceInfoSites& setSiteStatus(string siteStatus) { DARABONBA_PTR_SET_VALUE(siteStatus_, siteStatus) };


  protected:
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The website status. Valid values:
    // 
    // *   pending: The website is to be configured.
    // *   active: The website is active.
    // *   offline: The website is suspended.
    // *   moved: The website has been added and verified by another Alibaba Cloud account.
    std::shared_ptr<string> siteStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
