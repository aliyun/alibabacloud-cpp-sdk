// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEXPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEXPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchExportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchExportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(Measurements, measurementsShrink_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, BatchExportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(Measurements, measurementsShrink_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    BatchExportShrinkRequest() = default ;
    BatchExportShrinkRequest(const BatchExportShrinkRequest &) = default ;
    BatchExportShrinkRequest(BatchExportShrinkRequest &&) = default ;
    BatchExportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchExportShrinkRequest() = default ;
    BatchExportShrinkRequest& operator=(const BatchExportShrinkRequest &) = default ;
    BatchExportShrinkRequest& operator=(BatchExportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cursor_ == nullptr
        && return this->length_ == nullptr && return this->measurementsShrink_ == nullptr && return this->metric_ == nullptr && return this->namespace_ == nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline string cursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, "") };
    inline BatchExportShrinkRequest& setCursor(string cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline BatchExportShrinkRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // measurementsShrink Field Functions 
    bool hasMeasurementsShrink() const { return this->measurementsShrink_ != nullptr;};
    void deleteMeasurementsShrink() { this->measurementsShrink_ = nullptr;};
    inline string measurementsShrink() const { DARABONBA_PTR_GET_DEFAULT(measurementsShrink_, "") };
    inline BatchExportShrinkRequest& setMeasurementsShrink(string measurementsShrink) { DARABONBA_PTR_SET_VALUE(measurementsShrink_, measurementsShrink) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline BatchExportShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchExportShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // When you call this operation to export data, you must specify the `Cursor` parameter. You can obtain the value of the `Cursor` parameter by using one of the following methods:
    // 
    // *   When you call this operation for the first time, you must call the Cursor operation to obtain the `Cursor` value. For more information, see [Cursor](https://help.aliyun.com/document_detail/2330730.html).
    // *   When you call this operation again, you can obtain the `Cursor` value from the returned data of the last call.
    // 
    // This parameter is required.
    std::shared_ptr<string> cursor_ = nullptr;
    // The maximum number of data entries that can be returned in each response.
    // 
    // Valid values: 1 to 10000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> length_ = nullptr;
    // The statistical methods used to customize the returned data. By default, the measurements based on all statistical methods are returned.
    // 
    // For example, the `cpu_idle` metric of ECS (`acs_ecs_dashboard`) has three statistical methods: `Average`, `Maximum`, and `Minimum`. If you want to return only the measurements based on the `Average` and `Maximum` statistical methods, set this parameter to `["Average", "Maximum"]`.
    // 
    // The statistical methods of metrics are displayed in the `Statistics` column on the Metrics page of each cloud service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> measurementsShrink_ = nullptr;
    // The metric that is used to monitor the cloud service.
    // 
    // For more information about the metrics of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  The value of this parameter must be the same as the value of the request parameter `Metric` in the Cursor operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> metric_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  The value of this parameter must be the same as the value of the request parameter `Namespace` in the Cursor operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
