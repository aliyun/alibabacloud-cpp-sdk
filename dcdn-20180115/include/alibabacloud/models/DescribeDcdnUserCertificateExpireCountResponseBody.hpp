// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCERTIFICATEEXPIRECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCERTIFICATEEXPIRECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserCertificateExpireCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserCertificateExpireCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireWithin30DaysCount, expireWithin30DaysCount_);
      DARABONBA_PTR_TO_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserCertificateExpireCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireWithin30DaysCount, expireWithin30DaysCount_);
      DARABONBA_PTR_FROM_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserCertificateExpireCountResponseBody() = default ;
    DescribeDcdnUserCertificateExpireCountResponseBody(const DescribeDcdnUserCertificateExpireCountResponseBody &) = default ;
    DescribeDcdnUserCertificateExpireCountResponseBody(DescribeDcdnUserCertificateExpireCountResponseBody &&) = default ;
    DescribeDcdnUserCertificateExpireCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserCertificateExpireCountResponseBody() = default ;
    DescribeDcdnUserCertificateExpireCountResponseBody& operator=(const DescribeDcdnUserCertificateExpireCountResponseBody &) = default ;
    DescribeDcdnUserCertificateExpireCountResponseBody& operator=(DescribeDcdnUserCertificateExpireCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireWithin30DaysCount_ == nullptr
        && this->expiredCount_ == nullptr && this->requestId_ == nullptr; };
    // expireWithin30DaysCount Field Functions 
    bool hasExpireWithin30DaysCount() const { return this->expireWithin30DaysCount_ != nullptr;};
    void deleteExpireWithin30DaysCount() { this->expireWithin30DaysCount_ = nullptr;};
    inline int32_t getExpireWithin30DaysCount() const { DARABONBA_PTR_GET_DEFAULT(expireWithin30DaysCount_, 0) };
    inline DescribeDcdnUserCertificateExpireCountResponseBody& setExpireWithin30DaysCount(int32_t expireWithin30DaysCount) { DARABONBA_PTR_SET_VALUE(expireWithin30DaysCount_, expireWithin30DaysCount) };


    // expiredCount Field Functions 
    bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
    void deleteExpiredCount() { this->expiredCount_ = nullptr;};
    inline int32_t getExpiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
    inline DescribeDcdnUserCertificateExpireCountResponseBody& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserCertificateExpireCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of domain names whose SSL certificates are about to expire within 30 days.
    shared_ptr<int32_t> expireWithin30DaysCount_ {};
    // The number of domain names whose SSL certificates have already expired.
    shared_ptr<int32_t> expiredCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
