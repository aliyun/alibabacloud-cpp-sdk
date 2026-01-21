// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODY_HPP_
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
  class DescribeExporterRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeExporterRuleListResponseBody() = default ;
    DescribeExporterRuleListResponseBody(const DescribeExporterRuleListResponseBody &) = default ;
    DescribeExporterRuleListResponseBody(DescribeExporterRuleListResponseBody &&) = default ;
    DescribeExporterRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterRuleListResponseBody() = default ;
    DescribeExporterRuleListResponseBody& operator=(const DescribeExporterRuleListResponseBody &) = default ;
    DescribeExporterRuleListResponseBody& operator=(DescribeExporterRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datapoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datapoints& obj) { 
        DARABONBA_PTR_TO_JSON(Datapoint, datapoint_);
      };
      friend void from_json(const Darabonba::Json& j, Datapoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Datapoint, datapoint_);
      };
      Datapoints() = default ;
      Datapoints(const Datapoints &) = default ;
      Datapoints(Datapoints &&) = default ;
      Datapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datapoints() = default ;
      Datapoints& operator=(const Datapoints &) = default ;
      Datapoints& operator=(Datapoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Datapoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Datapoint& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Describe, describe_);
          DARABONBA_PTR_TO_JSON(Dimension, dimension_);
          DARABONBA_PTR_TO_JSON(DstName, dstName_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(TargetWindows, targetWindows_);
        };
        friend void from_json(const Darabonba::Json& j, Datapoint& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Describe, describe_);
          DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
          DARABONBA_PTR_FROM_JSON(DstName, dstName_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(TargetWindows, targetWindows_);
        };
        Datapoint() = default ;
        Datapoint(const Datapoint &) = default ;
        Datapoint(Datapoint &&) = default ;
        Datapoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Datapoint() = default ;
        Datapoint& operator=(const Datapoint &) = default ;
        Datapoint& operator=(Datapoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DstName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DstName& obj) { 
            DARABONBA_PTR_TO_JSON(DstName, dstName_);
          };
          friend void from_json(const Darabonba::Json& j, DstName& obj) { 
            DARABONBA_PTR_FROM_JSON(DstName, dstName_);
          };
          DstName() = default ;
          DstName(const DstName &) = default ;
          DstName(DstName &&) = default ;
          DstName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DstName() = default ;
          DstName& operator=(const DstName &) = default ;
          DstName& operator=(DstName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dstName_ == nullptr; };
          // dstName Field Functions 
          bool hasDstName() const { return this->dstName_ != nullptr;};
          void deleteDstName() { this->dstName_ = nullptr;};
          inline const vector<string> & getDstName() const { DARABONBA_PTR_GET_CONST(dstName_, vector<string>) };
          inline vector<string> getDstName() { DARABONBA_PTR_GET(dstName_, vector<string>) };
          inline DstName& setDstName(const vector<string> & dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };
          inline DstName& setDstName(vector<string> && dstName) { DARABONBA_PTR_SET_RVALUE(dstName_, dstName) };


        protected:
          shared_ptr<vector<string>> dstName_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->describe_ == nullptr && this->dimension_ == nullptr && this->dstName_ == nullptr && this->enabled_ == nullptr && this->metricName_ == nullptr
        && this->namespace_ == nullptr && this->ruleName_ == nullptr && this->targetWindows_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Datapoint& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // describe Field Functions 
        bool hasDescribe() const { return this->describe_ != nullptr;};
        void deleteDescribe() { this->describe_ = nullptr;};
        inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
        inline Datapoint& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


        // dimension Field Functions 
        bool hasDimension() const { return this->dimension_ != nullptr;};
        void deleteDimension() { this->dimension_ = nullptr;};
        inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
        inline Datapoint& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


        // dstName Field Functions 
        bool hasDstName() const { return this->dstName_ != nullptr;};
        void deleteDstName() { this->dstName_ = nullptr;};
        inline const Datapoint::DstName & getDstName() const { DARABONBA_PTR_GET_CONST(dstName_, Datapoint::DstName) };
        inline Datapoint::DstName getDstName() { DARABONBA_PTR_GET(dstName_, Datapoint::DstName) };
        inline Datapoint& setDstName(const Datapoint::DstName & dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };
        inline Datapoint& setDstName(Datapoint::DstName && dstName) { DARABONBA_PTR_SET_RVALUE(dstName_, dstName) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Datapoint& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Datapoint& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Datapoint& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Datapoint& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // targetWindows Field Functions 
        bool hasTargetWindows() const { return this->targetWindows_ != nullptr;};
        void deleteTargetWindows() { this->targetWindows_ = nullptr;};
        inline string getTargetWindows() const { DARABONBA_PTR_GET_DEFAULT(targetWindows_, "") };
        inline Datapoint& setTargetWindows(string targetWindows) { DARABONBA_PTR_SET_VALUE(targetWindows_, targetWindows) };


      protected:
        // The time when the rule was created. The value is a UNIX timestamp.
        shared_ptr<int64_t> createTime_ {};
        // The description of the rule.
        shared_ptr<string> describe_ {};
        // The associated dimensions.
        shared_ptr<string> dimension_ {};
        shared_ptr<Datapoint::DstName> dstName_ {};
        // Indicates whether the rule is enabled.
        shared_ptr<bool> enabled_ {};
        // The name of the metric.
        // 
        // > For more information, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/28619.html).
        shared_ptr<string> metricName_ {};
        // The namespace of the service.
        // 
        // > For more information, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/28619.html).
        shared_ptr<string> namespace_ {};
        // The name of the data export rule.
        shared_ptr<string> ruleName_ {};
        // The time window of the exported data.\\
        // Multiple windows are separated with commas (,).
        // 
        // > Data in a time window of less than 60 seconds cannot be exported.
        shared_ptr<string> targetWindows_ {};
      };

      virtual bool empty() const override { return this->datapoint_ == nullptr; };
      // datapoint Field Functions 
      bool hasDatapoint() const { return this->datapoint_ != nullptr;};
      void deleteDatapoint() { this->datapoint_ = nullptr;};
      inline const vector<Datapoints::Datapoint> & getDatapoint() const { DARABONBA_PTR_GET_CONST(datapoint_, vector<Datapoints::Datapoint>) };
      inline vector<Datapoints::Datapoint> getDatapoint() { DARABONBA_PTR_GET(datapoint_, vector<Datapoints::Datapoint>) };
      inline Datapoints& setDatapoint(const vector<Datapoints::Datapoint> & datapoint) { DARABONBA_PTR_SET_VALUE(datapoint_, datapoint) };
      inline Datapoints& setDatapoint(vector<Datapoints::Datapoint> && datapoint) { DARABONBA_PTR_SET_RVALUE(datapoint_, datapoint) };


    protected:
      shared_ptr<vector<Datapoints::Datapoint>> datapoint_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->datapoints_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExporterRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline const DescribeExporterRuleListResponseBody::Datapoints & getDatapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, DescribeExporterRuleListResponseBody::Datapoints) };
    inline DescribeExporterRuleListResponseBody::Datapoints getDatapoints() { DARABONBA_PTR_GET(datapoints_, DescribeExporterRuleListResponseBody::Datapoints) };
    inline DescribeExporterRuleListResponseBody& setDatapoints(const DescribeExporterRuleListResponseBody::Datapoints & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
    inline DescribeExporterRuleListResponseBody& setDatapoints(DescribeExporterRuleListResponseBody::Datapoints && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExporterRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExporterRuleListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExporterRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExporterRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeExporterRuleListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<string> code_ {};
    // The details of the data export rules.
    shared_ptr<DescribeExporterRuleListResponseBody::Datapoints> datapoints_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
