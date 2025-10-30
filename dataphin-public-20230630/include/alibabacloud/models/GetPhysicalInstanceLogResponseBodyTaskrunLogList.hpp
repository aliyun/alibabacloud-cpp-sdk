// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALINSTANCELOGRESPONSEBODYTASKRUNLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALINSTANCELOGRESPONSEBODYTASKRUNLOGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalInstanceLogResponseBodyTaskrunLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalInstanceLogResponseBodyTaskrunLogList& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LogContent, logContent_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskrunId, taskrunId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalInstanceLogResponseBodyTaskrunLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskrunId, taskrunId_);
    };
    GetPhysicalInstanceLogResponseBodyTaskrunLogList() = default ;
    GetPhysicalInstanceLogResponseBodyTaskrunLogList(const GetPhysicalInstanceLogResponseBodyTaskrunLogList &) = default ;
    GetPhysicalInstanceLogResponseBodyTaskrunLogList(GetPhysicalInstanceLogResponseBodyTaskrunLogList &&) = default ;
    GetPhysicalInstanceLogResponseBodyTaskrunLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalInstanceLogResponseBodyTaskrunLogList() = default ;
    GetPhysicalInstanceLogResponseBodyTaskrunLogList& operator=(const GetPhysicalInstanceLogResponseBodyTaskrunLogList &) = default ;
    GetPhysicalInstanceLogResponseBodyTaskrunLogList& operator=(GetPhysicalInstanceLogResponseBodyTaskrunLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->endTime_ == nullptr && return this->logContent_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskrunId_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetPhysicalInstanceLogResponseBodyTaskrunLogList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetPhysicalInstanceLogResponseBodyTaskrunLogList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // logContent Field Functions 
    bool hasLogContent() const { return this->logContent_ != nullptr;};
    void deleteLogContent() { this->logContent_ = nullptr;};
    inline string logContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
    inline GetPhysicalInstanceLogResponseBodyTaskrunLogList& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetPhysicalInstanceLogResponseBodyTaskrunLogList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPhysicalInstanceLogResponseBodyTaskrunLogList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskrunId Field Functions 
    bool hasTaskrunId() const { return this->taskrunId_ != nullptr;};
    void deleteTaskrunId() { this->taskrunId_ = nullptr;};
    inline string taskrunId() const { DARABONBA_PTR_GET_DEFAULT(taskrunId_, "") };
    inline GetPhysicalInstanceLogResponseBodyTaskrunLogList& setTaskrunId(string taskrunId) { DARABONBA_PTR_SET_VALUE(taskrunId_, taskrunId) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> logContent_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskrunId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
