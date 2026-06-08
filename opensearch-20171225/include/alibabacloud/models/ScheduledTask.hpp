// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDTASK_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ScheduledTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledTask& obj) { 
      DARABONBA_PTR_TO_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_TO_JSON(cron, cron_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(forkedAppId, forkedAppId_);
      DARABONBA_PTR_TO_JSON(permanent, permanent_);
      DARABONBA_PTR_TO_JSON(runNow, runNow_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledTask& obj) { 
      DARABONBA_PTR_FROM_JSON(autoSwitch, autoSwitch_);
      DARABONBA_PTR_FROM_JSON(cron, cron_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(forkedAppId, forkedAppId_);
      DARABONBA_PTR_FROM_JSON(permanent, permanent_);
      DARABONBA_PTR_FROM_JSON(runNow, runNow_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ScheduledTask() = default ;
    ScheduledTask(const ScheduledTask &) = default ;
    ScheduledTask(ScheduledTask &&) = default ;
    ScheduledTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledTask() = default ;
    ScheduledTask& operator=(const ScheduledTask &) = default ;
    ScheduledTask& operator=(ScheduledTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(days, days_);
        DARABONBA_PTR_TO_JSON(expression, expression_);
        DARABONBA_PTR_TO_JSON(field, field_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(days, days_);
        DARABONBA_PTR_FROM_JSON(expression, expression_);
        DARABONBA_PTR_FROM_JSON(field, field_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->days_ == nullptr
        && this->expression_ == nullptr && this->field_ == nullptr && this->unit_ == nullptr; };
      // days Field Functions 
      bool hasDays() const { return this->days_ != nullptr;};
      void deleteDays() { this->days_ = nullptr;};
      inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
      inline Filter& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline Filter& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Filter& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Filter& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<int32_t> days_ {};
      shared_ptr<string> expression_ {};
      shared_ptr<string> field_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->autoSwitch_ == nullptr
        && this->cron_ == nullptr && this->enabled_ == nullptr && this->filter_ == nullptr && this->forkedAppId_ == nullptr && this->permanent_ == nullptr
        && this->runNow_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
    // autoSwitch Field Functions 
    bool hasAutoSwitch() const { return this->autoSwitch_ != nullptr;};
    void deleteAutoSwitch() { this->autoSwitch_ = nullptr;};
    inline bool getAutoSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoSwitch_, false) };
    inline ScheduledTask& setAutoSwitch(bool autoSwitch) { DARABONBA_PTR_SET_VALUE(autoSwitch_, autoSwitch) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline ScheduledTask& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ScheduledTask& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ScheduledTask::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ScheduledTask::Filter) };
    inline ScheduledTask::Filter getFilter() { DARABONBA_PTR_GET(filter_, ScheduledTask::Filter) };
    inline ScheduledTask& setFilter(const ScheduledTask::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ScheduledTask& setFilter(ScheduledTask::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // forkedAppId Field Functions 
    bool hasForkedAppId() const { return this->forkedAppId_ != nullptr;};
    void deleteForkedAppId() { this->forkedAppId_ = nullptr;};
    inline string getForkedAppId() const { DARABONBA_PTR_GET_DEFAULT(forkedAppId_, "") };
    inline ScheduledTask& setForkedAppId(string forkedAppId) { DARABONBA_PTR_SET_VALUE(forkedAppId_, forkedAppId) };


    // permanent Field Functions 
    bool hasPermanent() const { return this->permanent_ != nullptr;};
    void deletePermanent() { this->permanent_ = nullptr;};
    inline bool getPermanent() const { DARABONBA_PTR_GET_DEFAULT(permanent_, false) };
    inline ScheduledTask& setPermanent(bool permanent) { DARABONBA_PTR_SET_VALUE(permanent_, permanent) };


    // runNow Field Functions 
    bool hasRunNow() const { return this->runNow_ != nullptr;};
    void deleteRunNow() { this->runNow_ = nullptr;};
    inline bool getRunNow() const { DARABONBA_PTR_GET_DEFAULT(runNow_, false) };
    inline ScheduledTask& setRunNow(bool runNow) { DARABONBA_PTR_SET_VALUE(runNow_, runNow) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ScheduledTask& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ScheduledTask& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<bool> autoSwitch_ {};
    shared_ptr<string> cron_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<ScheduledTask::Filter> filter_ {};
    shared_ptr<string> forkedAppId_ {};
    shared_ptr<bool> permanent_ {};
    shared_ptr<bool> runNow_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
