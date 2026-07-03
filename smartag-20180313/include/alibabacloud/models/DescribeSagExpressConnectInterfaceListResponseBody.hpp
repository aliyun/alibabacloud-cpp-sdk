// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGEXPRESSCONNECTINTERFACELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGEXPRESSCONNECTINTERFACELISTRESPONSEBODY_HPP_
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
  class DescribeSagExpressConnectInterfaceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagExpressConnectInterfaceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Interfaces, interfaces_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagExpressConnectInterfaceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Interfaces, interfaces_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagExpressConnectInterfaceListResponseBody() = default ;
    DescribeSagExpressConnectInterfaceListResponseBody(const DescribeSagExpressConnectInterfaceListResponseBody &) = default ;
    DescribeSagExpressConnectInterfaceListResponseBody(DescribeSagExpressConnectInterfaceListResponseBody &&) = default ;
    DescribeSagExpressConnectInterfaceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagExpressConnectInterfaceListResponseBody() = default ;
    DescribeSagExpressConnectInterfaceListResponseBody& operator=(const DescribeSagExpressConnectInterfaceListResponseBody &) = default ;
    DescribeSagExpressConnectInterfaceListResponseBody& operator=(DescribeSagExpressConnectInterfaceListResponseBody &&) = default ;
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
      // The error code. 200 indicates that the query task succeeded.
      shared_ptr<string> errorCode_ {};
      // The error message. "Successful" indicates that the query task succeeded.
      shared_ptr<string> errorMessage_ {};
      // The status of the asynchronous task. Valid values:
      // 
      // - **Initialized**: The query task is initialized.
      // - **Offline**: The Smart Access Gateway device is offline and the query task is not delivered. The task will be delivered after the device comes online.
      // - **Succeed**: The query task is delivered.
      // - **Processing**: The query task is being delivered.
      // - **VersionNotSupport**: The current version of the Smart Access Gateway device does not support this operation.
      // - **BuildRequestError**: The China Cloud Management Platform does not support this operation.
      // - **HardwareError**: The query task failed to be delivered due to a device error.
      // - **TaskNotExist**: The query task does not exist.
      // - **OfflineNotConfiged**: The Smart Access Gateway device is offline and the query task is not delivered. The task will not be delivered even after the device comes online.
      shared_ptr<string> state_ {};
    };

    class Interfaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Interfaces& obj) { 
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(Mask, mask_);
        DARABONBA_PTR_TO_JSON(Vlan, vlan_);
      };
      friend void from_json(const Darabonba::Json& j, Interfaces& obj) { 
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(Mask, mask_);
        DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
      };
      Interfaces() = default ;
      Interfaces(const Interfaces &) = default ;
      Interfaces(Interfaces &&) = default ;
      Interfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Interfaces() = default ;
      Interfaces& operator=(const Interfaces &) = default ;
      Interfaces& operator=(Interfaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IP_ == nullptr
        && this->mask_ == nullptr && this->vlan_ == nullptr; };
      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline Interfaces& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // mask Field Functions 
      bool hasMask() const { return this->mask_ != nullptr;};
      void deleteMask() { this->mask_ = nullptr;};
      inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
      inline Interfaces& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


      // vlan Field Functions 
      bool hasVlan() const { return this->vlan_ != nullptr;};
      void deleteVlan() { this->vlan_ = nullptr;};
      inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
      inline Interfaces& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


    protected:
      // The IP address.
      shared_ptr<string> IP_ {};
      // The subnet mask.
      shared_ptr<string> mask_ {};
      // The VLAN ID.
      shared_ptr<string> vlan_ {};
    };

    virtual bool empty() const override { return this->interfaces_ == nullptr
        && this->requestId_ == nullptr && this->taskStates_ == nullptr; };
    // interfaces Field Functions 
    bool hasInterfaces() const { return this->interfaces_ != nullptr;};
    void deleteInterfaces() { this->interfaces_ = nullptr;};
    inline const vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces> & getInterfaces() const { DARABONBA_PTR_GET_CONST(interfaces_, vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces>) };
    inline vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces> getInterfaces() { DARABONBA_PTR_GET(interfaces_, vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces>) };
    inline DescribeSagExpressConnectInterfaceListResponseBody& setInterfaces(const vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces> & interfaces) { DARABONBA_PTR_SET_VALUE(interfaces_, interfaces) };
    inline DescribeSagExpressConnectInterfaceListResponseBody& setInterfaces(vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces> && interfaces) { DARABONBA_PTR_SET_RVALUE(interfaces_, interfaces) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagExpressConnectInterfaceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates>) };
    inline vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates>) };
    inline DescribeSagExpressConnectInterfaceListResponseBody& setTaskStates(const vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagExpressConnectInterfaceListResponseBody& setTaskStates(vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The list of interface information.
    shared_ptr<vector<DescribeSagExpressConnectInterfaceListResponseBody::Interfaces>> interfaces_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the query task.
    shared_ptr<vector<DescribeSagExpressConnectInterfaceListResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
