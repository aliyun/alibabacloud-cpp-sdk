// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCERTIFICATEEXPIRECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCERTIFICATEEXPIRECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserCertificateExpireCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserCertificateExpireCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireWithin30DaysCount, expireWithin30DaysCount_);
      DARABONBA_PTR_TO_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserCertificateExpireCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireWithin30DaysCount, expireWithin30DaysCount_);
      DARABONBA_PTR_FROM_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserCertificateExpireCountResponseBody() = default ;
    DescribeUserCertificateExpireCountResponseBody(const DescribeUserCertificateExpireCountResponseBody &) = default ;
    DescribeUserCertificateExpireCountResponseBody(DescribeUserCertificateExpireCountResponseBody &&) = default ;
    DescribeUserCertificateExpireCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserCertificateExpireCountResponseBody() = default ;
    DescribeUserCertificateExpireCountResponseBody& operator=(const DescribeUserCertificateExpireCountResponseBody &) = default ;
    DescribeUserCertificateExpireCountResponseBody& operator=(DescribeUserCertificateExpireCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireWithin30DaysCount_ == nullptr
        && return this->expiredCount_ == nullptr && return this->requestId_ == nullptr; };
    // expireWithin30DaysCount Field Functions 
    bool hasExpireWithin30DaysCount() const { return this->expireWithin30DaysCount_ != nullptr;};
    void deleteExpireWithin30DaysCount() { this->expireWithin30DaysCount_ = nullptr;};
    inline int32_t expireWithin30DaysCount() const { DARABONBA_PTR_GET_DEFAULT(expireWithin30DaysCount_, 0) };
    inline DescribeUserCertificateExpireCountResponseBody& setExpireWithin30DaysCount(int32_t expireWithin30DaysCount) { DARABONBA_PTR_SET_VALUE(expireWithin30DaysCount_, expireWithin30DaysCount) };


    // expiredCount Field Functions 
    bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
    void deleteExpiredCount() { this->expiredCount_ = nullptr;};
    inline int32_t expiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
    inline DescribeUserCertificateExpireCountResponseBody& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserCertificateExpireCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of domain names whose SSL certificates are about to expires within 30 days.
    std::shared_ptr<int32_t> expireWithin30DaysCount_ = nullptr;
    // The number of domain names whose SSL certificates have already expired.
    std::shared_ptr<int32_t> expiredCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
