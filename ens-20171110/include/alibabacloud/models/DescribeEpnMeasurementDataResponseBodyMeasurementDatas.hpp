// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODYMEASUREMENTDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODYMEASUREMENTDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnMeasurementDataResponseBodyMeasurementDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnMeasurementDataResponseBodyMeasurementDatas& obj) { 
      DARABONBA_PTR_TO_JSON(MeasurementData, measurementData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnMeasurementDataResponseBodyMeasurementDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(MeasurementData, measurementData_);
    };
    DescribeEpnMeasurementDataResponseBodyMeasurementDatas() = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatas(const DescribeEpnMeasurementDataResponseBodyMeasurementDatas &) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatas(DescribeEpnMeasurementDataResponseBodyMeasurementDatas &&) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnMeasurementDataResponseBodyMeasurementDatas() = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatas& operator=(const DescribeEpnMeasurementDataResponseBodyMeasurementDatas &) = default ;
    DescribeEpnMeasurementDataResponseBodyMeasurementDatas& operator=(DescribeEpnMeasurementDataResponseBodyMeasurementDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->measurementData_ == nullptr; };
    // measurementData Field Functions 
    bool hasMeasurementData() const { return this->measurementData_ != nullptr;};
    void deleteMeasurementData() { this->measurementData_ = nullptr;};
    inline const vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData> & measurementData() const { DARABONBA_PTR_GET_CONST(measurementData_, vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData>) };
    inline vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData> measurementData() { DARABONBA_PTR_GET(measurementData_, vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData>) };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatas& setMeasurementData(const vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData> & measurementData) { DARABONBA_PTR_SET_VALUE(measurementData_, measurementData) };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatas& setMeasurementData(vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData> && measurementData) { DARABONBA_PTR_SET_RVALUE(measurementData_, measurementData) };


  protected:
    std::shared_ptr<vector<Models::DescribeEpnMeasurementDataResponseBodyMeasurementDatasMeasurementData>> measurementData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
