// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetServiceQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceQuota, serviceQuota_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceQuota, serviceQuota_);
    };
    GetServiceQuotaResponseBody() = default ;
    GetServiceQuotaResponseBody(const GetServiceQuotaResponseBody &) = default ;
    GetServiceQuotaResponseBody(GetServiceQuotaResponseBody &&) = default ;
    GetServiceQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceQuotaResponseBody() = default ;
    GetServiceQuotaResponseBody& operator=(const GetServiceQuotaResponseBody &) = default ;
    GetServiceQuotaResponseBody& operator=(GetServiceQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceQuota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceQuota& obj) { 
        DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_TO_JSON(UsedQuotaValue, usedQuotaValue_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceQuota& obj) { 
        DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_FROM_JSON(UsedQuotaValue, usedQuotaValue_);
      };
      ServiceQuota() = default ;
      ServiceQuota(const ServiceQuota &) = default ;
      ServiceQuota(ServiceQuota &&) = default ;
      ServiceQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceQuota() = default ;
      ServiceQuota& operator=(const ServiceQuota &) = default ;
      ServiceQuota& operator=(ServiceQuota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->quotaType_ == nullptr
        && this->quotaValue_ == nullptr && this->usedQuotaValue_ == nullptr; };
      // quotaType Field Functions 
      bool hasQuotaType() const { return this->quotaType_ != nullptr;};
      void deleteQuotaType() { this->quotaType_ = nullptr;};
      inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
      inline ServiceQuota& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline int64_t getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, 0L) };
      inline ServiceQuota& setQuotaValue(int64_t quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


      // usedQuotaValue Field Functions 
      bool hasUsedQuotaValue() const { return this->usedQuotaValue_ != nullptr;};
      void deleteUsedQuotaValue() { this->usedQuotaValue_ = nullptr;};
      inline int64_t getUsedQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(usedQuotaValue_, 0L) };
      inline ServiceQuota& setUsedQuotaValue(int64_t usedQuotaValue) { DARABONBA_PTR_SET_VALUE(usedQuotaValue_, usedQuotaValue) };


    protected:
      // Quota 配额的唯一标识。
      shared_ptr<string> quotaType_ {};
      // Quota 配额的值。
      shared_ptr<int64_t> quotaValue_ {};
      // Quota 配额的当前用量。
      shared_ptr<int64_t> usedQuotaValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceQuota_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceQuota Field Functions 
    bool hasServiceQuota() const { return this->serviceQuota_ != nullptr;};
    void deleteServiceQuota() { this->serviceQuota_ = nullptr;};
    inline const GetServiceQuotaResponseBody::ServiceQuota & getServiceQuota() const { DARABONBA_PTR_GET_CONST(serviceQuota_, GetServiceQuotaResponseBody::ServiceQuota) };
    inline GetServiceQuotaResponseBody::ServiceQuota getServiceQuota() { DARABONBA_PTR_GET(serviceQuota_, GetServiceQuotaResponseBody::ServiceQuota) };
    inline GetServiceQuotaResponseBody& setServiceQuota(const GetServiceQuotaResponseBody::ServiceQuota & serviceQuota) { DARABONBA_PTR_SET_VALUE(serviceQuota_, serviceQuota) };
    inline GetServiceQuotaResponseBody& setServiceQuota(GetServiceQuotaResponseBody::ServiceQuota && serviceQuota) { DARABONBA_PTR_SET_RVALUE(serviceQuota_, serviceQuota) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetServiceQuotaResponseBody::ServiceQuota> serviceQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
