// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODYPERFORMANCEKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataSharePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSharePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSharePerformanceResponseBodyPerformanceKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeDataSharePerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeys(const DescribeDataSharePerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeys(DescribeDataSharePerformanceResponseBodyPerformanceKeys &&) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSharePerformanceResponseBodyPerformanceKeys() = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeys& operator=(const DescribeDataSharePerformanceResponseBodyPerformanceKeys &) = default ;
    DescribeDataSharePerformanceResponseBodyPerformanceKeys& operator=(DescribeDataSharePerformanceResponseBodyPerformanceKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->series_ == nullptr && return this->unit_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries>) };
    inline vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries>) };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeys& setSeries(const vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeys& setSeries(vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDataSharePerformanceResponseBodyPerformanceKeys& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The name of the performance metric.
    std::shared_ptr<string> name_ = nullptr;
    // Details of the performance metric.
    std::shared_ptr<vector<Models::DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries>> series_ = nullptr;
    // The unit of the performance metric.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
