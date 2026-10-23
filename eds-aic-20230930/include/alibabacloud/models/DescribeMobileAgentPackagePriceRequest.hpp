// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMobileAgentPackagePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMobileAgentPackagePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(MobileAgentPackageSpec, mobileAgentPackageSpec_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMobileAgentPackagePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(MobileAgentPackageSpec, mobileAgentPackageSpec_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    DescribeMobileAgentPackagePriceRequest() = default ;
    DescribeMobileAgentPackagePriceRequest(const DescribeMobileAgentPackagePriceRequest &) = default ;
    DescribeMobileAgentPackagePriceRequest(DescribeMobileAgentPackagePriceRequest &&) = default ;
    DescribeMobileAgentPackagePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMobileAgentPackagePriceRequest() = default ;
    DescribeMobileAgentPackagePriceRequest& operator=(const DescribeMobileAgentPackagePriceRequest &) = default ;
    DescribeMobileAgentPackagePriceRequest& operator=(DescribeMobileAgentPackagePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->bizRegionId_ == nullptr && this->creditAmount_ == nullptr && this->mobileAgentPackageSpec_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->promotionId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline DescribeMobileAgentPackagePriceRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeMobileAgentPackagePriceRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline int32_t getCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, 0) };
    inline DescribeMobileAgentPackagePriceRequest& setCreditAmount(int32_t creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // mobileAgentPackageSpec Field Functions 
    bool hasMobileAgentPackageSpec() const { return this->mobileAgentPackageSpec_ != nullptr;};
    void deleteMobileAgentPackageSpec() { this->mobileAgentPackageSpec_ = nullptr;};
    inline string getMobileAgentPackageSpec() const { DARABONBA_PTR_GET_DEFAULT(mobileAgentPackageSpec_, "") };
    inline DescribeMobileAgentPackagePriceRequest& setMobileAgentPackageSpec(string mobileAgentPackageSpec) { DARABONBA_PTR_SET_VALUE(mobileAgentPackageSpec_, mobileAgentPackageSpec) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMobileAgentPackagePriceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeMobileAgentPackagePriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeMobileAgentPackagePriceRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    shared_ptr<string> amount_ {};
    shared_ptr<string> bizRegionId_ {};
    shared_ptr<int32_t> creditAmount_ {};
    shared_ptr<string> mobileAgentPackageSpec_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
