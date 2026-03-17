// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGLANLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGLANLISTRESPONSEBODY_HPP_
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
  class DescribeSagLanListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagLanListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Lans, lans_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagLanListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Lans, lans_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    DescribeSagLanListResponseBody() = default ;
    DescribeSagLanListResponseBody(const DescribeSagLanListResponseBody &) = default ;
    DescribeSagLanListResponseBody(DescribeSagLanListResponseBody &&) = default ;
    DescribeSagLanListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagLanListResponseBody() = default ;
    DescribeSagLanListResponseBody& operator=(const DescribeSagLanListResponseBody &) = default ;
    DescribeSagLanListResponseBody& operator=(DescribeSagLanListResponseBody &&) = default ;
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

    class Lans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Lans& obj) { 
        DARABONBA_PTR_TO_JSON(EndIp, endIp_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(IPType, IPType_);
        DARABONBA_PTR_TO_JSON(Lease, lease_);
        DARABONBA_PTR_TO_JSON(Mask, mask_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(StartIp, startIp_);
      };
      friend void from_json(const Darabonba::Json& j, Lans& obj) { 
        DARABONBA_PTR_FROM_JSON(EndIp, endIp_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(IPType, IPType_);
        DARABONBA_PTR_FROM_JSON(Lease, lease_);
        DARABONBA_PTR_FROM_JSON(Mask, mask_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(StartIp, startIp_);
      };
      Lans() = default ;
      Lans(const Lans &) = default ;
      Lans(Lans &&) = default ;
      Lans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Lans() = default ;
      Lans& operator=(const Lans &) = default ;
      Lans& operator=(Lans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endIp_ == nullptr
        && this->IP_ == nullptr && this->IPType_ == nullptr && this->lease_ == nullptr && this->mask_ == nullptr && this->portName_ == nullptr
        && this->startIp_ == nullptr; };
      // endIp Field Functions 
      bool hasEndIp() const { return this->endIp_ != nullptr;};
      void deleteEndIp() { this->endIp_ = nullptr;};
      inline string getEndIp() const { DARABONBA_PTR_GET_DEFAULT(endIp_, "") };
      inline Lans& setEndIp(string endIp) { DARABONBA_PTR_SET_VALUE(endIp_, endIp) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline Lans& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // IPType Field Functions 
      bool hasIPType() const { return this->IPType_ != nullptr;};
      void deleteIPType() { this->IPType_ = nullptr;};
      inline string getIPType() const { DARABONBA_PTR_GET_DEFAULT(IPType_, "") };
      inline Lans& setIPType(string IPType) { DARABONBA_PTR_SET_VALUE(IPType_, IPType) };


      // lease Field Functions 
      bool hasLease() const { return this->lease_ != nullptr;};
      void deleteLease() { this->lease_ = nullptr;};
      inline string getLease() const { DARABONBA_PTR_GET_DEFAULT(lease_, "") };
      inline Lans& setLease(string lease) { DARABONBA_PTR_SET_VALUE(lease_, lease) };


      // mask Field Functions 
      bool hasMask() const { return this->mask_ != nullptr;};
      void deleteMask() { this->mask_ = nullptr;};
      inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
      inline Lans& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline Lans& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // startIp Field Functions 
      bool hasStartIp() const { return this->startIp_ != nullptr;};
      void deleteStartIp() { this->startIp_ = nullptr;};
      inline string getStartIp() const { DARABONBA_PTR_GET_DEFAULT(startIp_, "") };
      inline Lans& setStartIp(string startIp) { DARABONBA_PTR_SET_VALUE(startIp_, startIp) };


    protected:
      // The last IP address of the DHCP pool.
      shared_ptr<string> endIp_ {};
      // The IP address of the LAN port.
      shared_ptr<string> IP_ {};
      // The connection type of the LAN port.
      // 
      // **DHCP**: a dynamic IP address. Uses the Dynamic Host Configuration Protocol (DHCP) to dynamically assign an IP address to a connected device.
      // 
      // **STATIC**: a static IP address. Specifies a static IP address for the LAN port.
      shared_ptr<string> IPType_ {};
      // The time duration that the IP address is retained after it is assigned through DHCP. Unit: minutes.
      shared_ptr<string> lease_ {};
      // The subnet mask of the IP address of the port.
      shared_ptr<string> mask_ {};
      // The name of the port.
      shared_ptr<string> portName_ {};
      // The first IP address of the DHCP pool.
      shared_ptr<string> startIp_ {};
    };

    virtual bool empty() const override { return this->lans_ == nullptr
        && this->requestId_ == nullptr && this->taskStates_ == nullptr; };
    // lans Field Functions 
    bool hasLans() const { return this->lans_ != nullptr;};
    void deleteLans() { this->lans_ = nullptr;};
    inline const vector<DescribeSagLanListResponseBody::Lans> & getLans() const { DARABONBA_PTR_GET_CONST(lans_, vector<DescribeSagLanListResponseBody::Lans>) };
    inline vector<DescribeSagLanListResponseBody::Lans> getLans() { DARABONBA_PTR_GET(lans_, vector<DescribeSagLanListResponseBody::Lans>) };
    inline DescribeSagLanListResponseBody& setLans(const vector<DescribeSagLanListResponseBody::Lans> & lans) { DARABONBA_PTR_SET_VALUE(lans_, lans) };
    inline DescribeSagLanListResponseBody& setLans(vector<DescribeSagLanListResponseBody::Lans> && lans) { DARABONBA_PTR_SET_RVALUE(lans_, lans) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagLanListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<DescribeSagLanListResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<DescribeSagLanListResponseBody::TaskStates>) };
    inline vector<DescribeSagLanListResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<DescribeSagLanListResponseBody::TaskStates>) };
    inline DescribeSagLanListResponseBody& setTaskStates(const vector<DescribeSagLanListResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline DescribeSagLanListResponseBody& setTaskStates(vector<DescribeSagLanListResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The information about the LAN port.
    shared_ptr<vector<DescribeSagLanListResponseBody::Lans>> lans_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The state of the query task.
    shared_ptr<vector<DescribeSagLanListResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
