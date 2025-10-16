// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBANDWIDTHRESOURCEPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBANDWIDTHRESOURCEPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateBandwidthResourcePackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBandwidthResourcePackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(PackageSize, packageSize_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBandwidthResourcePackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(PackageSize, packageSize_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateBandwidthResourcePackagesRequest() = default ;
    CreateBandwidthResourcePackagesRequest(const CreateBandwidthResourcePackagesRequest &) = default ;
    CreateBandwidthResourcePackagesRequest(CreateBandwidthResourcePackagesRequest &&) = default ;
    CreateBandwidthResourcePackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBandwidthResourcePackagesRequest() = default ;
    CreateBandwidthResourcePackagesRequest& operator=(const CreateBandwidthResourcePackagesRequest &) = default ;
    CreateBandwidthResourcePackagesRequest& operator=(CreateBandwidthResourcePackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->autoPay_ == nullptr && return this->packageSize_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr
        && return this->regionId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateBandwidthResourcePackagesRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateBandwidthResourcePackagesRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // packageSize Field Functions 
    bool hasPackageSize() const { return this->packageSize_ != nullptr;};
    void deletePackageSize() { this->packageSize_ = nullptr;};
    inline int32_t packageSize() const { DARABONBA_PTR_GET_DEFAULT(packageSize_, 0) };
    inline CreateBandwidthResourcePackagesRequest& setPackageSize(int32_t packageSize) { DARABONBA_PTR_SET_VALUE(packageSize_, packageSize) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateBandwidthResourcePackagesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateBandwidthResourcePackagesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateBandwidthResourcePackagesRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBandwidthResourcePackagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The number of the data transfer plans that you want to create at the same time. Valid values: 1 to 20. Default value: 1.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable the auto-payment feature.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The size of the data transfer plan. Valid values: 10 to 1000. Unit: GiB.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> packageSize_ = nullptr;
    // The subscription duration. The valid values of this parameter vary based on the value of `PeriodUnit`.
    // 
    // *   If `PeriodUnit` is set to `Month`, the valid values of Period are 1, 3, and 6.
    // *   If `PeriodUnit` is set to `Year`, the valid value of Period is 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month (default)
    // *   Year
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The ID of the promotional activity.
    std::shared_ptr<string> promotionId_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
