// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERY_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/AlertRuleSlsQueryJoin.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleQuery& obj) { 
      DARABONBA_PTR_TO_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(entityFields, entityFields_);
      DARABONBA_PTR_TO_JSON(entityFilter, entityFilter_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(firstJoin, firstJoin_);
      DARABONBA_PTR_TO_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(metricSet, metricSet_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(queries, queries_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
      DARABONBA_PTR_TO_JSON(secondJoin, secondJoin_);
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(checkAfterDataComplete, checkAfterDataComplete_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(entityFields, entityFields_);
      DARABONBA_PTR_FROM_JSON(entityFilter, entityFilter_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(firstJoin, firstJoin_);
      DARABONBA_PTR_FROM_JSON(groupFieldList, groupFieldList_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(labelFilters, labelFilters_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(metricSet, metricSet_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(queries, queries_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
      DARABONBA_PTR_FROM_JSON(secondJoin, secondJoin_);
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleQuery() = default ;
    AlertRuleQuery(const AlertRuleQuery &) = default ;
    AlertRuleQuery(AlertRuleQuery &&) = default ;
    AlertRuleQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleQuery() = default ;
    AlertRuleQuery& operator=(const AlertRuleQuery &) = default ;
    AlertRuleQuery& operator=(AlertRuleQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Queries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queries& obj) { 
        DARABONBA_PTR_TO_JSON(apmAlertMetricId, apmAlertMetricId_);
        DARABONBA_PTR_TO_JSON(apmFilters, apmFilters_);
        DARABONBA_PTR_TO_JSON(apmGroupBy, apmGroupBy_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(end, end_);
        DARABONBA_PTR_TO_JSON(expr, expr_);
        DARABONBA_PTR_TO_JSON(start, start_);
        DARABONBA_PTR_TO_JSON(timeUnit, timeUnit_);
        DARABONBA_PTR_TO_JSON(window, window_);
      };
      friend void from_json(const Darabonba::Json& j, Queries& obj) { 
        DARABONBA_PTR_FROM_JSON(apmAlertMetricId, apmAlertMetricId_);
        DARABONBA_PTR_FROM_JSON(apmFilters, apmFilters_);
        DARABONBA_PTR_FROM_JSON(apmGroupBy, apmGroupBy_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(end, end_);
        DARABONBA_PTR_FROM_JSON(expr, expr_);
        DARABONBA_PTR_FROM_JSON(start, start_);
        DARABONBA_PTR_FROM_JSON(timeUnit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(window, window_);
      };
      Queries() = default ;
      Queries(const Queries &) = default ;
      Queries(Queries &&) = default ;
      Queries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queries() = default ;
      Queries& operator=(const Queries &) = default ;
      Queries& operator=(Queries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApmFilters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApmFilters& obj) { 
          DARABONBA_PTR_TO_JSON(dim, dim_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ApmFilters& obj) { 
          DARABONBA_PTR_FROM_JSON(dim, dim_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        ApmFilters() = default ;
        ApmFilters(const ApmFilters &) = default ;
        ApmFilters(ApmFilters &&) = default ;
        ApmFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApmFilters() = default ;
        ApmFilters& operator=(const ApmFilters &) = default ;
        ApmFilters& operator=(ApmFilters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dim_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // dim Field Functions 
        bool hasDim() const { return this->dim_ != nullptr;};
        void deleteDim() { this->dim_ = nullptr;};
        inline string getDim() const { DARABONBA_PTR_GET_DEFAULT(dim_, "") };
        inline ApmFilters& setDim(string dim) { DARABONBA_PTR_SET_VALUE(dim_, dim) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ApmFilters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ApmFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> dim_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->apmAlertMetricId_ == nullptr
        && this->apmFilters_ == nullptr && this->apmGroupBy_ == nullptr && this->duration_ == nullptr && this->end_ == nullptr && this->expr_ == nullptr
        && this->start_ == nullptr && this->timeUnit_ == nullptr && this->window_ == nullptr; };
      // apmAlertMetricId Field Functions 
      bool hasApmAlertMetricId() const { return this->apmAlertMetricId_ != nullptr;};
      void deleteApmAlertMetricId() { this->apmAlertMetricId_ = nullptr;};
      inline string getApmAlertMetricId() const { DARABONBA_PTR_GET_DEFAULT(apmAlertMetricId_, "") };
      inline Queries& setApmAlertMetricId(string apmAlertMetricId) { DARABONBA_PTR_SET_VALUE(apmAlertMetricId_, apmAlertMetricId) };


      // apmFilters Field Functions 
      bool hasApmFilters() const { return this->apmFilters_ != nullptr;};
      void deleteApmFilters() { this->apmFilters_ = nullptr;};
      inline const vector<Queries::ApmFilters> & getApmFilters() const { DARABONBA_PTR_GET_CONST(apmFilters_, vector<Queries::ApmFilters>) };
      inline vector<Queries::ApmFilters> getApmFilters() { DARABONBA_PTR_GET(apmFilters_, vector<Queries::ApmFilters>) };
      inline Queries& setApmFilters(const vector<Queries::ApmFilters> & apmFilters) { DARABONBA_PTR_SET_VALUE(apmFilters_, apmFilters) };
      inline Queries& setApmFilters(vector<Queries::ApmFilters> && apmFilters) { DARABONBA_PTR_SET_RVALUE(apmFilters_, apmFilters) };


      // apmGroupBy Field Functions 
      bool hasApmGroupBy() const { return this->apmGroupBy_ != nullptr;};
      void deleteApmGroupBy() { this->apmGroupBy_ = nullptr;};
      inline const vector<string> & getApmGroupBy() const { DARABONBA_PTR_GET_CONST(apmGroupBy_, vector<string>) };
      inline vector<string> getApmGroupBy() { DARABONBA_PTR_GET(apmGroupBy_, vector<string>) };
      inline Queries& setApmGroupBy(const vector<string> & apmGroupBy) { DARABONBA_PTR_SET_VALUE(apmGroupBy_, apmGroupBy) };
      inline Queries& setApmGroupBy(vector<string> && apmGroupBy) { DARABONBA_PTR_SET_RVALUE(apmGroupBy_, apmGroupBy) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Queries& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
      inline Queries& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // expr Field Functions 
      bool hasExpr() const { return this->expr_ != nullptr;};
      void deleteExpr() { this->expr_ = nullptr;};
      inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
      inline Queries& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
      inline Queries& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline Queries& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // window Field Functions 
      bool hasWindow() const { return this->window_ != nullptr;};
      void deleteWindow() { this->window_ = nullptr;};
      inline int64_t getWindow() const { DARABONBA_PTR_GET_DEFAULT(window_, 0L) };
      inline Queries& setWindow(int64_t window) { DARABONBA_PTR_SET_VALUE(window_, window) };


    protected:
      shared_ptr<string> apmAlertMetricId_ {};
      shared_ptr<vector<Queries::ApmFilters>> apmFilters_ {};
      shared_ptr<vector<string>> apmGroupBy_ {};
      shared_ptr<int64_t> duration_ {};
      // 时间偏移结束时间(相对)，如果指定了start、end，则不指定window。
      shared_ptr<int64_t> end_ {};
      // 查询表达式
      shared_ptr<string> expr_ {};
      // sls查询的时间偏移开始时间(相对)，如果指定了start、end，则不指定window。  例如：start=15， timeUnit=minute，表示15分钟前
      shared_ptr<int64_t> start_ {};
      // start和end、window的时间单位： day/hour/minute/second
      shared_ptr<string> timeUnit_ {};
      // 整点时间查询区间。  如果指定了window则不指定start、end
      shared_ptr<int64_t> window_ {};
    };

    class LabelFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LabelFilters& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(operator, operator_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, LabelFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(operator, operator_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      LabelFilters() = default ;
      LabelFilters(const LabelFilters &) = default ;
      LabelFilters(LabelFilters &&) = default ;
      LabelFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LabelFilters() = default ;
      LabelFilters& operator=(const LabelFilters &) = default ;
      LabelFilters& operator=(LabelFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LabelFilters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline LabelFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline LabelFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> value_ {};
    };

    class EntityFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityFilter& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(filters, filters_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EntityFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(filters, filters_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      EntityFilter() = default ;
      EntityFilter(const EntityFilter &) = default ;
      EntityFilter(EntityFilter &&) = default ;
      EntityFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityFilter() = default ;
      EntityFilter& operator=(const EntityFilter &) = default ;
      EntityFilter& operator=(EntityFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Filters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Filters& obj) { 
          DARABONBA_PTR_TO_JSON(field, field_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Filters& obj) { 
          DARABONBA_PTR_FROM_JSON(field, field_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
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
        virtual bool empty() const override { return this->field_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
        // field Field Functions 
        bool hasField() const { return this->field_ != nullptr;};
        void deleteField() { this->field_ = nullptr;};
        inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
        inline Filters& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Filters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> field_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr
        && this->filters_ == nullptr && this->type_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline EntityFilter& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // filters Field Functions 
      bool hasFilters() const { return this->filters_ != nullptr;};
      void deleteFilters() { this->filters_ = nullptr;};
      inline const vector<EntityFilter::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<EntityFilter::Filters>) };
      inline vector<EntityFilter::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<EntityFilter::Filters>) };
      inline EntityFilter& setFilters(const vector<EntityFilter::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
      inline EntityFilter& setFilters(vector<EntityFilter::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EntityFilter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<vector<EntityFilter::Filters>> filters_ {};
      shared_ptr<string> type_ {};
    };

    class EntityFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityFields& obj) { 
        DARABONBA_PTR_TO_JSON(field, field_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, EntityFields& obj) { 
        DARABONBA_PTR_FROM_JSON(field, field_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      EntityFields() = default ;
      EntityFields(const EntityFields &) = default ;
      EntityFields(EntityFields &&) = default ;
      EntityFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityFields() = default ;
      EntityFields& operator=(const EntityFields &) = default ;
      EntityFields& operator=(EntityFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->field_ == nullptr
        && this->value_ == nullptr; };
      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline EntityFields& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline EntityFields& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> field_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkAfterDataComplete_ == nullptr
        && this->dimensions_ == nullptr && this->domain_ == nullptr && this->duration_ == nullptr && this->entityFields_ == nullptr && this->entityFilter_ == nullptr
        && this->expr_ == nullptr && this->firstJoin_ == nullptr && this->groupFieldList_ == nullptr && this->groupId_ == nullptr && this->groupType_ == nullptr
        && this->labelFilters_ == nullptr && this->metric_ == nullptr && this->metricSet_ == nullptr && this->namespace_ == nullptr && this->queries_ == nullptr
        && this->relationType_ == nullptr && this->secondJoin_ == nullptr && this->serviceIds_ == nullptr && this->type_ == nullptr; };
    // checkAfterDataComplete Field Functions 
    bool hasCheckAfterDataComplete() const { return this->checkAfterDataComplete_ != nullptr;};
    void deleteCheckAfterDataComplete() { this->checkAfterDataComplete_ = nullptr;};
    inline bool getCheckAfterDataComplete() const { DARABONBA_PTR_GET_DEFAULT(checkAfterDataComplete_, false) };
    inline AlertRuleQuery& setCheckAfterDataComplete(bool checkAfterDataComplete) { DARABONBA_PTR_SET_VALUE(checkAfterDataComplete_, checkAfterDataComplete) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<map<string, string>> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<map<string, string>>) };
    inline vector<map<string, string>> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<map<string, string>>) };
    inline AlertRuleQuery& setDimensions(const vector<map<string, string>> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline AlertRuleQuery& setDimensions(vector<map<string, string>> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AlertRuleQuery& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline AlertRuleQuery& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // entityFields Field Functions 
    bool hasEntityFields() const { return this->entityFields_ != nullptr;};
    void deleteEntityFields() { this->entityFields_ = nullptr;};
    inline const vector<AlertRuleQuery::EntityFields> & getEntityFields() const { DARABONBA_PTR_GET_CONST(entityFields_, vector<AlertRuleQuery::EntityFields>) };
    inline vector<AlertRuleQuery::EntityFields> getEntityFields() { DARABONBA_PTR_GET(entityFields_, vector<AlertRuleQuery::EntityFields>) };
    inline AlertRuleQuery& setEntityFields(const vector<AlertRuleQuery::EntityFields> & entityFields) { DARABONBA_PTR_SET_VALUE(entityFields_, entityFields) };
    inline AlertRuleQuery& setEntityFields(vector<AlertRuleQuery::EntityFields> && entityFields) { DARABONBA_PTR_SET_RVALUE(entityFields_, entityFields) };


    // entityFilter Field Functions 
    bool hasEntityFilter() const { return this->entityFilter_ != nullptr;};
    void deleteEntityFilter() { this->entityFilter_ = nullptr;};
    inline const AlertRuleQuery::EntityFilter & getEntityFilter() const { DARABONBA_PTR_GET_CONST(entityFilter_, AlertRuleQuery::EntityFilter) };
    inline AlertRuleQuery::EntityFilter getEntityFilter() { DARABONBA_PTR_GET(entityFilter_, AlertRuleQuery::EntityFilter) };
    inline AlertRuleQuery& setEntityFilter(const AlertRuleQuery::EntityFilter & entityFilter) { DARABONBA_PTR_SET_VALUE(entityFilter_, entityFilter) };
    inline AlertRuleQuery& setEntityFilter(AlertRuleQuery::EntityFilter && entityFilter) { DARABONBA_PTR_SET_RVALUE(entityFilter_, entityFilter) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline AlertRuleQuery& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // firstJoin Field Functions 
    bool hasFirstJoin() const { return this->firstJoin_ != nullptr;};
    void deleteFirstJoin() { this->firstJoin_ = nullptr;};
    inline const AlertRuleSlsQueryJoin & getFirstJoin() const { DARABONBA_PTR_GET_CONST(firstJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleSlsQueryJoin getFirstJoin() { DARABONBA_PTR_GET(firstJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleQuery& setFirstJoin(const AlertRuleSlsQueryJoin & firstJoin) { DARABONBA_PTR_SET_VALUE(firstJoin_, firstJoin) };
    inline AlertRuleQuery& setFirstJoin(AlertRuleSlsQueryJoin && firstJoin) { DARABONBA_PTR_SET_RVALUE(firstJoin_, firstJoin) };


    // groupFieldList Field Functions 
    bool hasGroupFieldList() const { return this->groupFieldList_ != nullptr;};
    void deleteGroupFieldList() { this->groupFieldList_ = nullptr;};
    inline const vector<string> & getGroupFieldList() const { DARABONBA_PTR_GET_CONST(groupFieldList_, vector<string>) };
    inline vector<string> getGroupFieldList() { DARABONBA_PTR_GET(groupFieldList_, vector<string>) };
    inline AlertRuleQuery& setGroupFieldList(const vector<string> & groupFieldList) { DARABONBA_PTR_SET_VALUE(groupFieldList_, groupFieldList) };
    inline AlertRuleQuery& setGroupFieldList(vector<string> && groupFieldList) { DARABONBA_PTR_SET_RVALUE(groupFieldList_, groupFieldList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AlertRuleQuery& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline AlertRuleQuery& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // labelFilters Field Functions 
    bool hasLabelFilters() const { return this->labelFilters_ != nullptr;};
    void deleteLabelFilters() { this->labelFilters_ = nullptr;};
    inline const vector<AlertRuleQuery::LabelFilters> & getLabelFilters() const { DARABONBA_PTR_GET_CONST(labelFilters_, vector<AlertRuleQuery::LabelFilters>) };
    inline vector<AlertRuleQuery::LabelFilters> getLabelFilters() { DARABONBA_PTR_GET(labelFilters_, vector<AlertRuleQuery::LabelFilters>) };
    inline AlertRuleQuery& setLabelFilters(const vector<AlertRuleQuery::LabelFilters> & labelFilters) { DARABONBA_PTR_SET_VALUE(labelFilters_, labelFilters) };
    inline AlertRuleQuery& setLabelFilters(vector<AlertRuleQuery::LabelFilters> && labelFilters) { DARABONBA_PTR_SET_RVALUE(labelFilters_, labelFilters) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline AlertRuleQuery& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // metricSet Field Functions 
    bool hasMetricSet() const { return this->metricSet_ != nullptr;};
    void deleteMetricSet() { this->metricSet_ = nullptr;};
    inline string getMetricSet() const { DARABONBA_PTR_GET_DEFAULT(metricSet_, "") };
    inline AlertRuleQuery& setMetricSet(string metricSet) { DARABONBA_PTR_SET_VALUE(metricSet_, metricSet) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AlertRuleQuery& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<AlertRuleQuery::Queries> & getQueries() const { DARABONBA_PTR_GET_CONST(queries_, vector<AlertRuleQuery::Queries>) };
    inline vector<AlertRuleQuery::Queries> getQueries() { DARABONBA_PTR_GET(queries_, vector<AlertRuleQuery::Queries>) };
    inline AlertRuleQuery& setQueries(const vector<AlertRuleQuery::Queries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline AlertRuleQuery& setQueries(vector<AlertRuleQuery::Queries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline AlertRuleQuery& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // secondJoin Field Functions 
    bool hasSecondJoin() const { return this->secondJoin_ != nullptr;};
    void deleteSecondJoin() { this->secondJoin_ = nullptr;};
    inline const AlertRuleSlsQueryJoin & getSecondJoin() const { DARABONBA_PTR_GET_CONST(secondJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleSlsQueryJoin getSecondJoin() { DARABONBA_PTR_GET(secondJoin_, AlertRuleSlsQueryJoin) };
    inline AlertRuleQuery& setSecondJoin(const AlertRuleSlsQueryJoin & secondJoin) { DARABONBA_PTR_SET_VALUE(secondJoin_, secondJoin) };
    inline AlertRuleQuery& setSecondJoin(AlertRuleSlsQueryJoin && secondJoin) { DARABONBA_PTR_SET_RVALUE(secondJoin_, secondJoin) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline AlertRuleQuery& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline AlertRuleQuery& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleQuery& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> checkAfterDataComplete_ {};
    shared_ptr<vector<map<string, string>>> dimensions_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<int64_t> duration_ {};
    shared_ptr<vector<AlertRuleQuery::EntityFields>> entityFields_ {};
    shared_ptr<AlertRuleQuery::EntityFilter> entityFilter_ {};
    shared_ptr<string> expr_ {};
    shared_ptr<AlertRuleSlsQueryJoin> firstJoin_ {};
    shared_ptr<vector<string>> groupFieldList_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<string> groupType_ {};
    shared_ptr<vector<AlertRuleQuery::LabelFilters>> labelFilters_ {};
    shared_ptr<string> metric_ {};
    shared_ptr<string> metricSet_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<vector<AlertRuleQuery::Queries>> queries_ {};
    shared_ptr<string> relationType_ {};
    shared_ptr<AlertRuleSlsQueryJoin> secondJoin_ {};
    shared_ptr<vector<string>> serviceIds_ {};
    // 查询类型
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
