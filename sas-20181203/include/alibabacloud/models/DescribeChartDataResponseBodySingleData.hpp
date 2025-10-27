// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYSINGLEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYSINGLEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartDataResponseBodySingleData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartDataResponseBodySingleData& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartDataResponseBodySingleData& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeChartDataResponseBodySingleData() = default ;
    DescribeChartDataResponseBodySingleData(const DescribeChartDataResponseBodySingleData &) = default ;
    DescribeChartDataResponseBodySingleData(DescribeChartDataResponseBodySingleData &&) = default ;
    DescribeChartDataResponseBodySingleData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartDataResponseBodySingleData() = default ;
    DescribeChartDataResponseBodySingleData& operator=(const DescribeChartDataResponseBodySingleData &) = default ;
    DescribeChartDataResponseBodySingleData& operator=(DescribeChartDataResponseBodySingleData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeChartDataResponseBodySingleData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeChartDataResponseBodySingleData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline DescribeChartDataResponseBodySingleData& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the data type.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the data.
    std::shared_ptr<string> type_ = nullptr;
    // The value in the single value chart.
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
