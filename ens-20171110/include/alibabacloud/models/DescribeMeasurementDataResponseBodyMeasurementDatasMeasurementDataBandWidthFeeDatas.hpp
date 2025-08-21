// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATABANDWIDTHFEEDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATASMEASUREMENTDATABANDWIDTHFEEDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidthFeeData, bandWidthFeeData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidthFeeData, bandWidthFeeData_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas& operator=(DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandWidthFeeData_ != nullptr; };
    // bandWidthFeeData Field Functions 
    bool hasBandWidthFeeData() const { return this->bandWidthFeeData_ != nullptr;};
    void deleteBandWidthFeeData() { this->bandWidthFeeData_ = nullptr;};
    inline const vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData> & bandWidthFeeData() const { DARABONBA_PTR_GET_CONST(bandWidthFeeData_, vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData>) };
    inline vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData> bandWidthFeeData() { DARABONBA_PTR_GET(bandWidthFeeData_, vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData>) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas& setBandWidthFeeData(const vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData> & bandWidthFeeData) { DARABONBA_PTR_SET_VALUE(bandWidthFeeData_, bandWidthFeeData) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatas& setBandWidthFeeData(vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData> && bandWidthFeeData) { DARABONBA_PTR_SET_RVALUE(bandWidthFeeData_, bandWidthFeeData) };


  protected:
    std::shared_ptr<vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementDataBandWidthFeeDatasBandWidthFeeData>> bandWidthFeeData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
