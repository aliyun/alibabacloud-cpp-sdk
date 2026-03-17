// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYOSPFROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYOSPFROUTERESPONSEBODY_HPP_
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
  class ViewSmartAccessGatewayOspfRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSmartAccessGatewayOspfRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(DeadTime, deadTime_);
      DARABONBA_PTR_TO_JSON(HelloTime, helloTime_);
      DARABONBA_PTR_TO_JSON(Md5Key, md5Key_);
      DARABONBA_PTR_TO_JSON(Md5KeyId, md5KeyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSmartAccessGatewayOspfRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(DeadTime, deadTime_);
      DARABONBA_PTR_FROM_JSON(HelloTime, helloTime_);
      DARABONBA_PTR_FROM_JSON(Md5Key, md5Key_);
      DARABONBA_PTR_FROM_JSON(Md5KeyId, md5KeyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    ViewSmartAccessGatewayOspfRouteResponseBody() = default ;
    ViewSmartAccessGatewayOspfRouteResponseBody(const ViewSmartAccessGatewayOspfRouteResponseBody &) = default ;
    ViewSmartAccessGatewayOspfRouteResponseBody(ViewSmartAccessGatewayOspfRouteResponseBody &&) = default ;
    ViewSmartAccessGatewayOspfRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSmartAccessGatewayOspfRouteResponseBody() = default ;
    ViewSmartAccessGatewayOspfRouteResponseBody& operator=(const ViewSmartAccessGatewayOspfRouteResponseBody &) = default ;
    ViewSmartAccessGatewayOspfRouteResponseBody& operator=(ViewSmartAccessGatewayOspfRouteResponseBody &&) = default ;
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
      // The timestamp when the task was created. Unit: milliseconds.
      // 
      // The value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> createTime_ {};
      // The error code. A value of 200 indicates that the task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message. A value of Successful indicates that the task is successful.
      shared_ptr<string> errorMessage_ {};
      // The status of the asynchronous task. Valid values:
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

    virtual bool empty() const override { return this->areaId_ == nullptr
        && this->authenticationType_ == nullptr && this->deadTime_ == nullptr && this->helloTime_ == nullptr && this->md5Key_ == nullptr && this->md5KeyId_ == nullptr
        && this->requestId_ == nullptr && this->routerId_ == nullptr && this->taskStates_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline int32_t getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, 0) };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setAreaId(int32_t areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // deadTime Field Functions 
    bool hasDeadTime() const { return this->deadTime_ != nullptr;};
    void deleteDeadTime() { this->deadTime_ = nullptr;};
    inline int32_t getDeadTime() const { DARABONBA_PTR_GET_DEFAULT(deadTime_, 0) };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setDeadTime(int32_t deadTime) { DARABONBA_PTR_SET_VALUE(deadTime_, deadTime) };


    // helloTime Field Functions 
    bool hasHelloTime() const { return this->helloTime_ != nullptr;};
    void deleteHelloTime() { this->helloTime_ = nullptr;};
    inline int32_t getHelloTime() const { DARABONBA_PTR_GET_DEFAULT(helloTime_, 0) };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setHelloTime(int32_t helloTime) { DARABONBA_PTR_SET_VALUE(helloTime_, helloTime) };


    // md5Key Field Functions 
    bool hasMd5Key() const { return this->md5Key_ != nullptr;};
    void deleteMd5Key() { this->md5Key_ = nullptr;};
    inline string getMd5Key() const { DARABONBA_PTR_GET_DEFAULT(md5Key_, "") };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setMd5Key(string md5Key) { DARABONBA_PTR_SET_VALUE(md5Key_, md5Key) };


    // md5KeyId Field Functions 
    bool hasMd5KeyId() const { return this->md5KeyId_ != nullptr;};
    void deleteMd5KeyId() { this->md5KeyId_ = nullptr;};
    inline int32_t getMd5KeyId() const { DARABONBA_PTR_GET_DEFAULT(md5KeyId_, 0) };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setMd5KeyId(int32_t md5KeyId) { DARABONBA_PTR_SET_VALUE(md5KeyId_, md5KeyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates>) };
    inline vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates>) };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setTaskStates(const vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline ViewSmartAccessGatewayOspfRouteResponseBody& setTaskStates(vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The ID of the OSPF area.
    shared_ptr<int32_t> areaId_ {};
    // The authentication type. Valid values:
    // 
    // *   **NONE**: Authentication is disabled.
    // *   **CLEARTEXT**: Plaintext authentication is used.
    // *   **MD5**: MD5 authentication is used.
    shared_ptr<string> authenticationType_ {};
    // The timeout period of connections between OSPF peers. Unit: seconds.
    shared_ptr<int32_t> deadTime_ {};
    // The time interval at which Hello packets are sent. Unit: seconds.
    shared_ptr<int32_t> helloTime_ {};
    // The MD5 key value.
    shared_ptr<string> md5Key_ {};
    // The ID of the MD5 key.
    shared_ptr<int32_t> md5KeyId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the router that has OSPF enabled.
    shared_ptr<string> routerId_ {};
    // The status of the task.
    shared_ptr<vector<ViewSmartAccessGatewayOspfRouteResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
