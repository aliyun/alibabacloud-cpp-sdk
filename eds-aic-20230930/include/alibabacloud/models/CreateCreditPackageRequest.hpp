// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDITPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDITPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCreditPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCreditPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(PackageAmount, packageAmount_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCreditPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(PackageAmount, packageAmount_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    CreateCreditPackageRequest() = default ;
    CreateCreditPackageRequest(const CreateCreditPackageRequest &) = default ;
    CreateCreditPackageRequest(CreateCreditPackageRequest &&) = default ;
    CreateCreditPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCreditPackageRequest() = default ;
    CreateCreditPackageRequest& operator=(const CreateCreditPackageRequest &) = default ;
    CreateCreditPackageRequest& operator=(CreateCreditPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->channelCookie_ == nullptr && this->creditAmount_ == nullptr && this->packageAmount_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->promotionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateCreditPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // channelCookie Field Functions 
    bool hasChannelCookie() const { return this->channelCookie_ != nullptr;};
    void deleteChannelCookie() { this->channelCookie_ = nullptr;};
    inline string getChannelCookie() const { DARABONBA_PTR_GET_DEFAULT(channelCookie_, "") };
    inline CreateCreditPackageRequest& setChannelCookie(string channelCookie) { DARABONBA_PTR_SET_VALUE(channelCookie_, channelCookie) };


    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline string getCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
    inline CreateCreditPackageRequest& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // packageAmount Field Functions 
    bool hasPackageAmount() const { return this->packageAmount_ != nullptr;};
    void deletePackageAmount() { this->packageAmount_ = nullptr;};
    inline string getPackageAmount() const { DARABONBA_PTR_GET_DEFAULT(packageAmount_, "") };
    inline CreateCreditPackageRequest& setPackageAmount(string packageAmount) { DARABONBA_PTR_SET_VALUE(packageAmount_, packageAmount) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateCreditPackageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateCreditPackageRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateCreditPackageRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true**: enables automatic payment. Make sure that your account balance is sufficient.
    // - **false** (default): generates an unpaid order without deducting fees.
    // 
    // > If the balance of your payment method is insufficient, you can change the Settings of this parameter to false to generate an unpaid order. Then, you can log on to the WUYING Cloud Phone console to complete the payment.
    shared_ptr<bool> autoPay_ {};
    // The channel cookie. This parameter is passed through to the sales system when you place an order.
    shared_ptr<string> channelCookie_ {};
    // The number of credits.
    shared_ptr<string> creditAmount_ {};
    // The number of credit packages to purchase.
    shared_ptr<string> packageAmount_ {};
    // The subscription period of the resource. The unit is specified by PeriodUnit.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period. Valid values:
    // - **Month**: months.
    // - **Year**: years.
    shared_ptr<string> periodUnit_ {};
    // The ID of the promotion.
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
