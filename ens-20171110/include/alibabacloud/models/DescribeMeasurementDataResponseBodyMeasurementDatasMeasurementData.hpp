// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas.hpp>
#include <alibabacloud/models/DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData.hpp>
#include <alibabacloud/models/DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
      DARABONBA_PTR_TO_JSON(ChargeModel, chargeModel_);
      DARABONBA_PTR_TO_JSON(CostCycle, costCycle_);
      DARABONBA_PTR_TO_JSON(CostEndTime, costEndTime_);
      DARABONBA_PTR_TO_JSON(CostStartTime, costStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceFeeData, resourceFeeData_);
      DARABONBA_PTR_TO_JSON(ResourceFeeDataDetails, resourceFeeDataDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
      DARABONBA_PTR_FROM_JSON(ChargeModel, chargeModel_);
      DARABONBA_PTR_FROM_JSON(CostCycle, costCycle_);
      DARABONBA_PTR_FROM_JSON(CostEndTime, costEndTime_);
      DARABONBA_PTR_FROM_JSON(CostStartTime, costStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceFeeData, resourceFeeData_);
      DARABONBA_PTR_FROM_JSON(ResourceFeeDataDetails, resourceFeeDataDetails_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& operator=(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandWidthFeeDatas_ == nullptr
        && return this->chargeModel_ == nullptr && return this->costCycle_ == nullptr && return this->costEndTime_ == nullptr && return this->costStartTime_ == nullptr && return this->resourceFeeData_ == nullptr
        && return this->resourceFeeDataDetails_ == nullptr; };
    // bandWidthFeeDatas Field Functions 
    bool hasBandWidthFeeDatas() const { return this->bandWidthFeeDatas_ != nullptr;};
    void deleteBandWidthFeeDatas() { this->bandWidthFeeDatas_ = nullptr;};
    inline const Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas & bandWidthFeeDatas() const { DARABONBA_PTR_GET_CONST(bandWidthFeeDatas_, Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas) };
    inline Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas bandWidthFeeDatas() { DARABONBA_PTR_GET(bandWidthFeeDatas_, Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setBandWidthFeeDatas(const Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas & bandWidthFeeDatas) { DARABONBA_PTR_SET_VALUE(bandWidthFeeDatas_, bandWidthFeeDatas) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setBandWidthFeeDatas(Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas && bandWidthFeeDatas) { DARABONBA_PTR_SET_RVALUE(bandWidthFeeDatas_, bandWidthFeeDatas) };


    // chargeModel Field Functions 
    bool hasChargeModel() const { return this->chargeModel_ != nullptr;};
    void deleteChargeModel() { this->chargeModel_ = nullptr;};
    inline string chargeModel() const { DARABONBA_PTR_GET_DEFAULT(chargeModel_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setChargeModel(string chargeModel) { DARABONBA_PTR_SET_VALUE(chargeModel_, chargeModel) };


    // costCycle Field Functions 
    bool hasCostCycle() const { return this->costCycle_ != nullptr;};
    void deleteCostCycle() { this->costCycle_ = nullptr;};
    inline string costCycle() const { DARABONBA_PTR_GET_DEFAULT(costCycle_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setCostCycle(string costCycle) { DARABONBA_PTR_SET_VALUE(costCycle_, costCycle) };


    // costEndTime Field Functions 
    bool hasCostEndTime() const { return this->costEndTime_ != nullptr;};
    void deleteCostEndTime() { this->costEndTime_ = nullptr;};
    inline string costEndTime() const { DARABONBA_PTR_GET_DEFAULT(costEndTime_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setCostEndTime(string costEndTime) { DARABONBA_PTR_SET_VALUE(costEndTime_, costEndTime) };


    // costStartTime Field Functions 
    bool hasCostStartTime() const { return this->costStartTime_ != nullptr;};
    void deleteCostStartTime() { this->costStartTime_ = nullptr;};
    inline string costStartTime() const { DARABONBA_PTR_GET_DEFAULT(costStartTime_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setCostStartTime(string costStartTime) { DARABONBA_PTR_SET_VALUE(costStartTime_, costStartTime) };


    // resourceFeeData Field Functions 
    bool hasResourceFeeData() const { return this->resourceFeeData_ != nullptr;};
    void deleteResourceFeeData() { this->resourceFeeData_ = nullptr;};
    inline const Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData & resourceFeeData() const { DARABONBA_PTR_GET_CONST(resourceFeeData_, Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData) };
    inline Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData resourceFeeData() { DARABONBA_PTR_GET(resourceFeeData_, Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setResourceFeeData(const Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData & resourceFeeData) { DARABONBA_PTR_SET_VALUE(resourceFeeData_, resourceFeeData) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setResourceFeeData(Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData && resourceFeeData) { DARABONBA_PTR_SET_RVALUE(resourceFeeData_, resourceFeeData) };


    // resourceFeeDataDetails Field Functions 
    bool hasResourceFeeDataDetails() const { return this->resourceFeeDataDetails_ != nullptr;};
    void deleteResourceFeeDataDetails() { this->resourceFeeDataDetails_ = nullptr;};
    inline const Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails & resourceFeeDataDetails() const { DARABONBA_PTR_GET_CONST(resourceFeeDataDetails_, Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails) };
    inline Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails resourceFeeDataDetails() { DARABONBA_PTR_GET(resourceFeeDataDetails_, Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setResourceFeeDataDetails(const Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails & resourceFeeDataDetails) { DARABONBA_PTR_SET_VALUE(resourceFeeDataDetails_, resourceFeeDataDetails) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData& setResourceFeeDataDetails(Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails && resourceFeeDataDetails) { DARABONBA_PTR_SET_RVALUE(resourceFeeDataDetails_, resourceFeeDataDetails) };


  protected:
    // The bandwidth data returned.
    std::shared_ptr<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas> bandWidthFeeDatas_ = nullptr;
    // The metering method. Valid values:
    // 
    // *   ChargeByUnified: unified metering.
    // *   ChargeByGrade: differential metering.
    std::shared_ptr<string> chargeModel_ = nullptr;
    // The metering cycle.
    std::shared_ptr<string> costCycle_ = nullptr;
    // The end time of the metering cycle.
    std::shared_ptr<string> costEndTime_ = nullptr;
    // The start time of the metering cycle.
    std::shared_ptr<string> costStartTime_ = nullptr;
    // The information about computing resources.
    std::shared_ptr<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeData> resourceFeeData_ = nullptr;
    // Details of the computing resources.
    std::shared_ptr<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataResourceFeeDataDetails> resourceFeeDataDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
