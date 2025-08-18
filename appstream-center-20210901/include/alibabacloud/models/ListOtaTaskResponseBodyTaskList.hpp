// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOTATASKRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTOTATASKRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListOtaTaskResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOtaTaskResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_TO_JSON(TaskDisplayStatus, taskDisplayStatus_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListOtaTaskResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_FROM_JSON(TaskDisplayStatus, taskDisplayStatus_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
    };
    ListOtaTaskResponseBodyTaskList() = default ;
    ListOtaTaskResponseBodyTaskList(const ListOtaTaskResponseBodyTaskList &) = default ;
    ListOtaTaskResponseBodyTaskList(ListOtaTaskResponseBodyTaskList &&) = default ;
    ListOtaTaskResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOtaTaskResponseBodyTaskList() = default ;
    ListOtaTaskResponseBodyTaskList& operator=(const ListOtaTaskResponseBodyTaskList &) = default ;
    ListOtaTaskResponseBodyTaskList& operator=(ListOtaTaskResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->otaVersion_ != nullptr
        && this->taskDisplayStatus_ != nullptr && this->taskId_ != nullptr && this->taskStartTime_ != nullptr; };
    // otaVersion Field Functions 
    bool hasOtaVersion() const { return this->otaVersion_ != nullptr;};
    void deleteOtaVersion() { this->otaVersion_ = nullptr;};
    inline string otaVersion() const { DARABONBA_PTR_GET_DEFAULT(otaVersion_, "") };
    inline ListOtaTaskResponseBodyTaskList& setOtaVersion(string otaVersion) { DARABONBA_PTR_SET_VALUE(otaVersion_, otaVersion) };


    // taskDisplayStatus Field Functions 
    bool hasTaskDisplayStatus() const { return this->taskDisplayStatus_ != nullptr;};
    void deleteTaskDisplayStatus() { this->taskDisplayStatus_ = nullptr;};
    inline string taskDisplayStatus() const { DARABONBA_PTR_GET_DEFAULT(taskDisplayStatus_, "") };
    inline ListOtaTaskResponseBodyTaskList& setTaskDisplayStatus(string taskDisplayStatus) { DARABONBA_PTR_SET_VALUE(taskDisplayStatus_, taskDisplayStatus) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOtaTaskResponseBodyTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline string taskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
    inline ListOtaTaskResponseBodyTaskList& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


  protected:
    // The OTA version.
    std::shared_ptr<string> otaVersion_ = nullptr;
    // The task status.
    // 
    // Valid values:
    // 
    // *   FAILED
    // *   RUNNING
    // *   TERMINATED
    // *   PART_FINISHED
    // *   STANDBY
    // *   FINISHED
    std::shared_ptr<string> taskDisplayStatus_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The start time of the OTA update task. The time follows the ISO 8601 standard.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> taskStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
