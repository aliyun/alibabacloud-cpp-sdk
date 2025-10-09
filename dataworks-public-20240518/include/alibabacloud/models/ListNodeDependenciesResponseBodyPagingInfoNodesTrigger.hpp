// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESTRIGGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesTrigger() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesTrigger(const ListNodeDependenciesResponseBodyPagingInfoNodesTrigger &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesTrigger(ListNodeDependenciesResponseBodyPagingInfoNodesTrigger &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesTrigger() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesTrigger &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cron_ != nullptr
        && this->endTime_ != nullptr && this->id_ != nullptr && this->startTime_ != nullptr && this->timezone_ != nullptr && this->type_ != nullptr; };
    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesTrigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cron expression for scheduling.
    std::shared_ptr<string> cron_ = nullptr;
    // The effective end time of the schedule, in the format yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endTime_ = nullptr;
    // The unique identifier of the trigger.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The effective start time of the schedule, in the format yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timezone_ = nullptr;
    // The trigger type.
    // 
    // Valid values:
    // 
    // *   Scheduler: periodic scheduling.
    // *   Manual: manual scheduling.
    // *   Streaming: streaming scheduler.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
