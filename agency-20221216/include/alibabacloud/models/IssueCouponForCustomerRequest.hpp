// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISSUECOUPONFORCUSTOMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISSUECOUPONFORCUSTOMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class IssueCouponForCustomerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IssueCouponForCustomerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ApplicationReason, applicationReason_);
      DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_TO_JSON(IsUseBenefit, isUseBenefit_);
      DARABONBA_PTR_TO_JSON(Uidlist, uidlist_);
    };
    friend void from_json(const Darabonba::Json& j, IssueCouponForCustomerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ApplicationReason, applicationReason_);
      DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_FROM_JSON(IsUseBenefit, isUseBenefit_);
      DARABONBA_PTR_FROM_JSON(Uidlist, uidlist_);
    };
    IssueCouponForCustomerRequest() = default ;
    IssueCouponForCustomerRequest(const IssueCouponForCustomerRequest &) = default ;
    IssueCouponForCustomerRequest(IssueCouponForCustomerRequest &&) = default ;
    IssueCouponForCustomerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IssueCouponForCustomerRequest() = default ;
    IssueCouponForCustomerRequest& operator=(const IssueCouponForCustomerRequest &) = default ;
    IssueCouponForCustomerRequest& operator=(IssueCouponForCustomerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->applicationReason_ == nullptr && this->couponTemplateId_ == nullptr && this->isUseBenefit_ == nullptr && this->uidlist_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline IssueCouponForCustomerRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // applicationReason Field Functions 
    bool hasApplicationReason() const { return this->applicationReason_ != nullptr;};
    void deleteApplicationReason() { this->applicationReason_ = nullptr;};
    inline string getApplicationReason() const { DARABONBA_PTR_GET_DEFAULT(applicationReason_, "") };
    inline IssueCouponForCustomerRequest& setApplicationReason(string applicationReason) { DARABONBA_PTR_SET_VALUE(applicationReason_, applicationReason) };


    // couponTemplateId Field Functions 
    bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
    void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
    inline int64_t getCouponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
    inline IssueCouponForCustomerRequest& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


    // isUseBenefit Field Functions 
    bool hasIsUseBenefit() const { return this->isUseBenefit_ != nullptr;};
    void deleteIsUseBenefit() { this->isUseBenefit_ = nullptr;};
    inline bool getIsUseBenefit() const { DARABONBA_PTR_GET_DEFAULT(isUseBenefit_, false) };
    inline IssueCouponForCustomerRequest& setIsUseBenefit(bool isUseBenefit) { DARABONBA_PTR_SET_VALUE(isUseBenefit_, isUseBenefit) };


    // uidlist Field Functions 
    bool hasUidlist() const { return this->uidlist_ != nullptr;};
    void deleteUidlist() { this->uidlist_ = nullptr;};
    inline string getUidlist() const { DARABONBA_PTR_GET_DEFAULT(uidlist_, "") };
    inline IssueCouponForCustomerRequest& setUidlist(string uidlist) { DARABONBA_PTR_SET_VALUE(uidlist_, uidlist) };


  protected:
    // The language parameter. Default value: none. Valid values:
    // - zh-CN: Chinese.
    // - en-US: English.
    shared_ptr<string> acceptLanguage_ {};
    // The reason for applying for the coupon. The reason can be up to 500 characters in length. Example: Apply for a coupon for Customer XXX.
    shared_ptr<string> applicationReason_ {};
    // The ID of the coupon template.
    // 
    // This parameter is required.
    shared_ptr<int64_t> couponTemplateId_ {};
    // Specifies whether to use the POC privilege quota. Valid values:
    // - true: Uses the POC privilege quota. If all submitted accounts are marked as approval-exempt, the current coupon application skips the approval process, and the POC privilege quota in your partner benefit package is deducted.
    // - false: Does not use the POC privilege quota. Regardless of the approval-exempt status of the submitted accounts, your POC coupon benefit quota remains unchanged. In this case, the application follows the standard coupon application approval process.
    shared_ptr<bool> isUseBenefit_ {};
    // The list of UIDs. Separate multiple UIDs with commas (,). Example: 111,2222.
    // 
    // This parameter is required.
    shared_ptr<string> uidlist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
