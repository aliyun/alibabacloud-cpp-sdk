// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEREMAINQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEREMAINQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheRemainQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheRemainQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TelecomRemainQuota, telecomRemainQuota_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheRemainQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TelecomRemainQuota, telecomRemainQuota_);
    };
    DescribeIspFlushCacheRemainQuotaResponseBody() = default ;
    DescribeIspFlushCacheRemainQuotaResponseBody(const DescribeIspFlushCacheRemainQuotaResponseBody &) = default ;
    DescribeIspFlushCacheRemainQuotaResponseBody(DescribeIspFlushCacheRemainQuotaResponseBody &&) = default ;
    DescribeIspFlushCacheRemainQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheRemainQuotaResponseBody() = default ;
    DescribeIspFlushCacheRemainQuotaResponseBody& operator=(const DescribeIspFlushCacheRemainQuotaResponseBody &) = default ;
    DescribeIspFlushCacheRemainQuotaResponseBody& operator=(DescribeIspFlushCacheRemainQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->telecomRemainQuota_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIspFlushCacheRemainQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // telecomRemainQuota Field Functions 
    bool hasTelecomRemainQuota() const { return this->telecomRemainQuota_ != nullptr;};
    void deleteTelecomRemainQuota() { this->telecomRemainQuota_ = nullptr;};
    inline int32_t telecomRemainQuota() const { DARABONBA_PTR_GET_DEFAULT(telecomRemainQuota_, 0) };
    inline DescribeIspFlushCacheRemainQuotaResponseBody& setTelecomRemainQuota(int32_t telecomRemainQuota) { DARABONBA_PTR_SET_VALUE(telecomRemainQuota_, telecomRemainQuota) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> telecomRemainQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
