// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSLACOUPONAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSLACOUPONAPPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SubmitSlaCouponApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSlaCouponApplyResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SumCoupon, sumCoupon_);
      DARABONBA_PTR_TO_JSON(ValidEndTime, validEndTime_);
      DARABONBA_PTR_TO_JSON(ValidStartTime, validStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSlaCouponApplyResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SumCoupon, sumCoupon_);
      DARABONBA_PTR_FROM_JSON(ValidEndTime, validEndTime_);
      DARABONBA_PTR_FROM_JSON(ValidStartTime, validStartTime_);
    };
    SubmitSlaCouponApplyResponseBody() = default ;
    SubmitSlaCouponApplyResponseBody(const SubmitSlaCouponApplyResponseBody &) = default ;
    SubmitSlaCouponApplyResponseBody(SubmitSlaCouponApplyResponseBody &&) = default ;
    SubmitSlaCouponApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSlaCouponApplyResponseBody() = default ;
    SubmitSlaCouponApplyResponseBody& operator=(const SubmitSlaCouponApplyResponseBody &) = default ;
    SubmitSlaCouponApplyResponseBody& operator=(SubmitSlaCouponApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadata_ == nullptr
        && this->requestId_ == nullptr && this->sumCoupon_ == nullptr && this->validEndTime_ == nullptr && this->validStartTime_ == nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline SubmitSlaCouponApplyResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline SubmitSlaCouponApplyResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSlaCouponApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sumCoupon Field Functions 
    bool hasSumCoupon() const { return this->sumCoupon_ != nullptr;};
    void deleteSumCoupon() { this->sumCoupon_ = nullptr;};
    inline double getSumCoupon() const { DARABONBA_PTR_GET_DEFAULT(sumCoupon_, 0.0) };
    inline SubmitSlaCouponApplyResponseBody& setSumCoupon(double sumCoupon) { DARABONBA_PTR_SET_VALUE(sumCoupon_, sumCoupon) };


    // validEndTime Field Functions 
    bool hasValidEndTime() const { return this->validEndTime_ != nullptr;};
    void deleteValidEndTime() { this->validEndTime_ = nullptr;};
    inline string getValidEndTime() const { DARABONBA_PTR_GET_DEFAULT(validEndTime_, "") };
    inline SubmitSlaCouponApplyResponseBody& setValidEndTime(string validEndTime) { DARABONBA_PTR_SET_VALUE(validEndTime_, validEndTime) };


    // validStartTime Field Functions 
    bool hasValidStartTime() const { return this->validStartTime_ != nullptr;};
    void deleteValidStartTime() { this->validStartTime_ = nullptr;};
    inline string getValidStartTime() const { DARABONBA_PTR_GET_DEFAULT(validStartTime_, "") };
    inline SubmitSlaCouponApplyResponseBody& setValidStartTime(string validStartTime) { DARABONBA_PTR_SET_VALUE(validStartTime_, validStartTime) };


  protected:
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<double> sumCoupon_ {};
    shared_ptr<string> validEndTime_ {};
    shared_ptr<string> validStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
