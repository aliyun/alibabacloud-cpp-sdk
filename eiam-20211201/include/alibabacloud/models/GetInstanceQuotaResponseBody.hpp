// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceQuotaResponseBody() = default ;
    GetInstanceQuotaResponseBody(const GetInstanceQuotaResponseBody &) = default ;
    GetInstanceQuotaResponseBody(GetInstanceQuotaResponseBody &&) = default ;
    GetInstanceQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceQuotaResponseBody() = default ;
    GetInstanceQuotaResponseBody& operator=(const GetInstanceQuotaResponseBody &) = default ;
    GetInstanceQuotaResponseBody& operator=(GetInstanceQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(QuotaKey, quotaKey_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(QuotaKey, quotaKey_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->quotaKey_ == nullptr
        && this->quotaValue_ == nullptr; };
      // quotaKey Field Functions 
      bool hasQuotaKey() const { return this->quotaKey_ != nullptr;};
      void deleteQuotaKey() { this->quotaKey_ = nullptr;};
      inline string getQuotaKey() const { DARABONBA_PTR_GET_DEFAULT(quotaKey_, "") };
      inline Quota& setQuotaKey(string quotaKey) { DARABONBA_PTR_SET_VALUE(quotaKey_, quotaKey) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline int32_t getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, 0) };
      inline Quota& setQuotaValue(int32_t quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    protected:
      // Quota 配额的Key，同请求参数
      shared_ptr<string> quotaKey_ {};
      // Quota 配额的值。
      shared_ptr<int32_t> quotaValue_ {};
    };

    virtual bool empty() const override { return this->quota_ == nullptr
        && this->requestId_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const GetInstanceQuotaResponseBody::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, GetInstanceQuotaResponseBody::Quota) };
    inline GetInstanceQuotaResponseBody::Quota getQuota() { DARABONBA_PTR_GET(quota_, GetInstanceQuotaResponseBody::Quota) };
    inline GetInstanceQuotaResponseBody& setQuota(const GetInstanceQuotaResponseBody::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline GetInstanceQuotaResponseBody& setQuota(GetInstanceQuotaResponseBody::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetInstanceQuotaResponseBody::Quota> quota_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
