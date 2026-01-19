// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITELOGDELIVERYQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITELOGDELIVERYQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteLogDeliveryQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteLogDeliveryQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(FreeQuota, freeQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteLogDeliveryQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(FreeQuota, freeQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetSiteLogDeliveryQuotaResponseBody() = default ;
    GetSiteLogDeliveryQuotaResponseBody(const GetSiteLogDeliveryQuotaResponseBody &) = default ;
    GetSiteLogDeliveryQuotaResponseBody(GetSiteLogDeliveryQuotaResponseBody &&) = default ;
    GetSiteLogDeliveryQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteLogDeliveryQuotaResponseBody() = default ;
    GetSiteLogDeliveryQuotaResponseBody& operator=(const GetSiteLogDeliveryQuotaResponseBody &) = default ;
    GetSiteLogDeliveryQuotaResponseBody& operator=(GetSiteLogDeliveryQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->freeQuota_ == nullptr && this->requestId_ == nullptr && this->siteId_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetSiteLogDeliveryQuotaResponseBody& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // freeQuota Field Functions 
    bool hasFreeQuota() const { return this->freeQuota_ != nullptr;};
    void deleteFreeQuota() { this->freeQuota_ = nullptr;};
    inline int64_t getFreeQuota() const { DARABONBA_PTR_GET_DEFAULT(freeQuota_, 0L) };
    inline GetSiteLogDeliveryQuotaResponseBody& setFreeQuota(int64_t freeQuota) { DARABONBA_PTR_SET_VALUE(freeQuota_, freeQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteLogDeliveryQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteLogDeliveryQuotaResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The log category. Valid values:
    // 
    // 1.  dcdn_log_access_l1 (default): access logs.
    // 2.  dcdn_log_er: Edge Routine logs.
    // 3.  dcdn_log_waf: firewall logs.
    // 4.  dcdn_log_ipa: TCP/UDP proxy logs.
    shared_ptr<string> businessType_ {};
    // The remaining quota.
    shared_ptr<int64_t> freeQuota_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The website ID.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
