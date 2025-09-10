// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProductQuotaResponseBodyQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProductQuotaResponseBody() = default ;
    GetProductQuotaResponseBody(const GetProductQuotaResponseBody &) = default ;
    GetProductQuotaResponseBody(GetProductQuotaResponseBody &&) = default ;
    GetProductQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaResponseBody() = default ;
    GetProductQuotaResponseBody& operator=(const GetProductQuotaResponseBody &) = default ;
    GetProductQuotaResponseBody& operator=(GetProductQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quota_ != nullptr
        && this->requestId_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const GetProductQuotaResponseBodyQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, GetProductQuotaResponseBodyQuota) };
    inline GetProductQuotaResponseBodyQuota quota() { DARABONBA_PTR_GET(quota_, GetProductQuotaResponseBodyQuota) };
    inline GetProductQuotaResponseBody& setQuota(const GetProductQuotaResponseBodyQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline GetProductQuotaResponseBody& setQuota(GetProductQuotaResponseBodyQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota.
    std::shared_ptr<GetProductQuotaResponseBodyQuota> quota_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
