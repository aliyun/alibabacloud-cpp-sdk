// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDTASK_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScheduledTaskFilter.hpp>
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
    virtual bool empty() const override { return this->autoSwitch_ == nullptr
        && return this->cron_ == nullptr && return this->enabled_ == nullptr && return this->filter_ == nullptr && return this->forkedAppId_ == nullptr && return this->permanent_ == nullptr
        && return this->runNow_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr; };
    // autoSwitch Field Functions 
    bool hasAutoSwitch() const { return this->autoSwitch_ != nullptr;};
    void deleteAutoSwitch() { this->autoSwitch_ = nullptr;};
    inline bool autoSwitch() const { DARABONBA_PTR_GET_DEFAULT(autoSwitch_, false) };
    inline ScheduledTask& setAutoSwitch(bool autoSwitch) { DARABONBA_PTR_SET_VALUE(autoSwitch_, autoSwitch) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline ScheduledTask& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ScheduledTask& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ScheduledTaskFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, ScheduledTaskFilter) };
    inline ScheduledTaskFilter filter() { DARABONBA_PTR_GET(filter_, ScheduledTaskFilter) };
    inline ScheduledTask& setFilter(const ScheduledTaskFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ScheduledTask& setFilter(ScheduledTaskFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // forkedAppId Field Functions 
    bool hasForkedAppId() const { return this->forkedAppId_ != nullptr;};
    void deleteForkedAppId() { this->forkedAppId_ = nullptr;};
    inline string forkedAppId() const { DARABONBA_PTR_GET_DEFAULT(forkedAppId_, "") };
    inline ScheduledTask& setForkedAppId(string forkedAppId) { DARABONBA_PTR_SET_VALUE(forkedAppId_, forkedAppId) };


    // permanent Field Functions 
    bool hasPermanent() const { return this->permanent_ != nullptr;};
    void deletePermanent() { this->permanent_ = nullptr;};
    inline bool permanent() const { DARABONBA_PTR_GET_DEFAULT(permanent_, false) };
    inline ScheduledTask& setPermanent(bool permanent) { DARABONBA_PTR_SET_VALUE(permanent_, permanent) };


    // runNow Field Functions 
    bool hasRunNow() const { return this->runNow_ != nullptr;};
    void deleteRunNow() { this->runNow_ = nullptr;};
    inline bool runNow() const { DARABONBA_PTR_GET_DEFAULT(runNow_, false) };
    inline ScheduledTask& setRunNow(bool runNow) { DARABONBA_PTR_SET_VALUE(runNow_, runNow) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ScheduledTask& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ScheduledTask& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> autoSwitch_ = nullptr;
    std::shared_ptr<string> cron_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<ScheduledTaskFilter> filter_ = nullptr;
    std::shared_ptr<string> forkedAppId_ = nullptr;
    std::shared_ptr<bool> permanent_ = nullptr;
    std::shared_ptr<bool> runNow_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
