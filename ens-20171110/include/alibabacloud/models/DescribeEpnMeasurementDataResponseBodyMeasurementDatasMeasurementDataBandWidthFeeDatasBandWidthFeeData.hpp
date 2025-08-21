// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATABANDWIDTHFEEDATASBANDWIDTHFEEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATABANDWIDTHFEEDATASBANDWIDTHFEEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& obj) { 
      DARABONBA_PTR_TO_JSON(CostCode, costCode_);
      DARABONBA_PTR_TO_JSON(CostName, costName_);
      DARABONBA_PTR_TO_JSON(CostType, costType_);
      DARABONBA_PTR_TO_JSON(CostVal, costVal_);
      DARABONBA_PTR_TO_JSON(IspLine, ispLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCode, costCode_);
      DARABONBA_PTR_FROM_JSON(CostName, costName_);
      DARABONBA_PTR_FROM_JSON(CostType, costType_);
      DARABONBA_PTR_FROM_JSON(CostVal, costVal_);
      DARABONBA_PTR_FROM_JSON(IspLine, ispLine_);
    };
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData() = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData(const DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData(DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &&) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData() = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& operator=(const DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& operator=(DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCode_ != nullptr
        && this->costName_ != nullptr && this->costType_ != nullptr && this->costVal_ != nullptr && this->ispLine_ != nullptr; };
    // costCode Field Functions 
    bool hasCostCode() const { return this->costCode_ != nullptr;};
    void deleteCostCode() { this->costCode_ = nullptr;};
    inline string costCode() const { DARABONBA_PTR_GET_DEFAULT(costCode_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostCode(string costCode) { DARABONBA_PTR_SET_VALUE(costCode_, costCode) };


    // costName Field Functions 
    bool hasCostName() const { return this->costName_ != nullptr;};
    void deleteCostName() { this->costName_ = nullptr;};
    inline string costName() const { DARABONBA_PTR_GET_DEFAULT(costName_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostName(string costName) { DARABONBA_PTR_SET_VALUE(costName_, costName) };


    // costType Field Functions 
    bool hasCostType() const { return this->costType_ != nullptr;};
    void deleteCostType() { this->costType_ = nullptr;};
    inline string costType() const { DARABONBA_PTR_GET_DEFAULT(costType_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostType(string costType) { DARABONBA_PTR_SET_VALUE(costType_, costType) };


    // costVal Field Functions 
    bool hasCostVal() const { return this->costVal_ != nullptr;};
    void deleteCostVal() { this->costVal_ = nullptr;};
    inline int32_t costVal() const { DARABONBA_PTR_GET_DEFAULT(costVal_, 0) };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setCostVal(int32_t costVal) { DARABONBA_PTR_SET_VALUE(costVal_, costVal) };


    // ispLine Field Functions 
    bool hasIspLine() const { return this->ispLine_ != nullptr;};
    void deleteIspLine() { this->ispLine_ = nullptr;};
    inline string ispLine() const { DARABONBA_PTR_GET_DEFAULT(ispLine_, "") };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData& setIspLine(string ispLine) { DARABONBA_PTR_SET_VALUE(ispLine_, ispLine) };


  protected:
    // The code of the billable item.
    std::shared_ptr<string> costCode_ = nullptr;
    // The name of the billable item.
    std::shared_ptr<string> costName_ = nullptr;
    // Metering method
    // 
    // *   SpeedUp: bandwidth of intelligent acceleration
    // *   IntranetConnection: internal bandwidth
    std::shared_ptr<string> costType_ = nullptr;
    // The value of the billable item.
    std::shared_ptr<int32_t> costVal_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<string> ispLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
