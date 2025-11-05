// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOUPONTEMPLATEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOUPONTEMPLATEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCouponTemplateDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCouponTemplateDetailResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetCouponTemplateDetailResponseBodyData& obj) { 
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
    GetCouponTemplateDetailResponseBodyData() = default ;
    GetCouponTemplateDetailResponseBodyData(const GetCouponTemplateDetailResponseBodyData &) = default ;
    GetCouponTemplateDetailResponseBodyData(GetCouponTemplateDetailResponseBodyData &&) = default ;
    GetCouponTemplateDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCouponTemplateDetailResponseBodyData() = default ;
    GetCouponTemplateDetailResponseBodyData& operator=(const GetCouponTemplateDetailResponseBodyData &) = default ;
    GetCouponTemplateDetailResponseBodyData& operator=(GetCouponTemplateDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && return this->costBearer_ == nullptr && return this->couponDescription_ == nullptr && return this->createdTime_ == nullptr && return this->denomination_ == nullptr && return this->limitPerPerson_ == nullptr
        && return this->purchaseType_ == nullptr && return this->reasonForApplication_ == nullptr && return this->status_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr
        && return this->validUntil_ == nullptr && return this->validUntilType_ == nullptr; };
    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline string applicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


    // costBearer Field Functions 
    bool hasCostBearer() const { return this->costBearer_ != nullptr;};
    void deleteCostBearer() { this->costBearer_ = nullptr;};
    inline string costBearer() const { DARABONBA_PTR_GET_DEFAULT(costBearer_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setCostBearer(string costBearer) { DARABONBA_PTR_SET_VALUE(costBearer_, costBearer) };


    // couponDescription Field Functions 
    bool hasCouponDescription() const { return this->couponDescription_ != nullptr;};
    void deleteCouponDescription() { this->couponDescription_ = nullptr;};
    inline string couponDescription() const { DARABONBA_PTR_GET_DEFAULT(couponDescription_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setCouponDescription(string couponDescription) { DARABONBA_PTR_SET_VALUE(couponDescription_, couponDescription) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // denomination Field Functions 
    bool hasDenomination() const { return this->denomination_ != nullptr;};
    void deleteDenomination() { this->denomination_ = nullptr;};
    inline double denomination() const { DARABONBA_PTR_GET_DEFAULT(denomination_, 0.0) };
    inline GetCouponTemplateDetailResponseBodyData& setDenomination(double denomination) { DARABONBA_PTR_SET_VALUE(denomination_, denomination) };


    // limitPerPerson Field Functions 
    bool hasLimitPerPerson() const { return this->limitPerPerson_ != nullptr;};
    void deleteLimitPerPerson() { this->limitPerPerson_ = nullptr;};
    inline int32_t limitPerPerson() const { DARABONBA_PTR_GET_DEFAULT(limitPerPerson_, 0) };
    inline GetCouponTemplateDetailResponseBodyData& setLimitPerPerson(int32_t limitPerPerson) { DARABONBA_PTR_SET_VALUE(limitPerPerson_, limitPerPerson) };


    // purchaseType Field Functions 
    bool hasPurchaseType() const { return this->purchaseType_ != nullptr;};
    void deletePurchaseType() { this->purchaseType_ = nullptr;};
    inline string purchaseType() const { DARABONBA_PTR_GET_DEFAULT(purchaseType_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setPurchaseType(string purchaseType) { DARABONBA_PTR_SET_VALUE(purchaseType_, purchaseType) };


    // reasonForApplication Field Functions 
    bool hasReasonForApplication() const { return this->reasonForApplication_ != nullptr;};
    void deleteReasonForApplication() { this->reasonForApplication_ = nullptr;};
    inline string reasonForApplication() const { DARABONBA_PTR_GET_DEFAULT(reasonForApplication_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setReasonForApplication(string reasonForApplication) { DARABONBA_PTR_SET_VALUE(reasonForApplication_, reasonForApplication) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetCouponTemplateDetailResponseBodyData& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string validUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


    // validUntilType Field Functions 
    bool hasValidUntilType() const { return this->validUntilType_ != nullptr;};
    void deleteValidUntilType() { this->validUntilType_ = nullptr;};
    inline string validUntilType() const { DARABONBA_PTR_GET_DEFAULT(validUntilType_, "") };
    inline GetCouponTemplateDetailResponseBodyData& setValidUntilType(string validUntilType) { DARABONBA_PTR_SET_VALUE(validUntilType_, validUntilType) };


  protected:
    std::shared_ptr<string> applicableProducts_ = nullptr;
    std::shared_ptr<string> costBearer_ = nullptr;
    std::shared_ptr<string> couponDescription_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<double> denomination_ = nullptr;
    std::shared_ptr<int32_t> limitPerPerson_ = nullptr;
    std::shared_ptr<string> purchaseType_ = nullptr;
    std::shared_ptr<string> reasonForApplication_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> validUntil_ = nullptr;
    std::shared_ptr<string> validUntilType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
