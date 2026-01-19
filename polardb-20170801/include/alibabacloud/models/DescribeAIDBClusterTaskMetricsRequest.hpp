// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterTaskMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterTaskMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterTaskMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAIDBClusterTaskMetricsRequest() = default ;
    DescribeAIDBClusterTaskMetricsRequest(const DescribeAIDBClusterTaskMetricsRequest &) = default ;
    DescribeAIDBClusterTaskMetricsRequest(DescribeAIDBClusterTaskMetricsRequest &&) = default ;
    DescribeAIDBClusterTaskMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterTaskMetricsRequest() = default ;
    DescribeAIDBClusterTaskMetricsRequest& operator=(const DescribeAIDBClusterTaskMetricsRequest &) = default ;
    DescribeAIDBClusterTaskMetricsRequest& operator=(DescribeAIDBClusterTaskMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->metricType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->relativeDBClusterId_ == nullptr
        && this->reverse_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterTaskMetricsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAIDBClusterTaskMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeAIDBClusterTaskMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAIDBClusterTaskMetricsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAIDBClusterTaskMetricsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relativeDBClusterId Field Functions 
    bool hasRelativeDBClusterId() const { return this->relativeDBClusterId_ != nullptr;};
    void deleteRelativeDBClusterId() { this->relativeDBClusterId_ = nullptr;};
    inline string getRelativeDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDBClusterId_, "") };
    inline DescribeAIDBClusterTaskMetricsRequest& setRelativeDBClusterId(string relativeDBClusterId) { DARABONBA_PTR_SET_VALUE(relativeDBClusterId_, relativeDBClusterId) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline DescribeAIDBClusterTaskMetricsRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAIDBClusterTaskMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> metricType_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> relativeDBClusterId_ {};
    shared_ptr<bool> reverse_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
