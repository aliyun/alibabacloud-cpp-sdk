// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCESSERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCESSERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformancesSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformancesSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const DescribeDBClusterPerformanceResponseBodyPerformancesSeries &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries(DescribeDBClusterPerformanceResponseBodyPerformancesSeries &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries& operator=(const DescribeDBClusterPerformanceResponseBodyPerformancesSeries &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformancesSeries& operator=(DescribeDBClusterPerformanceResponseBodyPerformancesSeries &&) = default ;
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
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues>) };
    inline vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setValues(const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDBClusterPerformanceResponseBodyPerformancesSeries& setValues(vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The name of the list of performance metric values.
    std::shared_ptr<string> name_ = nullptr;
    // The values of the performance parameter. Each value of the performance parameter is collected at a point in time.
    std::shared_ptr<vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeriesValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
