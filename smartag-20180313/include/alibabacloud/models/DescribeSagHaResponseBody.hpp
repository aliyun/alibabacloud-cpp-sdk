// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGHARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGHARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagHaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagHaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagHaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagHaResponseBody() = default ;
    DescribeSagHaResponseBody(const DescribeSagHaResponseBody &) = default ;
    DescribeSagHaResponseBody(DescribeSagHaResponseBody &&) = default ;
    DescribeSagHaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagHaResponseBody() = default ;
    DescribeSagHaResponseBody& operator=(const DescribeSagHaResponseBody &) = default ;
    DescribeSagHaResponseBody& operator=(DescribeSagHaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskStates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskStates& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, TaskStates& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      TaskStates() = default ;
      TaskStates(const TaskStates &) = default ;
      TaskStates(TaskStates &&) = default ;
      TaskStates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskStates() = default ;
      TaskStates& operator=(const TaskStates &) = default ;
      TaskStates& operator=(TaskStates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->state_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TaskStates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline TaskStates& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline TaskStates& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline TaskStates& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The time when the query task was created.
      shared_ptr<string> createTime_ {};
      // The error code returned for a query task. The 200 error code indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message returned for a query task. The Successful error message indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // The status of the query task. Valid values:
      // 
      // *   **Initialized**: The query task has been initialized.
      // *   **Offline**: The query task is not dispatched because the SAG device is disconnected from Alibaba Cloud. The task will be dispatched after the SAG device is connected to Alibaba Cloud.
      // *   **Succeed**: The query task has been dispatched.
      // *   **Processing**: The query task is being dispatched.
      // *   **VersionNotSupport**: The current version of the SAG device does not support query tasks.
      // *   **BuildRequestError**: The SAG control system does not support query tasks.
      // *   **HardwareError**: The query task failed to be dispatched due to device errors.
      // *   **TaskNotExist**: The query task does not exist.
      // *   **OfflineNotConfiged**: The query task is not dispatched because the SAG device is disconnected from Alibaba Cloud. The task will not be dispatched after the device is connected to Alibaba Cloud.
      shared_ptr<string> state_ {};
    };

    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(VirtualIp, virtualIp_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(VirtualIp, virtualIp_);
      };
      Ports() = default ;
      Ports(const Ports &) = default ;
      Ports(Ports &&) = default ;
      Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ports() = default ;
      Ports& operator=(const Ports &) = default ;
      Ports& operator=(Ports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->portName_ == nullptr
        && this->virtualIp_ == nullptr; };
      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline Ports& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // virtualIp Field Functions 
      bool hasVirtualIp() const { return this->virtualIp_ != nullptr;};
      void deleteVirtualIp() { this->virtualIp_ = nullptr;};
      inline string getVirtualIp() const { DARABONBA_PTR_GET_DEFAULT(virtualIp_, "") };
      inline Ports& setVirtualIp(string virtualIp) { DARABONBA_PTR_SET_VALUE(virtualIp_, virtualIp) };


    protected:
      // The name of the port.
      shared_ptr<string> portName_ {};
      // The virtual IP address of the SAG device.
      shared_ptr<string> virtualIp_ {};
    };

    virtual bool empty() const override { return this->mode_ == nullptr
        && this->ports_ == nullptr && this->requestId_ == nullptr && this->taskStates_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeSagHaResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<DescribeSagHaResponseBody::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<DescribeSagHaResponseBody::Ports>) };
    inline vector<DescribeSagHaResponseBody::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<DescribeSagHaResponseBody::Ports>) };
    inline DescribeSagHaResponseBody& setPorts(const vector<DescribeSagHaResponseBody::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeSagHaResponseBody& setPorts(vector<DescribeSagHaResponseBody::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagHaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagHaResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagHaResponseBody::TaskStates>) };
    inline vector<DescribeSagHaResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagHaResponseBody::TaskStates>) };
    inline DescribeSagHaResponseBody& setTaskStates(const vector<DescribeSagHaResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagHaResponseBody& setTaskStates(vector<DescribeSagHaResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The HA mode. Valid values:
    // 
    // *   **NONE**: HA is disabled.
    // *   **STATIC**: static HA is enabled.
    // *   **DYNAMIC**: dynamic HA is enabled.
    shared_ptr<string> mode_ {};
    // The information about the port.
    shared_ptr<vector<DescribeSagHaResponseBody::Ports>> ports_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the query task.
    shared_ptr<vector<DescribeSagHaResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
