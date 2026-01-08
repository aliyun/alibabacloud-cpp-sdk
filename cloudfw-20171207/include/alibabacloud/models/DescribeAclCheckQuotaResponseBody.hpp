// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclCheckQuotaResponseBody() = default ;
    DescribeAclCheckQuotaResponseBody(const DescribeAclCheckQuotaResponseBody &) = default ;
    DescribeAclCheckQuotaResponseBody(DescribeAclCheckQuotaResponseBody &&) = default ;
    DescribeAclCheckQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckQuotaResponseBody() = default ;
    DescribeAclCheckQuotaResponseBody& operator=(const DescribeAclCheckQuotaResponseBody &) = default ;
    DescribeAclCheckQuotaResponseBody& operator=(DescribeAclCheckQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableQuota, availableQuota_);
        DARABONBA_PTR_TO_JSON(ConsumedQuota, consumedQuota_);
        DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableQuota, availableQuota_);
        DARABONBA_PTR_FROM_JSON(ConsumedQuota, consumedQuota_);
        DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      virtual bool empty() const override { return this->availableQuota_ == nullptr
        && this->consumedQuota_ == nullptr && this->totalQuota_ == nullptr && this->updateTime_ == nullptr; };
      // availableQuota Field Functions 
      bool hasAvailableQuota() const { return this->availableQuota_ != nullptr;};
      void deleteAvailableQuota() { this->availableQuota_ = nullptr;};
      inline int64_t getAvailableQuota() const { DARABONBA_PTR_GET_DEFAULT(availableQuota_, 0L) };
      inline Quota& setAvailableQuota(int64_t availableQuota) { DARABONBA_PTR_SET_VALUE(availableQuota_, availableQuota) };


      // consumedQuota Field Functions 
      bool hasConsumedQuota() const { return this->consumedQuota_ != nullptr;};
      void deleteConsumedQuota() { this->consumedQuota_ = nullptr;};
      inline int64_t getConsumedQuota() const { DARABONBA_PTR_GET_DEFAULT(consumedQuota_, 0L) };
      inline Quota& setConsumedQuota(int64_t consumedQuota) { DARABONBA_PTR_SET_VALUE(consumedQuota_, consumedQuota) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
      inline Quota& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Quota& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> availableQuota_ {};
      shared_ptr<int64_t> consumedQuota_ {};
      shared_ptr<int64_t> totalQuota_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->quota_ == nullptr
        && this->requestId_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const DescribeAclCheckQuotaResponseBody::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, DescribeAclCheckQuotaResponseBody::Quota) };
    inline DescribeAclCheckQuotaResponseBody::Quota getQuota() { DARABONBA_PTR_GET(quota_, DescribeAclCheckQuotaResponseBody::Quota) };
    inline DescribeAclCheckQuotaResponseBody& setQuota(const DescribeAclCheckQuotaResponseBody::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline DescribeAclCheckQuotaResponseBody& setQuota(DescribeAclCheckQuotaResponseBody::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclCheckQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAclCheckQuotaResponseBody::Quota> quota_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
