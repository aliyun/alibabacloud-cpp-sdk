// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWJOBINFO_HPP_
#define ALIBABACLOUD_MODELS_FLOWJOBINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class FlowJobInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowJobInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Display, display_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(ProcessType, processType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FlowJobInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Display, display_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    FlowJobInfo() = default ;
    FlowJobInfo(const FlowJobInfo &) = default ;
    FlowJobInfo(FlowJobInfo &&) = default ;
    FlowJobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowJobInfo() = default ;
    FlowJobInfo& operator=(const FlowJobInfo &) = default ;
    FlowJobInfo& operator=(FlowJobInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->display_ == nullptr
        && this->jobId_ == nullptr && this->jobType_ == nullptr && this->messageId_ == nullptr && this->processType_ == nullptr && this->taskId_ == nullptr; };
    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
    inline FlowJobInfo& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline FlowJobInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline FlowJobInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline FlowJobInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // processType Field Functions 
    bool hasProcessType() const { return this->processType_ != nullptr;};
    void deleteProcessType() { this->processType_ = nullptr;};
    inline string getProcessType() const { DARABONBA_PTR_GET_DEFAULT(processType_, "") };
    inline FlowJobInfo& setProcessType(string processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FlowJobInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Whether to display. Possible values are:
    // - true: Display.
    // - false: Do not display.
    shared_ptr<bool> display_ {};
    // Job ID.
    shared_ptr<string> jobId_ {};
    // Task Type. Currently, only DOWNLOWD_MARKRESULT_FLOW is supported.
    shared_ptr<string> jobType_ {};
    // Message ID.
    shared_ptr<string> messageId_ {};
    // Processing information.
    shared_ptr<string> processType_ {};
    // Job ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
