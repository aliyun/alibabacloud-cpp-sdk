// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUEST_HPP_
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
  class CreateDataQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateDataQualityRuleRequest() = default ;
    CreateDataQualityRuleRequest(const CreateDataQualityRuleRequest &) = default ;
    CreateDataQualityRuleRequest(CreateDataQualityRuleRequest &&) = default ;
    CreateDataQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleRequest() = default ;
    CreateDataQualityRuleRequest& operator=(const CreateDataQualityRuleRequest &) = default ;
    CreateDataQualityRuleRequest& operator=(CreateDataQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Target : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Target& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(PartitionSpec, partitionSpec_);
        DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Target& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(PartitionSpec, partitionSpec_);
        DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Target() = default ;
      Target(const Target &) = default ;
      Target(Target &&) = default ;
      Target(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Target() = default ;
      Target& operator=(const Target &) = default ;
      Target& operator=(Target &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseType_ == nullptr
        && this->partitionSpec_ == nullptr && this->tableGuid_ == nullptr && this->type_ == nullptr; };
      // databaseType Field Functions 
      bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
      void deleteDatabaseType() { this->databaseType_ = nullptr;};
      inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
      inline Target& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


      // partitionSpec Field Functions 
      bool hasPartitionSpec() const { return this->partitionSpec_ != nullptr;};
      void deletePartitionSpec() { this->partitionSpec_ = nullptr;};
      inline string getPartitionSpec() const { DARABONBA_PTR_GET_DEFAULT(partitionSpec_, "") };
      inline Target& setPartitionSpec(string partitionSpec) { DARABONBA_PTR_SET_VALUE(partitionSpec_, partitionSpec) };


      // tableGuid Field Functions 
      bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
      void deleteTableGuid() { this->tableGuid_ = nullptr;};
      inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
      inline Target& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The type of the database to which the table belongs. Valid values:
      // 
      // *   maxcompute
      // *   emr
      // *   cdh
      // *   hologres
      // *   analyticdb_for_postgresql
      // *   analyticdb_for_mysql
      // *   starrocks
      shared_ptr<string> databaseType_ {};
      // The configuration of the partitioned table.
      shared_ptr<string> partitionSpec_ {};
      // The ID of the table that is limited by the rule in Data Map.
      // 
      // This parameter is required.
      shared_ptr<string> tableGuid_ {};
      // The type of the monitored object. Valid values:
      // 
      // *   Table
      shared_ptr<string> type_ {};
    };

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
      // The metrics used for sampling. You can leave this parameter empty if you use a rule template. Valid values:
      // 
      // *   Count: the number of rows in the table.
      // *   Min: the minimum value of the field.
      // *   Max: the maximum value of the field.
      // *   Avg: the average value of the field.
      // *   DistinctCount: the number of unique values of the field after deduplication.
      // *   DistinctPercent: the proportion of the number of unique values of the field after deduplication to the number of rows in the table.
      // *   DuplicatedCount: the number of duplicated values of the field.
      // *   DuplicatedPercent: the proportion of the number of duplicated values of the field to the number of rows in the table.
      // *   TableSize: the table size.
      // *   NullValueCount: the number of rows in which the field value is null.
      // *   NullValuePercent: the proportion of the number of rows in which the field value is null to the number of rows in the table.
      // *   GroupCount: the field value and the number of rows for each field value.
      // *   CountNotIn: the number of rows in which the field values are different from the referenced values that you specified in the rule.
      // *   CountDistinctNotIn: the number of unique values that are different from the referenced values that you specified in the rule after deduplication.
      // *   UserDefinedSql: specifies that data is sampled by executing custom SQL statements.
      shared_ptr<string> metric_ {};
      // The parameters required for sampling.
      shared_ptr<string> metricParameters_ {};
      // The statements that are used to filter unnecessary data during sampling. The statements can be up to 16,777,215 characters in length.
      shared_ptr<string> samplingFilter_ {};
      // The statements that are used to configure the parameters required for sampling before you execute the sampling statements. The statements can be up to 1,000 characters in length. Only the MaxCompute database is supported.
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
      // The SQL statement that is used to filter failed tasks. If you define the rule by using custom SQL statements, you must specify an SQL statement to filter failed tasks.
      shared_ptr<string> errorDataFilter_ {};
      // The type of the operation. Valid values:
      // 
      // *   SaveErrorData
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
          // If the template specified by the TemplateCode parameter is about fluctuation, you must use an expression to represent the threshold for fluctuation. Example:
          // 
          // *   $checkValue > 0.01
          // *   $checkValue < -0.01
          // *   abs($checkValue) > 0.01
          // 
          // If the template specified by the TemplateCode parameter is about fixed value, you can also use an expression to represent the threshold. If you configure the Expression, Operator, and Value parameters for the threshold at the same time, the Expression parameter takes precedence over the Operator and Value parameters.
          shared_ptr<string> expression_ {};
          // The comparison operator. Valid values:
          // 
          // *   \\>
          // *   \\>=
          // *   <
          // *   <=
          // *   !=
          // *   \\=
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
          // If the template specified by the TemplateCode parameter is about fluctuation, you must use an expression to represent the threshold for fluctuation. Example:
          // 
          // *   $checkValue > 0.01
          // *   $checkValue < -0.01
          // *   abs($checkValue) > 0.01
          // 
          // If the template specified by the TemplateCode parameter is about fixed value, you can also use an expression to represent the threshold. If you configure the Expression, Operator, and Value parameters for the threshold at the same time, the Expression parameter takes precedence over the Operator and Value parameters.
          shared_ptr<string> expression_ {};
          // The comparison operator. Valid values:
          // 
          // *   \\>
          // *   \\>=
          // *   <
          // *   <=
          // *   !=
          // *   \\=
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
          // If the template specified by the TemplateCode parameter is about fluctuation, you must use an expression to represent the threshold for fluctuation. Example:
          // 
          // *   $checkValue > 0.01
          // *   $checkValue < -0.01
          // *   abs($checkValue) > 0.01
          // 
          // If the template specified by the TemplateCode parameter is about fixed value, you can also use an expression to represent the threshold. If you configure the Expression, Operator, and Value parameters for the threshold at the same time, the Expression parameter takes precedence over the Operator and Value parameters.
          shared_ptr<string> expression_ {};
          // The comparison operator. Valid values:
          // 
          // *   \\>
          // *   \\>=
          // *   <
          // *   <=
          // *   !=
          // *   \\=
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
        // The threshold settings for critical alerts.
        shared_ptr<Thresholds::Critical> critical_ {};
        // The expected threshold setting.
        shared_ptr<Thresholds::Expected> expected_ {};
        // The threshold settings for normal alerts.
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
      // The method that is used to query the referenced samples. To obtain some types of thresholds, you need to query reference samples and perform aggregate operations on the reference values. In this example, an expression is used to specify the query method of referenced samples.
      shared_ptr<string> referencedSamplesFilter_ {};
      // The threshold settings.
      shared_ptr<CheckingConfig::Thresholds> thresholds_ {};
      // The method that is used to calculate a threshold. You can leave this parameter empty if you use a rule template. Valid values:
      // 
      // *   Fixed
      // *   Fluctation
      // *   FluctationDiscreate
      // *   Auto
      // *   Average
      // *   Variance
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->errorHandlers_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr
        && this->samplingConfig_ == nullptr && this->severity_ == nullptr && this->target_ == nullptr && this->templateCode_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const CreateDataQualityRuleRequest::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, CreateDataQualityRuleRequest::CheckingConfig) };
    inline CreateDataQualityRuleRequest::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, CreateDataQualityRuleRequest::CheckingConfig) };
    inline CreateDataQualityRuleRequest& setCheckingConfig(const CreateDataQualityRuleRequest::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline CreateDataQualityRuleRequest& setCheckingConfig(CreateDataQualityRuleRequest::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDataQualityRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<CreateDataQualityRuleRequest::ErrorHandlers> & getErrorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<CreateDataQualityRuleRequest::ErrorHandlers>) };
    inline vector<CreateDataQualityRuleRequest::ErrorHandlers> getErrorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<CreateDataQualityRuleRequest::ErrorHandlers>) };
    inline CreateDataQualityRuleRequest& setErrorHandlers(const vector<CreateDataQualityRuleRequest::ErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline CreateDataQualityRuleRequest& setErrorHandlers(vector<CreateDataQualityRuleRequest::ErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const CreateDataQualityRuleRequest::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, CreateDataQualityRuleRequest::SamplingConfig) };
    inline CreateDataQualityRuleRequest::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, CreateDataQualityRuleRequest::SamplingConfig) };
    inline CreateDataQualityRuleRequest& setSamplingConfig(const CreateDataQualityRuleRequest::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline CreateDataQualityRuleRequest& setSamplingConfig(CreateDataQualityRuleRequest::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateDataQualityRuleRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const CreateDataQualityRuleRequest::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, CreateDataQualityRuleRequest::Target) };
    inline CreateDataQualityRuleRequest::Target getTarget() { DARABONBA_PTR_GET(target_, CreateDataQualityRuleRequest::Target) };
    inline CreateDataQualityRuleRequest& setTarget(const CreateDataQualityRuleRequest::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateDataQualityRuleRequest& setTarget(CreateDataQualityRuleRequest::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateDataQualityRuleRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    shared_ptr<CreateDataQualityRuleRequest::CheckingConfig> checkingConfig_ {};
    // The description of the rule. The description can be up to 500 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the monitoring rule.
    shared_ptr<bool> enabled_ {};
    // The operations that you can perform after the rule-based check fails.
    shared_ptr<vector<CreateDataQualityRuleRequest::ErrorHandlers>> errorHandlers_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The sampling settings.
    shared_ptr<CreateDataQualityRuleRequest::SamplingConfig> samplingConfig_ {};
    // The strength of the rule. Valid values:
    // 
    // *   Normal
    // *   High
    shared_ptr<string> severity_ {};
    // The monitored object of the rule.
    shared_ptr<CreateDataQualityRuleRequest::Target> target_ {};
    // The ID of the template used by the rule.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
