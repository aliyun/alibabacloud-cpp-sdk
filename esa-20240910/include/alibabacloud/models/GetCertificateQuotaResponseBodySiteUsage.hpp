// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEQUOTARESPONSEBODYSITEUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEQUOTARESPONSEBODYSITEUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCertificateQuotaResponseBodySiteUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateQuotaResponseBodySiteUsage& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateQuotaResponseBodySiteUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
    };
    GetCertificateQuotaResponseBodySiteUsage() = default ;
    GetCertificateQuotaResponseBodySiteUsage(const GetCertificateQuotaResponseBodySiteUsage &) = default ;
    GetCertificateQuotaResponseBodySiteUsage(GetCertificateQuotaResponseBodySiteUsage &&) = default ;
    GetCertificateQuotaResponseBodySiteUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateQuotaResponseBodySiteUsage() = default ;
    GetCertificateQuotaResponseBodySiteUsage& operator=(const GetCertificateQuotaResponseBodySiteUsage &) = default ;
    GetCertificateQuotaResponseBodySiteUsage& operator=(GetCertificateQuotaResponseBodySiteUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->siteId_ != nullptr
        && this->siteName_ != nullptr && this->siteUsage_ != nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline GetCertificateQuotaResponseBodySiteUsage& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetCertificateQuotaResponseBodySiteUsage& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline int64_t siteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0L) };
    inline GetCertificateQuotaResponseBodySiteUsage& setSiteUsage(int64_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


  protected:
    // Site ID.
    std::shared_ptr<string> siteId_ = nullptr;
    // Site name.
    std::shared_ptr<string> siteName_ = nullptr;
    // Site usage.
    std::shared_ptr<int64_t> siteUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
