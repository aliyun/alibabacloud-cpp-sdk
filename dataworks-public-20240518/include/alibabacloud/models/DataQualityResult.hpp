// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRESULT_HPP_
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
  class DataQualityResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityResult& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    DataQualityResult() = default ;
    DataQualityResult(const DataQualityResult &) = default ;
    DataQualityResult(DataQualityResult &&) = default ;
    DataQualityResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityResult() = default ;
    DataQualityResult& operator=(const DataQualityResult &) = default ;
    DataQualityResult& operator=(DataQualityResult &&) = default ;
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
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
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
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
        shared_ptr<string> databaseType_ {};
        shared_ptr<string> partitionSpec_ {};
        shared_ptr<string> tableGuid_ {};
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
        shared_ptr<string> metric_ {};
        shared_ptr<string> metricParameters_ {};
        shared_ptr<string> samplingFilter_ {};
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
        shared_ptr<string> errorDataFilter_ {};
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
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Warned& obj) { 
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
            virtual bool empty() const override { return this->operator_ == nullptr
        && this->value_ == nullptr; };
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
            shared_ptr<string> operator_ {};
            shared_ptr<string> value_ {};
          };

          class Expected : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Expected& obj) { 
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Expected& obj) { 
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
            virtual bool empty() const override { return this->operator_ == nullptr
        && this->value_ == nullptr; };
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
            shared_ptr<string> operator_ {};
            shared_ptr<string> value_ {};
          };

          class Critical : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Critical& obj) { 
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Critical& obj) { 
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
            virtual bool empty() const override { return this->operator_ == nullptr
        && this->value_ == nullptr; };
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
            shared_ptr<string> operator_ {};
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
          shared_ptr<Thresholds::Critical> critical_ {};
          shared_ptr<Thresholds::Expected> expected_ {};
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
        shared_ptr<string> referencedSamplesFilter_ {};
        shared_ptr<CheckingConfig::Thresholds> thresholds_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->errorHandlers_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->samplingConfig_ == nullptr && this->severity_ == nullptr && this->target_ == nullptr && this->templateCode_ == nullptr
        && this->tenantId_ == nullptr; };
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


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Rule& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<Rule::CheckingConfig> checkingConfig_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<vector<Rule::ErrorHandlers>> errorHandlers_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<Rule::SamplingConfig> samplingConfig_ {};
      shared_ptr<string> severity_ {};
      shared_ptr<Rule::Target> target_ {};
      shared_ptr<string> templateCode_ {};
      shared_ptr<int64_t> tenantId_ {};
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
      shared_ptr<string> checkedValue_ {};
      shared_ptr<string> referencedValue_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->details_ == nullptr
        && this->id_ == nullptr && this->rule_ == nullptr && this->sample_ == nullptr && this->status_ == nullptr && this->taskInstanceId_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<DataQualityResult::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<DataQualityResult::Details>) };
    inline vector<DataQualityResult::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<DataQualityResult::Details>) };
    inline DataQualityResult& setDetails(const vector<DataQualityResult::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DataQualityResult& setDetails(vector<DataQualityResult::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DataQualityResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const DataQualityResult::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, DataQualityResult::Rule) };
    inline DataQualityResult::Rule getRule() { DARABONBA_PTR_GET(rule_, DataQualityResult::Rule) };
    inline DataQualityResult& setRule(const DataQualityResult::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DataQualityResult& setRule(DataQualityResult::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline DataQualityResult& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataQualityResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline DataQualityResult& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    shared_ptr<vector<DataQualityResult::Details>> details_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<DataQualityResult::Rule> rule_ {};
    shared_ptr<string> sample_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> taskInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
