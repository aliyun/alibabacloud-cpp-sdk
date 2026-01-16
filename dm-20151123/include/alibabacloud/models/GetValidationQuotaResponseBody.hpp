// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVALIDATIONQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVALIDATIONQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetValidationQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetValidationQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, GetValidationQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
    };
    GetValidationQuotaResponseBody() = default ;
    GetValidationQuotaResponseBody(const GetValidationQuotaResponseBody &) = default ;
    GetValidationQuotaResponseBody(GetValidationQuotaResponseBody &&) = default ;
    GetValidationQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetValidationQuotaResponseBody() = default ;
    GetValidationQuotaResponseBody& operator=(const GetValidationQuotaResponseBody &) = default ;
    GetValidationQuotaResponseBody& operator=(GetValidationQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalQuota_ == nullptr && this->usedQuota_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetValidationQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int32_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0) };
    inline GetValidationQuotaResponseBody& setTotalQuota(int32_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int32_t getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0) };
    inline GetValidationQuotaResponseBody& setUsedQuota(int32_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalQuota_ {};
    shared_ptr<int32_t> usedQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
