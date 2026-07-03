// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGPORTLISTRESPONSEBODY_HPP_
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
  class DescribeSagPortListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagPortListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagPortListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagPortListResponseBody() = default ;
    DescribeSagPortListResponseBody(const DescribeSagPortListResponseBody &) = default ;
    DescribeSagPortListResponseBody(DescribeSagPortListResponseBody &&) = default ;
    DescribeSagPortListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagPortListResponseBody() = default ;
    DescribeSagPortListResponseBody& operator=(const DescribeSagPortListResponseBody &) = default ;
    DescribeSagPortListResponseBody& operator=(DescribeSagPortListResponseBody &&) = default ;
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
      // The error code. 200 indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message. Successful indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // Asynchronous task states:
      // 
      // - **Initialized**: The query task is initialized.
      // 
      // - **Offline**: The SAG device is disconnected from Alibaba Cloud and Alibaba Cloud has not assigned the query task to the SAG device. When the SAG device is connected to Alibaba Cloud, Alibaba Cloud continues to assign the query task to the SAG device.
      // 
      // - **Succeed**: Alibaba Cloud has assigned the query task to the SAG device.
      // 
      // - **Processing**: Alibaba Cloud is assigning the query task to the SAG device.
      // 
      // - **VersionNotSupport**: not supported by the current version of the SAG device.
      // 
      // - **BuildRequestError**: not supported by the control and management center in the cloud.
      // 
      // - **HardwareError**: Alibaba Cloud failed to assign the query task to the SAG device because the SAG device is faulty.
      // 
      // - **TaskNotExist**: The query task does not exist.
      // 
      // - **OfflineNotConfiged**: The SAG device is disconnected from Alibaba Cloud and Alibaba Cloud has not assigned the query task to the SAG device. When the SAG device is connected to Alibaba Cloud, Alibaba Cloud does not assign the query task to the SAG device.
      shared_ptr<string> state_ {};
    };

    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->mac_ == nullptr
        && this->portName_ == nullptr && this->role_ == nullptr && this->status_ == nullptr; };
      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Ports& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline Ports& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Ports& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Ports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The Mac address of the port.
      shared_ptr<string> mac_ {};
      // The name of the port.
      shared_ptr<string> portName_ {};
      // Port role:
      // 
      // - **NONE**: No role is assigned to the port.
      // 
      // - **WAN**: The port is used as a WAN port. The WAN port supports a Dynamic Host Configuration Protocol (DHCP) client, PPPoE, or a static IP address to access the Internet.
      // 
      // - **LAN**: The port is used as a LAN port. The LAN port supports a DHCP server or a static IP address to connect to a local terminal or switch.
      // 
      // - **ECC**: The port is used as a leased line port to connect to a leased line.
      // 
      // - **MGT**: The port is used as the management port.
      shared_ptr<string> role_ {};
      // Port states:
      // 
      // - **Up**: The port is enabled.
      // 
      // - **Down**: The port is disabled.
      // 
      // - **Unavailable**: The SAG device is disconnected from Alibaba Cloud.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->ports_ == nullptr
        && this->requestId_ == nullptr && this->taskStates_ == nullptr; };
    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<DescribeSagPortListResponseBody::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<DescribeSagPortListResponseBody::Ports>) };
    inline vector<DescribeSagPortListResponseBody::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<DescribeSagPortListResponseBody::Ports>) };
    inline DescribeSagPortListResponseBody& setPorts(const vector<DescribeSagPortListResponseBody::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeSagPortListResponseBody& setPorts(vector<DescribeSagPortListResponseBody::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagPortListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagPortListResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagPortListResponseBody::TaskStates>) };
    inline vector<DescribeSagPortListResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagPortListResponseBody::TaskStates>) };
    inline DescribeSagPortListResponseBody& setTaskStates(const vector<DescribeSagPortListResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagPortListResponseBody& setTaskStates(vector<DescribeSagPortListResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The list of the port information.
    shared_ptr<vector<DescribeSagPortListResponseBody::Ports>> ports_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The state of the query task.
    shared_ptr<vector<DescribeSagPortListResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
