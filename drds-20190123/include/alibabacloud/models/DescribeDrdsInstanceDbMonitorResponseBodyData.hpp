// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEDBMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEDBMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsInstanceDbMonitorResponseBodyDataValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceDbMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceDbMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceDbMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDrdsInstanceDbMonitorResponseBodyData() = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyData(const DescribeDrdsInstanceDbMonitorResponseBodyData &) = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyData(DescribeDrdsInstanceDbMonitorResponseBodyData &&) = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceDbMonitorResponseBodyData() = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyData& operator=(const DescribeDrdsInstanceDbMonitorResponseBodyData &) = default ;
    DescribeDrdsInstanceDbMonitorResponseBodyData& operator=(DescribeDrdsInstanceDbMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->unit_ != nullptr && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDrdsInstanceDbMonitorResponseBodyData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDrdsInstanceDbMonitorResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues>) };
    inline vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues>) };
    inline DescribeDrdsInstanceDbMonitorResponseBodyData& setValues(const vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDrdsInstanceDbMonitorResponseBodyData& setValues(vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the monitoring metric.
    std::shared_ptr<string> key_ = nullptr;
    // The unit of the monitoring metric.
    std::shared_ptr<string> unit_ = nullptr;
    // The details about the value of monitoring data.
    std::shared_ptr<vector<Models::DescribeDrdsInstanceDbMonitorResponseBodyDataValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
