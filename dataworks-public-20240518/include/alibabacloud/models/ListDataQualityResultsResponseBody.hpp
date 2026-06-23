// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODY_HPP_
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
  class ListDataQualityResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityResultsResponseBody() = default ;
    ListDataQualityResultsResponseBody(const ListDataQualityResultsResponseBody &) = default ;
    ListDataQualityResultsResponseBody(ListDataQualityResultsResponseBody &&) = default ;
    ListDataQualityResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsResponseBody() = default ;
    ListDataQualityResultsResponseBody& operator=(const ListDataQualityResultsResponseBody &) = default ;
    ListDataQualityResultsResponseBody& operator=(ListDataQualityResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityResults, dataQualityResults_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityResults, dataQualityResults_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityResults& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Details, details_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityResults& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Details, details_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
        };
        DataQualityResults() = default ;
        DataQualityResults(const DataQualityResults &) = default ;
        DataQualityResults(DataQualityResults &&) = default ;
        DataQualityResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityResults() = default ;
        DataQualityResults& operator=(const DataQualityResults &) = default ;
        DataQualityResults& operator=(DataQualityResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rule& obj) { 
            DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
            DARABONBA_PTR_TO_JSON(Severity, severity_);
            DARABONBA_PTR_TO_JSON(Target, target_);
            DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
          };
          friend void from_json(const Darabonba::Json& j, Rule& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
            DARABONBA_PTR_FROM_JSON(Severity, severity_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
            DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
          };
          Rule() = default ;
          Rule(const Rule &) = default ;
          Rule(Rule &&) = default ;
          Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rule() = default ;
          Rule& operator=(const Rule &) = default ;
          Rule& operator=(Rule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Target : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Target& obj) { 
              DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
              DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Target& obj) { 
              DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
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
        && this->tableGuid_ == nullptr && this->type_ == nullptr; };
            // databaseType Field Functions 
            bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
            void deleteDatabaseType() { this->databaseType_ = nullptr;};
            inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
            inline Target& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


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
            // 表类型的数据集，表所属的数据库类型：
            // - maxcompute
            // - emr
            // - cdh
            // - hologres
            // - analyticdb_for_postgresql
            // - analyticdb_for_mysql
            // - starrocks
            shared_ptr<string> databaseType_ {};
            // 表在数据地图中的唯一ID。
            shared_ptr<string> tableGuid_ {};
            // 监控对象类型：
            // - Table
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
            // 采样的指标名称：
            // - Count：表行数
            // - Min：字段最小值
            // - Max：字段最大值
            // - Avg：字段均值
            // - DistinctCount：字段唯一值个数
            // - DistinctPercent：字段唯一值个数与数据行数占比
            // - DuplicatedCount：字段重复值个数
            // - DuplicatedPercent：字段重复值个数与数据行数占比
            // - TableSize：表大小
            // - NullValueCount：字段为空的行数
            // - NullValuePercent：字段为空的比例
            // - GroupCount：按字段值聚合后每个值与对应的数据行数
            // - CountNotIn：枚举值不匹配行数
            // - CountDistinctNotIn：枚举值不匹配唯一值个数
            // - UserDefinedSql：通过自定义SQL做样本采集
            shared_ptr<string> metric_ {};
            // 样本采集时，所需的参数。
            shared_ptr<string> metricParameters_ {};
            // 采样时，对不关注的数据进行二次过滤的条件，最多16777215个字符。
            shared_ptr<string> samplingFilter_ {};
            // 具体执行采样语句前，插入执行的一些运行时参数设置语句，最长1000个字符。目前只支持MaxCompute。
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
            // 如果是自定义SQL规则，需要用户指定SQL来过滤问题数据。
            shared_ptr<string> errorDataFilter_ {};
            // 处理器类型。
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
                // 阈值表达式。
                // 
                // 波动率类型规则必须使用表达式方式表示波动阈值。如：
                // 
                // - 波动上升大于0.01： $checkValue > 0.01 
                // - 波动下降大于0.01：$checkValue < -0.01 
                // - 波动率绝对值：abs($checkValue) > 0.01
                // 
                // 固定值类型规则也可以使用表达式方式配置阈值，如果同时配置，表达式优先级高于Operator和Value。
                shared_ptr<string> expression_ {};
                // 比较符：
                // - \\>
                // - \\>=
                // - \\<
                // - \\<=
                // - !=
                // - =
                shared_ptr<string> operator_ {};
                // 阈值数值。
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
                // 阈值表达式。
                // 
                // 波动率类型规则必须使用表达式方式表示波动阈值。如：
                // 
                // - 波动上升大于0.01： $checkValue > 0.01 
                // - 波动下降大于0.01：$checkValue < -0.01 
                // - 波动率绝对值：abs($checkValue) > 0.01
                // 
                // 固定值类型规则也可以使用表达式方式配置阈值，如果同时配置，表达式优先级高于Operator和Value。
                shared_ptr<string> expression_ {};
                // 比较符：
                // - \\>
                // - \\>=
                // - \\<
                // - \\<=
                // - !=
                // - =
                shared_ptr<string> operator_ {};
                // 阈值数值。
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
                // 阈值表达式。
                // 
                // 波动率类型规则必须使用表达式方式表示波动阈值。如：
                // 
                // - 波动上升大于0.01： $checkValue > 0.01 
                // - 波动下降大于0.01：$checkValue < -0.01 
                // - 波动率绝对值：abs($checkValue) > 0.01
                // 
                // 固定值类型规则也可以使用表达式方式配置阈值，如果同时配置，表达式优先级高于Operator和Value。
                shared_ptr<string> expression_ {};
                // 比较符：
                // - \\>
                // - \\>=
                // - \\<
                // - \\<=
                // - !=
                // - =
                shared_ptr<string> operator_ {};
                // 阈值数值。
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
              // 严重警告的阈值设置。
              shared_ptr<Thresholds::Critical> critical_ {};
              // 期望的阈值设置。
              shared_ptr<Thresholds::Expected> expected_ {};
              // 普通警告的阈值设置。
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
            // 有些类型的阈值需要查询出一些参考样本，然后对参考样本的值进行汇总得出进行比较的阈值，这里使用一个表达式来表示参考样本的查询方式。
            shared_ptr<string> referencedSamplesFilter_ {};
            // 阈值设置。
            shared_ptr<CheckingConfig::Thresholds> thresholds_ {};
            // 阈值计算方式：
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
        && this->projectId_ == nullptr && this->samplingConfig_ == nullptr && this->severity_ == nullptr && this->target_ == nullptr && this->templateCode_ == nullptr; };
          // checkingConfig Field Functions 
          bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
          void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
          inline const Rule::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, Rule::CheckingConfig) };
          inline Rule::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, Rule::CheckingConfig) };
          inline Rule& setCheckingConfig(const Rule::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
          inline Rule& setCheckingConfig(Rule::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Rule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Rule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // errorHandlers Field Functions 
          bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
          void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
          inline const vector<Rule::ErrorHandlers> & getErrorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<Rule::ErrorHandlers>) };
          inline vector<Rule::ErrorHandlers> getErrorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<Rule::ErrorHandlers>) };
          inline Rule& setErrorHandlers(const vector<Rule::ErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
          inline Rule& setErrorHandlers(vector<Rule::ErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Rule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline Rule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // samplingConfig Field Functions 
          bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
          void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
          inline const Rule::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, Rule::SamplingConfig) };
          inline Rule::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, Rule::SamplingConfig) };
          inline Rule& setSamplingConfig(const Rule::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
          inline Rule& setSamplingConfig(Rule::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline Rule& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline const Rule::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Rule::Target) };
          inline Rule::Target getTarget() { DARABONBA_PTR_GET(target_, Rule::Target) };
          inline Rule& setTarget(const Rule::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
          inline Rule& setTarget(Rule::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


          // templateCode Field Functions 
          bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
          void deleteTemplateCode() { this->templateCode_ = nullptr;};
          inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
          inline Rule& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        protected:
          // 样本校验设置。
          shared_ptr<Rule::CheckingConfig> checkingConfig_ {};
          // 规则描述信息，最长500个字符。
          shared_ptr<string> description_ {};
          // 规则是否启用。
          shared_ptr<bool> enabled_ {};
          // 质量规则校验问题处理器。
          shared_ptr<vector<Rule::ErrorHandlers>> errorHandlers_ {};
          // 规则ID。
          shared_ptr<int64_t> id_ {};
          // 规则名称，数字、英文字母、汉字、半角全角标点符号组合，最长255个字符。
          shared_ptr<string> name_ {};
          // DataWorks项目空间ID。
          shared_ptr<int64_t> projectId_ {};
          // 样本采集所需的设置。
          shared_ptr<Rule::SamplingConfig> samplingConfig_ {};
          // 规则对于业务的等级（对应页面上的强弱规则）：
          // - High
          // - Normal
          shared_ptr<string> severity_ {};
          // 规则所监控的对象。
          shared_ptr<Rule::Target> target_ {};
          // 创建规则时所引用的规则模板Code。
          shared_ptr<string> templateCode_ {};
        };

        class Details : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Details& obj) { 
            DARABONBA_PTR_TO_JSON(CheckedValue, checkedValue_);
            DARABONBA_PTR_TO_JSON(ReferencedValue, referencedValue_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Details& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckedValue, checkedValue_);
            DARABONBA_PTR_FROM_JSON(ReferencedValue, referencedValue_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Details() = default ;
          Details(const Details &) = default ;
          Details(Details &&) = default ;
          Details(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Details() = default ;
          Details& operator=(const Details &) = default ;
          Details& operator=(Details &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkedValue_ == nullptr
        && this->referencedValue_ == nullptr && this->status_ == nullptr; };
          // checkedValue Field Functions 
          bool hasCheckedValue() const { return this->checkedValue_ != nullptr;};
          void deleteCheckedValue() { this->checkedValue_ = nullptr;};
          inline string getCheckedValue() const { DARABONBA_PTR_GET_DEFAULT(checkedValue_, "") };
          inline Details& setCheckedValue(string checkedValue) { DARABONBA_PTR_SET_VALUE(checkedValue_, checkedValue) };


          // referencedValue Field Functions 
          bool hasReferencedValue() const { return this->referencedValue_ != nullptr;};
          void deleteReferencedValue() { this->referencedValue_ = nullptr;};
          inline string getReferencedValue() const { DARABONBA_PTR_GET_DEFAULT(referencedValue_, "") };
          inline Details& setReferencedValue(string referencedValue) { DARABONBA_PTR_SET_VALUE(referencedValue_, referencedValue) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // 最终用来与阈值比较的值。
          shared_ptr<string> checkedValue_ {};
          // 使用引用的样本，用来参与CheckedValue计算的基准值。
          shared_ptr<string> referencedValue_ {};
          // 最终的比较结果状态：
          // - Error
          // - Passed
          // - Warned
          // - Critical
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->details_ == nullptr && this->id_ == nullptr && this->rule_ == nullptr && this->sample_ == nullptr && this->status_ == nullptr
        && this->taskInstanceId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataQualityResults& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline const vector<DataQualityResults::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<DataQualityResults::Details>) };
        inline vector<DataQualityResults::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<DataQualityResults::Details>) };
        inline DataQualityResults& setDetails(const vector<DataQualityResults::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
        inline DataQualityResults& setDetails(vector<DataQualityResults::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataQualityResults& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline const DataQualityResults::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, DataQualityResults::Rule) };
        inline DataQualityResults::Rule getRule() { DARABONBA_PTR_GET(rule_, DataQualityResults::Rule) };
        inline DataQualityResults& setRule(const DataQualityResults::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
        inline DataQualityResults& setRule(DataQualityResults::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline DataQualityResults& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataQualityResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskInstanceId Field Functions 
        bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
        void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
        inline int64_t getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
        inline DataQualityResults& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


      protected:
        // 校验结果生成时间。
        shared_ptr<int64_t> createTime_ {};
        // 本次校验的详情。
        shared_ptr<vector<DataQualityResults::Details>> details_ {};
        // 校验结果ID。
        shared_ptr<int64_t> id_ {};
        // 校验开始时，规则配置快照。
        shared_ptr<DataQualityResults::Rule> rule_ {};
        // 本次校验所使用的样本值。
        shared_ptr<string> sample_ {};
        // 校验结果状态：
        // - Running
        // - Error
        // - Passed
        // - Warned
        // - Critical
        shared_ptr<string> status_ {};
        // 校验任务实例ID。
        shared_ptr<int64_t> taskInstanceId_ {};
      };

      virtual bool empty() const override { return this->dataQualityResults_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityResults Field Functions 
      bool hasDataQualityResults() const { return this->dataQualityResults_ != nullptr;};
      void deleteDataQualityResults() { this->dataQualityResults_ = nullptr;};
      inline const vector<PagingInfo::DataQualityResults> & getDataQualityResults() const { DARABONBA_PTR_GET_CONST(dataQualityResults_, vector<PagingInfo::DataQualityResults>) };
      inline vector<PagingInfo::DataQualityResults> getDataQualityResults() { DARABONBA_PTR_GET(dataQualityResults_, vector<PagingInfo::DataQualityResults>) };
      inline PagingInfo& setDataQualityResults(const vector<PagingInfo::DataQualityResults> & dataQualityResults) { DARABONBA_PTR_SET_VALUE(dataQualityResults_, dataQualityResults) };
      inline PagingInfo& setDataQualityResults(vector<PagingInfo::DataQualityResults> && dataQualityResults) { DARABONBA_PTR_SET_RVALUE(dataQualityResults_, dataQualityResults) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 质量校验结果列表。
      shared_ptr<vector<PagingInfo::DataQualityResults>> dataQualityResults_ {};
      // 页码。
      shared_ptr<int32_t> pageNumber_ {};
      // 页大小。
      shared_ptr<int32_t> pageSize_ {};
      // 总条数。
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataQualityResultsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataQualityResultsResponseBody::PagingInfo) };
    inline ListDataQualityResultsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataQualityResultsResponseBody::PagingInfo) };
    inline ListDataQualityResultsResponseBody& setPagingInfo(const ListDataQualityResultsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataQualityResultsResponseBody& setPagingInfo(ListDataQualityResultsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 数据质量校验结果分页查询结果。
    shared_ptr<ListDataQualityResultsResponseBody::PagingInfo> pagingInfo_ {};
    // API请求ID。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
