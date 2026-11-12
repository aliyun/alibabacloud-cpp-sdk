// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGSTATICROUTELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGSTATICROUTELISTRESPONSEBODY_HPP_
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
  class DescribeSagStaticRouteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagStaticRouteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StaticRoutes, staticRoutes_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagStaticRouteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StaticRoutes, staticRoutes_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagStaticRouteListResponseBody() = default ;
    DescribeSagStaticRouteListResponseBody(const DescribeSagStaticRouteListResponseBody &) = default ;
    DescribeSagStaticRouteListResponseBody(DescribeSagStaticRouteListResponseBody &&) = default ;
    DescribeSagStaticRouteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagStaticRouteListResponseBody() = default ;
    DescribeSagStaticRouteListResponseBody& operator=(const DescribeSagStaticRouteListResponseBody &) = default ;
    DescribeSagStaticRouteListResponseBody& operator=(DescribeSagStaticRouteListResponseBody &&) = default ;
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
      // The error code. A value of 200 indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message. A value of Successful indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // The status of the asynchronous task. Valid values:
      // - **Initialized**: The query task is initialized.
      // - **Offline**: The Smart Access Gateway device is offline and the query task is not delivered. The task will be delivered after the device goes online.
      // - **Succeed**: The query task is delivered successfully.
      // - **Processing**: The query task is being delivered.
      // - **VersionNotSupport**: The current version of the Smart Access Gateway device does not support this feature.
      // - **BuildRequestError**: The management and control system does not support the request.
      // - **HardwareError**: The query task failed to be delivered due to a device error.
      // - **TaskNotExist**: The query task does not exist.
      // - **OfflineNotConfiged**: The Smart Access Gateway device is offline and the query task is not delivered. The task will not be delivered even after the device goes online.
      shared_ptr<string> state_ {};
    };

    class StaticRoutes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StaticRoutes& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(Vlan, vlan_);
      };
      friend void from_json(const Darabonba::Json& j, StaticRoutes& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
      };
      StaticRoutes() = default ;
      StaticRoutes(const StaticRoutes &) = default ;
      StaticRoutes(StaticRoutes &&) = default ;
      StaticRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StaticRoutes() = default ;
      StaticRoutes& operator=(const StaticRoutes &) = default ;
      StaticRoutes& operator=(StaticRoutes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && this->nextHop_ == nullptr && this->portName_ == nullptr && this->vlan_ == nullptr; };
      // destinationCidr Field Functions 
      bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
      void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
      inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
      inline StaticRoutes& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline StaticRoutes& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline StaticRoutes& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // vlan Field Functions 
      bool hasVlan() const { return this->vlan_ != nullptr;};
      void deleteVlan() { this->vlan_ = nullptr;};
      inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
      inline StaticRoutes& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


    protected:
      // The destination CIDR block.
      shared_ptr<string> destinationCidr_ {};
      // The next hop.
      shared_ptr<string> nextHop_ {};
      // The port name.
      shared_ptr<string> portName_ {};
      // The VLAN ID.
      shared_ptr<string> vlan_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->staticRoutes_ == nullptr && this->taskStates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagStaticRouteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // staticRoutes Field Functions 
    bool hasStaticRoutes() const { return this->staticRoutes_ != nullptr;};
    void deleteStaticRoutes() { this->staticRoutes_ = nullptr;};
    inline const vector<DescribeSagStaticRouteListResponseBody::StaticRoutes> & getStaticRoutes() const { DARABONBA_PTR_GET_CONST(staticRoutes_, vector<DescribeSagStaticRouteListResponseBody::StaticRoutes>) };
    inline vector<DescribeSagStaticRouteListResponseBody::StaticRoutes> getStaticRoutes() { DARABONBA_PTR_GET(staticRoutes_, vector<DescribeSagStaticRouteListResponseBody::StaticRoutes>) };
    inline DescribeSagStaticRouteListResponseBody& setStaticRoutes(const vector<DescribeSagStaticRouteListResponseBody::StaticRoutes> & staticRoutes) { DARABONBA_PTR_SET_VALUE(staticRoutes_, staticRoutes) };
    inline DescribeSagStaticRouteListResponseBody& setStaticRoutes(vector<DescribeSagStaticRouteListResponseBody::StaticRoutes> && staticRoutes) { DARABONBA_PTR_SET_RVALUE(staticRoutes_, staticRoutes) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagStaticRouteListResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagStaticRouteListResponseBody::TaskStates>) };
    inline vector<DescribeSagStaticRouteListResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagStaticRouteListResponseBody::TaskStates>) };
    inline DescribeSagStaticRouteListResponseBody& setTaskStates(const vector<DescribeSagStaticRouteListResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagStaticRouteListResponseBody& setTaskStates(vector<DescribeSagStaticRouteListResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of static routes.
    shared_ptr<vector<DescribeSagStaticRouteListResponseBody::StaticRoutes>> staticRoutes_ {};
    // The status of the query tasks.
    shared_ptr<vector<DescribeSagStaticRouteListResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
