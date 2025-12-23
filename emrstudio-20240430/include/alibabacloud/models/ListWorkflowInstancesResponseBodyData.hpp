// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListWorkflowInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(scheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(workflowVersion, workflowVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(scheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(workflowVersion, workflowVersion_);
    };
    ListWorkflowInstancesResponseBodyData() = default ;
    ListWorkflowInstancesResponseBodyData(const ListWorkflowInstancesResponseBodyData &) = default ;
    ListWorkflowInstancesResponseBodyData(ListWorkflowInstancesResponseBodyData &&) = default ;
    ListWorkflowInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstancesResponseBodyData() = default ;
    ListWorkflowInstancesResponseBodyData& operator=(const ListWorkflowInstancesResponseBodyData &) = default ;
    ListWorkflowInstancesResponseBodyData& operator=(ListWorkflowInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->name_ == nullptr && return this->scheduleTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->workflowId_ == nullptr
        && return this->workflowInstanceId_ == nullptr && return this->workflowVersion_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListWorkflowInstancesResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowInstancesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline ListWorkflowInstancesResponseBodyData& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListWorkflowInstancesResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkflowInstancesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline ListWorkflowInstancesResponseBodyData& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline string workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, "") };
    inline ListWorkflowInstancesResponseBodyData& setWorkflowInstanceId(string workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowVersion Field Functions 
    bool hasWorkflowVersion() const { return this->workflowVersion_ != nullptr;};
    void deleteWorkflowVersion() { this->workflowVersion_ = nullptr;};
    inline int32_t workflowVersion() const { DARABONBA_PTR_GET_DEFAULT(workflowVersion_, 0) };
    inline ListWorkflowInstancesResponseBodyData& setWorkflowVersion(int32_t workflowVersion) { DARABONBA_PTR_SET_VALUE(workflowVersion_, workflowVersion) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> scheduleTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
    std::shared_ptr<string> workflowInstanceId_ = nullptr;
    std::shared_ptr<int32_t> workflowVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
