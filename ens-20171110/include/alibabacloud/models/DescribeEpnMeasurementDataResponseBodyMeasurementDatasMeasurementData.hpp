// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
      DARABONBA_PTR_TO_JSON(ChargeModel, chargeModel_);
      DARABONBA_PTR_TO_JSON(CostCycle, costCycle_);
      DARABONBA_PTR_TO_JSON(CostEndTime, costEndTime_);
      DARABONBA_PTR_TO_JSON(CostStartTime, costStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
      DARABONBA_PTR_FROM_JSON(ChargeModel, chargeModel_);
      DARABONBA_PTR_FROM_JSON(CostCycle, costCycle_);
      DARABONBA_PTR_FROM_JSON(CostEndTime, costEndTime_);
      DARABONBA_PTR_FROM_JSON(CostStartTime, costStartTime_);
    };
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData() = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData(const DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData &) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData(DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData &&) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData() = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& operator=(const DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData &) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& operator=(DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandWidthFeeDatas_ != nullptr
        && this->chargeModel_ != nullptr && this->costCycle_ != nullptr && this->costEndTime_ != nullptr && this->costStartTime_ != nullptr; };
    // bandWidthFeeDatas Field Functions 
    bool hasBandWidthFeeDatas() const { return this->bandWidthFeeDatas_ != nullptr;};
    void deleteBandWidthFeeDatas() { this->bandWidthFeeDatas_ = nullptr;};
    inline const Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas & bandWidthFeeDatas() const { DARABONBA_PTR_GET_CONST(bandWidthFeeDatas_, Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas) };
    inline Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas bandWidthFeeDatas() { DARABONBA_PTR_GET(bandWidthFeeDatas_, Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas) };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& setBandWidthFeeDatas(const Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas & bandWidthFeeDatas) { DARABONBA_PTR_SET_VALUE(bandWidthFeeDatas_, bandWidthFeeDatas) };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& setBandWidthFeeDatas(Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas && bandWidthFeeDatas) { DARABONBA_PTR_SET_RVALUE(bandWidthFeeDatas_, bandWidthFeeDatas) };


    // chargeModel Field Functions 
    bool hasChargeModel() const { return this->chargeModel_ != nullptr;};
    void deleteChargeModel() { this->chargeModel_ = nullptr;};
    inline string chargeModel() const { DARABONBA_PTR_GET_DEFAULT(chargeModel_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& setChargeModel(string chargeModel) { DARABONBA_PTR_SET_VALUE(chargeModel_, chargeModel) };


    // costCycle Field Functions 
    bool hasCostCycle() const { return this->costCycle_ != nullptr;};
    void deleteCostCycle() { this->costCycle_ = nullptr;};
    inline string costCycle() const { DARABONBA_PTR_GET_DEFAULT(costCycle_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& setCostCycle(string costCycle) { DARABONBA_PTR_SET_VALUE(costCycle_, costCycle) };


    // costEndTime Field Functions 
    bool hasCostEndTime() const { return this->costEndTime_ != nullptr;};
    void deleteCostEndTime() { this->costEndTime_ = nullptr;};
    inline string costEndTime() const { DARABONBA_PTR_GET_DEFAULT(costEndTime_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& setCostEndTime(string costEndTime) { DARABONBA_PTR_SET_VALUE(costEndTime_, costEndTime) };


    // costStartTime Field Functions 
    bool hasCostStartTime() const { return this->costStartTime_ != nullptr;};
    void deleteCostStartTime() { this->costStartTime_ = nullptr;};
    inline string costStartTime() const { DARABONBA_PTR_GET_DEFAULT(costStartTime_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData& setCostStartTime(string costStartTime) { DARABONBA_PTR_SET_VALUE(costStartTime_, costStartTime) };


  protected:
    // The bandwidth data returned.
    std::shared_ptr<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas> bandWidthFeeDatas_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
