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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetPurgeQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
    virtual bool empty() const override { this->quota_ != nullptr
        && this->requestId_ != nullptr && this->usage_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline GetPurgeQuotaResponseBody& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPurgeQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline GetPurgeQuotaResponseBody& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The total quota.
    std::shared_ptr<string> quota_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The quota usage.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
