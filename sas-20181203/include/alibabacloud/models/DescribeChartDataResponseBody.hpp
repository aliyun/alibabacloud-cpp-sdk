// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChartDataResponseBodyAllChartSubTypeList.hpp>
#include <alibabacloud/models/DescribeChartDataResponseBodyCoordinateData.hpp>
#include <alibabacloud/models/DescribeChartDataResponseBodyMultipleData.hpp>
#include <alibabacloud/models/DescribeChartDataResponseBodySingleData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllChartSubTypeList, allChartSubTypeList_);
      DARABONBA_PTR_TO_JSON(ChartDataType, chartDataType_);
      DARABONBA_PTR_TO_JSON(ChartSubTypeList, chartSubTypeList_);
      DARABONBA_PTR_TO_JSON(ChartType, chartType_);
      DARABONBA_PTR_TO_JSON(CoordinateData, coordinateData_);
      DARABONBA_PTR_TO_JSON(MultipleData, multipleData_);
      DARABONBA_PTR_TO_JSON(PropertyArrayValue, propertyArrayValue_);
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
      DARABONBA_PTR_TO_JSON(ProperyArrayValue, properyArrayValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SingleData, singleData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllChartSubTypeList, allChartSubTypeList_);
      DARABONBA_PTR_FROM_JSON(ChartDataType, chartDataType_);
      DARABONBA_PTR_FROM_JSON(ChartSubTypeList, chartSubTypeList_);
      DARABONBA_PTR_FROM_JSON(ChartType, chartType_);
      DARABONBA_PTR_FROM_JSON(CoordinateData, coordinateData_);
      DARABONBA_PTR_FROM_JSON(MultipleData, multipleData_);
      DARABONBA_PTR_FROM_JSON(PropertyArrayValue, propertyArrayValue_);
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
      DARABONBA_PTR_FROM_JSON(ProperyArrayValue, properyArrayValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SingleData, singleData_);
    };
    DescribeChartDataResponseBody() = default ;
    DescribeChartDataResponseBody(const DescribeChartDataResponseBody &) = default ;
    DescribeChartDataResponseBody(DescribeChartDataResponseBody &&) = default ;
    DescribeChartDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartDataResponseBody() = default ;
    DescribeChartDataResponseBody& operator=(const DescribeChartDataResponseBody &) = default ;
    DescribeChartDataResponseBody& operator=(DescribeChartDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allChartSubTypeList_ != nullptr
        && this->chartDataType_ != nullptr && this->chartSubTypeList_ != nullptr && this->chartType_ != nullptr && this->coordinateData_ != nullptr && this->multipleData_ != nullptr
        && this->propertyArrayValue_ != nullptr && this->propertyValue_ != nullptr && this->properyArrayValue_ != nullptr && this->requestId_ != nullptr && this->singleData_ != nullptr; };
    // allChartSubTypeList Field Functions 
    bool hasAllChartSubTypeList() const { return this->allChartSubTypeList_ != nullptr;};
    void deleteAllChartSubTypeList() { this->allChartSubTypeList_ = nullptr;};
    inline const vector<DescribeChartDataResponseBodyAllChartSubTypeList> & allChartSubTypeList() const { DARABONBA_PTR_GET_CONST(allChartSubTypeList_, vector<DescribeChartDataResponseBodyAllChartSubTypeList>) };
    inline vector<DescribeChartDataResponseBodyAllChartSubTypeList> allChartSubTypeList() { DARABONBA_PTR_GET(allChartSubTypeList_, vector<DescribeChartDataResponseBodyAllChartSubTypeList>) };
    inline DescribeChartDataResponseBody& setAllChartSubTypeList(const vector<DescribeChartDataResponseBodyAllChartSubTypeList> & allChartSubTypeList) { DARABONBA_PTR_SET_VALUE(allChartSubTypeList_, allChartSubTypeList) };
    inline DescribeChartDataResponseBody& setAllChartSubTypeList(vector<DescribeChartDataResponseBodyAllChartSubTypeList> && allChartSubTypeList) { DARABONBA_PTR_SET_RVALUE(allChartSubTypeList_, allChartSubTypeList) };


    // chartDataType Field Functions 
    bool hasChartDataType() const { return this->chartDataType_ != nullptr;};
    void deleteChartDataType() { this->chartDataType_ = nullptr;};
    inline string chartDataType() const { DARABONBA_PTR_GET_DEFAULT(chartDataType_, "") };
    inline DescribeChartDataResponseBody& setChartDataType(string chartDataType) { DARABONBA_PTR_SET_VALUE(chartDataType_, chartDataType) };


    // chartSubTypeList Field Functions 
    bool hasChartSubTypeList() const { return this->chartSubTypeList_ != nullptr;};
    void deleteChartSubTypeList() { this->chartSubTypeList_ = nullptr;};
    inline const vector<string> & chartSubTypeList() const { DARABONBA_PTR_GET_CONST(chartSubTypeList_, vector<string>) };
    inline vector<string> chartSubTypeList() { DARABONBA_PTR_GET(chartSubTypeList_, vector<string>) };
    inline DescribeChartDataResponseBody& setChartSubTypeList(const vector<string> & chartSubTypeList) { DARABONBA_PTR_SET_VALUE(chartSubTypeList_, chartSubTypeList) };
    inline DescribeChartDataResponseBody& setChartSubTypeList(vector<string> && chartSubTypeList) { DARABONBA_PTR_SET_RVALUE(chartSubTypeList_, chartSubTypeList) };


    // chartType Field Functions 
    bool hasChartType() const { return this->chartType_ != nullptr;};
    void deleteChartType() { this->chartType_ = nullptr;};
    inline string chartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
    inline DescribeChartDataResponseBody& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


    // coordinateData Field Functions 
    bool hasCoordinateData() const { return this->coordinateData_ != nullptr;};
    void deleteCoordinateData() { this->coordinateData_ = nullptr;};
    inline const DescribeChartDataResponseBodyCoordinateData & coordinateData() const { DARABONBA_PTR_GET_CONST(coordinateData_, DescribeChartDataResponseBodyCoordinateData) };
    inline DescribeChartDataResponseBodyCoordinateData coordinateData() { DARABONBA_PTR_GET(coordinateData_, DescribeChartDataResponseBodyCoordinateData) };
    inline DescribeChartDataResponseBody& setCoordinateData(const DescribeChartDataResponseBodyCoordinateData & coordinateData) { DARABONBA_PTR_SET_VALUE(coordinateData_, coordinateData) };
    inline DescribeChartDataResponseBody& setCoordinateData(DescribeChartDataResponseBodyCoordinateData && coordinateData) { DARABONBA_PTR_SET_RVALUE(coordinateData_, coordinateData) };


    // multipleData Field Functions 
    bool hasMultipleData() const { return this->multipleData_ != nullptr;};
    void deleteMultipleData() { this->multipleData_ = nullptr;};
    inline const vector<DescribeChartDataResponseBodyMultipleData> & multipleData() const { DARABONBA_PTR_GET_CONST(multipleData_, vector<DescribeChartDataResponseBodyMultipleData>) };
    inline vector<DescribeChartDataResponseBodyMultipleData> multipleData() { DARABONBA_PTR_GET(multipleData_, vector<DescribeChartDataResponseBodyMultipleData>) };
    inline DescribeChartDataResponseBody& setMultipleData(const vector<DescribeChartDataResponseBodyMultipleData> & multipleData) { DARABONBA_PTR_SET_VALUE(multipleData_, multipleData) };
    inline DescribeChartDataResponseBody& setMultipleData(vector<DescribeChartDataResponseBodyMultipleData> && multipleData) { DARABONBA_PTR_SET_RVALUE(multipleData_, multipleData) };


    // propertyArrayValue Field Functions 
    bool hasPropertyArrayValue() const { return this->propertyArrayValue_ != nullptr;};
    void deletePropertyArrayValue() { this->propertyArrayValue_ = nullptr;};
    inline string propertyArrayValue() const { DARABONBA_PTR_GET_DEFAULT(propertyArrayValue_, "") };
    inline DescribeChartDataResponseBody& setPropertyArrayValue(string propertyArrayValue) { DARABONBA_PTR_SET_VALUE(propertyArrayValue_, propertyArrayValue) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline DescribeChartDataResponseBody& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


    // properyArrayValue Field Functions 
    bool hasProperyArrayValue() const { return this->properyArrayValue_ != nullptr;};
    void deleteProperyArrayValue() { this->properyArrayValue_ = nullptr;};
    inline string properyArrayValue() const { DARABONBA_PTR_GET_DEFAULT(properyArrayValue_, "") };
    inline DescribeChartDataResponseBody& setProperyArrayValue(string properyArrayValue) { DARABONBA_PTR_SET_VALUE(properyArrayValue_, properyArrayValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChartDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // singleData Field Functions 
    bool hasSingleData() const { return this->singleData_ != nullptr;};
    void deleteSingleData() { this->singleData_ = nullptr;};
    inline const DescribeChartDataResponseBodySingleData & singleData() const { DARABONBA_PTR_GET_CONST(singleData_, DescribeChartDataResponseBodySingleData) };
    inline DescribeChartDataResponseBodySingleData singleData() { DARABONBA_PTR_GET(singleData_, DescribeChartDataResponseBodySingleData) };
    inline DescribeChartDataResponseBody& setSingleData(const DescribeChartDataResponseBodySingleData & singleData) { DARABONBA_PTR_SET_VALUE(singleData_, singleData) };
    inline DescribeChartDataResponseBody& setSingleData(DescribeChartDataResponseBodySingleData && singleData) { DARABONBA_PTR_SET_RVALUE(singleData_, singleData) };


  protected:
    // The valid values for all subtypes of the chart.
    std::shared_ptr<vector<DescribeChartDataResponseBodyAllChartSubTypeList>> allChartSubTypeList_ = nullptr;
    // The data type of the chart. Valid values:
    // 
    // *   **commonCoordinate**
    // *   **timeCoordinate**
    // *   **multipleValue**
    // *   **singleValue**
    // *   **propertyValue**
    // *   **propertyArrayValue**
    std::shared_ptr<string> chartDataType_ = nullptr;
    // The subtype values in which the chart is selected.
    std::shared_ptr<vector<string>> chartSubTypeList_ = nullptr;
    // The type of the chart. Valid values:
    // 
    // *   **timeLine**
    // *   **timeBar**
    // *   **bar**
    // *   **line**
    // *   **pie**
    // *   **gauge**
    // *   **table**
    // *   **text**
    std::shared_ptr<string> chartType_ = nullptr;
    // The coordinate data.
    std::shared_ptr<DescribeChartDataResponseBodyCoordinateData> coordinateData_ = nullptr;
    // The values in the multi-value charts.
    std::shared_ptr<vector<DescribeChartDataResponseBodyMultipleData>> multipleData_ = nullptr;
    // The attribute value of the array chart.
    std::shared_ptr<string> propertyArrayValue_ = nullptr;
    // The data of the chart.
    std::shared_ptr<string> propertyValue_ = nullptr;
    // The array data of the chart.
    std::shared_ptr<string> properyArrayValue_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The data of the single value chart.
    std::shared_ptr<DescribeChartDataResponseBodySingleData> singleData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
