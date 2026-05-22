// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCertificateQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaUsage, quotaUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteCount, siteCount_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaUsage, quotaUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteCount, siteCount_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCertificateQuotaResponseBody() = default ;
    GetCertificateQuotaResponseBody(const GetCertificateQuotaResponseBody &) = default ;
    GetCertificateQuotaResponseBody(GetCertificateQuotaResponseBody &&) = default ;
    GetCertificateQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateQuotaResponseBody() = default ;
    GetCertificateQuotaResponseBody& operator=(const GetCertificateQuotaResponseBody &) = default ;
    GetCertificateQuotaResponseBody& operator=(GetCertificateQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteUsage& obj) { 
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
        DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      };
      friend void from_json(const Darabonba::Json& j, SiteUsage& obj) { 
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
        DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      };
      SiteUsage() = default ;
      SiteUsage(const SiteUsage &) = default ;
      SiteUsage(SiteUsage &&) = default ;
      SiteUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteUsage() = default ;
      SiteUsage& operator=(const SiteUsage &) = default ;
      SiteUsage& operator=(SiteUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->siteUsage_ == nullptr; };
      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
      inline SiteUsage& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline SiteUsage& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // siteUsage Field Functions 
      bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
      void deleteSiteUsage() { this->siteUsage_ = nullptr;};
      inline int64_t getSiteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0L) };
      inline SiteUsage& setSiteUsage(int64_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


    protected:
      // Site ID.
      shared_ptr<string> siteId_ {};
      // Site name.
      shared_ptr<string> siteName_ {};
      // Site usage.
      shared_ptr<int64_t> siteUsage_ {};
    };

    virtual bool empty() const override { return this->quota_ == nullptr
        && this->quotaUsage_ == nullptr && this->requestId_ == nullptr && this->siteCount_ == nullptr && this->siteUsage_ == nullptr && this->type_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline GetCertificateQuotaResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaUsage Field Functions 
    bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
    void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
    inline int64_t getQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0L) };
    inline GetCertificateQuotaResponseBody& setQuotaUsage(int64_t quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteCount Field Functions 
    bool hasSiteCount() const { return this->siteCount_ != nullptr;};
    void deleteSiteCount() { this->siteCount_ = nullptr;};
    inline int64_t getSiteCount() const { DARABONBA_PTR_GET_DEFAULT(siteCount_, 0L) };
    inline GetCertificateQuotaResponseBody& setSiteCount(int64_t siteCount) { DARABONBA_PTR_SET_VALUE(siteCount_, siteCount) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline const vector<GetCertificateQuotaResponseBody::SiteUsage> & getSiteUsage() const { DARABONBA_PTR_GET_CONST(siteUsage_, vector<GetCertificateQuotaResponseBody::SiteUsage>) };
    inline vector<GetCertificateQuotaResponseBody::SiteUsage> getSiteUsage() { DARABONBA_PTR_GET(siteUsage_, vector<GetCertificateQuotaResponseBody::SiteUsage>) };
    inline GetCertificateQuotaResponseBody& setSiteUsage(const vector<GetCertificateQuotaResponseBody::SiteUsage> & siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };
    inline GetCertificateQuotaResponseBody& setSiteUsage(vector<GetCertificateQuotaResponseBody::SiteUsage> && siteUsage) { DARABONBA_PTR_SET_RVALUE(siteUsage_, siteUsage) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCertificateQuotaResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Free certificate quota.
    shared_ptr<int64_t> quota_ {};
    // Usage of free certificate quota.
    shared_ptr<int64_t> quotaUsage_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Number of sites.
    shared_ptr<int64_t> siteCount_ {};
    // List of site usage details.
    shared_ptr<vector<GetCertificateQuotaResponseBody::SiteUsage>> siteUsage_ {};
    // Certificate Quota type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
