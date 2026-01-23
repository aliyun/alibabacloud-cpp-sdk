// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOUPONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOUPONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CreateCouponTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCouponTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_TO_JSON(CostBearer, costBearer_);
      DARABONBA_PTR_TO_JSON(CouponDescription, couponDescription_);
      DARABONBA_PTR_TO_JSON(Expireddate, expireddate_);
      DARABONBA_PTR_TO_JSON(LimitPerPerson, limitPerPerson_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PurchaseType, purchaseType_);
      DARABONBA_PTR_TO_JSON(ReasonForApplication, reasonForApplication_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Vailddate, vailddate_);
      DARABONBA_PTR_TO_JSON(Vaildperioddays, vaildperioddays_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCouponTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_FROM_JSON(CostBearer, costBearer_);
      DARABONBA_PTR_FROM_JSON(CouponDescription, couponDescription_);
      DARABONBA_PTR_FROM_JSON(Expireddate, expireddate_);
      DARABONBA_PTR_FROM_JSON(LimitPerPerson, limitPerPerson_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PurchaseType, purchaseType_);
      DARABONBA_PTR_FROM_JSON(ReasonForApplication, reasonForApplication_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Vailddate, vailddate_);
      DARABONBA_PTR_FROM_JSON(Vaildperioddays, vaildperioddays_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateCouponTemplateRequest() = default ;
    CreateCouponTemplateRequest(const CreateCouponTemplateRequest &) = default ;
    CreateCouponTemplateRequest(CreateCouponTemplateRequest &&) = default ;
    CreateCouponTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCouponTemplateRequest() = default ;
    CreateCouponTemplateRequest& operator=(const CreateCouponTemplateRequest &) = default ;
    CreateCouponTemplateRequest& operator=(CreateCouponTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->applicableProducts_ == nullptr && this->costBearer_ == nullptr && this->couponDescription_ == nullptr && this->expireddate_ == nullptr && this->limitPerPerson_ == nullptr
        && this->productType_ == nullptr && this->purchaseType_ == nullptr && this->reasonForApplication_ == nullptr && this->templateName_ == nullptr && this->vailddate_ == nullptr
        && this->vaildperioddays_ == nullptr && this->validUntil_ == nullptr && this->value_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateCouponTemplateRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
    inline CreateCouponTemplateRequest& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


    // costBearer Field Functions 
    bool hasCostBearer() const { return this->costBearer_ != nullptr;};
    void deleteCostBearer() { this->costBearer_ = nullptr;};
    inline string getCostBearer() const { DARABONBA_PTR_GET_DEFAULT(costBearer_, "") };
    inline CreateCouponTemplateRequest& setCostBearer(string costBearer) { DARABONBA_PTR_SET_VALUE(costBearer_, costBearer) };


    // couponDescription Field Functions 
    bool hasCouponDescription() const { return this->couponDescription_ != nullptr;};
    void deleteCouponDescription() { this->couponDescription_ = nullptr;};
    inline string getCouponDescription() const { DARABONBA_PTR_GET_DEFAULT(couponDescription_, "") };
    inline CreateCouponTemplateRequest& setCouponDescription(string couponDescription) { DARABONBA_PTR_SET_VALUE(couponDescription_, couponDescription) };


    // expireddate Field Functions 
    bool hasExpireddate() const { return this->expireddate_ != nullptr;};
    void deleteExpireddate() { this->expireddate_ = nullptr;};
    inline string getExpireddate() const { DARABONBA_PTR_GET_DEFAULT(expireddate_, "") };
    inline CreateCouponTemplateRequest& setExpireddate(string expireddate) { DARABONBA_PTR_SET_VALUE(expireddate_, expireddate) };


    // limitPerPerson Field Functions 
    bool hasLimitPerPerson() const { return this->limitPerPerson_ != nullptr;};
    void deleteLimitPerPerson() { this->limitPerPerson_ = nullptr;};
    inline string getLimitPerPerson() const { DARABONBA_PTR_GET_DEFAULT(limitPerPerson_, "") };
    inline CreateCouponTemplateRequest& setLimitPerPerson(string limitPerPerson) { DARABONBA_PTR_SET_VALUE(limitPerPerson_, limitPerPerson) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline const vector<string> & getProductType() const { DARABONBA_PTR_GET_CONST(productType_, vector<string>) };
    inline vector<string> getProductType() { DARABONBA_PTR_GET(productType_, vector<string>) };
    inline CreateCouponTemplateRequest& setProductType(const vector<string> & productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };
    inline CreateCouponTemplateRequest& setProductType(vector<string> && productType) { DARABONBA_PTR_SET_RVALUE(productType_, productType) };


    // purchaseType Field Functions 
    bool hasPurchaseType() const { return this->purchaseType_ != nullptr;};
    void deletePurchaseType() { this->purchaseType_ = nullptr;};
    inline string getPurchaseType() const { DARABONBA_PTR_GET_DEFAULT(purchaseType_, "") };
    inline CreateCouponTemplateRequest& setPurchaseType(string purchaseType) { DARABONBA_PTR_SET_VALUE(purchaseType_, purchaseType) };


    // reasonForApplication Field Functions 
    bool hasReasonForApplication() const { return this->reasonForApplication_ != nullptr;};
    void deleteReasonForApplication() { this->reasonForApplication_ = nullptr;};
    inline string getReasonForApplication() const { DARABONBA_PTR_GET_DEFAULT(reasonForApplication_, "") };
    inline CreateCouponTemplateRequest& setReasonForApplication(string reasonForApplication) { DARABONBA_PTR_SET_VALUE(reasonForApplication_, reasonForApplication) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateCouponTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // vailddate Field Functions 
    bool hasVailddate() const { return this->vailddate_ != nullptr;};
    void deleteVailddate() { this->vailddate_ = nullptr;};
    inline string getVailddate() const { DARABONBA_PTR_GET_DEFAULT(vailddate_, "") };
    inline CreateCouponTemplateRequest& setVailddate(string vailddate) { DARABONBA_PTR_SET_VALUE(vailddate_, vailddate) };


    // vaildperioddays Field Functions 
    bool hasVaildperioddays() const { return this->vaildperioddays_ != nullptr;};
    void deleteVaildperioddays() { this->vaildperioddays_ = nullptr;};
    inline string getVaildperioddays() const { DARABONBA_PTR_GET_DEFAULT(vaildperioddays_, "") };
    inline CreateCouponTemplateRequest& setVaildperioddays(string vaildperioddays) { DARABONBA_PTR_SET_VALUE(vaildperioddays_, vaildperioddays) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline CreateCouponTemplateRequest& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateCouponTemplateRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is required.
    shared_ptr<string> applicableProducts_ {};
    // This parameter is required.
    shared_ptr<string> costBearer_ {};
    shared_ptr<string> couponDescription_ {};
    shared_ptr<string> expireddate_ {};
    // This parameter is required.
    shared_ptr<string> limitPerPerson_ {};
    shared_ptr<vector<string>> productType_ {};
    shared_ptr<string> purchaseType_ {};
    // This parameter is required.
    shared_ptr<string> reasonForApplication_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> vailddate_ {};
    shared_ptr<string> vaildperioddays_ {};
    // This parameter is required.
    shared_ptr<string> validUntil_ {};
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
