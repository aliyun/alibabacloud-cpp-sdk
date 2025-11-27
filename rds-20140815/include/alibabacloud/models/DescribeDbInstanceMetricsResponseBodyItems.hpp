// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMETRICSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMETRICSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceMetricsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceMetricsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(GroupKey, groupKey_);
      DARABONBA_PTR_TO_JSON(GroupKeyType, groupKeyType_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(MetricsKey, metricsKey_);
      DARABONBA_PTR_TO_JSON(MetricsKeyAlias, metricsKeyAlias_);
      DARABONBA_PTR_TO_JSON(SortRule, sortRule_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceMetricsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(GroupKey, groupKey_);
      DARABONBA_PTR_FROM_JSON(GroupKeyType, groupKeyType_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(MetricsKey, metricsKey_);
      DARABONBA_PTR_FROM_JSON(MetricsKeyAlias, metricsKeyAlias_);
      DARABONBA_PTR_FROM_JSON(SortRule, sortRule_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeDBInstanceMetricsResponseBodyItems() = default ;
    DescribeDBInstanceMetricsResponseBodyItems(const DescribeDBInstanceMetricsResponseBodyItems &) = default ;
    DescribeDBInstanceMetricsResponseBodyItems(DescribeDBInstanceMetricsResponseBodyItems &&) = default ;
    DescribeDBInstanceMetricsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceMetricsResponseBodyItems() = default ;
    DescribeDBInstanceMetricsResponseBodyItems& operator=(const DescribeDBInstanceMetricsResponseBodyItems &) = default ;
    DescribeDBInstanceMetricsResponseBodyItems& operator=(DescribeDBInstanceMetricsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->dimension_ == nullptr && return this->groupKey_ == nullptr && return this->groupKeyType_ == nullptr && return this->method_ == nullptr && return this->metricsKey_ == nullptr
        && return this->metricsKeyAlias_ == nullptr && return this->sortRule_ == nullptr && return this->unit_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // groupKey Field Functions 
    bool hasGroupKey() const { return this->groupKey_ != nullptr;};
    void deleteGroupKey() { this->groupKey_ = nullptr;};
    inline string groupKey() const { DARABONBA_PTR_GET_DEFAULT(groupKey_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setGroupKey(string groupKey) { DARABONBA_PTR_SET_VALUE(groupKey_, groupKey) };


    // groupKeyType Field Functions 
    bool hasGroupKeyType() const { return this->groupKeyType_ != nullptr;};
    void deleteGroupKeyType() { this->groupKeyType_ = nullptr;};
    inline string groupKeyType() const { DARABONBA_PTR_GET_DEFAULT(groupKeyType_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setGroupKeyType(string groupKeyType) { DARABONBA_PTR_SET_VALUE(groupKeyType_, groupKeyType) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // metricsKey Field Functions 
    bool hasMetricsKey() const { return this->metricsKey_ != nullptr;};
    void deleteMetricsKey() { this->metricsKey_ = nullptr;};
    inline string metricsKey() const { DARABONBA_PTR_GET_DEFAULT(metricsKey_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setMetricsKey(string metricsKey) { DARABONBA_PTR_SET_VALUE(metricsKey_, metricsKey) };


    // metricsKeyAlias Field Functions 
    bool hasMetricsKeyAlias() const { return this->metricsKeyAlias_ != nullptr;};
    void deleteMetricsKeyAlias() { this->metricsKeyAlias_ = nullptr;};
    inline string metricsKeyAlias() const { DARABONBA_PTR_GET_DEFAULT(metricsKeyAlias_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setMetricsKeyAlias(string metricsKeyAlias) { DARABONBA_PTR_SET_VALUE(metricsKeyAlias_, metricsKeyAlias) };


    // sortRule Field Functions 
    bool hasSortRule() const { return this->sortRule_ != nullptr;};
    void deleteSortRule() { this->sortRule_ = nullptr;};
    inline int32_t sortRule() const { DARABONBA_PTR_GET_DEFAULT(sortRule_, 0) };
    inline DescribeDBInstanceMetricsResponseBodyItems& setSortRule(int32_t sortRule) { DARABONBA_PTR_SET_VALUE(sortRule_, sortRule) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDBInstanceMetricsResponseBodyItems& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The description of the enhanced monitoring metric.
    std::shared_ptr<string> description_ = nullptr;
    // The category of the enhanced monitoring metric. Valid values:
    // 
    // *   **os**: OS metric
    // *   **db**: database metric
    std::shared_ptr<string> dimension_ = nullptr;
    // The key of the group to which the enhanced monitoring metric belongs.
    std::shared_ptr<string> groupKey_ = nullptr;
    // The name of the group to which the enhanced monitoring metric belongs.
    std::shared_ptr<string> groupKeyType_ = nullptr;
    // The method that is used to aggregate the monitoring data of the enhanced monitoring metric. Valid values:
    // 
    // *   **avg**: The system calculates the average value of the enhanced monitoring metric.
    // *   **min**: The system calculates the minimum value of the enhanced monitoring metric.
    // *   **max**: The system calculates the maximum value of the enhanced monitoring metric.
    std::shared_ptr<string> method_ = nullptr;
    // The key of the enhanced monitoring metric.
    std::shared_ptr<string> metricsKey_ = nullptr;
    // The alias of the enhanced monitoring metric.
    std::shared_ptr<string> metricsKeyAlias_ = nullptr;
    // The serial number of the enhanced monitoring metric.
    std::shared_ptr<int32_t> sortRule_ = nullptr;
    // The unit of the enhanced monitoring metric.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
