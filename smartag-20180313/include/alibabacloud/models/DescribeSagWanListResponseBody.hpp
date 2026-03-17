// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGWANLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGWANLISTRESPONSEBODY_HPP_
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
  class DescribeSagWanListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagWanListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
      DARABONBA_PTR_TO_JSON(Wans, wans_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagWanListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
      DARABONBA_PTR_FROM_JSON(Wans, wans_);
    };
    DescribeSagWanListResponseBody() = default ;
    DescribeSagWanListResponseBody(const DescribeSagWanListResponseBody &) = default ;
    DescribeSagWanListResponseBody(DescribeSagWanListResponseBody &&) = default ;
    DescribeSagWanListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagWanListResponseBody() = default ;
    DescribeSagWanListResponseBody& operator=(const DescribeSagWanListResponseBody &) = default ;
    DescribeSagWanListResponseBody& operator=(DescribeSagWanListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Wans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Wans& obj) { 
        DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
        DARABONBA_PTR_TO_JSON(Gateway, gateway_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(IPType, IPType_);
        DARABONBA_PTR_TO_JSON(ISP, ISP_);
        DARABONBA_PTR_TO_JSON(Mask, mask_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(TrafficState, trafficState_);
        DARABONBA_PTR_TO_JSON(Username, username_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Wans& obj) { 
        DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
        DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(IPType, IPType_);
        DARABONBA_PTR_FROM_JSON(ISP, ISP_);
        DARABONBA_PTR_FROM_JSON(Mask, mask_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(TrafficState, trafficState_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      Wans() = default ;
      Wans(const Wans &) = default ;
      Wans(Wans &&) = default ;
      Wans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Wans() = default ;
      Wans& operator=(const Wans &) = default ;
      Wans& operator=(Wans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->gateway_ == nullptr && this->IP_ == nullptr && this->IPType_ == nullptr && this->ISP_ == nullptr && this->mask_ == nullptr
        && this->portName_ == nullptr && this->priority_ == nullptr && this->trafficState_ == nullptr && this->username_ == nullptr && this->weight_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int32_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0) };
      inline Wans& setBandWidth(int32_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // gateway Field Functions 
      bool hasGateway() const { return this->gateway_ != nullptr;};
      void deleteGateway() { this->gateway_ = nullptr;};
      inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
      inline Wans& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline Wans& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // IPType Field Functions 
      bool hasIPType() const { return this->IPType_ != nullptr;};
      void deleteIPType() { this->IPType_ = nullptr;};
      inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
      inline Wans& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


      // ISP Field Functions 
      bool hasISP() const { return this->ISP_ != nullptr;};
      void deleteISP() { this->ISP_ = nullptr;};
      inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
      inline Wans& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


      // mask Field Functions 
      bool hasMask() const { return this->mask_ != nullptr;};
      void deleteMask() { this->mask_ = nullptr;};
      inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
      inline Wans& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline Wans& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Wans& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // trafficState Field Functions 
      bool hasTrafficState() const { return this->trafficState_ != nullptr;};
      void deleteTrafficState() { this->trafficState_ = nullptr;};
      inline string getTrafficState() const { DARABONBA_PTR_GET_DEFAULT(trafficState_, "") };
      inline Wans& setTrafficState(string trafficState) { DARABONBA_PTR_SET_VALUE(trafficState_, trafficState) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Wans& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Wans& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The bandwidth cap of the WAN port. Unit: Mbit/s.
      shared_ptr<int32_t> bandWidth_ {};
      // The IP address of the gateway.
      shared_ptr<string> gateway_ {};
      // The IP address of the WAN port.
      shared_ptr<string> IP_ {};
      // The connection type of the WAN port. Valid values:
      // 
      // *   **DHCP**: The WAN port connects to the Internet through an IP address that is dynamically assigned by the Dynamic Host Configuration Protocol (DHCP) server.
      // *   **STATIC**: The WAN port connects to the Internet through a static IP address.
      // *   **PPPOE**: The WAN port connects to the Internet through dial-up connections.
      shared_ptr<string> IPType_ {};
      // The Internet service provider (ISP) used by the WAN port.
      // 
      // *   **CT**: China Telecom
      // *   **CM**: China Mobile
      // *   **CU**: China Unicom
      // *   **Other**: Other ISPs
      shared_ptr<string> ISP_ {};
      // The subnet mask of the WAN port IP address.
      shared_ptr<string> mask_ {};
      // The number of the WAN port.
      shared_ptr<string> portName_ {};
      // The priority of the WAN port.
      // 
      // Valid values: **-1** and **1 to 50**. A smaller number represents a higher priority.
      // 
      // >  A value of **-1** indicates that the WAN port is not used to forward network traffic.
      shared_ptr<int32_t> priority_ {};
      // The status of data transfer on the WAN port. Valid values:
      // 
      // *   **active**: The WAN port is the active port for data transfer.
      // *   **standby**: The WAN port is a standby port. If the active port is down, data transfer is switched to the WAN port.
      shared_ptr<string> trafficState_ {};
      // The username of the PPPoE account.
      shared_ptr<string> username_ {};
      // The weight of the WAN port.
      shared_ptr<int32_t> weight_ {};
    };

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
      // The error code returned to the query task. A value of 200 indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message returned to the query task. A value of Successful indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // The status of the query task. Valid values:
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskStates_ == nullptr && this->wans_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagWanListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagWanListResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagWanListResponseBody::TaskStates>) };
    inline vector<DescribeSagWanListResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagWanListResponseBody::TaskStates>) };
    inline DescribeSagWanListResponseBody& setTaskStates(const vector<DescribeSagWanListResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagWanListResponseBody& setTaskStates(vector<DescribeSagWanListResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


    // wans Field Functions 
    bool hasWans() const { return this->wans_ != nullptr;};
    void deleteWans() { this->wans_ = nullptr;};
    inline const vector<DescribeSagWanListResponseBody::Wans> & getWans() const { DARABONBA_PTR_GET_CONST(wans_, vector<DescribeSagWanListResponseBody::Wans>) };
    inline vector<DescribeSagWanListResponseBody::Wans> getWans() { DARABONBA_PTR_GET(wans_, vector<DescribeSagWanListResponseBody::Wans>) };
    inline DescribeSagWanListResponseBody& setWans(const vector<DescribeSagWanListResponseBody::Wans> & wans) { DARABONBA_PTR_SET_VALUE(wans_, wans) };
    inline DescribeSagWanListResponseBody& setWans(vector<DescribeSagWanListResponseBody::Wans> && wans) { DARABONBA_PTR_SET_RVALUE(wans_, wans) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of and information about the query task.
    shared_ptr<vector<DescribeSagWanListResponseBody::TaskStates>> taskStates_ {};
    // The settings of the WAN port.
    shared_ptr<vector<DescribeSagWanListResponseBody::Wans>> wans_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
