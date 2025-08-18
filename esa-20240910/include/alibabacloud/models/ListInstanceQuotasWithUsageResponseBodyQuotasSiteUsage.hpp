// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODYQUOTASSITEUSAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODYQUOTASSITEUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
    };
    ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage() = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage(const ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage &) = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage(ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage &&) = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage() = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& operator=(const ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage &) = default ;
    ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& operator=(ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->siteId_ != nullptr
        && this->siteName_ != nullptr && this->siteUsage_ != nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline string siteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, "") };
    inline ListInstanceQuotasWithUsageResponseBodyQuotasSiteUsage& setSiteUsage(string siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


  protected:
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The quota usage of the website.
    std::shared_ptr<string> siteUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
