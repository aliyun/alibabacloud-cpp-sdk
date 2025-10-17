// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterPerformanceResponseBodyPerformancesSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBodyPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBodyPerformances& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeDBClusterPerformanceResponseBodyPerformances() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformances(const DescribeDBClusterPerformanceResponseBodyPerformances &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformances(DescribeDBClusterPerformanceResponseBodyPerformances &&) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBodyPerformances() = default ;
    DescribeDBClusterPerformanceResponseBodyPerformances& operator=(const DescribeDBClusterPerformanceResponseBodyPerformances &) = default ;
    DescribeDBClusterPerformanceResponseBodyPerformances& operator=(DescribeDBClusterPerformanceResponseBodyPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->series_ == nullptr && return this->unit_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformances& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries> & series() const { DARABONBA_PTR_GET_CONST(series_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries>) };
    inline vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries> series() { DARABONBA_PTR_GET(series_, vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries>) };
    inline DescribeDBClusterPerformanceResponseBodyPerformances& setSeries(const vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline DescribeDBClusterPerformanceResponseBodyPerformances& setSeries(vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDBClusterPerformanceResponseBodyPerformances& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The name of the performance metric.
    std::shared_ptr<string> key_ = nullptr;
    // The queried performance metric data.
    std::shared_ptr<vector<Models::DescribeDBClusterPerformanceResponseBodyPerformancesSeries>> series_ = nullptr;
    // The unit of the performance metric.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
