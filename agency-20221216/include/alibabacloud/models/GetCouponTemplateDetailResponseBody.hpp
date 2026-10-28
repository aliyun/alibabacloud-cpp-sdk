// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOUPONTEMPLATEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOUPONTEMPLATEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCouponTemplateDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCouponTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCouponTemplateDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCouponTemplateDetailResponseBody() = default ;
    GetCouponTemplateDetailResponseBody(const GetCouponTemplateDetailResponseBody &) = default ;
    GetCouponTemplateDetailResponseBody(GetCouponTemplateDetailResponseBody &&) = default ;
    GetCouponTemplateDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCouponTemplateDetailResponseBody() = default ;
    GetCouponTemplateDetailResponseBody& operator=(const GetCouponTemplateDetailResponseBody &) = default ;
    GetCouponTemplateDetailResponseBody& operator=(GetCouponTemplateDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
        DARABONBA_PTR_TO_JSON(CostBearer, costBearer_);
        DARABONBA_PTR_TO_JSON(CouponDescription, couponDescription_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Denomination, denomination_);
        DARABONBA_PTR_TO_JSON(LimitPerPerson, limitPerPerson_);
        DARABONBA_PTR_TO_JSON(PurchaseType, purchaseType_);
        DARABONBA_PTR_TO_JSON(ReasonForApplication, reasonForApplication_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
        DARABONBA_PTR_TO_JSON(ValidUntilType, validUntilType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
        DARABONBA_PTR_FROM_JSON(CostBearer, costBearer_);
        DARABONBA_PTR_FROM_JSON(CouponDescription, couponDescription_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Denomination, denomination_);
        DARABONBA_PTR_FROM_JSON(LimitPerPerson, limitPerPerson_);
        DARABONBA_PTR_FROM_JSON(PurchaseType, purchaseType_);
        DARABONBA_PTR_FROM_JSON(ReasonForApplication, reasonForApplication_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
        DARABONBA_PTR_FROM_JSON(ValidUntilType, validUntilType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->costBearer_ == nullptr && this->couponDescription_ == nullptr && this->createdTime_ == nullptr && this->denomination_ == nullptr && this->limitPerPerson_ == nullptr
        && this->purchaseType_ == nullptr && this->reasonForApplication_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->validUntil_ == nullptr && this->validUntilType_ == nullptr; };
      // applicableProducts Field Functions 
      bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
      void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
      inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
      inline Data& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


      // costBearer Field Functions 
      bool hasCostBearer() const { return this->costBearer_ != nullptr;};
      void deleteCostBearer() { this->costBearer_ = nullptr;};
      inline string getCostBearer() const { DARABONBA_PTR_GET_DEFAULT(costBearer_, "") };
      inline Data& setCostBearer(string costBearer) { DARABONBA_PTR_SET_VALUE(costBearer_, costBearer) };


      // couponDescription Field Functions 
      bool hasCouponDescription() const { return this->couponDescription_ != nullptr;};
      void deleteCouponDescription() { this->couponDescription_ = nullptr;};
      inline string getCouponDescription() const { DARABONBA_PTR_GET_DEFAULT(couponDescription_, "") };
      inline Data& setCouponDescription(string couponDescription) { DARABONBA_PTR_SET_VALUE(couponDescription_, couponDescription) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Data& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // denomination Field Functions 
      bool hasDenomination() const { return this->denomination_ != nullptr;};
      void deleteDenomination() { this->denomination_ = nullptr;};
      inline double getDenomination() const { DARABONBA_PTR_GET_DEFAULT(denomination_, 0.0) };
      inline Data& setDenomination(double denomination) { DARABONBA_PTR_SET_VALUE(denomination_, denomination) };


      // limitPerPerson Field Functions 
      bool hasLimitPerPerson() const { return this->limitPerPerson_ != nullptr;};
      void deleteLimitPerPerson() { this->limitPerPerson_ = nullptr;};
      inline int32_t getLimitPerPerson() const { DARABONBA_PTR_GET_DEFAULT(limitPerPerson_, 0) };
      inline Data& setLimitPerPerson(int32_t limitPerPerson) { DARABONBA_PTR_SET_VALUE(limitPerPerson_, limitPerPerson) };


      // purchaseType Field Functions 
      bool hasPurchaseType() const { return this->purchaseType_ != nullptr;};
      void deletePurchaseType() { this->purchaseType_ = nullptr;};
      inline string getPurchaseType() const { DARABONBA_PTR_GET_DEFAULT(purchaseType_, "") };
      inline Data& setPurchaseType(string purchaseType) { DARABONBA_PTR_SET_VALUE(purchaseType_, purchaseType) };


      // reasonForApplication Field Functions 
      bool hasReasonForApplication() const { return this->reasonForApplication_ != nullptr;};
      void deleteReasonForApplication() { this->reasonForApplication_ = nullptr;};
      inline string getReasonForApplication() const { DARABONBA_PTR_GET_DEFAULT(reasonForApplication_, "") };
      inline Data& setReasonForApplication(string reasonForApplication) { DARABONBA_PTR_SET_VALUE(reasonForApplication_, reasonForApplication) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Data& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // validUntil Field Functions 
      bool hasValidUntil() const { return this->validUntil_ != nullptr;};
      void deleteValidUntil() { this->validUntil_ = nullptr;};
      inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
      inline Data& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


      // validUntilType Field Functions 
      bool hasValidUntilType() const { return this->validUntilType_ != nullptr;};
      void deleteValidUntilType() { this->validUntilType_ = nullptr;};
      inline string getValidUntilType() const { DARABONBA_PTR_GET_DEFAULT(validUntilType_, "") };
      inline Data& setValidUntilType(string validUntilType) { DARABONBA_PTR_SET_VALUE(validUntilType_, validUntilType) };


    protected:
      // The applicable products. Valid values:
      // 
      // - UNIVERSAL: all products
      // 
      // - a specific commodity code
      shared_ptr<string> applicableProducts_ {};
      // The party that bears the coupon cost. Valid values:
      // ● cost_by_self: The cost is borne by the caller.
      // ● aliyun_poc: The cost is borne by Alibaba Cloud.
      shared_ptr<string> costBearer_ {};
      // The remarks of the coupon.
      shared_ptr<string> couponDescription_ {};
      // The creation time. The format is YYYY-MM-DD HH:mm:ss.
      shared_ptr<string> createdTime_ {};
      // The face value.
      shared_ptr<double> denomination_ {};
      // The maximum number of coupons that each person can claim. Valid values:
      // 
      // - 1: Each person can claim one coupon.
      // 
      // - 0: No limit applies.
      shared_ptr<int32_t> limitPerPerson_ {};
      // The order type. Valid values:
      // - ALL: Alibaba Cloud upfront order
      // - BILLING: Alibaba Cloud pay-as-you-go bill
      shared_ptr<string> purchaseType_ {};
      // The reason for the template application.
      shared_ptr<string> reasonForApplication_ {};
      // The status. Valid values:
      // 
      // - APPROVED: approved
      // - ABANDONED: voided
      shared_ptr<string> status_ {};
      // The template ID.
      shared_ptr<int64_t> templateId_ {};
      // The name of the coupon template.
      shared_ptr<string> templateName_ {};
      // The validity period. This parameter is used together with the validity period type.
      // 
      // - If the validity period type is relative time, the validity period is the number of valid days.
      // 
      // - If the validity period type is absolute time, the validity period is a time period.
      shared_ptr<string> validUntil_ {};
      // The type of the validity period. Valid values:
      // 
      // - 0: relative time
      // - 1: absolute time
      shared_ptr<string> validUntilType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCouponTemplateDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCouponTemplateDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCouponTemplateDetailResponseBody::Data) };
    inline GetCouponTemplateDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCouponTemplateDetailResponseBody::Data) };
    inline GetCouponTemplateDetailResponseBody& setData(const GetCouponTemplateDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCouponTemplateDetailResponseBody& setData(GetCouponTemplateDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCouponTemplateDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCouponTemplateDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCouponTemplateDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code.
    shared_ptr<string> code_ {};
    // The operation result.
    shared_ptr<GetCouponTemplateDetailResponseBody::Data> data_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
