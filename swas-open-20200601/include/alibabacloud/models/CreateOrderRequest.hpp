// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(FromApp, fromApp_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(FromApp, fromApp_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateOrderRequest() = default ;
    CreateOrderRequest(const CreateOrderRequest &) = default ;
    CreateOrderRequest(CreateOrderRequest &&) = default ;
    CreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderRequest() = default ;
    CreateOrderRequest& operator=(const CreateOrderRequest &) = default ;
    CreateOrderRequest& operator=(CreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commodity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
      };
      friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      };
      Commodity() = default ;
      Commodity(const Commodity &) = default ;
      Commodity(Commodity &&) = default ;
      Commodity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commodity() = default ;
      Commodity& operator=(const Commodity &) = default ;
      Commodity& operator=(Commodity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->commodityType_ == nullptr && this->dataDiskSize_ == nullptr
        && this->imageId_ == nullptr && this->instanceIds_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->planId_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
      inline Commodity& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
      inline Commodity& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Commodity& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
      inline Commodity& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // commodityType Field Functions 
      bool hasCommodityType() const { return this->commodityType_ != nullptr;};
      void deleteCommodityType() { this->commodityType_ = nullptr;};
      inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
      inline Commodity& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline Commodity& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Commodity& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline Commodity& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline Commodity& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Commodity& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline Commodity& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline Commodity& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Commodity& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    protected:
      // The number of Simple Application Server instances to create. Valid values: 1 to 20. Default value: 1.
      shared_ptr<int32_t> amount_ {};
      // Specifies whether automatic payment is enabled for the order. Valid values:
      // - **true**: Automatic payment.
      // - **false**: No automatic payment.
      shared_ptr<bool> autoPay_ {};
      // Specifies whether to enable auto-renewal upon expiration. Valid values:
      // - true: Auto-renewal is enabled.
      // - false: Auto-renewal is disabled.
      // Default value: false.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period. Valid values:
      // - If PeriodUnit is set to Year: 1, 2, and 3.
      // - If PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
      // Default value: 1.
      shared_ptr<int32_t> autoRenewPeriod_ {};
      // The resource name.
      shared_ptr<string> commodityType_ {};
      // The size of the mounted data cloud disk. Unit: GB. Valid values: 0 to 16380. The value must be a multiple of 20. Default value: 0.
      shared_ptr<int32_t> dataDiskSize_ {};
      // The image ID. You can call the [ListImages](https://help.aliyun.com/document_detail/189313.html) operation to query available image IDs in a specified region.
      shared_ptr<string> imageId_ {};
      // The IDs of the Simple Application Server instances.
      shared_ptr<vector<string>> instanceIds_ {};
      // The billing method. Valid values:
      // - Prepaid: subscription.
      shared_ptr<string> payType_ {};
      // The subscription period. Valid values: 1 to 20. Default value: 1.
      shared_ptr<int32_t> period_ {};
      // The unit of the subscription period. Valid values:
      // - Month: monthly billing.
      // - Year: yearly billing.
      // Default value: Month.
      shared_ptr<string> periodUnit_ {};
      // The plan ID. You can call the [ListPlans](https://help.aliyun.com/document_detail/189314.html) operation to query all plans in a specified region.
      shared_ptr<string> planId_ {};
    };

    class BusinessInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BusinessInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
        DARABONBA_PTR_TO_JSON(OrderSource, orderSource_);
        DARABONBA_PTR_TO_JSON(PromotionOptions, promotionOptions_);
        DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
        DARABONBA_PTR_TO_JSON(WeChatProType, weChatProType_);
        DARABONBA_PTR_TO_JSON(lx_channel_cookie_value, lxChannelCookieValue_);
      };
      friend void from_json(const Darabonba::Json& j, BusinessInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
        DARABONBA_PTR_FROM_JSON(OrderSource, orderSource_);
        DARABONBA_PTR_FROM_JSON(PromotionOptions, promotionOptions_);
        DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
        DARABONBA_PTR_FROM_JSON(WeChatProType, weChatProType_);
        DARABONBA_PTR_FROM_JSON(lx_channel_cookie_value, lxChannelCookieValue_);
      };
      BusinessInfo() = default ;
      BusinessInfo(const BusinessInfo &) = default ;
      BusinessInfo(BusinessInfo &&) = default ;
      BusinessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BusinessInfo() = default ;
      BusinessInfo& operator=(const BusinessInfo &) = default ;
      BusinessInfo& operator=(BusinessInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PromotionOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromotionOptions& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
          DARABONBA_PTR_TO_JSON(PromotionFilter, promotionFilter_);
          DARABONBA_PTR_TO_JSON(PromotionOptionCode, promotionOptionCode_);
          DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
        };
        friend void from_json(const Darabonba::Json& j, PromotionOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
          DARABONBA_PTR_FROM_JSON(PromotionFilter, promotionFilter_);
          DARABONBA_PTR_FROM_JSON(PromotionOptionCode, promotionOptionCode_);
          DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
        };
        PromotionOptions() = default ;
        PromotionOptions(const PromotionOptions &) = default ;
        PromotionOptions(PromotionOptions &&) = default ;
        PromotionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromotionOptions() = default ;
        PromotionOptions& operator=(const PromotionOptions &) = default ;
        PromotionOptions& operator=(PromotionOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PromotionFilter : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromotionFilter& obj) { 
            DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
          };
          friend void from_json(const Darabonba::Json& j, PromotionFilter& obj) { 
            DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
          };
          PromotionFilter() = default ;
          PromotionFilter(const PromotionFilter &) = default ;
          PromotionFilter(PromotionFilter &&) = default ;
          PromotionFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromotionFilter() = default ;
          PromotionFilter& operator=(const PromotionFilter &) = default ;
          PromotionFilter& operator=(PromotionFilter &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->useCoupon_ == nullptr; };
          // useCoupon Field Functions 
          bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
          void deleteUseCoupon() { this->useCoupon_ = nullptr;};
          inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
          inline PromotionFilter& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


        protected:
          // Specifies whether to use a voucher. Valid values:
          // - **true**: A voucher is used.
          // - **false**: No voucher is used.
          // Default value: **false**.
          shared_ptr<bool> useCoupon_ {};
        };

        virtual bool empty() const override { return this->activityId_ == nullptr
        && this->promotionFilter_ == nullptr && this->promotionOptionCode_ == nullptr && this->promotionOptionNo_ == nullptr; };
        // activityId Field Functions 
        bool hasActivityId() const { return this->activityId_ != nullptr;};
        void deleteActivityId() { this->activityId_ = nullptr;};
        inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
        inline PromotionOptions& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


        // promotionFilter Field Functions 
        bool hasPromotionFilter() const { return this->promotionFilter_ != nullptr;};
        void deletePromotionFilter() { this->promotionFilter_ = nullptr;};
        inline const PromotionOptions::PromotionFilter & getPromotionFilter() const { DARABONBA_PTR_GET_CONST(promotionFilter_, PromotionOptions::PromotionFilter) };
        inline PromotionOptions::PromotionFilter getPromotionFilter() { DARABONBA_PTR_GET(promotionFilter_, PromotionOptions::PromotionFilter) };
        inline PromotionOptions& setPromotionFilter(const PromotionOptions::PromotionFilter & promotionFilter) { DARABONBA_PTR_SET_VALUE(promotionFilter_, promotionFilter) };
        inline PromotionOptions& setPromotionFilter(PromotionOptions::PromotionFilter && promotionFilter) { DARABONBA_PTR_SET_RVALUE(promotionFilter_, promotionFilter) };


        // promotionOptionCode Field Functions 
        bool hasPromotionOptionCode() const { return this->promotionOptionCode_ != nullptr;};
        void deletePromotionOptionCode() { this->promotionOptionCode_ = nullptr;};
        inline string getPromotionOptionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionCode_, "") };
        inline PromotionOptions& setPromotionOptionCode(string promotionOptionCode) { DARABONBA_PTR_SET_VALUE(promotionOptionCode_, promotionOptionCode) };


        // promotionOptionNo Field Functions 
        bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
        void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
        inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
        inline PromotionOptions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


      protected:
        // The activity ID.
        shared_ptr<string> activityId_ {};
        // The promotion filter.
        shared_ptr<PromotionOptions::PromotionFilter> promotionFilter_ {};
        // The promotion option code.
        shared_ptr<string> promotionOptionCode_ {};
        // The coupon ID.
        shared_ptr<string> promotionOptionNo_ {};
      };

      virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && this->orderSource_ == nullptr && this->promotionOptions_ == nullptr && this->useCoupon_ == nullptr && this->weChatProType_ == nullptr && this->lxChannelCookieValue_ == nullptr; };
      // aliyunLang Field Functions 
      bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
      void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
      inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
      inline BusinessInfo& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


      // orderSource Field Functions 
      bool hasOrderSource() const { return this->orderSource_ != nullptr;};
      void deleteOrderSource() { this->orderSource_ = nullptr;};
      inline string getOrderSource() const { DARABONBA_PTR_GET_DEFAULT(orderSource_, "") };
      inline BusinessInfo& setOrderSource(string orderSource) { DARABONBA_PTR_SET_VALUE(orderSource_, orderSource) };


      // promotionOptions Field Functions 
      bool hasPromotionOptions() const { return this->promotionOptions_ != nullptr;};
      void deletePromotionOptions() { this->promotionOptions_ = nullptr;};
      inline const BusinessInfo::PromotionOptions & getPromotionOptions() const { DARABONBA_PTR_GET_CONST(promotionOptions_, BusinessInfo::PromotionOptions) };
      inline BusinessInfo::PromotionOptions getPromotionOptions() { DARABONBA_PTR_GET(promotionOptions_, BusinessInfo::PromotionOptions) };
      inline BusinessInfo& setPromotionOptions(const BusinessInfo::PromotionOptions & promotionOptions) { DARABONBA_PTR_SET_VALUE(promotionOptions_, promotionOptions) };
      inline BusinessInfo& setPromotionOptions(BusinessInfo::PromotionOptions && promotionOptions) { DARABONBA_PTR_SET_RVALUE(promotionOptions_, promotionOptions) };


      // useCoupon Field Functions 
      bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
      void deleteUseCoupon() { this->useCoupon_ = nullptr;};
      inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
      inline BusinessInfo& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


      // weChatProType Field Functions 
      bool hasWeChatProType() const { return this->weChatProType_ != nullptr;};
      void deleteWeChatProType() { this->weChatProType_ = nullptr;};
      inline string getWeChatProType() const { DARABONBA_PTR_GET_DEFAULT(weChatProType_, "") };
      inline BusinessInfo& setWeChatProType(string weChatProType) { DARABONBA_PTR_SET_VALUE(weChatProType_, weChatProType) };


      // lxChannelCookieValue Field Functions 
      bool hasLxChannelCookieValue() const { return this->lxChannelCookieValue_ != nullptr;};
      void deleteLxChannelCookieValue() { this->lxChannelCookieValue_ = nullptr;};
      inline string getLxChannelCookieValue() const { DARABONBA_PTR_GET_DEFAULT(lxChannelCookieValue_, "") };
      inline BusinessInfo& setLxChannelCookieValue(string lxChannelCookieValue) { DARABONBA_PTR_SET_VALUE(lxChannelCookieValue_, lxChannelCookieValue) };


    protected:
      // The language environment. Default value: Chinese.
      shared_ptr<string> aliyunLang_ {};
      // The order source.
      shared_ptr<string> orderSource_ {};
      // The promotion option information.
      shared_ptr<BusinessInfo::PromotionOptions> promotionOptions_ {};
      // Specifies whether to use a voucher. Valid values:
      // - **true**: A voucher is used.
      // - **false**: No voucher is used.
      // Default value: **false**.
      shared_ptr<bool> useCoupon_ {};
      // The WeChat product type.
      shared_ptr<string> weChatProType_ {};
      // The channel cookie value.
      shared_ptr<string> lxChannelCookieValue_ {};
    };

    virtual bool empty() const override { return this->businessInfo_ == nullptr
        && this->commodity_ == nullptr && this->couponNo_ == nullptr && this->fromApp_ == nullptr && this->orderType_ == nullptr && this->regionId_ == nullptr; };
    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline const CreateOrderRequest::BusinessInfo & getBusinessInfo() const { DARABONBA_PTR_GET_CONST(businessInfo_, CreateOrderRequest::BusinessInfo) };
    inline CreateOrderRequest::BusinessInfo getBusinessInfo() { DARABONBA_PTR_GET(businessInfo_, CreateOrderRequest::BusinessInfo) };
    inline CreateOrderRequest& setBusinessInfo(const CreateOrderRequest::BusinessInfo & businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };
    inline CreateOrderRequest& setBusinessInfo(CreateOrderRequest::BusinessInfo && businessInfo) { DARABONBA_PTR_SET_RVALUE(businessInfo_, businessInfo) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const CreateOrderRequest::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, CreateOrderRequest::Commodity) };
    inline CreateOrderRequest::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, CreateOrderRequest::Commodity) };
    inline CreateOrderRequest& setCommodity(const CreateOrderRequest::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline CreateOrderRequest& setCommodity(CreateOrderRequest::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateOrderRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string getFromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline CreateOrderRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The additional parameter for business information.
    shared_ptr<CreateOrderRequest::BusinessInfo> businessInfo_ {};
    // The order configuration information.
    // 
    // This parameter is required.
    shared_ptr<CreateOrderRequest::Commodity> commodity_ {};
    // The coupon code. Default value: `youhuiquan_promotion_option_id_for_blank`.
    shared_ptr<string> couponNo_ {};
    // The request source. Valid values:
    // - **OpenApi**: The request is sent from OpenAPI.
    // - **mongo_buy**: The request is sent from the console.
    shared_ptr<string> fromApp_ {};
    // The order type. Valid values:
    // - Buy
    // Default value: Buy.
    shared_ptr<string> orderType_ {};
    // The region ID. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
