// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_TO_JSON(Performance, performance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
    };
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances(const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances(DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances &&) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances& operator=(const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances& operator=(DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->performance_ != nullptr; };
    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance> & performance() const { DARABONBA_PTR_GET_CONST(performance_, vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance>) };
    inline vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance> performance() { DARABONBA_PTR_GET(performance_, vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance>) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances& setPerformance(const vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance> & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances& setPerformance(vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance> && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance>> performance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
