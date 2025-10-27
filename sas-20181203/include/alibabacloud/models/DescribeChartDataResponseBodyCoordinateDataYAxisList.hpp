// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYCOORDINATEDATAYAXISLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYCOORDINATEDATAYAXISLIST_HPP_
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
  class DescribeChartDataResponseBodyCoordinateDataYAxisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartDataResponseBodyCoordinateDataYAxisList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartDataResponseBodyCoordinateDataYAxisList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeChartDataResponseBodyCoordinateDataYAxisList() = default ;
    DescribeChartDataResponseBodyCoordinateDataYAxisList(const DescribeChartDataResponseBodyCoordinateDataYAxisList &) = default ;
    DescribeChartDataResponseBodyCoordinateDataYAxisList(DescribeChartDataResponseBodyCoordinateDataYAxisList &&) = default ;
    DescribeChartDataResponseBodyCoordinateDataYAxisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartDataResponseBodyCoordinateDataYAxisList() = default ;
    DescribeChartDataResponseBodyCoordinateDataYAxisList& operator=(const DescribeChartDataResponseBodyCoordinateDataYAxisList &) = default ;
    DescribeChartDataResponseBodyCoordinateDataYAxisList& operator=(DescribeChartDataResponseBodyCoordinateDataYAxisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->subType_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeChartDataResponseBodyCoordinateDataYAxisList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline DescribeChartDataResponseBodyCoordinateDataYAxisList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeChartDataResponseBodyCoordinateDataYAxisList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeChartDataResponseBodyCoordinateDataYAxisList& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeChartDataResponseBodyCoordinateDataYAxisList& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The name of the data type.
    std::shared_ptr<string> name_ = nullptr;
    // The subtype data of the chart.
    std::shared_ptr<string> subType_ = nullptr;
    // The type of the data.
    std::shared_ptr<string> type_ = nullptr;
    // The values of the y-axis that corresponds to x-axis points.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
