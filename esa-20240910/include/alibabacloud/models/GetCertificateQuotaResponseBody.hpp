// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCertificateQuotaResponseBodySiteUsage.hpp>
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
    virtual bool empty() const override { return this->quota_ == nullptr
        && return this->quotaUsage_ == nullptr && return this->requestId_ == nullptr && return this->siteCount_ == nullptr && return this->siteUsage_ == nullptr && return this->type_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline GetCertificateQuotaResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaUsage Field Functions 
    bool hasQuotaUsage() const { return this->quotaUsage_ != nullptr;};
    void deleteQuotaUsage() { this->quotaUsage_ = nullptr;};
    inline int64_t quotaUsage() const { DARABONBA_PTR_GET_DEFAULT(quotaUsage_, 0L) };
    inline GetCertificateQuotaResponseBody& setQuotaUsage(int64_t quotaUsage) { DARABONBA_PTR_SET_VALUE(quotaUsage_, quotaUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteCount Field Functions 
    bool hasSiteCount() const { return this->siteCount_ != nullptr;};
    void deleteSiteCount() { this->siteCount_ = nullptr;};
    inline int64_t siteCount() const { DARABONBA_PTR_GET_DEFAULT(siteCount_, 0L) };
    inline GetCertificateQuotaResponseBody& setSiteCount(int64_t siteCount) { DARABONBA_PTR_SET_VALUE(siteCount_, siteCount) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline const vector<GetCertificateQuotaResponseBodySiteUsage> & siteUsage() const { DARABONBA_PTR_GET_CONST(siteUsage_, vector<GetCertificateQuotaResponseBodySiteUsage>) };
    inline vector<GetCertificateQuotaResponseBodySiteUsage> siteUsage() { DARABONBA_PTR_GET(siteUsage_, vector<GetCertificateQuotaResponseBodySiteUsage>) };
    inline GetCertificateQuotaResponseBody& setSiteUsage(const vector<GetCertificateQuotaResponseBodySiteUsage> & siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };
    inline GetCertificateQuotaResponseBody& setSiteUsage(vector<GetCertificateQuotaResponseBodySiteUsage> && siteUsage) { DARABONBA_PTR_SET_RVALUE(siteUsage_, siteUsage) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCertificateQuotaResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Free certificate quota.
    std::shared_ptr<int64_t> quota_ = nullptr;
    // Usage of free certificate quota.
    std::shared_ptr<int64_t> quotaUsage_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Number of sites.
    std::shared_ptr<int64_t> siteCount_ = nullptr;
    // List of site usage details.
    std::shared_ptr<vector<GetCertificateQuotaResponseBodySiteUsage>> siteUsage_ = nullptr;
    // Certificate Quota type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
