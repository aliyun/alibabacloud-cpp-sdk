// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEpnMeasurementDataResponseBodyMeasurementDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnMeasurementDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MeasurementDatas, measurementDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MeasurementDatas, measurementDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEpnMeasurementDataResponseBody() = default ;
    DescribeEpnMeasurementDataResponseBody(const DescribeEpnMeasurementDataResponseBody &) = default ;
    DescribeEpnMeasurementDataResponseBody(DescribeEpnMeasurementDataResponseBody &&) = default ;
    DescribeEpnMeasurementDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnMeasurementDataResponseBody() = default ;
    DescribeEpnMeasurementDataResponseBody& operator=(const DescribeEpnMeasurementDataResponseBody &) = default ;
    DescribeEpnMeasurementDataResponseBody& operator=(DescribeEpnMeasurementDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->measurementDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // measurementDatas Field Functions 
    bool hasMeasurementDatas() const { return this->measurementDatas_ != nullptr;};
    void deleteMeasurementDatas() { this->measurementDatas_ = nullptr;};
    inline const DescribeEpnMeasurementDataResponseBodyMeasurementDatas & measurementDatas() const { DARABONBA_PTR_GET_CONST(measurementDatas_, DescribeEpnMeasurementDataResponseBodyMeasurementDatas) };
    inline DescribeEpnMeasurementDataResponseBodyMeasurementDatas measurementDatas() { DARABONBA_PTR_GET(measurementDatas_, DescribeEpnMeasurementDataResponseBodyMeasurementDatas) };
    inline DescribeEpnMeasurementDataResponseBody& setMeasurementDatas(const DescribeEpnMeasurementDataResponseBodyMeasurementDatas & measurementDatas) { DARABONBA_PTR_SET_VALUE(measurementDatas_, measurementDatas) };
    inline DescribeEpnMeasurementDataResponseBody& setMeasurementDatas(DescribeEpnMeasurementDataResponseBodyMeasurementDatas && measurementDatas) { DARABONBA_PTR_SET_RVALUE(measurementDatas_, measurementDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnMeasurementDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metering data returned.
    std::shared_ptr<DescribeEpnMeasurementDataResponseBodyMeasurementDatas> measurementDatas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
