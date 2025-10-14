// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATABANDWIDTHFEEDATASBANDWIDTHFEEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATABANDWIDTHFEEDATASBANDWIDTHFEEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& obj) { 
      DARABONBA_PTR_TO_JSON(CostCode, costCode_);
      DARABONBA_PTR_TO_JSON(CostName, costName_);
      DARABONBA_PTR_TO_JSON(CostVal, costVal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCode, costCode_);
      DARABONBA_PTR_FROM_JSON(CostName, costName_);
      DARABONBA_PTR_FROM_JSON(CostVal, costVal_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& operator=(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costCode_ == nullptr
        && return this->costName_ == nullptr && return this->costVal_ == nullptr; };
    // costCode Field Functions 
    bool hasCostCode() const { return this->costCode_ != nullptr;};
    void deleteCostCode() { this->costCode_ = nullptr;};
    inline string costCode() const { DARABONBA_PTR_GET_DEFAULT(costCode_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostCode(string costCode) { DARABONBA_PTR_SET_VALUE(costCode_, costCode) };


    // costName Field Functions 
    bool hasCostName() const { return this->costName_ != nullptr;};
    void deleteCostName() { this->costName_ = nullptr;};
    inline string costName() const { DARABONBA_PTR_GET_DEFAULT(costName_, "") };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostName(string costName) { DARABONBA_PTR_SET_VALUE(costName_, costName) };


    // costVal Field Functions 
    bool hasCostVal() const { return this->costVal_ != nullptr;};
    void deleteCostVal() { this->costVal_ = nullptr;};
    inline int32_t costVal() const { DARABONBA_PTR_GET_DEFAULT(costVal_, 0) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostVal(int32_t costVal) { DARABONBA_PTR_SET_VALUE(costVal_, costVal) };


  protected:
    // The code of the bandwidth plan.
    std::shared_ptr<string> costCode_ = nullptr;
    // The name of the bandwidth plan.
    std::shared_ptr<string> costName_ = nullptr;
    // The bandwidth consumption. Unit: bit/second.
    std::shared_ptr<int32_t> costVal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
