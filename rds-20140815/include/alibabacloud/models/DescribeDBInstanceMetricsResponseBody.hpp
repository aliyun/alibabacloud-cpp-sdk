// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstanceMetricsResponseBody() = default ;
    DescribeDBInstanceMetricsResponseBody(const DescribeDBInstanceMetricsResponseBody &) = default ;
    DescribeDBInstanceMetricsResponseBody(DescribeDBInstanceMetricsResponseBody &&) = default ;
    DescribeDBInstanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceMetricsResponseBody() = default ;
    DescribeDBInstanceMetricsResponseBody& operator=(const DescribeDBInstanceMetricsResponseBody &) = default ;
    DescribeDBInstanceMetricsResponseBody& operator=(DescribeDBInstanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->dimension_ == nullptr && this->groupKey_ == nullptr && this->groupKeyType_ == nullptr && this->method_ == nullptr && this->metricsKey_ == nullptr
        && this->metricsKeyAlias_ == nullptr && this->sortRule_ == nullptr && this->unit_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
      inline Items& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // groupKey Field Functions 
      bool hasGroupKey() const { return this->groupKey_ != nullptr;};
      void deleteGroupKey() { this->groupKey_ = nullptr;};
      inline string getGroupKey() const { DARABONBA_PTR_GET_DEFAULT(groupKey_, "") };
      inline Items& setGroupKey(string groupKey) { DARABONBA_PTR_SET_VALUE(groupKey_, groupKey) };


      // groupKeyType Field Functions 
      bool hasGroupKeyType() const { return this->groupKeyType_ != nullptr;};
      void deleteGroupKeyType() { this->groupKeyType_ = nullptr;};
      inline string getGroupKeyType() const { DARABONBA_PTR_GET_DEFAULT(groupKeyType_, "") };
      inline Items& setGroupKeyType(string groupKeyType) { DARABONBA_PTR_SET_VALUE(groupKeyType_, groupKeyType) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Items& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // metricsKey Field Functions 
      bool hasMetricsKey() const { return this->metricsKey_ != nullptr;};
      void deleteMetricsKey() { this->metricsKey_ = nullptr;};
      inline string getMetricsKey() const { DARABONBA_PTR_GET_DEFAULT(metricsKey_, "") };
      inline Items& setMetricsKey(string metricsKey) { DARABONBA_PTR_SET_VALUE(metricsKey_, metricsKey) };


      // metricsKeyAlias Field Functions 
      bool hasMetricsKeyAlias() const { return this->metricsKeyAlias_ != nullptr;};
      void deleteMetricsKeyAlias() { this->metricsKeyAlias_ = nullptr;};
      inline string getMetricsKeyAlias() const { DARABONBA_PTR_GET_DEFAULT(metricsKeyAlias_, "") };
      inline Items& setMetricsKeyAlias(string metricsKeyAlias) { DARABONBA_PTR_SET_VALUE(metricsKeyAlias_, metricsKeyAlias) };


      // sortRule Field Functions 
      bool hasSortRule() const { return this->sortRule_ != nullptr;};
      void deleteSortRule() { this->sortRule_ = nullptr;};
      inline int32_t getSortRule() const { DARABONBA_PTR_GET_DEFAULT(sortRule_, 0) };
      inline Items& setSortRule(int32_t sortRule) { DARABONBA_PTR_SET_VALUE(sortRule_, sortRule) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Items& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The description of the enhanced monitoring metric.
      shared_ptr<string> description_ {};
      // The category of the enhanced monitoring metric. Valid values:
      // 
      // *   **os**: OS metric
      // *   **db**: database metric
      shared_ptr<string> dimension_ {};
      // The key of the group to which the enhanced monitoring metric belongs.
      shared_ptr<string> groupKey_ {};
      // The name of the group to which the enhanced monitoring metric belongs.
      shared_ptr<string> groupKeyType_ {};
      // The method that is used to aggregate the monitoring data of the enhanced monitoring metric. Valid values:
      // 
      // *   **avg**: The system calculates the average value of the enhanced monitoring metric.
      // *   **min**: The system calculates the minimum value of the enhanced monitoring metric.
      // *   **max**: The system calculates the maximum value of the enhanced monitoring metric.
      shared_ptr<string> method_ {};
      // The key of the enhanced monitoring metric.
      shared_ptr<string> metricsKey_ {};
      // The alias of the enhanced monitoring metric.
      shared_ptr<string> metricsKeyAlias_ {};
      // The serial number of the enhanced monitoring metric.
      shared_ptr<int32_t> sortRule_ {};
      // The unit of the enhanced monitoring metric.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceMetricsResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceMetricsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceMetricsResponseBody::Items>) };
    inline vector<DescribeDBInstanceMetricsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceMetricsResponseBody::Items>) };
    inline DescribeDBInstanceMetricsResponseBody& setItems(const vector<DescribeDBInstanceMetricsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceMetricsResponseBody& setItems(vector<DescribeDBInstanceMetricsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstanceMetricsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceName_ {};
    // An array consisting of the Enhanced Monitoring metrics that are enabled for the instance.
    shared_ptr<vector<DescribeDBInstanceMetricsResponseBody::Items>> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of enhanced monitoring metrics that are enabled for the instance.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
