// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLOGDELIVERYQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLOGDELIVERYQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserLogDeliveryQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserLogDeliveryQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(FreeQuota, freeQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserLogDeliveryQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(FreeQuota, freeQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserLogDeliveryQuotaResponseBody() = default ;
    GetUserLogDeliveryQuotaResponseBody(const GetUserLogDeliveryQuotaResponseBody &) = default ;
    GetUserLogDeliveryQuotaResponseBody(GetUserLogDeliveryQuotaResponseBody &&) = default ;
    GetUserLogDeliveryQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserLogDeliveryQuotaResponseBody() = default ;
    GetUserLogDeliveryQuotaResponseBody& operator=(const GetUserLogDeliveryQuotaResponseBody &) = default ;
    GetUserLogDeliveryQuotaResponseBody& operator=(GetUserLogDeliveryQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->freeQuota_ == nullptr && return this->requestId_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetUserLogDeliveryQuotaResponseBody& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // freeQuota Field Functions 
    bool hasFreeQuota() const { return this->freeQuota_ != nullptr;};
    void deleteFreeQuota() { this->freeQuota_ = nullptr;};
    inline int64_t freeQuota() const { DARABONBA_PTR_GET_DEFAULT(freeQuota_, 0L) };
    inline GetUserLogDeliveryQuotaResponseBody& setFreeQuota(int64_t freeQuota) { DARABONBA_PTR_SET_VALUE(freeQuota_, freeQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserLogDeliveryQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The log category. Valid values:
    // 
    // *   dcdn_log_access_l1 (default): access logs.
    // *   dcdn_log_er: Edge Routine logs.
    // *   dcdn_log_waf: firewall logs.
    // *   dcdn_log_ipa: TCP/UDP proxy logs.
    std::shared_ptr<string> businessType_ = nullptr;
    // The remaining quota.
    std::shared_ptr<int64_t> freeQuota_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
