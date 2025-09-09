// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEDBMONITORRESPONSEBODYDATAVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEDBMONITORRESPONSEBODYDATAVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceDbMonitorResponseBodyDataValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceDbMonitorResponseBodyDataValues& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceDbMonitorResponseBodyDataValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDrdsInstanceDbMonitorResponseBodyDataValues() = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyDataValues(const DescribeDrdsInstanceDbMonitorResponseBodyDataValues &) = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyDataValues(DescribeDrdsInstanceDbMonitorResponseBodyDataValues &&) = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyDataValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceDbMonitorResponseBodyDataValues() = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyDataValues& operator=(const DescribeDrdsInstanceDbMonitorResponseBodyDataValues &) = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyDataValues& operator=(DescribeDrdsInstanceDbMonitorResponseBodyDataValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->value_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline DescribeDrdsInstanceDbMonitorResponseBodyDataValues& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDrdsInstanceDbMonitorResponseBodyDataValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The time point when the value of monitoring data was obtained. The value is in the UNIX timestamp format. Unit: ms.
    std::shared_ptr<int64_t> date_ = nullptr;
    // The data value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
