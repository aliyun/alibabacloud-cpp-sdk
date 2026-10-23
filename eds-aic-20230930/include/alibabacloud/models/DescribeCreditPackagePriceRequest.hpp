// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCreditPackagePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditPackagePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(PackageAmount, packageAmount_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditPackagePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(PackageAmount, packageAmount_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    DescribeCreditPackagePriceRequest() = default ;
    DescribeCreditPackagePriceRequest(const DescribeCreditPackagePriceRequest &) = default ;
    DescribeCreditPackagePriceRequest(DescribeCreditPackagePriceRequest &&) = default ;
    DescribeCreditPackagePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditPackagePriceRequest() = default ;
    DescribeCreditPackagePriceRequest& operator=(const DescribeCreditPackagePriceRequest &) = default ;
    DescribeCreditPackagePriceRequest& operator=(DescribeCreditPackagePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditAmount_ == nullptr
        && this->packageAmount_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->promotionId_ == nullptr; };
    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline int32_t getCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, 0) };
    inline DescribeCreditPackagePriceRequest& setCreditAmount(int32_t creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // packageAmount Field Functions 
    bool hasPackageAmount() const { return this->packageAmount_ != nullptr;};
    void deletePackageAmount() { this->packageAmount_ = nullptr;};
    inline string getPackageAmount() const { DARABONBA_PTR_GET_DEFAULT(packageAmount_, "") };
    inline DescribeCreditPackagePriceRequest& setPackageAmount(string packageAmount) { DARABONBA_PTR_SET_VALUE(packageAmount_, packageAmount) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeCreditPackagePriceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeCreditPackagePriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeCreditPackagePriceRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    shared_ptr<int32_t> creditAmount_ {};
    shared_ptr<string> packageAmount_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
