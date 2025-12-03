// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMARKETREMAINSQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMARKETREMAINSQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeMarketRemainsQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMarketRemainsQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemainsQuota, remainsQuota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMarketRemainsQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemainsQuota, remainsQuota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMarketRemainsQuotaResponseBody() = default ;
    DescribeMarketRemainsQuotaResponseBody(const DescribeMarketRemainsQuotaResponseBody &) = default ;
    DescribeMarketRemainsQuotaResponseBody(DescribeMarketRemainsQuotaResponseBody &&) = default ;
    DescribeMarketRemainsQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMarketRemainsQuotaResponseBody() = default ;
    DescribeMarketRemainsQuotaResponseBody& operator=(const DescribeMarketRemainsQuotaResponseBody &) = default ;
    DescribeMarketRemainsQuotaResponseBody& operator=(DescribeMarketRemainsQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remainsQuota_ == nullptr
        && return this->requestId_ == nullptr; };
    // remainsQuota Field Functions 
    bool hasRemainsQuota() const { return this->remainsQuota_ != nullptr;};
    void deleteRemainsQuota() { this->remainsQuota_ = nullptr;};
    inline int64_t remainsQuota() const { DARABONBA_PTR_GET_DEFAULT(remainsQuota_, 0L) };
    inline DescribeMarketRemainsQuotaResponseBody& setRemainsQuota(int64_t remainsQuota) { DARABONBA_PTR_SET_VALUE(remainsQuota_, remainsQuota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMarketRemainsQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The remaining quota.
    std::shared_ptr<int64_t> remainsQuota_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
