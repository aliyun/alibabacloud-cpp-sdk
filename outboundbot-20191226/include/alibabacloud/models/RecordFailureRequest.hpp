// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECORDFAILUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECORDFAILUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class RecordFailureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecordFailureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(DispositionCode, dispositionCode_);
      DARABONBA_PTR_TO_JSON(ExceptionCodes, exceptionCodes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RecordFailureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(DispositionCode, dispositionCode_);
      DARABONBA_PTR_FROM_JSON(ExceptionCodes, exceptionCodes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RecordFailureRequest() = default ;
    RecordFailureRequest(const RecordFailureRequest &) = default ;
    RecordFailureRequest(RecordFailureRequest &&) = default ;
    RecordFailureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecordFailureRequest() = default ;
    RecordFailureRequest& operator=(const RecordFailureRequest &) = default ;
    RecordFailureRequest& operator=(RecordFailureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->callId_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->dispositionCode_ == nullptr && this->exceptionCodes_ == nullptr
        && this->instanceId_ == nullptr && this->taskId_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline int64_t getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
    inline RecordFailureRequest& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline RecordFailureRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline RecordFailureRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline RecordFailureRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // dispositionCode Field Functions 
    bool hasDispositionCode() const { return this->dispositionCode_ != nullptr;};
    void deleteDispositionCode() { this->dispositionCode_ = nullptr;};
    inline string getDispositionCode() const { DARABONBA_PTR_GET_DEFAULT(dispositionCode_, "") };
    inline RecordFailureRequest& setDispositionCode(string dispositionCode) { DARABONBA_PTR_SET_VALUE(dispositionCode_, dispositionCode) };


    // exceptionCodes Field Functions 
    bool hasExceptionCodes() const { return this->exceptionCodes_ != nullptr;};
    void deleteExceptionCodes() { this->exceptionCodes_ = nullptr;};
    inline string getExceptionCodes() const { DARABONBA_PTR_GET_DEFAULT(exceptionCodes_, "") };
    inline RecordFailureRequest& setExceptionCodes(string exceptionCodes) { DARABONBA_PTR_SET_VALUE(exceptionCodes_, exceptionCodes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RecordFailureRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RecordFailureRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> actualTime_ {};
    // This parameter is required.
    shared_ptr<string> callId_ {};
    // This parameter is required.
    shared_ptr<string> calledNumber_ {};
    // This parameter is required.
    shared_ptr<string> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> dispositionCode_ {};
    shared_ptr<string> exceptionCodes_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
