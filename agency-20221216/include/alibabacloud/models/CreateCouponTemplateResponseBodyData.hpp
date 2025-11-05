// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOUPONTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECOUPONTEMPLATERESPONSEBODYDATA_HPP_
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
  class CreateCouponTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCouponTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_TO_JSON(CostBearer, costBearer_);
      DARABONBA_PTR_TO_JSON(CouponTemplateID, couponTemplateID_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Expireddate, expireddate_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Vailddate, vailddate_);
      DARABONBA_PTR_TO_JSON(Vaildperioddays, vaildperioddays_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCouponTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
      DARABONBA_PTR_FROM_JSON(CostBearer, costBearer_);
      DARABONBA_PTR_FROM_JSON(CouponTemplateID, couponTemplateID_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Expireddate, expireddate_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Vailddate, vailddate_);
      DARABONBA_PTR_FROM_JSON(Vaildperioddays, vaildperioddays_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateCouponTemplateResponseBodyData() = default ;
    CreateCouponTemplateResponseBodyData(const CreateCouponTemplateResponseBodyData &) = default ;
    CreateCouponTemplateResponseBodyData(CreateCouponTemplateResponseBodyData &&) = default ;
    CreateCouponTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCouponTemplateResponseBodyData() = default ;
    CreateCouponTemplateResponseBodyData& operator=(const CreateCouponTemplateResponseBodyData &) = default ;
    CreateCouponTemplateResponseBodyData& operator=(CreateCouponTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && return this->costBearer_ == nullptr && return this->couponTemplateID_ == nullptr && return this->createTime_ == nullptr && return this->expireddate_ == nullptr && return this->productType_ == nullptr
        && return this->status_ == nullptr && return this->templateName_ == nullptr && return this->vailddate_ == nullptr && return this->vaildperioddays_ == nullptr && return this->validUntil_ == nullptr
        && return this->value_ == nullptr; };
    // applicableProducts Field Functions 
    bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
    void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
    inline string applicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
    inline CreateCouponTemplateResponseBodyData& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


    // costBearer Field Functions 
    bool hasCostBearer() const { return this->costBearer_ != nullptr;};
    void deleteCostBearer() { this->costBearer_ = nullptr;};
    inline string costBearer() const { DARABONBA_PTR_GET_DEFAULT(costBearer_, "") };
    inline CreateCouponTemplateResponseBodyData& setCostBearer(string costBearer) { DARABONBA_PTR_SET_VALUE(costBearer_, costBearer) };


    // couponTemplateID Field Functions 
    bool hasCouponTemplateID() const { return this->couponTemplateID_ != nullptr;};
    void deleteCouponTemplateID() { this->couponTemplateID_ = nullptr;};
    inline int64_t couponTemplateID() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateID_, 0L) };
    inline CreateCouponTemplateResponseBodyData& setCouponTemplateID(int64_t couponTemplateID) { DARABONBA_PTR_SET_VALUE(couponTemplateID_, couponTemplateID) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateCouponTemplateResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireddate Field Functions 
    bool hasExpireddate() const { return this->expireddate_ != nullptr;};
    void deleteExpireddate() { this->expireddate_ = nullptr;};
    inline string expireddate() const { DARABONBA_PTR_GET_DEFAULT(expireddate_, "") };
    inline CreateCouponTemplateResponseBodyData& setExpireddate(string expireddate) { DARABONBA_PTR_SET_VALUE(expireddate_, expireddate) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline const vector<string> & productType() const { DARABONBA_PTR_GET_CONST(productType_, vector<string>) };
    inline vector<string> productType() { DARABONBA_PTR_GET(productType_, vector<string>) };
    inline CreateCouponTemplateResponseBodyData& setProductType(const vector<string> & productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };
    inline CreateCouponTemplateResponseBodyData& setProductType(vector<string> && productType) { DARABONBA_PTR_SET_RVALUE(productType_, productType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCouponTemplateResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateCouponTemplateResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // vailddate Field Functions 
    bool hasVailddate() const { return this->vailddate_ != nullptr;};
    void deleteVailddate() { this->vailddate_ = nullptr;};
    inline string vailddate() const { DARABONBA_PTR_GET_DEFAULT(vailddate_, "") };
    inline CreateCouponTemplateResponseBodyData& setVailddate(string vailddate) { DARABONBA_PTR_SET_VALUE(vailddate_, vailddate) };


    // vaildperioddays Field Functions 
    bool hasVaildperioddays() const { return this->vaildperioddays_ != nullptr;};
    void deleteVaildperioddays() { this->vaildperioddays_ = nullptr;};
    inline string vaildperioddays() const { DARABONBA_PTR_GET_DEFAULT(vaildperioddays_, "") };
    inline CreateCouponTemplateResponseBodyData& setVaildperioddays(string vaildperioddays) { DARABONBA_PTR_SET_VALUE(vaildperioddays_, vaildperioddays) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string validUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline CreateCouponTemplateResponseBodyData& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateCouponTemplateResponseBodyData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> applicableProducts_ = nullptr;
    std::shared_ptr<string> costBearer_ = nullptr;
    std::shared_ptr<int64_t> couponTemplateID_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> expireddate_ = nullptr;
    std::shared_ptr<vector<string>> productType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> vailddate_ = nullptr;
    std::shared_ptr<string> vaildperioddays_ = nullptr;
    std::shared_ptr<string> validUntil_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
