// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    UpdateDataQualityRuleRequest() = default ;
    UpdateDataQualityRuleRequest(const UpdateDataQualityRuleRequest &) = default ;
    UpdateDataQualityRuleRequest(UpdateDataQualityRuleRequest &&) = default ;
    UpdateDataQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleRequest() = default ;
    UpdateDataQualityRuleRequest& operator=(const UpdateDataQualityRuleRequest &) = default ;
    UpdateDataQualityRuleRequest& operator=(UpdateDataQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SamplingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SamplingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
        DARABONBA_PTR_TO_JSON(SamplingFilter, samplingFilter_);
        DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
      };
      friend void from_json(const Darabonba::Json& j, SamplingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
        DARABONBA_PTR_FROM_JSON(SamplingFilter, samplingFilter_);
        DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
      };
      SamplingConfig() = default ;
      SamplingConfig(const SamplingConfig &) = default ;
      SamplingConfig(SamplingConfig &&) = default ;
      SamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SamplingConfig() = default ;
      SamplingConfig& operator=(const SamplingConfig &) = default ;
      SamplingConfig& operator=(SamplingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metric_ == nullptr
        && this->metricParameters_ == nullptr && this->samplingFilter_ == nullptr && this->settingConfig_ == nullptr; };
      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
      inline SamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


      // metricParameters Field Functions 
      bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
      void deleteMetricParameters() { this->metricParameters_ = nullptr;};
      inline string getMetricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
      inline SamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


      // samplingFilter Field Functions 
      bool hasSamplingFilter() const { return this->samplingFilter_ != nullptr;};
      void deleteSamplingFilter() { this->samplingFilter_ = nullptr;};
      inline string getSamplingFilter() const { DARABONBA_PTR_GET_DEFAULT(samplingFilter_, "") };
      inline SamplingConfig& setSamplingFilter(string samplingFilter) { DARABONBA_PTR_SET_VALUE(samplingFilter_, samplingFilter) };


      // settingConfig Field Functions 
      bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
      void deleteSettingConfig() { this->settingConfig_ = nullptr;};
      inline string getSettingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
      inline SamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


    protected:
      // The name of the metric to sample. This parameter is not required when a template is used.
      // - Count: the number of rows in the table.
      // - Min: the minimum value of the field.
      // - Max: the maximum value of the field.
      // - Avg: the average value of the field.
      // - DistinctCount: the number of distinct values in the field.
      // - DistinctPercent: the ratio of the number of distinct values in the field to the total number of rows.
      // - DuplicatedCount: the number of duplicate values in the field.
      // - DuplicatedPercent: the ratio of the number of duplicate values in the field to the total number of rows.
      // - TableSize: the size of the table.
      // - NullValueCount: the number of rows in which the field is null.
      // - NullValuePercent: the percentage of rows in which the field is null.
      // - GroupCount: the number of data rows for each value after aggregation by field value.
      // - CountNotIn: the number of rows that do not match the enumerated values.
      // - CountDistinctNotIn: the number of distinct values that do not match the enumerated values.
      // - UserDefinedSql: sample collection by using custom SQL.
      shared_ptr<string> metric_ {};
      // The parameters required for sample collection.
      shared_ptr<string> metricParameters_ {};
      // The condition used to apply secondary filtering on data that is not of interest during sampling. The maximum length is 16,777,215 characters.
      shared_ptr<string> samplingFilter_ {};
      // The runtime parameter setting statements to be inserted and executed before the actual sampling statements. The maximum length is 1,000 characters. Only MaxCompute is supported.
      shared_ptr<string> settingConfig_ {};
    };

    class ErrorHandlers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorHandlers& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorDataFilter, errorDataFilter_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorHandlers& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorDataFilter, errorDataFilter_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ErrorHandlers() = default ;
      ErrorHandlers(const ErrorHandlers &) = default ;
      ErrorHandlers(ErrorHandlers &&) = default ;
      ErrorHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorHandlers() = default ;
      ErrorHandlers& operator=(const ErrorHandlers &) = default ;
      ErrorHandlers& operator=(ErrorHandlers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorDataFilter_ == nullptr
        && this->type_ == nullptr; };
      // errorDataFilter Field Functions 
      bool hasErrorDataFilter() const { return this->errorDataFilter_ != nullptr;};
      void deleteErrorDataFilter() { this->errorDataFilter_ = nullptr;};
      inline string getErrorDataFilter() const { DARABONBA_PTR_GET_DEFAULT(errorDataFilter_, "") };
      inline ErrorHandlers& setErrorDataFilter(string errorDataFilter) { DARABONBA_PTR_SET_VALUE(errorDataFilter_, errorDataFilter) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ErrorHandlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // For a custom SQL rule, you must specify the SQL used to filter problematic data.
      shared_ptr<string> errorDataFilter_ {};
      // The handler type.
      // - SaveErrorData
      shared_ptr<string> type_ {};
    };

    class CheckingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
        DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
        DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CheckingConfig() = default ;
      CheckingConfig(const CheckingConfig &) = default ;
      CheckingConfig(CheckingConfig &&) = default ;
      CheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckingConfig() = default ;
      CheckingConfig& operator=(const CheckingConfig &) = default ;
      CheckingConfig& operator=(CheckingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Thresholds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Thresholds& obj) { 
          DARABONBA_PTR_TO_JSON(Critical, critical_);
          DARABONBA_PTR_TO_JSON(Expected, expected_);
          DARABONBA_PTR_TO_JSON(Warned, warned_);
        };
        friend void from_json(const Darabonba::Json& j, Thresholds& obj) { 
          DARABONBA_PTR_FROM_JSON(Critical, critical_);
          DARABONBA_PTR_FROM_JSON(Expected, expected_);
          DARABONBA_PTR_FROM_JSON(Warned, warned_);
        };
        Thresholds() = default ;
        Thresholds(const Thresholds &) = default ;
        Thresholds(Thresholds &&) = default ;
        Thresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Thresholds() = default ;
        Thresholds& operator=(const Thresholds &) = default ;
        Thresholds& operator=(Thresholds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Warned : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Warned& obj) { 
            DARABONBA_PTR_TO_JSON(Expression, expression_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Warned& obj) { 
            DARABONBA_PTR_FROM_JSON(Expression, expression_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Warned() = default ;
          Warned(const Warned &) = default ;
          Warned(Warned &&) = default ;
          Warned(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Warned() = default ;
          Warned& operator=(const Warned &) = default ;
          Warned& operator=(Warned &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expression_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
          // expression Field Functions 
          bool hasExpression() const { return this->expression_ != nullptr;};
          void deleteExpression() { this->expression_ = nullptr;};
          inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
          inline Warned& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Warned& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Warned& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The threshold expression.
          // 
          // Fluctuation-type rules must use an expression to represent the fluctuation threshold. Examples:
          // 
          // - Upward fluctuation greater than 0.01: $checkValue > 0.01
          // - Downward fluctuation greater than 0.01: $checkValue < -0.01
          // - Absolute fluctuation rate: abs($checkValue) > 0.01
          // 
          // Fixed-value rules can also use an expression to configure the threshold. If both are configured, the expression takes precedence over Operator and Value.
          shared_ptr<string> expression_ {};
          // The comparison operator.
          // - \\>
          // - \\>=
          // - <
          // - <=
          // - !=
          // - =
          shared_ptr<string> operator_ {};
          // The threshold value.
          shared_ptr<string> value_ {};
        };

        class Expected : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Expected& obj) { 
            DARABONBA_PTR_TO_JSON(Expression, expression_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Expected& obj) { 
            DARABONBA_PTR_FROM_JSON(Expression, expression_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Expected() = default ;
          Expected(const Expected &) = default ;
          Expected(Expected &&) = default ;
          Expected(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Expected() = default ;
          Expected& operator=(const Expected &) = default ;
          Expected& operator=(Expected &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expression_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
          // expression Field Functions 
          bool hasExpression() const { return this->expression_ != nullptr;};
          void deleteExpression() { this->expression_ = nullptr;};
          inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
          inline Expected& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Expected& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Expected& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The threshold expression.
          // 
          // Fluctuation-type rules must use an expression to represent the fluctuation threshold. Examples:
          // 
          // - Upward fluctuation greater than 0.01: $checkValue > 0.01
          // - Downward fluctuation greater than 0.01: $checkValue < -0.01
          // - Absolute fluctuation rate: abs($checkValue) > 0.01
          // 
          // Fixed-value rules can also use an expression to configure the threshold. If both are configured, the expression takes precedence over Operator and Value.
          shared_ptr<string> expression_ {};
          // The comparison operator.
          // - \\>
          // - \\>=
          // - <
          // - <=
          // - !=
          // - =
          shared_ptr<string> operator_ {};
          // The threshold value.
          shared_ptr<string> value_ {};
        };

        class Critical : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Critical& obj) { 
            DARABONBA_PTR_TO_JSON(Expression, expression_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Critical& obj) { 
            DARABONBA_PTR_FROM_JSON(Expression, expression_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Critical() = default ;
          Critical(const Critical &) = default ;
          Critical(Critical &&) = default ;
          Critical(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Critical() = default ;
          Critical& operator=(const Critical &) = default ;
          Critical& operator=(Critical &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expression_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
          // expression Field Functions 
          bool hasExpression() const { return this->expression_ != nullptr;};
          void deleteExpression() { this->expression_ = nullptr;};
          inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
          inline Critical& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Critical& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Critical& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The threshold expression.
          // 
          // Fluctuation-type rules must use an expression to represent the fluctuation threshold. Examples:
          // 
          // - Upward fluctuation greater than 0.01: $checkValue > 0.01
          // - Downward fluctuation greater than 0.01: $checkValue < -0.01
          // - Absolute fluctuation rate: abs($checkValue) > 0.01
          // 
          // Fixed-value rules can also use an expression to configure the threshold. If both are configured, the expression takes precedence over Operator and Value.
          shared_ptr<string> expression_ {};
          // The comparison operator.
          // - \\>
          // - \\>=
          // - <
          // - <=
          // - !=
          // - =
          shared_ptr<string> operator_ {};
          // The threshold value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->critical_ == nullptr
        && this->expected_ == nullptr && this->warned_ == nullptr; };
        // critical Field Functions 
        bool hasCritical() const { return this->critical_ != nullptr;};
        void deleteCritical() { this->critical_ = nullptr;};
        inline const Thresholds::Critical & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, Thresholds::Critical) };
        inline Thresholds::Critical getCritical() { DARABONBA_PTR_GET(critical_, Thresholds::Critical) };
        inline Thresholds& setCritical(const Thresholds::Critical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
        inline Thresholds& setCritical(Thresholds::Critical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


        // expected Field Functions 
        bool hasExpected() const { return this->expected_ != nullptr;};
        void deleteExpected() { this->expected_ = nullptr;};
        inline const Thresholds::Expected & getExpected() const { DARABONBA_PTR_GET_CONST(expected_, Thresholds::Expected) };
        inline Thresholds::Expected getExpected() { DARABONBA_PTR_GET(expected_, Thresholds::Expected) };
        inline Thresholds& setExpected(const Thresholds::Expected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
        inline Thresholds& setExpected(Thresholds::Expected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


        // warned Field Functions 
        bool hasWarned() const { return this->warned_ != nullptr;};
        void deleteWarned() { this->warned_ = nullptr;};
        inline const Thresholds::Warned & getWarned() const { DARABONBA_PTR_GET_CONST(warned_, Thresholds::Warned) };
        inline Thresholds::Warned getWarned() { DARABONBA_PTR_GET(warned_, Thresholds::Warned) };
        inline Thresholds& setWarned(const Thresholds::Warned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
        inline Thresholds& setWarned(Thresholds::Warned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


      protected:
        // The threshold settings for critical warnings.
        shared_ptr<Thresholds::Critical> critical_ {};
        // The expected threshold settings.
        shared_ptr<Thresholds::Expected> expected_ {};
        // The threshold settings for normal warnings.
        shared_ptr<Thresholds::Warned> warned_ {};
      };

      virtual bool empty() const override { return this->referencedSamplesFilter_ == nullptr
        && this->thresholds_ == nullptr && this->type_ == nullptr; };
      // referencedSamplesFilter Field Functions 
      bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
      void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
      inline string getReferencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
      inline CheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


      // thresholds Field Functions 
      bool hasThresholds() const { return this->thresholds_ != nullptr;};
      void deleteThresholds() { this->thresholds_ = nullptr;};
      inline const CheckingConfig::Thresholds & getThresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, CheckingConfig::Thresholds) };
      inline CheckingConfig::Thresholds getThresholds() { DARABONBA_PTR_GET(thresholds_, CheckingConfig::Thresholds) };
      inline CheckingConfig& setThresholds(const CheckingConfig::Thresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
      inline CheckingConfig& setThresholds(CheckingConfig::Thresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Some types of thresholds require querying reference samples and then aggregating the values of those reference samples to derive the threshold used for comparison. An expression is used here to indicate how the reference samples are queried.
      shared_ptr<string> referencedSamplesFilter_ {};
      // The threshold settings.
      shared_ptr<CheckingConfig::Thresholds> thresholds_ {};
      // The threshold calculation method. This parameter is not required when a template is used.
      // - Fixed
      // - Fluctation
      // - FluctationDiscreate
      // - Auto
      // - Average
      // - Variance
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->errorHandlers_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->samplingConfig_ == nullptr && this->severity_ == nullptr && this->templateCode_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleRequest::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, UpdateDataQualityRuleRequest::CheckingConfig) };
    inline UpdateDataQualityRuleRequest::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, UpdateDataQualityRuleRequest::CheckingConfig) };
    inline UpdateDataQualityRuleRequest& setCheckingConfig(const UpdateDataQualityRuleRequest::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline UpdateDataQualityRuleRequest& setCheckingConfig(UpdateDataQualityRuleRequest::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDataQualityRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<UpdateDataQualityRuleRequest::ErrorHandlers> & getErrorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<UpdateDataQualityRuleRequest::ErrorHandlers>) };
    inline vector<UpdateDataQualityRuleRequest::ErrorHandlers> getErrorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<UpdateDataQualityRuleRequest::ErrorHandlers>) };
    inline UpdateDataQualityRuleRequest& setErrorHandlers(const vector<UpdateDataQualityRuleRequest::ErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline UpdateDataQualityRuleRequest& setErrorHandlers(vector<UpdateDataQualityRuleRequest::ErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleRequest::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, UpdateDataQualityRuleRequest::SamplingConfig) };
    inline UpdateDataQualityRuleRequest::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, UpdateDataQualityRuleRequest::SamplingConfig) };
    inline UpdateDataQualityRuleRequest& setSamplingConfig(const UpdateDataQualityRuleRequest::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline UpdateDataQualityRuleRequest& setSamplingConfig(UpdateDataQualityRuleRequest::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateDataQualityRuleRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateDataQualityRuleRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The sample verification settings.
    shared_ptr<UpdateDataQualityRuleRequest::CheckingConfig> checkingConfig_ {};
    // The rule description. The maximum length is 500 characters.
    shared_ptr<string> description_ {};
    // Specifies whether the rule is enabled.
    shared_ptr<bool> enabled_ {};
    // The list of issue handlers for data quality rule verification.
    shared_ptr<vector<UpdateDataQualityRuleRequest::ErrorHandlers>> errorHandlers_ {};
    // The rule ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The rule name. The name can be a combination of digits, English letters, Chinese characters, and half-width or full-width punctuation. The maximum length is 255 characters.
    shared_ptr<string> name_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Settings page to obtain the workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The settings required for sample collection.
    shared_ptr<UpdateDataQualityRuleRequest::SamplingConfig> samplingConfig_ {};
    // The severity level of the rule for the business (corresponding to strong/weak rules on the page). Valid values:
    // - Normal
    // - High
    shared_ptr<string> severity_ {};
    // The unique identifier of the rule template referenced by the rule.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
