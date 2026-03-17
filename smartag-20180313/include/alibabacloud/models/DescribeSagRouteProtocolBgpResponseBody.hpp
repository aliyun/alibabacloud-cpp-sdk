// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGROUTEPROTOCOLBGPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGROUTEPROTOCOLBGPRESPONSEBODY_HPP_
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
  class DescribeSagRouteProtocolBgpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagRouteProtocolBgpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HoldTime, holdTime_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(LocalAs, localAs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagRouteProtocolBgpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HoldTime, holdTime_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(LocalAs, localAs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagRouteProtocolBgpResponseBody() = default ;
    DescribeSagRouteProtocolBgpResponseBody(const DescribeSagRouteProtocolBgpResponseBody &) = default ;
    DescribeSagRouteProtocolBgpResponseBody(DescribeSagRouteProtocolBgpResponseBody &&) = default ;
    DescribeSagRouteProtocolBgpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagRouteProtocolBgpResponseBody() = default ;
    DescribeSagRouteProtocolBgpResponseBody& operator=(const DescribeSagRouteProtocolBgpResponseBody &) = default ;
    DescribeSagRouteProtocolBgpResponseBody& operator=(DescribeSagRouteProtocolBgpResponseBody &&) = default ;
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
      // The timestamp when the task was created.
      shared_ptr<string> createTime_ {};
      // The error code returned. A value of 200 indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message returned. A value of Successful indicates that the query task is successful.
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

    virtual bool empty() const override { return this->holdTime_ == nullptr
        && this->keepAlive_ == nullptr && this->localAs_ == nullptr && this->requestId_ == nullptr && this->routerId_ == nullptr && this->taskStates_ == nullptr; };
    // holdTime Field Functions 
    bool hasHoldTime() const { return this->holdTime_ != nullptr;};
    void deleteHoldTime() { this->holdTime_ = nullptr;};
    inline int32_t getHoldTime() const { DARABONBA_PTR_GET_DEFAULT(holdTime_, 0) };
    inline DescribeSagRouteProtocolBgpResponseBody& setHoldTime(int32_t holdTime) { DARABONBA_PTR_SET_VALUE(holdTime_, holdTime) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline int32_t getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, 0) };
    inline DescribeSagRouteProtocolBgpResponseBody& setKeepAlive(int32_t keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // localAs Field Functions 
    bool hasLocalAs() const { return this->localAs_ != nullptr;};
    void deleteLocalAs() { this->localAs_ = nullptr;};
    inline int32_t getLocalAs() const { DARABONBA_PTR_GET_DEFAULT(localAs_, 0) };
    inline DescribeSagRouteProtocolBgpResponseBody& setLocalAs(int32_t localAs) { DARABONBA_PTR_SET_VALUE(localAs_, localAs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagRouteProtocolBgpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeSagRouteProtocolBgpResponseBody& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates>) };
    inline vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates>) };
    inline DescribeSagRouteProtocolBgpResponseBody& setTaskStates(const vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagRouteProtocolBgpResponseBody& setTaskStates(vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The hold time. Unit: seconds.
    shared_ptr<int32_t> holdTime_ {};
    // The time interval at which keep-alive packets are sent. Unit: seconds.
    shared_ptr<int32_t> keepAlive_ {};
    // The autonomous system (AS) number to which the SAG device belongs.
    shared_ptr<int32_t> localAs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the BGP router.
    shared_ptr<string> routerId_ {};
    // The details about the query task.
    shared_ptr<vector<DescribeSagRouteProtocolBgpResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
