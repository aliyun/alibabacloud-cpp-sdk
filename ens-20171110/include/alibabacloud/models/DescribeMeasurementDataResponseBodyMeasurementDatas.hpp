// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODYMEASUREMENTDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMeasurementDataResponseBodyMeasurementDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBodyMeasurementDatas& obj) { 
      DARABONBA_PTR_TO_JSON(MeasurementData, measurementData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBodyMeasurementDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(MeasurementData, measurementData_);
    };
    DescribeMeasurementDataResponseBodyMeasurementDatas() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatas(const DescribeMeasurementDataResponseBodyMeasurementDatas &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatas(DescribeMeasurementDataResponseBodyMeasurementDatas &&) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBodyMeasurementDatas() = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatas& operator=(const DescribeMeasurementDataResponseBodyMeasurementDatas &) = default ;
    DescribeMeasurementDataResponseBodyMeasurementDatas& operator=(DescribeMeasurementDataResponseBodyMeasurementDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->measurementData_ == nullptr; };
    // measurementData Field Functions 
    bool hasMeasurementData() const { return this->measurementData_ != nullptr;};
    void deleteMeasurementData() { this->measurementData_ = nullptr;};
    inline const vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData> & measurementData() const { DARABONBA_PTR_GET_CONST(measurementData_, vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData>) };
    inline vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData> measurementData() { DARABONBA_PTR_GET(measurementData_, vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData>) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatas& setMeasurementData(const vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData> & measurementData) { DARABONBA_PTR_SET_VALUE(measurementData_, measurementData) };
    inline DescribeMeasurementDataResponseBodyMeasurementDatas& setMeasurementData(vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData> && measurementData) { DARABONBA_PTR_SET_RVALUE(measurementData_, measurementData) };


  protected:
    std::shared_ptr<vector<Models::DescribeMeasurementDataResponseBodyMeasurementDatasMeasurementData>> measurementData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
