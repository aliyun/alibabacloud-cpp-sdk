// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODY_HPP_
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
  class DescribeProductsOfActiveMetricRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsOfActiveMetricRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllProductInitMetricRuleList, allProductInitMetricRuleList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsOfActiveMetricRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllProductInitMetricRuleList, allProductInitMetricRuleList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeProductsOfActiveMetricRuleResponseBody() = default ;
    DescribeProductsOfActiveMetricRuleResponseBody(const DescribeProductsOfActiveMetricRuleResponseBody &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBody(DescribeProductsOfActiveMetricRuleResponseBody &&) = default ;
    DescribeProductsOfActiveMetricRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsOfActiveMetricRuleResponseBody() = default ;
    DescribeProductsOfActiveMetricRuleResponseBody& operator=(const DescribeProductsOfActiveMetricRuleResponseBody &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBody& operator=(DescribeProductsOfActiveMetricRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AllProductInitMetricRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllProductInitMetricRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(AllProductInitMetricRule, allProductInitMetricRule_);
      };
      friend void from_json(const Darabonba::Json& j, AllProductInitMetricRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllProductInitMetricRule, allProductInitMetricRule_);
      };
      AllProductInitMetricRuleList() = default ;
      AllProductInitMetricRuleList(const AllProductInitMetricRuleList &) = default ;
      AllProductInitMetricRuleList(AllProductInitMetricRuleList &&) = default ;
      AllProductInitMetricRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllProductInitMetricRuleList() = default ;
      AllProductInitMetricRuleList& operator=(const AllProductInitMetricRuleList &) = default ;
      AllProductInitMetricRuleList& operator=(AllProductInitMetricRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AllProductInitMetricRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllProductInitMetricRule& obj) { 
          DARABONBA_PTR_TO_JSON(AlertInitConfigList, alertInitConfigList_);
          DARABONBA_PTR_TO_JSON(Product, product_);
        };
        friend void from_json(const Darabonba::Json& j, AllProductInitMetricRule& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertInitConfigList, alertInitConfigList_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
        };
        AllProductInitMetricRule() = default ;
        AllProductInitMetricRule(const AllProductInitMetricRule &) = default ;
        AllProductInitMetricRule(AllProductInitMetricRule &&) = default ;
        AllProductInitMetricRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllProductInitMetricRule() = default ;
        AllProductInitMetricRule& operator=(const AllProductInitMetricRule &) = default ;
        AllProductInitMetricRule& operator=(AllProductInitMetricRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AlertInitConfigList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertInitConfigList& obj) { 
            DARABONBA_PTR_TO_JSON(AlertInitConfig, alertInitConfig_);
          };
          friend void from_json(const Darabonba::Json& j, AlertInitConfigList& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertInitConfig, alertInitConfig_);
          };
          AlertInitConfigList() = default ;
          AlertInitConfigList(const AlertInitConfigList &) = default ;
          AlertInitConfigList(AlertInitConfigList &&) = default ;
          AlertInitConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertInitConfigList() = default ;
          AlertInitConfigList& operator=(const AlertInitConfigList &) = default ;
          AlertInitConfigList& operator=(AlertInitConfigList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AlertInitConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AlertInitConfig& obj) { 
              DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(MetricName, metricName_);
              DARABONBA_PTR_TO_JSON(Namespace, namespace_);
              DARABONBA_PTR_TO_JSON(Period, period_);
              DARABONBA_PTR_TO_JSON(Statistics, statistics_);
              DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            };
            friend void from_json(const Darabonba::Json& j, AlertInitConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
              DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
              DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
              DARABONBA_PTR_FROM_JSON(Period, period_);
              DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
              DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
            };
            AlertInitConfig() = default ;
            AlertInitConfig(const AlertInitConfig &) = default ;
            AlertInitConfig(AlertInitConfig &&) = default ;
            AlertInitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AlertInitConfig() = default ;
            AlertInitConfig& operator=(const AlertInitConfig &) = default ;
            AlertInitConfig& operator=(AlertInitConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->evaluationCount_ == nullptr && this->level_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->period_ == nullptr
        && this->statistics_ == nullptr && this->threshold_ == nullptr; };
            // comparisonOperator Field Functions 
            bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
            void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
            inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
            inline AlertInitConfig& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


            // evaluationCount Field Functions 
            bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
            void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
            inline string getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, "") };
            inline AlertInitConfig& setEvaluationCount(string evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
            inline AlertInitConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // metricName Field Functions 
            bool hasMetricName() const { return this->metricName_ != nullptr;};
            void deleteMetricName() { this->metricName_ = nullptr;};
            inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
            inline AlertInitConfig& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


            // namespace Field Functions 
            bool hasNamespace() const { return this->namespace_ != nullptr;};
            void deleteNamespace() { this->namespace_ = nullptr;};
            inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
            inline AlertInitConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


            // period Field Functions 
            bool hasPeriod() const { return this->period_ != nullptr;};
            void deletePeriod() { this->period_ = nullptr;};
            inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
            inline AlertInitConfig& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


            // statistics Field Functions 
            bool hasStatistics() const { return this->statistics_ != nullptr;};
            void deleteStatistics() { this->statistics_ = nullptr;};
            inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
            inline AlertInitConfig& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


            // threshold Field Functions 
            bool hasThreshold() const { return this->threshold_ != nullptr;};
            void deleteThreshold() { this->threshold_ = nullptr;};
            inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
            inline AlertInitConfig& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          protected:
            // The operator that is used to compare the metric value with the threshold for Warn-level alerts.
            // 
            // Valid values:
            // 
            // *   LessThanThreshold: less than the threshold
            // 
            // *   GreaterThanLastWeek: greater than the metric value at the same time last week
            // 
            // *   LessThanOrEqualToThreshold: less than or equal to the threshold
            // 
            // *   NotEqualToThreshold: does not equal to the threshold
            // 
            // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
            // 
            // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
            // 
            // *   LessThanYesterday: less than the metric value at the same time yesterday
            // 
            // *   LessThanLastWeek: less than the metric value at the same time last week
            // 
            // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
            // 
            // *   GreaterThanThreshold: greater than the threshold
            // 
            // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
            shared_ptr<string> comparisonOperator_ {};
            // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
            shared_ptr<string> evaluationCount_ {};
            // The alert level.
            // 
            // Valid values:
            // 
            // *   INFO
            // 
            //     <!-- -->
            // 
            //     <!-- -->
            // 
            //     <!-- -->
            // 
            // *   WARN
            // 
            //     <!-- -->
            // 
            //     <!-- -->
            // 
            //     <!-- -->
            // 
            // *   CRITICAL
            // 
            //     <!-- -->
            // 
            //     <!-- -->
            // 
            //     <!-- -->
            shared_ptr<string> level_ {};
            // The metric name. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
            shared_ptr<string> metricName_ {};
            // The namespace of the service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
            shared_ptr<string> namespace_ {};
            // The aggregation period of monitoring data. Unit: minutes. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
            shared_ptr<string> period_ {};
            // The method used to calculate metric values that trigger alerts. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
            shared_ptr<string> statistics_ {};
            // The alert threshold.
            shared_ptr<string> threshold_ {};
          };

          virtual bool empty() const override { return this->alertInitConfig_ == nullptr; };
          // alertInitConfig Field Functions 
          bool hasAlertInitConfig() const { return this->alertInitConfig_ != nullptr;};
          void deleteAlertInitConfig() { this->alertInitConfig_ = nullptr;};
          inline const vector<AlertInitConfigList::AlertInitConfig> & getAlertInitConfig() const { DARABONBA_PTR_GET_CONST(alertInitConfig_, vector<AlertInitConfigList::AlertInitConfig>) };
          inline vector<AlertInitConfigList::AlertInitConfig> getAlertInitConfig() { DARABONBA_PTR_GET(alertInitConfig_, vector<AlertInitConfigList::AlertInitConfig>) };
          inline AlertInitConfigList& setAlertInitConfig(const vector<AlertInitConfigList::AlertInitConfig> & alertInitConfig) { DARABONBA_PTR_SET_VALUE(alertInitConfig_, alertInitConfig) };
          inline AlertInitConfigList& setAlertInitConfig(vector<AlertInitConfigList::AlertInitConfig> && alertInitConfig) { DARABONBA_PTR_SET_RVALUE(alertInitConfig_, alertInitConfig) };


        protected:
          shared_ptr<vector<AlertInitConfigList::AlertInitConfig>> alertInitConfig_ {};
        };

        virtual bool empty() const override { return this->alertInitConfigList_ == nullptr
        && this->product_ == nullptr; };
        // alertInitConfigList Field Functions 
        bool hasAlertInitConfigList() const { return this->alertInitConfigList_ != nullptr;};
        void deleteAlertInitConfigList() { this->alertInitConfigList_ = nullptr;};
        inline const AllProductInitMetricRule::AlertInitConfigList & getAlertInitConfigList() const { DARABONBA_PTR_GET_CONST(alertInitConfigList_, AllProductInitMetricRule::AlertInitConfigList) };
        inline AllProductInitMetricRule::AlertInitConfigList getAlertInitConfigList() { DARABONBA_PTR_GET(alertInitConfigList_, AllProductInitMetricRule::AlertInitConfigList) };
        inline AllProductInitMetricRule& setAlertInitConfigList(const AllProductInitMetricRule::AlertInitConfigList & alertInitConfigList) { DARABONBA_PTR_SET_VALUE(alertInitConfigList_, alertInitConfigList) };
        inline AllProductInitMetricRule& setAlertInitConfigList(AllProductInitMetricRule::AlertInitConfigList && alertInitConfigList) { DARABONBA_PTR_SET_RVALUE(alertInitConfigList_, alertInitConfigList) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline AllProductInitMetricRule& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      protected:
        // The initial alert rules that are generated after one-click alert is enabled for a service.
        shared_ptr<AllProductInitMetricRule::AlertInitConfigList> alertInitConfigList_ {};
        // The abbreviation of the service name.
        shared_ptr<string> product_ {};
      };

      virtual bool empty() const override { return this->allProductInitMetricRule_ == nullptr; };
      // allProductInitMetricRule Field Functions 
      bool hasAllProductInitMetricRule() const { return this->allProductInitMetricRule_ != nullptr;};
      void deleteAllProductInitMetricRule() { this->allProductInitMetricRule_ = nullptr;};
      inline const vector<AllProductInitMetricRuleList::AllProductInitMetricRule> & getAllProductInitMetricRule() const { DARABONBA_PTR_GET_CONST(allProductInitMetricRule_, vector<AllProductInitMetricRuleList::AllProductInitMetricRule>) };
      inline vector<AllProductInitMetricRuleList::AllProductInitMetricRule> getAllProductInitMetricRule() { DARABONBA_PTR_GET(allProductInitMetricRule_, vector<AllProductInitMetricRuleList::AllProductInitMetricRule>) };
      inline AllProductInitMetricRuleList& setAllProductInitMetricRule(const vector<AllProductInitMetricRuleList::AllProductInitMetricRule> & allProductInitMetricRule) { DARABONBA_PTR_SET_VALUE(allProductInitMetricRule_, allProductInitMetricRule) };
      inline AllProductInitMetricRuleList& setAllProductInitMetricRule(vector<AllProductInitMetricRuleList::AllProductInitMetricRule> && allProductInitMetricRule) { DARABONBA_PTR_SET_RVALUE(allProductInitMetricRule_, allProductInitMetricRule) };


    protected:
      shared_ptr<vector<AllProductInitMetricRuleList::AllProductInitMetricRule>> allProductInitMetricRule_ {};
    };

    virtual bool empty() const override { return this->allProductInitMetricRuleList_ == nullptr
        && this->code_ == nullptr && this->datapoints_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // allProductInitMetricRuleList Field Functions 
    bool hasAllProductInitMetricRuleList() const { return this->allProductInitMetricRuleList_ != nullptr;};
    void deleteAllProductInitMetricRuleList() { this->allProductInitMetricRuleList_ = nullptr;};
    inline const DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList & getAllProductInitMetricRuleList() const { DARABONBA_PTR_GET_CONST(allProductInitMetricRuleList_, DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList) };
    inline DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList getAllProductInitMetricRuleList() { DARABONBA_PTR_GET(allProductInitMetricRuleList_, DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setAllProductInitMetricRuleList(const DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList & allProductInitMetricRuleList) { DARABONBA_PTR_SET_VALUE(allProductInitMetricRuleList_, allProductInitMetricRuleList) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setAllProductInitMetricRuleList(DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList && allProductInitMetricRuleList) { DARABONBA_PTR_SET_RVALUE(allProductInitMetricRuleList_, allProductInitMetricRuleList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline string getDatapoints() const { DARABONBA_PTR_GET_DEFAULT(datapoints_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setDatapoints(string datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProductsOfActiveMetricRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the services for which one-click alert is enabled.
    shared_ptr<DescribeProductsOfActiveMetricRuleResponseBody::AllProductInitMetricRuleList> allProductInitMetricRuleList_ {};
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The information about the services for which the initiative alert feature is enabled. Services are separated with commas (,). Valid values:
    // 
    // *   ECS: Elastic Compute Service (ECS)
    // *   rds: ApsaraDB RDS
    // *   slb: Server Load Balancer (SLB)
    // *   redis_standard: Redis Open-Source Edition (standard architecture)
    // *   redis_sharding: Redis Open-Source Edition (cluster architecture)
    // *   redis_splitrw: Redis Open-Source Edition (read/write splitting architecture)
    // *   mongodb: ApsaraDB for MongoDB of the replica set architecture
    // *   mongodb_sharding: ApsaraDB for MongoDB of the sharded cluster architecture
    // *   hbase: ApsaraDB for HBase
    // *   elasticsearch: Elasticsearch
    // *   opensearch: OpenSearch
    shared_ptr<string> datapoints_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
