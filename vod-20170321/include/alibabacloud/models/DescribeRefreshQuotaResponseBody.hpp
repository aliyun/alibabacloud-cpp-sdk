// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRefreshQuotaResponseBodyRefreshCacheQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeRefreshQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshCacheQuota, refreshCacheQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshCacheQuota, refreshCacheQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRefreshQuotaResponseBody() = default ;
    DescribeRefreshQuotaResponseBody(const DescribeRefreshQuotaResponseBody &) = default ;
    DescribeRefreshQuotaResponseBody(DescribeRefreshQuotaResponseBody &&) = default ;
    DescribeRefreshQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshQuotaResponseBody() = default ;
    DescribeRefreshQuotaResponseBody& operator=(const DescribeRefreshQuotaResponseBody &) = default ;
    DescribeRefreshQuotaResponseBody& operator=(DescribeRefreshQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->refreshCacheQuota_ != nullptr
        && this->requestId_ != nullptr; };
    // refreshCacheQuota Field Functions 
    bool hasRefreshCacheQuota() const { return this->refreshCacheQuota_ != nullptr;};
    void deleteRefreshCacheQuota() { this->refreshCacheQuota_ = nullptr;};
    inline const DescribeRefreshQuotaResponseBodyRefreshCacheQuota & refreshCacheQuota() const { DARABONBA_PTR_GET_CONST(refreshCacheQuota_, DescribeRefreshQuotaResponseBodyRefreshCacheQuota) };
    inline DescribeRefreshQuotaResponseBodyRefreshCacheQuota refreshCacheQuota() { DARABONBA_PTR_GET(refreshCacheQuota_, DescribeRefreshQuotaResponseBodyRefreshCacheQuota) };
    inline DescribeRefreshQuotaResponseBody& setRefreshCacheQuota(const DescribeRefreshQuotaResponseBodyRefreshCacheQuota & refreshCacheQuota) { DARABONBA_PTR_SET_VALUE(refreshCacheQuota_, refreshCacheQuota) };
    inline DescribeRefreshQuotaResponseBody& setRefreshCacheQuota(DescribeRefreshQuotaResponseBodyRefreshCacheQuota && refreshCacheQuota) { DARABONBA_PTR_SET_RVALUE(refreshCacheQuota_, refreshCacheQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRefreshQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeRefreshQuotaResponseBodyRefreshCacheQuota> refreshCacheQuota_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
