// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPURGEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPURGEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetPurgeQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPurgeQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(Quota30Day, quota30Day_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(Usage30Day, usage30Day_);
    };
    friend void from_json(const Darabonba::Json& j, GetPurgeQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(Quota30Day, quota30Day_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(Usage30Day, usage30Day_);
    };
    GetPurgeQuotaResponseBody() = default ;
    GetPurgeQuotaResponseBody(const GetPurgeQuotaResponseBody &) = default ;
    GetPurgeQuotaResponseBody(GetPurgeQuotaResponseBody &&) = default ;
    GetPurgeQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPurgeQuotaResponseBody() = default ;
    GetPurgeQuotaResponseBody& operator=(const GetPurgeQuotaResponseBody &) = default ;
    GetPurgeQuotaResponseBody& operator=(GetPurgeQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quota_ == nullptr
        && this->quota30Day_ == nullptr && this->requestId_ == nullptr && this->usage_ == nullptr && this->usage30Day_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline GetPurgeQuotaResponseBody& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quota30Day Field Functions 
    bool hasQuota30Day() const { return this->quota30Day_ != nullptr;};
    void deleteQuota30Day() { this->quota30Day_ = nullptr;};
    inline string getQuota30Day() const { DARABONBA_PTR_GET_DEFAULT(quota30Day_, "") };
    inline GetPurgeQuotaResponseBody& setQuota30Day(string quota30Day) { DARABONBA_PTR_SET_VALUE(quota30Day_, quota30Day) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPurgeQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline GetPurgeQuotaResponseBody& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // usage30Day Field Functions 
    bool hasUsage30Day() const { return this->usage30Day_ != nullptr;};
    void deleteUsage30Day() { this->usage30Day_ = nullptr;};
    inline string getUsage30Day() const { DARABONBA_PTR_GET_DEFAULT(usage30Day_, "") };
    inline GetPurgeQuotaResponseBody& setUsage30Day(string usage30Day) { DARABONBA_PTR_SET_VALUE(usage30Day_, usage30Day) };


  protected:
    // The total quota.
    shared_ptr<string> quota_ {};
    // The total quota available in a 30-day period. A value of 0 indicates that this quota is not configured.
    shared_ptr<string> quota30Day_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The used quota.
    shared_ptr<string> usage_ {};
    // The quota used within the 30-day period.
    shared_ptr<string> usage30Day_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
