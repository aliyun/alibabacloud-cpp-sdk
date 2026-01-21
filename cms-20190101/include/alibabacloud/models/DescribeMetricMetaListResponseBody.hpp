// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICMETALISTRESPONSEBODY_HPP_
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
  class DescribeMetricMetaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricMetaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricMetaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMetricMetaListResponseBody() = default ;
    DescribeMetricMetaListResponseBody(const DescribeMetricMetaListResponseBody &) = default ;
    DescribeMetricMetaListResponseBody(DescribeMetricMetaListResponseBody &&) = default ;
    DescribeMetricMetaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricMetaListResponseBody() = default ;
    DescribeMetricMetaListResponseBody& operator=(const DescribeMetricMetaListResponseBody &) = default ;
    DescribeMetricMetaListResponseBody& operator=(DescribeMetricMetaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Periods, periods_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Periods, periods_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->dimensions_ == nullptr && this->labels_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->periods_ == nullptr
        && this->statistics_ == nullptr && this->unit_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Resource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
        inline Resource& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline Resource& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Resource& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Resource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // periods Field Functions 
        bool hasPeriods() const { return this->periods_ != nullptr;};
        void deletePeriods() { this->periods_ = nullptr;};
        inline string getPeriods() const { DARABONBA_PTR_GET_DEFAULT(periods_, "") };
        inline Resource& setPeriods(string periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Resource& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Resource& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        // The metric description.
        shared_ptr<string> description_ {};
        // The monitoring dimensions of the resource. Multiple monitoring dimensions are separated with commas (,).
        shared_ptr<string> dimensions_ {};
        // The tags of the metric, including one or more JSON strings.
        // 
        // Format: `[{"name":"tag key","value":"tag value"}]`. The `name` can be repeated. The following tags are available:
        // 
        // *   metricCategory: the category of the metric.
        // *   alertEnable: indicates whether to report alerts for the metric.
        // *   alertUnit: the unit of the metric in the alerts.
        // *   unitFactor: the factor for metric unit conversion.
        // *   minAlertPeriod: the minimum interval at which the alert is reported.
        // *   productCategory: the category of the service.
        shared_ptr<string> labels_ {};
        // The metric name.
        shared_ptr<string> metricName_ {};
        // The namespace of the cloud service.
        shared_ptr<string> namespace_ {};
        // The statistical periods of the metric. Multiple statistical periods are separated with commas (,).
        // 
        // Unit: seconds.
        shared_ptr<string> periods_ {};
        // The statistical method. Multiple statistical methods are separated with commas (,).
        shared_ptr<string> statistics_ {};
        // The unit of the metric.
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->resource_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Resources::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Resources::Resource>) };
      inline vector<Resources::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Resources::Resource>) };
      inline Resources& setResource(const vector<Resources::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Resources& setResource(vector<Resources::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    protected:
      shared_ptr<vector<Resources::Resource>> resource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricMetaListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricMetaListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricMetaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const DescribeMetricMetaListResponseBody::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, DescribeMetricMetaListResponseBody::Resources) };
    inline DescribeMetricMetaListResponseBody::Resources getResources() { DARABONBA_PTR_GET(resources_, DescribeMetricMetaListResponseBody::Resources) };
    inline DescribeMetricMetaListResponseBody& setResources(const DescribeMetricMetaListResponseBody::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeMetricMetaListResponseBody& setResources(DescribeMetricMetaListResponseBody::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricMetaListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeMetricMetaListResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configuration of the metrics in the resources.
    shared_ptr<DescribeMetricMetaListResponseBody::Resources> resources_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
