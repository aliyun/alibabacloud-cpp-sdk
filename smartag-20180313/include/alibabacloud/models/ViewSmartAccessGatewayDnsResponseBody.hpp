// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYDNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VIEWSMARTACCESSGATEWAYDNSRESPONSEBODY_HPP_
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
  class ViewSmartAccessGatewayDnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewSmartAccessGatewayDnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_TO_JSON(TaskStates, taskStates_);
    };
    friend void from_json(const Darabonba::Json& j, ViewSmartAccessGatewayDnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_FROM_JSON(TaskStates, taskStates_);
    };
    ViewSmartAccessGatewayDnsResponseBody() = default ;
    ViewSmartAccessGatewayDnsResponseBody(const ViewSmartAccessGatewayDnsResponseBody &) = default ;
    ViewSmartAccessGatewayDnsResponseBody(ViewSmartAccessGatewayDnsResponseBody &&) = default ;
    ViewSmartAccessGatewayDnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewSmartAccessGatewayDnsResponseBody() = default ;
    ViewSmartAccessGatewayDnsResponseBody& operator=(const ViewSmartAccessGatewayDnsResponseBody &) = default ;
    ViewSmartAccessGatewayDnsResponseBody& operator=(ViewSmartAccessGatewayDnsResponseBody &&) = default ;
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
      // 
      // The time is a UNIX timestamp that indicates the number of seconds elapsed since 00:00:00 UTC on January 1, 1970.
      shared_ptr<string> createTime_ {};
      // The error code. A value of 200 indicates that the query task is successful.
      shared_ptr<string> errorCode_ {};
      // The error message. A value of Successful indicates that the query task is successful.
      shared_ptr<string> errorMessage_ {};
      // The status of the asynchronous task. Valid values:
      // 
      // - **Initialized**: The query task is initialized.
      // - **Offline**: The Smart Access Gateway device is offline and the query task is not delivered. The task will be delivered after the device goes online.
      // - **Succeed**: The query task is delivered successfully.
      // - **Processing**: The query task is being delivered.
      // - **VersionNotSupport**: The current version of the Smart Access Gateway device does not support this operation.
      // - **BuildRequestError**: The management and control system does not support this operation.
      // - **HardwareError**: The query task fails to be delivered due to device errors.
      // - **TaskNotExist**: The query task does not exist.
      // - **OfflineNotConfiged**: The Smart Access Gateway device is offline and the query task is not delivered. The task will not be delivered after the device goes online.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->masterDns_ == nullptr
        && this->requestId_ == nullptr && this->slaveDns_ == nullptr && this->taskStates_ == nullptr; };
    // masterDns Field Functions 
    bool hasMasterDns() const { return this->masterDns_ != nullptr;};
    void deleteMasterDns() { this->masterDns_ = nullptr;};
    inline string getMasterDns() const { DARABONBA_PTR_GET_DEFAULT(masterDns_, "") };
    inline ViewSmartAccessGatewayDnsResponseBody& setMasterDns(string masterDns) { DARABONBA_PTR_SET_VALUE(masterDns_, masterDns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ViewSmartAccessGatewayDnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slaveDns Field Functions 
    bool hasSlaveDns() const { return this->slaveDns_ != nullptr;};
    void deleteSlaveDns() { this->slaveDns_ = nullptr;};
    inline string getSlaveDns() const { DARABONBA_PTR_GET_DEFAULT(slaveDns_, "") };
    inline ViewSmartAccessGatewayDnsResponseBody& setSlaveDns(string slaveDns) { DARABONBA_PTR_SET_VALUE(slaveDns_, slaveDns) };


    // taskStates Field Functions 
    bool hasTaskStates() const { return this->taskStates_ != nullptr;};
    void deleteTaskStates() { this->taskStates_ = nullptr;};
    inline const vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates> & getTaskStates() const { DARABONBA_PTR_GET_CONST(taskStates_, vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates>) };
    inline vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates> getTaskStates() { DARABONBA_PTR_GET(taskStates_, vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates>) };
    inline ViewSmartAccessGatewayDnsResponseBody& setTaskStates(const vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates> & taskStates) { DARABONBA_PTR_SET_VALUE(taskStates_, taskStates) };
    inline ViewSmartAccessGatewayDnsResponseBody& setTaskStates(vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates> && taskStates) { DARABONBA_PTR_SET_RVALUE(taskStates_, taskStates) };


  protected:
    // The IP address of the primary DNS server.
    shared_ptr<string> masterDns_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The IP address of the secondary DNS server.
    shared_ptr<string> slaveDns_ {};
    // The status of the query task.
    shared_ptr<vector<ViewSmartAccessGatewayDnsResponseBody::TaskStates>> taskStates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
