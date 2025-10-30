// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODYPERFORMANCEKEYSSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries() = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries(const DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries &) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries(DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries &&) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries() = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& operator=(const DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries &) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& operator=(DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->values_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues>) };
    inline vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues>) };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& setValues(const vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries& setValues(vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the performance metric.
    std::shared_ptr<string> name_ = nullptr;
    // One or more values of the performance metric.
    std::shared_ptr<vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
