// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKINSTANCEEVENT_HPP_
#define ALIBABACLOUD_MODELS_TASKINSTANCEEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class TaskInstanceEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskInstanceEvent& obj) { 
      DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, TaskInstanceEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    TaskInstanceEvent() = default ;
    TaskInstanceEvent(const TaskInstanceEvent &) = default ;
    TaskInstanceEvent(TaskInstanceEvent &&) = default ;
    TaskInstanceEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskInstanceEvent() = default ;
    TaskInstanceEvent& operator=(const TaskInstanceEvent &) = default ;
    TaskInstanceEvent& operator=(TaskInstanceEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtEndTime_ == nullptr
        && this->gmtStartTime_ == nullptr && this->message_ == nullptr && this->podName_ == nullptr && this->status_ == nullptr && this->workloadType_ == nullptr; };
    // gmtEndTime Field Functions 
    bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
    void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
    inline string getGmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
    inline TaskInstanceEvent& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline TaskInstanceEvent& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TaskInstanceEvent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline TaskInstanceEvent& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TaskInstanceEvent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline TaskInstanceEvent& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    shared_ptr<string> gmtEndTime_ {};
    shared_ptr<string> gmtStartTime_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> podName_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> workloadType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
