// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionCount, exceptionCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UnprotectedCount, unprotectedCount_);
      DARABONBA_PTR_TO_JSON(UsedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionCount, exceptionCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UnprotectedCount, unprotectedCount_);
      DARABONBA_PTR_FROM_JSON(UsedCount, usedCount_);
    };
    DescribeNatFirewallQuotaResponseBody() = default ;
    DescribeNatFirewallQuotaResponseBody(const DescribeNatFirewallQuotaResponseBody &) = default ;
    DescribeNatFirewallQuotaResponseBody(DescribeNatFirewallQuotaResponseBody &&) = default ;
    DescribeNatFirewallQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallQuotaResponseBody() = default ;
    DescribeNatFirewallQuotaResponseBody& operator=(const DescribeNatFirewallQuotaResponseBody &) = default ;
    DescribeNatFirewallQuotaResponseBody& operator=(DescribeNatFirewallQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionCount_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->unprotectedCount_ == nullptr && return this->usedCount_ == nullptr; };
    // exceptionCount Field Functions 
    bool hasExceptionCount() const { return this->exceptionCount_ != nullptr;};
    void deleteExceptionCount() { this->exceptionCount_ = nullptr;};
    inline int64_t exceptionCount() const { DARABONBA_PTR_GET_DEFAULT(exceptionCount_, 0L) };
    inline DescribeNatFirewallQuotaResponseBody& setExceptionCount(int64_t exceptionCount) { DARABONBA_PTR_SET_VALUE(exceptionCount_, exceptionCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeNatFirewallQuotaResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unprotectedCount Field Functions 
    bool hasUnprotectedCount() const { return this->unprotectedCount_ != nullptr;};
    void deleteUnprotectedCount() { this->unprotectedCount_ = nullptr;};
    inline int64_t unprotectedCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedCount_, 0L) };
    inline DescribeNatFirewallQuotaResponseBody& setUnprotectedCount(int64_t unprotectedCount) { DARABONBA_PTR_SET_VALUE(unprotectedCount_, unprotectedCount) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int64_t usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0L) };
    inline DescribeNatFirewallQuotaResponseBody& setUsedCount(int64_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    std::shared_ptr<int64_t> exceptionCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> unprotectedCount_ = nullptr;
    std::shared_ptr<int64_t> usedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
