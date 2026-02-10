// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SingleData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SingleData& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SingleData& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SingleData() = default ;
      SingleData(const SingleData &) = default ;
      SingleData(SingleData &&) = default ;
      SingleData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SingleData() = default ;
      SingleData& operator=(const SingleData &) = default ;
      SingleData& operator=(SingleData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SingleData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SingleData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline SingleData& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the data type.
      shared_ptr<string> name_ {};
      // The type of the data.
      shared_ptr<string> type_ {};
      // The value in the single value chart.
      shared_ptr<int64_t> value_ {};
    };

    class MultipleData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultipleData& obj) { 
        DARABONBA_PTR_TO_JSON(Color, color_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MultipleData& obj) { 
        DARABONBA_PTR_FROM_JSON(Color, color_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MultipleData() = default ;
      MultipleData(const MultipleData &) = default ;
      MultipleData(MultipleData &&) = default ;
      MultipleData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultipleData() = default ;
      MultipleData& operator=(const MultipleData &) = default ;
      MultipleData& operator=(MultipleData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->color_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // color Field Functions 
      bool hasColor() const { return this->color_ != nullptr;};
      void deleteColor() { this->color_ = nullptr;};
      inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
      inline MultipleData& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MultipleData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MultipleData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline MultipleData& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The font color, which is an RGBA value.
      shared_ptr<string> color_ {};
      // The name of the data type.
      shared_ptr<string> name_ {};
      // The type of the data.
      shared_ptr<string> type_ {};
      // The attribute value.
      shared_ptr<int64_t> value_ {};
    };

    class CoordinateData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CoordinateData& obj) { 
        DARABONBA_PTR_TO_JSON(XAxis, XAxis_);
        DARABONBA_PTR_TO_JSON(YAxisList, YAxisList_);
      };
      friend void from_json(const Darabonba::Json& j, CoordinateData& obj) { 
        DARABONBA_PTR_FROM_JSON(XAxis, XAxis_);
        DARABONBA_PTR_FROM_JSON(YAxisList, YAxisList_);
      };
      CoordinateData() = default ;
      CoordinateData(const CoordinateData &) = default ;
      CoordinateData(CoordinateData &&) = default ;
      CoordinateData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CoordinateData() = default ;
      CoordinateData& operator=(const CoordinateData &) = default ;
      CoordinateData& operator=(CoordinateData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class YAxisList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const YAxisList& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, YAxisList& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        YAxisList() = default ;
        YAxisList(const YAxisList &) = default ;
        YAxisList(YAxisList &&) = default ;
        YAxisList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~YAxisList() = default ;
        YAxisList& operator=(const YAxisList &) = default ;
        YAxisList& operator=(YAxisList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->subType_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline YAxisList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline YAxisList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline YAxisList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
        inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
        inline YAxisList& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline YAxisList& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        // The name of the data type.
        shared_ptr<string> name_ {};
        // The subtype data of the chart.
        shared_ptr<string> subType_ {};
        // The type of the data.
        shared_ptr<string> type_ {};
        // The values of the y-axis that corresponds to x-axis points.
        shared_ptr<vector<string>> value_ {};
      };

      virtual bool empty() const override { return this->XAxis_ == nullptr
        && this->YAxisList_ == nullptr; };
      // XAxis Field Functions 
      bool hasXAxis() const { return this->XAxis_ != nullptr;};
      void deleteXAxis() { this->XAxis_ = nullptr;};
      inline const vector<string> & getXAxis() const { DARABONBA_PTR_GET_CONST(XAxis_, vector<string>) };
      inline vector<string> getXAxis() { DARABONBA_PTR_GET(XAxis_, vector<string>) };
      inline CoordinateData& setXAxis(const vector<string> & XAxis) { DARABONBA_PTR_SET_VALUE(XAxis_, XAxis) };
      inline CoordinateData& setXAxis(vector<string> && XAxis) { DARABONBA_PTR_SET_RVALUE(XAxis_, XAxis) };


      // YAxisList Field Functions 
      bool hasYAxisList() const { return this->YAxisList_ != nullptr;};
      void deleteYAxisList() { this->YAxisList_ = nullptr;};
      inline const vector<CoordinateData::YAxisList> & getYAxisList() const { DARABONBA_PTR_GET_CONST(YAxisList_, vector<CoordinateData::YAxisList>) };
      inline vector<CoordinateData::YAxisList> getYAxisList() { DARABONBA_PTR_GET(YAxisList_, vector<CoordinateData::YAxisList>) };
      inline CoordinateData& setYAxisList(const vector<CoordinateData::YAxisList> & yAxisList) { DARABONBA_PTR_SET_VALUE(YAxisList_, yAxisList) };
      inline CoordinateData& setYAxisList(vector<CoordinateData::YAxisList> && yAxisList) { DARABONBA_PTR_SET_RVALUE(YAxisList_, yAxisList) };


    protected:
      // The x-axis values.
      shared_ptr<vector<string>> XAxis_ {};
      // The y-axis values.
      shared_ptr<vector<CoordinateData::YAxisList>> YAxisList_ {};
    };

    class AllChartSubTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllChartSubTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(SubTypeName, subTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, AllChartSubTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(SubTypeName, subTypeName_);
      };
      AllChartSubTypeList() = default ;
      AllChartSubTypeList(const AllChartSubTypeList &) = default ;
      AllChartSubTypeList(AllChartSubTypeList &&) = default ;
      AllChartSubTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllChartSubTypeList() = default ;
      AllChartSubTypeList& operator=(const AllChartSubTypeList &) = default ;
      AllChartSubTypeList& operator=(AllChartSubTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->subType_ == nullptr
        && this->subTypeName_ == nullptr; };
      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline AllChartSubTypeList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // subTypeName Field Functions 
      bool hasSubTypeName() const { return this->subTypeName_ != nullptr;};
      void deleteSubTypeName() { this->subTypeName_ = nullptr;};
      inline string getSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(subTypeName_, "") };
      inline AllChartSubTypeList& setSubTypeName(string subTypeName) { DARABONBA_PTR_SET_VALUE(subTypeName_, subTypeName) };


    protected:
      // The subtype of the chart.
      shared_ptr<string> subType_ {};
      // The name of the chart subtype.
      shared_ptr<string> subTypeName_ {};
    };

    virtual bool empty() const override { return this->allChartSubTypeList_ == nullptr
        && this->chartDataType_ == nullptr && this->chartSubTypeList_ == nullptr && this->chartType_ == nullptr && this->coordinateData_ == nullptr && this->multipleData_ == nullptr
        && this->propertyArrayValue_ == nullptr && this->propertyValue_ == nullptr && this->properyArrayValue_ == nullptr && this->requestId_ == nullptr && this->singleData_ == nullptr; };
    // allChartSubTypeList Field Functions 
    bool hasAllChartSubTypeList() const { return this->allChartSubTypeList_ != nullptr;};
    void deleteAllChartSubTypeList() { this->allChartSubTypeList_ = nullptr;};
    inline const vector<DescribeChartDataResponseBody::AllChartSubTypeList> & getAllChartSubTypeList() const { DARABONBA_PTR_GET_CONST(allChartSubTypeList_, vector<DescribeChartDataResponseBody::AllChartSubTypeList>) };
    inline vector<DescribeChartDataResponseBody::AllChartSubTypeList> getAllChartSubTypeList() { DARABONBA_PTR_GET(allChartSubTypeList_, vector<DescribeChartDataResponseBody::AllChartSubTypeList>) };
    inline DescribeChartDataResponseBody& setAllChartSubTypeList(const vector<DescribeChartDataResponseBody::AllChartSubTypeList> & allChartSubTypeList) { DARABONBA_PTR_SET_VALUE(allChartSubTypeList_, allChartSubTypeList) };
    inline DescribeChartDataResponseBody& setAllChartSubTypeList(vector<DescribeChartDataResponseBody::AllChartSubTypeList> && allChartSubTypeList) { DARABONBA_PTR_SET_RVALUE(allChartSubTypeList_, allChartSubTypeList) };


    // chartDataType Field Functions 
    bool hasChartDataType() const { return this->chartDataType_ != nullptr;};
    void deleteChartDataType() { this->chartDataType_ = nullptr;};
    inline string getChartDataType() const { DARABONBA_PTR_GET_DEFAULT(chartDataType_, "") };
    inline DescribeChartDataResponseBody& setChartDataType(string chartDataType) { DARABONBA_PTR_SET_VALUE(chartDataType_, chartDataType) };


    // chartSubTypeList Field Functions 
    bool hasChartSubTypeList() const { return this->chartSubTypeList_ != nullptr;};
    void deleteChartSubTypeList() { this->chartSubTypeList_ = nullptr;};
    inline const vector<string> & getChartSubTypeList() const { DARABONBA_PTR_GET_CONST(chartSubTypeList_, vector<string>) };
    inline vector<string> getChartSubTypeList() { DARABONBA_PTR_GET(chartSubTypeList_, vector<string>) };
    inline DescribeChartDataResponseBody& setChartSubTypeList(const vector<string> & chartSubTypeList) { DARABONBA_PTR_SET_VALUE(chartSubTypeList_, chartSubTypeList) };
    inline DescribeChartDataResponseBody& setChartSubTypeList(vector<string> && chartSubTypeList) { DARABONBA_PTR_SET_RVALUE(chartSubTypeList_, chartSubTypeList) };


    // chartType Field Functions 
    bool hasChartType() const { return this->chartType_ != nullptr;};
    void deleteChartType() { this->chartType_ = nullptr;};
    inline string getChartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
    inline DescribeChartDataResponseBody& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


    // coordinateData Field Functions 
    bool hasCoordinateData() const { return this->coordinateData_ != nullptr;};
    void deleteCoordinateData() { this->coordinateData_ = nullptr;};
    inline const DescribeChartDataResponseBody::CoordinateData & getCoordinateData() const { DARABONBA_PTR_GET_CONST(coordinateData_, DescribeChartDataResponseBody::CoordinateData) };
    inline DescribeChartDataResponseBody::CoordinateData getCoordinateData() { DARABONBA_PTR_GET(coordinateData_, DescribeChartDataResponseBody::CoordinateData) };
    inline DescribeChartDataResponseBody& setCoordinateData(const DescribeChartDataResponseBody::CoordinateData & coordinateData) { DARABONBA_PTR_SET_VALUE(coordinateData_, coordinateData) };
    inline DescribeChartDataResponseBody& setCoordinateData(DescribeChartDataResponseBody::CoordinateData && coordinateData) { DARABONBA_PTR_SET_RVALUE(coordinateData_, coordinateData) };


    // multipleData Field Functions 
    bool hasMultipleData() const { return this->multipleData_ != nullptr;};
    void deleteMultipleData() { this->multipleData_ = nullptr;};
    inline const vector<DescribeChartDataResponseBody::MultipleData> & getMultipleData() const { DARABONBA_PTR_GET_CONST(multipleData_, vector<DescribeChartDataResponseBody::MultipleData>) };
    inline vector<DescribeChartDataResponseBody::MultipleData> getMultipleData() { DARABONBA_PTR_GET(multipleData_, vector<DescribeChartDataResponseBody::MultipleData>) };
    inline DescribeChartDataResponseBody& setMultipleData(const vector<DescribeChartDataResponseBody::MultipleData> & multipleData) { DARABONBA_PTR_SET_VALUE(multipleData_, multipleData) };
    inline DescribeChartDataResponseBody& setMultipleData(vector<DescribeChartDataResponseBody::MultipleData> && multipleData) { DARABONBA_PTR_SET_RVALUE(multipleData_, multipleData) };


    // propertyArrayValue Field Functions 
    bool hasPropertyArrayValue() const { return this->propertyArrayValue_ != nullptr;};
    void deletePropertyArrayValue() { this->propertyArrayValue_ = nullptr;};
    inline string getPropertyArrayValue() const { DARABONBA_PTR_GET_DEFAULT(propertyArrayValue_, "") };
    inline DescribeChartDataResponseBody& setPropertyArrayValue(string propertyArrayValue) { DARABONBA_PTR_SET_VALUE(propertyArrayValue_, propertyArrayValue) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline DescribeChartDataResponseBody& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


    // properyArrayValue Field Functions 
    bool hasProperyArrayValue() const { return this->properyArrayValue_ != nullptr;};
    void deleteProperyArrayValue() { this->properyArrayValue_ = nullptr;};
    inline string getProperyArrayValue() const { DARABONBA_PTR_GET_DEFAULT(properyArrayValue_, "") };
    inline DescribeChartDataResponseBody& setProperyArrayValue(string properyArrayValue) { DARABONBA_PTR_SET_VALUE(properyArrayValue_, properyArrayValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChartDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // singleData Field Functions 
    bool hasSingleData() const { return this->singleData_ != nullptr;};
    void deleteSingleData() { this->singleData_ = nullptr;};
    inline const DescribeChartDataResponseBody::SingleData & getSingleData() const { DARABONBA_PTR_GET_CONST(singleData_, DescribeChartDataResponseBody::SingleData) };
    inline DescribeChartDataResponseBody::SingleData getSingleData() { DARABONBA_PTR_GET(singleData_, DescribeChartDataResponseBody::SingleData) };
    inline DescribeChartDataResponseBody& setSingleData(const DescribeChartDataResponseBody::SingleData & singleData) { DARABONBA_PTR_SET_VALUE(singleData_, singleData) };
    inline DescribeChartDataResponseBody& setSingleData(DescribeChartDataResponseBody::SingleData && singleData) { DARABONBA_PTR_SET_RVALUE(singleData_, singleData) };


  protected:
    // The valid values for all subtypes of the chart.
    shared_ptr<vector<DescribeChartDataResponseBody::AllChartSubTypeList>> allChartSubTypeList_ {};
    // The data type of the chart. Valid values:
    // 
    // *   **commonCoordinate**
    // *   **timeCoordinate**
    // *   **multipleValue**
    // *   **singleValue**
    // *   **propertyValue**
    // *   **propertyArrayValue**
    shared_ptr<string> chartDataType_ {};
    // The subtype values in which the chart is selected.
    shared_ptr<vector<string>> chartSubTypeList_ {};
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
    shared_ptr<string> chartType_ {};
    // The coordinate data.
    shared_ptr<DescribeChartDataResponseBody::CoordinateData> coordinateData_ {};
    // The values in the multi-value charts.
    shared_ptr<vector<DescribeChartDataResponseBody::MultipleData>> multipleData_ {};
    // The attribute value of the array chart.
    shared_ptr<string> propertyArrayValue_ {};
    // The data of the chart.
    shared_ptr<string> propertyValue_ {};
    // The array data of the chart.
    shared_ptr<string> properyArrayValue_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data of the single value chart.
    shared_ptr<DescribeChartDataResponseBody::SingleData> singleData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
