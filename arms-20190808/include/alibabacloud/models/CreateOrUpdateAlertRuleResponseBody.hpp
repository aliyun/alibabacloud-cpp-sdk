// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateAlertRuleResponseBody() = default ;
    CreateOrUpdateAlertRuleResponseBody(const CreateOrUpdateAlertRuleResponseBody &) = default ;
    CreateOrUpdateAlertRuleResponseBody(CreateOrUpdateAlertRuleResponseBody &&) = default ;
    CreateOrUpdateAlertRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBody() = default ;
    CreateOrUpdateAlertRuleResponseBody& operator=(const CreateOrUpdateAlertRuleResponseBody &) = default ;
    CreateOrUpdateAlertRuleResponseBody& operator=(CreateOrUpdateAlertRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertRule& obj) { 
        DARABONBA_PTR_TO_JSON(AlertCheckType, alertCheckType_);
        DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
        DARABONBA_PTR_TO_JSON(AlertId, alertId_);
        DARABONBA_PTR_TO_JSON(AlertName, alertName_);
        DARABONBA_PTR_TO_JSON(AlertRuleContent, alertRuleContent_);
        DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
        DARABONBA_PTR_TO_JSON(AlertType, alertType_);
        DARABONBA_PTR_TO_JSON(Annotations, annotations_);
        DARABONBA_PTR_TO_JSON(AutoAddNewApplication, autoAddNewApplication_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(Filters, filters_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(MetricsType, metricsType_);
        DARABONBA_PTR_TO_JSON(NotifyMode, notifyMode_);
        DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
        DARABONBA_PTR_TO_JSON(Pids, pids_);
        DARABONBA_PTR_TO_JSON(PromQL, promQL_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AlertRule& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertCheckType, alertCheckType_);
        DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
        DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
        DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
        DARABONBA_PTR_FROM_JSON(AlertRuleContent, alertRuleContent_);
        DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
        DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
        DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(AutoAddNewApplication, autoAddNewApplication_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(Filters, filters_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(MetricsType, metricsType_);
        DARABONBA_PTR_FROM_JSON(NotifyMode, notifyMode_);
        DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
        DARABONBA_PTR_FROM_JSON(Pids, pids_);
        DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AlertRule() = default ;
      AlertRule(const AlertRule &) = default ;
      AlertRule(AlertRule &&) = default ;
      AlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertRule() = default ;
      AlertRule& operator=(const AlertRule &) = default ;
      AlertRule& operator=(AlertRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> name_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Filters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Filters& obj) { 
          DARABONBA_PTR_TO_JSON(CustomSLSFilters, customSLSFilters_);
          DARABONBA_PTR_TO_JSON(CustomSLSGroupByDimensions, customSLSGroupByDimensions_);
          DARABONBA_PTR_TO_JSON(CustomSLSWheres, customSLSWheres_);
          DARABONBA_PTR_TO_JSON(DimFilters, dimFilters_);
        };
        friend void from_json(const Darabonba::Json& j, Filters& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomSLSFilters, customSLSFilters_);
          DARABONBA_PTR_FROM_JSON(CustomSLSGroupByDimensions, customSLSGroupByDimensions_);
          DARABONBA_PTR_FROM_JSON(CustomSLSWheres, customSLSWheres_);
          DARABONBA_PTR_FROM_JSON(DimFilters, dimFilters_);
        };
        Filters() = default ;
        Filters(const Filters &) = default ;
        Filters(Filters &&) = default ;
        Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Filters() = default ;
        Filters& operator=(const Filters &) = default ;
        Filters& operator=(Filters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DimFilters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DimFilters& obj) { 
            DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
            DARABONBA_PTR_TO_JSON(FilterOpt, filterOpt_);
            DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
          };
          friend void from_json(const Darabonba::Json& j, DimFilters& obj) { 
            DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
            DARABONBA_PTR_FROM_JSON(FilterOpt, filterOpt_);
            DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
          };
          DimFilters() = default ;
          DimFilters(const DimFilters &) = default ;
          DimFilters(DimFilters &&) = default ;
          DimFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DimFilters() = default ;
          DimFilters& operator=(const DimFilters &) = default ;
          DimFilters& operator=(DimFilters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->filterKey_ == nullptr
        && this->filterOpt_ == nullptr && this->filterValues_ == nullptr; };
          // filterKey Field Functions 
          bool hasFilterKey() const { return this->filterKey_ != nullptr;};
          void deleteFilterKey() { this->filterKey_ = nullptr;};
          inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
          inline DimFilters& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


          // filterOpt Field Functions 
          bool hasFilterOpt() const { return this->filterOpt_ != nullptr;};
          void deleteFilterOpt() { this->filterOpt_ = nullptr;};
          inline string getFilterOpt() const { DARABONBA_PTR_GET_DEFAULT(filterOpt_, "") };
          inline DimFilters& setFilterOpt(string filterOpt) { DARABONBA_PTR_SET_VALUE(filterOpt_, filterOpt) };


          // filterValues Field Functions 
          bool hasFilterValues() const { return this->filterValues_ != nullptr;};
          void deleteFilterValues() { this->filterValues_ = nullptr;};
          inline const vector<string> & getFilterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, vector<string>) };
          inline vector<string> getFilterValues() { DARABONBA_PTR_GET(filterValues_, vector<string>) };
          inline DimFilters& setFilterValues(const vector<string> & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
          inline DimFilters& setFilterValues(vector<string> && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


        protected:
          // The key of the filter condition.
          shared_ptr<string> filterKey_ {};
          // The logical operator of the filter condition.
          shared_ptr<string> filterOpt_ {};
          // The details of the filter condition.
          shared_ptr<vector<string>> filterValues_ {};
        };

        class CustomSLSFilters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomSLSFilters& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Opt, opt_);
            DARABONBA_PTR_TO_JSON(Show, show_);
            DARABONBA_PTR_TO_JSON(T, t_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, CustomSLSFilters& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Opt, opt_);
            DARABONBA_PTR_FROM_JSON(Show, show_);
            DARABONBA_PTR_FROM_JSON(T, t_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          CustomSLSFilters() = default ;
          CustomSLSFilters(const CustomSLSFilters &) = default ;
          CustomSLSFilters(CustomSLSFilters &&) = default ;
          CustomSLSFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomSLSFilters() = default ;
          CustomSLSFilters& operator=(const CustomSLSFilters &) = default ;
          CustomSLSFilters& operator=(CustomSLSFilters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->opt_ == nullptr && this->show_ == nullptr && this->t_ == nullptr && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline CustomSLSFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // opt Field Functions 
          bool hasOpt() const { return this->opt_ != nullptr;};
          void deleteOpt() { this->opt_ = nullptr;};
          inline string getOpt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
          inline CustomSLSFilters& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


          // show Field Functions 
          bool hasShow() const { return this->show_ != nullptr;};
          void deleteShow() { this->show_ = nullptr;};
          inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
          inline CustomSLSFilters& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


          // t Field Functions 
          bool hasT() const { return this->t_ != nullptr;};
          void deleteT() { this->t_ = nullptr;};
          inline string getT() const { DARABONBA_PTR_GET_DEFAULT(t_, "") };
          inline CustomSLSFilters& setT(string t) { DARABONBA_PTR_SET_VALUE(t_, t) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline CustomSLSFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the filter condition.
          shared_ptr<string> key_ {};
          // The logical operator of the filter condition. Valid values:
          // 
          // *   \\=: equal to
          // *   not: not equal to
          shared_ptr<string> opt_ {};
          // Indicates whether this filter condition was displayed on the frontend.
          shared_ptr<bool> show_ {};
          // The log type of Browser Monitoring. This field was not included in other filter conditions.
          shared_ptr<string> t_ {};
          // The value of the filter condition.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->customSLSFilters_ == nullptr
        && this->customSLSGroupByDimensions_ == nullptr && this->customSLSWheres_ == nullptr && this->dimFilters_ == nullptr; };
        // customSLSFilters Field Functions 
        bool hasCustomSLSFilters() const { return this->customSLSFilters_ != nullptr;};
        void deleteCustomSLSFilters() { this->customSLSFilters_ = nullptr;};
        inline const vector<Filters::CustomSLSFilters> & getCustomSLSFilters() const { DARABONBA_PTR_GET_CONST(customSLSFilters_, vector<Filters::CustomSLSFilters>) };
        inline vector<Filters::CustomSLSFilters> getCustomSLSFilters() { DARABONBA_PTR_GET(customSLSFilters_, vector<Filters::CustomSLSFilters>) };
        inline Filters& setCustomSLSFilters(const vector<Filters::CustomSLSFilters> & customSLSFilters) { DARABONBA_PTR_SET_VALUE(customSLSFilters_, customSLSFilters) };
        inline Filters& setCustomSLSFilters(vector<Filters::CustomSLSFilters> && customSLSFilters) { DARABONBA_PTR_SET_RVALUE(customSLSFilters_, customSLSFilters) };


        // customSLSGroupByDimensions Field Functions 
        bool hasCustomSLSGroupByDimensions() const { return this->customSLSGroupByDimensions_ != nullptr;};
        void deleteCustomSLSGroupByDimensions() { this->customSLSGroupByDimensions_ = nullptr;};
        inline const vector<string> & getCustomSLSGroupByDimensions() const { DARABONBA_PTR_GET_CONST(customSLSGroupByDimensions_, vector<string>) };
        inline vector<string> getCustomSLSGroupByDimensions() { DARABONBA_PTR_GET(customSLSGroupByDimensions_, vector<string>) };
        inline Filters& setCustomSLSGroupByDimensions(const vector<string> & customSLSGroupByDimensions) { DARABONBA_PTR_SET_VALUE(customSLSGroupByDimensions_, customSLSGroupByDimensions) };
        inline Filters& setCustomSLSGroupByDimensions(vector<string> && customSLSGroupByDimensions) { DARABONBA_PTR_SET_RVALUE(customSLSGroupByDimensions_, customSLSGroupByDimensions) };


        // customSLSWheres Field Functions 
        bool hasCustomSLSWheres() const { return this->customSLSWheres_ != nullptr;};
        void deleteCustomSLSWheres() { this->customSLSWheres_ = nullptr;};
        inline const vector<string> & getCustomSLSWheres() const { DARABONBA_PTR_GET_CONST(customSLSWheres_, vector<string>) };
        inline vector<string> getCustomSLSWheres() { DARABONBA_PTR_GET(customSLSWheres_, vector<string>) };
        inline Filters& setCustomSLSWheres(const vector<string> & customSLSWheres) { DARABONBA_PTR_SET_VALUE(customSLSWheres_, customSLSWheres) };
        inline Filters& setCustomSLSWheres(vector<string> && customSLSWheres) { DARABONBA_PTR_SET_RVALUE(customSLSWheres_, customSLSWheres) };


        // dimFilters Field Functions 
        bool hasDimFilters() const { return this->dimFilters_ != nullptr;};
        void deleteDimFilters() { this->dimFilters_ = nullptr;};
        inline const vector<Filters::DimFilters> & getDimFilters() const { DARABONBA_PTR_GET_CONST(dimFilters_, vector<Filters::DimFilters>) };
        inline vector<Filters::DimFilters> getDimFilters() { DARABONBA_PTR_GET(dimFilters_, vector<Filters::DimFilters>) };
        inline Filters& setDimFilters(const vector<Filters::DimFilters> & dimFilters) { DARABONBA_PTR_SET_VALUE(dimFilters_, dimFilters) };
        inline Filters& setDimFilters(vector<Filters::DimFilters> && dimFilters) { DARABONBA_PTR_SET_RVALUE(dimFilters_, dimFilters) };


      protected:
        // The custom filter condition of the Browser Monitoring alert rule.
        shared_ptr<vector<Filters::CustomSLSFilters>> customSLSFilters_ {};
        // The information of the aggregation dimension.
        shared_ptr<vector<string>> customSLSGroupByDimensions_ {};
        // The details of the custom filter condition.
        shared_ptr<vector<string>> customSLSWheres_ {};
        // The information about each filter condition of the Application Monitoring or Browser Monitoring alert rule.
        shared_ptr<vector<Filters::DimFilters>> dimFilters_ {};
      };

      class Annotations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Annotations& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Annotations& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Annotations() = default ;
        Annotations(const Annotations &) = default ;
        Annotations(Annotations &&) = default ;
        Annotations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Annotations() = default ;
        Annotations& operator=(const Annotations &) = default ;
        Annotations& operator=(Annotations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Annotations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Annotations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the annotation.
        shared_ptr<string> name_ {};
        // The value of the annotation.
        shared_ptr<string> value_ {};
      };

      class AlertRuleContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertRuleContent& obj) { 
          DARABONBA_PTR_TO_JSON(AlertRuleItems, alertRuleItems_);
          DARABONBA_PTR_TO_JSON(Condition, condition_);
        };
        friend void from_json(const Darabonba::Json& j, AlertRuleContent& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertRuleItems, alertRuleItems_);
          DARABONBA_PTR_FROM_JSON(Condition, condition_);
        };
        AlertRuleContent() = default ;
        AlertRuleContent(const AlertRuleContent &) = default ;
        AlertRuleContent(AlertRuleContent &&) = default ;
        AlertRuleContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertRuleContent() = default ;
        AlertRuleContent& operator=(const AlertRuleContent &) = default ;
        AlertRuleContent& operator=(AlertRuleContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AlertRuleItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertRuleItems& obj) { 
            DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
            DARABONBA_PTR_TO_JSON(MetricKey, metricKey_);
            DARABONBA_PTR_TO_JSON(N, n_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AlertRuleItems& obj) { 
            DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
            DARABONBA_PTR_FROM_JSON(MetricKey, metricKey_);
            DARABONBA_PTR_FROM_JSON(N, n_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AlertRuleItems() = default ;
          AlertRuleItems(const AlertRuleItems &) = default ;
          AlertRuleItems(AlertRuleItems &&) = default ;
          AlertRuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertRuleItems() = default ;
          AlertRuleItems& operator=(const AlertRuleItems &) = default ;
          AlertRuleItems& operator=(AlertRuleItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->metricKey_ == nullptr && this->n_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
          // aggregate Field Functions 
          bool hasAggregate() const { return this->aggregate_ != nullptr;};
          void deleteAggregate() { this->aggregate_ = nullptr;};
          inline string getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
          inline AlertRuleItems& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


          // metricKey Field Functions 
          bool hasMetricKey() const { return this->metricKey_ != nullptr;};
          void deleteMetricKey() { this->metricKey_ = nullptr;};
          inline string getMetricKey() const { DARABONBA_PTR_GET_DEFAULT(metricKey_, "") };
          inline AlertRuleItems& setMetricKey(string metricKey) { DARABONBA_PTR_SET_VALUE(metricKey_, metricKey) };


          // n Field Functions 
          bool hasN() const { return this->n_ != nullptr;};
          void deleteN() { this->n_ = nullptr;};
          inline float getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0.0) };
          inline AlertRuleItems& setN(float n) { DARABONBA_PTR_SET_VALUE(n_, n) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline AlertRuleItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AlertRuleItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The aggregation method of the alert condition. Valid values:
          // 
          // *   AVG: calculates the average value
          // *   SUM: calculates the total value
          // *   MAX: selects the maximum value
          // *   MIN: selects the minimum value
          shared_ptr<string> aggregate_ {};
          // The metric of the alert condition.
          shared_ptr<string> metricKey_ {};
          // Indicates the last N minutes.
          shared_ptr<float> n_ {};
          // The comparison operator that was used to compare the metric value with the threshold. Valid values:
          // 
          // *   CURRENT_GTE: greater than or equal to
          // *   CURRENT_LTE: less than or equal to
          // *   PREVIOUS_UP: the increase percentage compared with the last period
          // *   PREVIOUS_DOWN: the decrease percentage compared with the last period
          // *   HOH_UP: the increase percentage compared with the last hour
          // *   HOH_DOWN: the decrease percentage compared with the last hour
          // *   DOD_UP: the increase percentage compared with the last day
          // *   DOD_DOWN: the decrease percentage compared with the last day
          shared_ptr<string> operator_ {};
          // The threshold of the alert condition.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->alertRuleItems_ == nullptr
        && this->condition_ == nullptr; };
        // alertRuleItems Field Functions 
        bool hasAlertRuleItems() const { return this->alertRuleItems_ != nullptr;};
        void deleteAlertRuleItems() { this->alertRuleItems_ = nullptr;};
        inline const vector<AlertRuleContent::AlertRuleItems> & getAlertRuleItems() const { DARABONBA_PTR_GET_CONST(alertRuleItems_, vector<AlertRuleContent::AlertRuleItems>) };
        inline vector<AlertRuleContent::AlertRuleItems> getAlertRuleItems() { DARABONBA_PTR_GET(alertRuleItems_, vector<AlertRuleContent::AlertRuleItems>) };
        inline AlertRuleContent& setAlertRuleItems(const vector<AlertRuleContent::AlertRuleItems> & alertRuleItems) { DARABONBA_PTR_SET_VALUE(alertRuleItems_, alertRuleItems) };
        inline AlertRuleContent& setAlertRuleItems(vector<AlertRuleContent::AlertRuleItems> && alertRuleItems) { DARABONBA_PTR_SET_RVALUE(alertRuleItems_, alertRuleItems) };


        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline AlertRuleContent& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


      protected:
        // The trigger conditions of the Application Monitoring or Browser Monitoring alert rule.
        shared_ptr<vector<AlertRuleContent::AlertRuleItems>> alertRuleItems_ {};
        // The relationship between multiple alert conditions that were specified for the Application Monitoring or Browser Monitoring alert rule. Valid values:
        // 
        // *   OR: meets any of the specified conditions.
        // *   AND: meets all the specified conditions.
        shared_ptr<string> condition_ {};
      };

      virtual bool empty() const override { return this->alertCheckType_ == nullptr
        && this->alertGroup_ == nullptr && this->alertId_ == nullptr && this->alertName_ == nullptr && this->alertRuleContent_ == nullptr && this->alertStatus_ == nullptr
        && this->alertType_ == nullptr && this->annotations_ == nullptr && this->autoAddNewApplication_ == nullptr && this->clusterId_ == nullptr && this->createdTime_ == nullptr
        && this->duration_ == nullptr && this->extend_ == nullptr && this->filters_ == nullptr && this->labels_ == nullptr && this->level_ == nullptr
        && this->message_ == nullptr && this->metricsType_ == nullptr && this->notifyMode_ == nullptr && this->notifyStrategy_ == nullptr && this->pids_ == nullptr
        && this->promQL_ == nullptr && this->regionId_ == nullptr && this->tags_ == nullptr && this->updatedTime_ == nullptr && this->userId_ == nullptr; };
      // alertCheckType Field Functions 
      bool hasAlertCheckType() const { return this->alertCheckType_ != nullptr;};
      void deleteAlertCheckType() { this->alertCheckType_ = nullptr;};
      inline string getAlertCheckType() const { DARABONBA_PTR_GET_DEFAULT(alertCheckType_, "") };
      inline AlertRule& setAlertCheckType(string alertCheckType) { DARABONBA_PTR_SET_VALUE(alertCheckType_, alertCheckType) };


      // alertGroup Field Functions 
      bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
      void deleteAlertGroup() { this->alertGroup_ = nullptr;};
      inline int64_t getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, 0L) };
      inline AlertRule& setAlertGroup(int64_t alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


      // alertId Field Functions 
      bool hasAlertId() const { return this->alertId_ != nullptr;};
      void deleteAlertId() { this->alertId_ = nullptr;};
      inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
      inline AlertRule& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


      // alertName Field Functions 
      bool hasAlertName() const { return this->alertName_ != nullptr;};
      void deleteAlertName() { this->alertName_ = nullptr;};
      inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
      inline AlertRule& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


      // alertRuleContent Field Functions 
      bool hasAlertRuleContent() const { return this->alertRuleContent_ != nullptr;};
      void deleteAlertRuleContent() { this->alertRuleContent_ = nullptr;};
      inline const AlertRule::AlertRuleContent & getAlertRuleContent() const { DARABONBA_PTR_GET_CONST(alertRuleContent_, AlertRule::AlertRuleContent) };
      inline AlertRule::AlertRuleContent getAlertRuleContent() { DARABONBA_PTR_GET(alertRuleContent_, AlertRule::AlertRuleContent) };
      inline AlertRule& setAlertRuleContent(const AlertRule::AlertRuleContent & alertRuleContent) { DARABONBA_PTR_SET_VALUE(alertRuleContent_, alertRuleContent) };
      inline AlertRule& setAlertRuleContent(AlertRule::AlertRuleContent && alertRuleContent) { DARABONBA_PTR_SET_RVALUE(alertRuleContent_, alertRuleContent) };


      // alertStatus Field Functions 
      bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
      void deleteAlertStatus() { this->alertStatus_ = nullptr;};
      inline string getAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
      inline AlertRule& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline AlertRule& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const vector<AlertRule::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<AlertRule::Annotations>) };
      inline vector<AlertRule::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<AlertRule::Annotations>) };
      inline AlertRule& setAnnotations(const vector<AlertRule::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline AlertRule& setAnnotations(vector<AlertRule::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // autoAddNewApplication Field Functions 
      bool hasAutoAddNewApplication() const { return this->autoAddNewApplication_ != nullptr;};
      void deleteAutoAddNewApplication() { this->autoAddNewApplication_ = nullptr;};
      inline bool getAutoAddNewApplication() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewApplication_, false) };
      inline AlertRule& setAutoAddNewApplication(bool autoAddNewApplication) { DARABONBA_PTR_SET_VALUE(autoAddNewApplication_, autoAddNewApplication) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline AlertRule& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline AlertRule& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline AlertRule& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline AlertRule& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // filters Field Functions 
      bool hasFilters() const { return this->filters_ != nullptr;};
      void deleteFilters() { this->filters_ = nullptr;};
      inline const AlertRule::Filters & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, AlertRule::Filters) };
      inline AlertRule::Filters getFilters() { DARABONBA_PTR_GET(filters_, AlertRule::Filters) };
      inline AlertRule& setFilters(const AlertRule::Filters & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
      inline AlertRule& setFilters(AlertRule::Filters && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<AlertRule::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<AlertRule::Labels>) };
      inline vector<AlertRule::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<AlertRule::Labels>) };
      inline AlertRule& setLabels(const vector<AlertRule::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline AlertRule& setLabels(vector<AlertRule::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline AlertRule& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline AlertRule& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // metricsType Field Functions 
      bool hasMetricsType() const { return this->metricsType_ != nullptr;};
      void deleteMetricsType() { this->metricsType_ = nullptr;};
      inline string getMetricsType() const { DARABONBA_PTR_GET_DEFAULT(metricsType_, "") };
      inline AlertRule& setMetricsType(string metricsType) { DARABONBA_PTR_SET_VALUE(metricsType_, metricsType) };


      // notifyMode Field Functions 
      bool hasNotifyMode() const { return this->notifyMode_ != nullptr;};
      void deleteNotifyMode() { this->notifyMode_ = nullptr;};
      inline string getNotifyMode() const { DARABONBA_PTR_GET_DEFAULT(notifyMode_, "") };
      inline AlertRule& setNotifyMode(string notifyMode) { DARABONBA_PTR_SET_VALUE(notifyMode_, notifyMode) };


      // notifyStrategy Field Functions 
      bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
      void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
      inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
      inline AlertRule& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


      // pids Field Functions 
      bool hasPids() const { return this->pids_ != nullptr;};
      void deletePids() { this->pids_ = nullptr;};
      inline const vector<string> & getPids() const { DARABONBA_PTR_GET_CONST(pids_, vector<string>) };
      inline vector<string> getPids() { DARABONBA_PTR_GET(pids_, vector<string>) };
      inline AlertRule& setPids(const vector<string> & pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };
      inline AlertRule& setPids(vector<string> && pids) { DARABONBA_PTR_SET_RVALUE(pids_, pids) };


      // promQL Field Functions 
      bool hasPromQL() const { return this->promQL_ != nullptr;};
      void deletePromQL() { this->promQL_ = nullptr;};
      inline string getPromQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
      inline AlertRule& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AlertRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AlertRule::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AlertRule::Tags>) };
      inline vector<AlertRule::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AlertRule::Tags>) };
      inline AlertRule& setTags(const vector<AlertRule::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AlertRule& setTags(vector<AlertRule::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline AlertRule& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AlertRule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The alert check type of the Prometheus alert rule. Valid values:
      // 
      // *   STATIC: a static threshold value.
      // *   CUSTOM: a custom PromQL statement.
      shared_ptr<string> alertCheckType_ {};
      // The alert contact group ID of the Prometheus alert rule. Valid values:
      // 
      // *   \\-1: custom PromQL
      // *   1: Kubernetes load
      // *   15: Kubernetes node
      shared_ptr<int64_t> alertGroup_ {};
      // The alert rule ID.
      shared_ptr<int64_t> alertId_ {};
      // The name of the alert rule.
      shared_ptr<string> alertName_ {};
      // The content of the Application Monitoring or Browser Monitoring alert rule.
      shared_ptr<AlertRule::AlertRuleContent> alertRuleContent_ {};
      // The status of the alert rule. Valid values:
      // 
      // *   RUNNING
      // *   STOPPED
      // *   PAUSED
      // 
      // > The PAUSED status indicates that the alert rule is abnormal and is actively paused by the system. The alert rule may be paused because that it is not unique or the associated cluster has been deleted.
      shared_ptr<string> alertStatus_ {};
      // The type of the alert rule. Valid values:
      // 
      // *   APPLICATION_MONITORING_ALERT_RULE: alert rule for Application Monitoring
      // *   BROWSER_MONITORING_ALERT_RULE: alert rule for Browser Monitoring
      // *   PROMETHEUS_MONITORING_ALERT_RULE: alert rule for Prometheus Service
      shared_ptr<string> alertType_ {};
      // The annotations of the Prometheus alert rule.
      shared_ptr<vector<AlertRule::Annotations>> annotations_ {};
      // Indicates whether the alert rule was applied to new applications that were created in Application Monitoring or Browser Monitoring. Valid values:
      // 
      // *   `true`: enables the health check feature.
      // *   `false`: disables the automatic backup feature.
      shared_ptr<bool> autoAddNewApplication_ {};
      // The ID of the monitored cluster.
      shared_ptr<string> clusterId_ {};
      // The timestamp generated when the alert rule was created. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The duration of the Prometheus alert rule. Unit: minutes.
      shared_ptr<string> duration_ {};
      // The extended fields.
      shared_ptr<string> extend_ {};
      // The filter conditions of the Application Monitoring or Browser Monitoring alert rule.
      shared_ptr<AlertRule::Filters> filters_ {};
      // The tags of the Prometheus alert rule.
      shared_ptr<vector<AlertRule::Labels>> labels_ {};
      // The severity level of the Prometheus alert rule.
      // 
      // *   P1: Alert notifications are sent for major issues that affect the availability of core business, have a huge impact, and may lead to serious consequences.
      // *   P2: Alert notifications are sent for service errors that affect the system availability with relatively limited impact.
      // *   P3: Alert notifications are sent for issues that may cause service errors or negative effects, or alert notifications for services that are relatively less important.
      // *   P4: Alert notifications are sent for low-priority issues that do not affect your business.
      // *   Default: Alert notifications are sent regardless of alert levels.
      shared_ptr<string> level_ {};
      // The alert message of the Prometheus alert rule.
      shared_ptr<string> message_ {};
      // The metric type of the Application Monitoring or Browser Monitoring alert rule.
      shared_ptr<string> metricsType_ {};
      // Notification Mode.
      shared_ptr<string> notifyMode_ {};
      // The name of the notification policy.
      shared_ptr<string> notifyStrategy_ {};
      // The process ID (PID) that was associated with the Application Monitoring or Browser Monitoring alert rule.
      shared_ptr<vector<string>> pids_ {};
      // The PromQL statement of the Prometheus alert rule.
      shared_ptr<string> promQL_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The list of tags.
      shared_ptr<vector<AlertRule::Tags>> tags_ {};
      // The timestamp generated when the alert rule was updated. Unit: seconds.
      shared_ptr<int64_t> updatedTime_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->alertRule_ == nullptr
        && this->requestId_ == nullptr; };
    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline const CreateOrUpdateAlertRuleResponseBody::AlertRule & getAlertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, CreateOrUpdateAlertRuleResponseBody::AlertRule) };
    inline CreateOrUpdateAlertRuleResponseBody::AlertRule getAlertRule() { DARABONBA_PTR_GET(alertRule_, CreateOrUpdateAlertRuleResponseBody::AlertRule) };
    inline CreateOrUpdateAlertRuleResponseBody& setAlertRule(const CreateOrUpdateAlertRuleResponseBody::AlertRule & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
    inline CreateOrUpdateAlertRuleResponseBody& setAlertRule(CreateOrUpdateAlertRuleResponseBody::AlertRule && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateAlertRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert rule.
    shared_ptr<CreateOrUpdateAlertRuleResponseBody::AlertRule> alertRule_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
