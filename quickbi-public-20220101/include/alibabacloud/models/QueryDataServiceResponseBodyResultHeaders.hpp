// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICERESPONSEBODYRESULTHEADERS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICERESPONSEBODYRESULTHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceResponseBodyResultHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceResponseBodyResultHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceResponseBodyResultHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryDataServiceResponseBodyResultHeaders() = default ;
    QueryDataServiceResponseBodyResultHeaders(const QueryDataServiceResponseBodyResultHeaders &) = default ;
    QueryDataServiceResponseBodyResultHeaders(QueryDataServiceResponseBodyResultHeaders &&) = default ;
    QueryDataServiceResponseBodyResultHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceResponseBodyResultHeaders() = default ;
    QueryDataServiceResponseBodyResultHeaders& operator=(const QueryDataServiceResponseBodyResultHeaders &) = default ;
    QueryDataServiceResponseBodyResultHeaders& operator=(QueryDataServiceResponseBodyResultHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregator_ == nullptr
        && return this->column_ == nullptr && return this->dataType_ == nullptr && return this->granularity_ == nullptr && return this->label_ == nullptr && return this->type_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline string aggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, "") };
    inline QueryDataServiceResponseBodyResultHeaders& setAggregator(string aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline QueryDataServiceResponseBodyResultHeaders& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryDataServiceResponseBodyResultHeaders& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline QueryDataServiceResponseBodyResultHeaders& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline QueryDataServiceResponseBodyResultHeaders& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryDataServiceResponseBodyResultHeaders& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Aggregation operator. Only present for measure fields, such as SUM, AVG, and MAX.
    std::shared_ptr<string> aggregator_ = nullptr;
    // Field name, corresponding to the physical table field name.
    std::shared_ptr<string> column_ = nullptr;
    // The data type of the field. Common types include number, string, date, datetime, time, and geographic.
    std::shared_ptr<string> dataType_ = nullptr;
    // The granularity of the dimension field.
    // This field is returned only when the requested field is a date or geographic dimension, with the following possible values:
    // 
    // - Date granularity: yearRegion (year), monthRegion (month), weekRegion (week), dayRegion (day), hourRegion (hour), minRegion (minute), secRegion (second)
    // 
    // - Geographic granularity: COUNTRY (country level), PROVINCE (province level), CITY (city level), XIAN (district/county level), REGION (region)
    std::shared_ptr<string> granularity_ = nullptr;
    // Alias for the field, serving as the key in the map data row of the values parameter.
    std::shared_ptr<string> label_ = nullptr;
    // Field type, used to distinguish between dimension and measure fields.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
