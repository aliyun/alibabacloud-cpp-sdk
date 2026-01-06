// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTWAREHOUSEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTWAREHOUSEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCertWarehouseQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertWarehouseQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppTotalQuota, appTotalQuota_);
      DARABONBA_PTR_TO_JSON(AppUseCount, appUseCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(UseCount, useCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertWarehouseQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppTotalQuota, appTotalQuota_);
      DARABONBA_PTR_FROM_JSON(AppUseCount, appUseCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(UseCount, useCount_);
    };
    GetCertWarehouseQuotaResponseBody() = default ;
    GetCertWarehouseQuotaResponseBody(const GetCertWarehouseQuotaResponseBody &) = default ;
    GetCertWarehouseQuotaResponseBody(GetCertWarehouseQuotaResponseBody &&) = default ;
    GetCertWarehouseQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertWarehouseQuotaResponseBody() = default ;
    GetCertWarehouseQuotaResponseBody& operator=(const GetCertWarehouseQuotaResponseBody &) = default ;
    GetCertWarehouseQuotaResponseBody& operator=(GetCertWarehouseQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appTotalQuota_ == nullptr
        && this->appUseCount_ == nullptr && this->requestId_ == nullptr && this->totalQuota_ == nullptr && this->useCount_ == nullptr; };
    // appTotalQuota Field Functions 
    bool hasAppTotalQuota() const { return this->appTotalQuota_ != nullptr;};
    void deleteAppTotalQuota() { this->appTotalQuota_ = nullptr;};
    inline int64_t getAppTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(appTotalQuota_, 0L) };
    inline GetCertWarehouseQuotaResponseBody& setAppTotalQuota(int64_t appTotalQuota) { DARABONBA_PTR_SET_VALUE(appTotalQuota_, appTotalQuota) };


    // appUseCount Field Functions 
    bool hasAppUseCount() const { return this->appUseCount_ != nullptr;};
    void deleteAppUseCount() { this->appUseCount_ = nullptr;};
    inline int64_t getAppUseCount() const { DARABONBA_PTR_GET_DEFAULT(appUseCount_, 0L) };
    inline GetCertWarehouseQuotaResponseBody& setAppUseCount(int64_t appUseCount) { DARABONBA_PTR_SET_VALUE(appUseCount_, appUseCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertWarehouseQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
    inline GetCertWarehouseQuotaResponseBody& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // useCount Field Functions 
    bool hasUseCount() const { return this->useCount_ != nullptr;};
    void deleteUseCount() { this->useCount_ = nullptr;};
    inline int64_t getUseCount() const { DARABONBA_PTR_GET_DEFAULT(useCount_, 0L) };
    inline GetCertWarehouseQuotaResponseBody& setUseCount(int64_t useCount) { DARABONBA_PTR_SET_VALUE(useCount_, useCount) };


  protected:
    shared_ptr<int64_t> appTotalQuota_ {};
    shared_ptr<int64_t> appUseCount_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total quota for certificate repositories, including the free quota and purchased quota.
    shared_ptr<int64_t> totalQuota_ {};
    // The used quota.
    shared_ptr<int64_t> useCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
