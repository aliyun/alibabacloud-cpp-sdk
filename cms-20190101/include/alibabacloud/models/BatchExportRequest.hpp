// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEXPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEXPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchExportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchExportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(Measurements, measurements_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchExportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(Measurements, measurements_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchExportRequest() = default ;
    BatchExportRequest(const BatchExportRequest &) = default ;
    BatchExportRequest(BatchExportRequest &&) = default ;
    BatchExportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchExportRequest() = default ;
    BatchExportRequest& operator=(const BatchExportRequest &) = default ;
    BatchExportRequest& operator=(BatchExportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cursor_ == nullptr
        && this->length_ == nullptr && this->measurements_ == nullptr && this->metric_ == nullptr && this->namespace_ == nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline BatchExportRequest& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline BatchExportRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // measurements Field Functions 
    bool hasMeasurements() const { return this->measurements_ != nullptr;};
    void deleteMeasurements() { this->measurements_ = nullptr;};
    inline const vector<string> & getMeasurements() const { DARABONBA_PTR_GET_CONST(measurements_, vector<string>) };
    inline vector<string> getMeasurements() { DARABONBA_PTR_GET(measurements_, vector<string>) };
    inline BatchExportRequest& setMeasurements(const vector<string> & measurements) { DARABONBA_PTR_SET_VALUE(measurements_, measurements) };
    inline BatchExportRequest& setMeasurements(vector<string> && measurements) { DARABONBA_PTR_SET_RVALUE(measurements_, measurements) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline BatchExportRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchExportRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // When you call this operation to export data, you must specify the `Cursor` parameter. You can obtain the value of the `Cursor` parameter by using one of the following methods:
    // 
    // *   When you call this operation for the first time, you must call the Cursor operation to obtain the `Cursor` value. For more information, see [Cursor](https://help.aliyun.com/document_detail/2330730.html).
    // *   When you call this operation again, you can obtain the `Cursor` value from the returned data of the last call.
    // 
    // This parameter is required.
    shared_ptr<string> cursor_ {};
    // The maximum number of data entries that can be returned in each response.
    // 
    // Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> length_ {};
    // The statistical methods used to customize the returned data. By default, the measurements based on all statistical methods are returned.
    // 
    // For example, the `cpu_idle` metric of ECS (`acs_ecs_dashboard`) has three statistical methods: `Average`, `Maximum`, and `Minimum`. If you want to return only the measurements based on the `Average` and `Maximum` statistical methods, set this parameter to `["Average", "Maximum"]`.
    // 
    // The statistical methods of metrics are displayed in the `Statistics` column on the Metrics page of each cloud service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<vector<string>> measurements_ {};
    // The metric that is used to monitor the cloud service.
    // 
    // For more information about the metrics of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  The value of this parameter must be the same as the value of the request parameter `Metric` in the Cursor operation.
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  The value of this parameter must be the same as the value of the request parameter `Namespace` in the Cursor operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
