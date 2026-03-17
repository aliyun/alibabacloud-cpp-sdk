// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYPORTROUTEPROTOCOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYPORTROUTEPROTOCOLRESPONSEBODY_HPP_
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
  class ViewSmartAccessGatewayPortRouteProtocolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSmartAccessGatewayPortRouteProtocolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSmartAccessGatewayPortRouteProtocolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    ViewSmartAccessGatewayPortRouteProtocolResponseBody() = default ;
    ViewSmartAccessGatewayPortRouteProtocolResponseBody(const ViewSmartAccessGatewayPortRouteProtocolResponseBody &) = default ;
    ViewSmartAccessGatewayPortRouteProtocolResponseBody(ViewSmartAccessGatewayPortRouteProtocolResponseBody &&) = default ;
    ViewSmartAccessGatewayPortRouteProtocolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSmartAccessGatewayPortRouteProtocolResponseBody() = default ;
    ViewSmartAccessGatewayPortRouteProtocolResponseBody& operator=(const ViewSmartAccessGatewayPortRouteProtocolResponseBody &) = default ;
    ViewSmartAccessGatewayPortRouteProtocolResponseBody& operator=(ViewSmartAccessGatewayPortRouteProtocolResponseBody &&) = default ;
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
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> state_ {};
    };

    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(NeighborIp, neighborIp_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(RemoteAs, remoteAs_);
        DARABONBA_PTR_TO_JSON(RemoteIp, remoteIp_);
        DARABONBA_PTR_TO_JSON(RouteProtocol, routeProtocol_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vlan, vlan_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(NeighborIp, neighborIp_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(RemoteAs, remoteAs_);
        DARABONBA_PTR_FROM_JSON(RemoteIp, remoteIp_);
        DARABONBA_PTR_FROM_JSON(RouteProtocol, routeProtocol_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
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
      virtual bool empty() const override { return this->neighborIp_ == nullptr
        && this->portName_ == nullptr && this->remoteAs_ == nullptr && this->remoteIp_ == nullptr && this->routeProtocol_ == nullptr && this->status_ == nullptr
        && this->vlan_ == nullptr; };
      // neighborIp Field Functions 
      bool hasNeighborIp() const { return this->neighborIp_ != nullptr;};
      void deleteNeighborIp() { this->neighborIp_ = nullptr;};
      inline string getNeighborIp() const { DARABONBA_PTR_GET_DEFAULT(neighborIp_, "") };
      inline Ports& setNeighborIp(string neighborIp) { DARABONBA_PTR_SET_VALUE(neighborIp_, neighborIp) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline Ports& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // remoteAs Field Functions 
      bool hasRemoteAs() const { return this->remoteAs_ != nullptr;};
      void deleteRemoteAs() { this->remoteAs_ = nullptr;};
      inline string getRemoteAs() const { DARABONBA_PTR_GET_DEFAULT(remoteAs_, "") };
      inline Ports& setRemoteAs(string remoteAs) { DARABONBA_PTR_SET_VALUE(remoteAs_, remoteAs) };


      // remoteIp Field Functions 
      bool hasRemoteIp() const { return this->remoteIp_ != nullptr;};
      void deleteRemoteIp() { this->remoteIp_ = nullptr;};
      inline string getRemoteIp() const { DARABONBA_PTR_GET_DEFAULT(remoteIp_, "") };
      inline Ports& setRemoteIp(string remoteIp) { DARABONBA_PTR_SET_VALUE(remoteIp_, remoteIp) };


      // routeProtocol Field Functions 
      bool hasRouteProtocol() const { return this->routeProtocol_ != nullptr;};
      void deleteRouteProtocol() { this->routeProtocol_ = nullptr;};
      inline string getRouteProtocol() const { DARABONBA_PTR_GET_DEFAULT(routeProtocol_, "") };
      inline Ports& setRouteProtocol(string routeProtocol) { DARABONBA_PTR_SET_VALUE(routeProtocol_, routeProtocol) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Ports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vlan Field Functions 
      bool hasVlan() const { return this->vlan_ != nullptr;};
      void deleteVlan() { this->vlan_ = nullptr;};
      inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
      inline Ports& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


    protected:
      shared_ptr<string> neighborIp_ {};
      shared_ptr<string> portName_ {};
      shared_ptr<string> remoteAs_ {};
      shared_ptr<string> remoteIp_ {};
      shared_ptr<string> routeProtocol_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vlan_ {};
    };

    virtual bool empty() const override { return this->ports_ == nullptr
        && this->requestId_ == nullptr && this->taskStates_ == nullptr; };
    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports>) };
    inline vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports>) };
    inline ViewSmartAccessGatewayPortRouteProtocolResponseBody& setPorts(const vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline ViewSmartAccessGatewayPortRouteProtocolResponseBody& setPorts(vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ViewSmartAccessGatewayPortRouteProtocolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates>) };
    inline vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates>) };
    inline ViewSmartAccessGatewayPortRouteProtocolResponseBody& setTaskStates(const vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline ViewSmartAccessGatewayPortRouteProtocolResponseBody& setTaskStates(vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    shared_ptr<vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::Ports>> ports_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ViewSmartAccessGatewayPortRouteProtocolResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
