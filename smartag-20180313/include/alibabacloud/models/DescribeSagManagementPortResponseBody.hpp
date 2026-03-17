// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGMANAGEMENTPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGMANAGEMENTPORTRESPONSEBODY_HPP_
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
  class DescribeSagManagementPortResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagManagementPortResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagManagementPortResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagManagementPortResponseBody() = default ;
    DescribeSagManagementPortResponseBody(const DescribeSagManagementPortResponseBody &) = default ;
    DescribeSagManagementPortResponseBody(DescribeSagManagementPortResponseBody &&) = default ;
    DescribeSagManagementPortResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagManagementPortResponseBody() = default ;
    DescribeSagManagementPortResponseBody& operator=(const DescribeSagManagementPortResponseBody &) = default ;
    DescribeSagManagementPortResponseBody& operator=(DescribeSagManagementPortResponseBody &&) = default ;
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
      // The error code returned. A value of 200 indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message. A value of Successful indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // The state of the query task. Valid values:
      // 
      // *   **Initialized**: The query task is initialized.
      // *   **Offline**: The SAG device is disconnected from Alibaba Cloud and Alibaba Cloud has not assigned the query task to the SAG device. After the SAG device is connected to Alibaba Cloud, Alibaba Cloud assigns the query task to the SAG device.
      // *   **Succeed**: Alibaba Cloud has assigned the query task to the SAG device.
      // *   **Processing**: Alibaba Cloud is assigning the query task to the SAG device.
      // *   **VersionNotSupport**: The query task is not supported by the current version of the SAG device.
      // *   **BuildRequestError**: The query task is not supported by the controller of the SAG device.
      // *   **HardwareError**: Alibaba Cloud failed to assign the query task to the SAG device because the SAG device is faulty.
      // *   **TaskNotExist**: The query task does not exist.
      // *   **OfflineNotConfiged**: The SAG device is disconnected from Alibaba Cloud and Alibaba Cloud has not assigned the query task to the SAG device. Alibaba Cloud does not assign the query task to the SAG device even after the SAG device is connected to Alibaba Cloud.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->gateway_ == nullptr
        && this->IP_ == nullptr && this->mask_ == nullptr && this->requestId_ == nullptr && this->taskStates_ == nullptr; };
    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline DescribeSagManagementPortResponseBody& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeSagManagementPortResponseBody& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline DescribeSagManagementPortResponseBody& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagManagementPortResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagManagementPortResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagManagementPortResponseBody::TaskStates>) };
    inline vector<DescribeSagManagementPortResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagManagementPortResponseBody::TaskStates>) };
    inline DescribeSagManagementPortResponseBody& setTaskStates(const vector<DescribeSagManagementPortResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagManagementPortResponseBody& setTaskStates(vector<DescribeSagManagementPortResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The IP address of the management port gateway.
    shared_ptr<string> gateway_ {};
    // The IP address of the management port.
    shared_ptr<string> IP_ {};
    // The subnet gateway of the IP address of the management port.
    shared_ptr<string> mask_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The state of the query task.
    shared_ptr<vector<DescribeSagManagementPortResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
