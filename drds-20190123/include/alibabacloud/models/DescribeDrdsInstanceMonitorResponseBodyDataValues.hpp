// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEMONITORRESPONSEBODYDATAVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEMONITORRESPONSEBODYDATAVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceMonitorResponseBodyDataValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceMonitorResponseBodyDataValues& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceMonitorResponseBodyDataValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDrdsInstanceMonitorResponseBodyDataValues() = default ;
    DescribeDrdsInstanceMonitorResponseBodyDataValues(const DescribeDrdsInstanceMonitorResponseBodyDataValues &) = default ;
    DescribeDrdsInstanceMonitorResponseBodyDataValues(DescribeDrdsInstanceMonitorResponseBodyDataValues &&) = default ;
    DescribeDrdsInstanceMonitorResponseBodyDataValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceMonitorResponseBodyDataValues() = default ;
    DescribeDrdsInstanceMonitorResponseBodyDataValues& operator=(const DescribeDrdsInstanceMonitorResponseBodyDataValues &) = default ;
    DescribeDrdsInstanceMonitorResponseBodyDataValues& operator=(DescribeDrdsInstanceMonitorResponseBodyDataValues &&) = default ;
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
    inline DescribeDrdsInstanceMonitorResponseBodyDataValues& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDrdsInstanceMonitorResponseBodyDataValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The point in time when the value of the metric was collected. The value is in the UNIX timestamp format. The timestamp is displayed in UTC. Unit: ms.
    std::shared_ptr<int64_t> date_ = nullptr;
    // The value of the metric.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
