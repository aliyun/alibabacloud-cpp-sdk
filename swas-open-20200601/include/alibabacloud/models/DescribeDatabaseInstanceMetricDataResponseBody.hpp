// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCEMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCEMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseInstanceMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseInstanceMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_TO_JSON(MetricData, metricData_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseInstanceMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
      DARABONBA_PTR_FROM_JSON(MetricData, metricData_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    DescribeDatabaseInstanceMetricDataResponseBody() = default ;
    DescribeDatabaseInstanceMetricDataResponseBody(const DescribeDatabaseInstanceMetricDataResponseBody &) = default ;
    DescribeDatabaseInstanceMetricDataResponseBody(DescribeDatabaseInstanceMetricDataResponseBody &&) = default ;
    DescribeDatabaseInstanceMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseInstanceMetricDataResponseBody() = default ;
    DescribeDatabaseInstanceMetricDataResponseBody& operator=(const DescribeDatabaseInstanceMetricDataResponseBody &) = default ;
    DescribeDatabaseInstanceMetricDataResponseBody& operator=(DescribeDatabaseInstanceMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataFormat_ == nullptr
        && this->metricData_ == nullptr && this->metricName_ == nullptr && this->requestId_ == nullptr && this->unit_ == nullptr; };
    // dataFormat Field Functions 
    bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
    void deleteDataFormat() { this->dataFormat_ = nullptr;};
    inline string getDataFormat() const { DARABONBA_PTR_GET_DEFAULT(dataFormat_, "") };
    inline DescribeDatabaseInstanceMetricDataResponseBody& setDataFormat(string dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };


    // metricData Field Functions 
    bool hasMetricData() const { return this->metricData_ != nullptr;};
    void deleteMetricData() { this->metricData_ = nullptr;};
    inline string getMetricData() const { DARABONBA_PTR_GET_DEFAULT(metricData_, "") };
    inline DescribeDatabaseInstanceMetricDataResponseBody& setMetricData(string metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeDatabaseInstanceMetricDataResponseBody& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabaseInstanceMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeDatabaseInstanceMetricDataResponseBody& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The format of the metric data. Valid values:
    // 
    // - `cpuusage&memusage`
    // 
    // - `active_session&total_session`
    // 
    // - `ins_size&data_size&log_size&tmp_size&other_size`
    // 
    // - `io`
    shared_ptr<string> dataFormat_ {};
    // The metric data details.
    shared_ptr<string> metricData_ {};
    // The name of the metric. Valid values:
    // 
    // - `MySQL_MemCpuUsage`: The CPU utilization and memory usage of the instance, as a percentage of the total resources of the operating system.
    // 
    // - `MySQL_DetailedSpaceUsage`: The total, data, log, temporary, and system disk space usage of the instance.
    // 
    // - `MySQL_Sessions`: The number of active and total connections.
    // 
    // - `MySQL_IOPS`: The IOPS of the instance.
    shared_ptr<string> metricName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The unit of the metric data.
    // 
    // - %
    // 
    // - int
    // 
    // - MB
    shared_ptr<string> unit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
