// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteCustomAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteCustomAgentResponseBody() = default ;
    DeleteCustomAgentResponseBody(const DeleteCustomAgentResponseBody &) = default ;
    DeleteCustomAgentResponseBody(DeleteCustomAgentResponseBody &&) = default ;
    DeleteCustomAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomAgentResponseBody() = default ;
    DeleteCustomAgentResponseBody& operator=(const DeleteCustomAgentResponseBody &) = default ;
    DeleteCustomAgentResponseBody& operator=(DeleteCustomAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(createMode, createMode_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(deployType, deployType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(createMode, createMode_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(deployType, deployType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createMode_ == nullptr && this->createdAt_ == nullptr && this->deployType_ == nullptr && this->description_ == nullptr && this->latestSpecVersion_ == nullptr
        && this->name_ == nullptr && this->runtime_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Data& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Data& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // latestSpecVersion Field Functions 
      bool hasLatestSpecVersion() const { return this->latestSpecVersion_ != nullptr;};
      void deleteLatestSpecVersion() { this->latestSpecVersion_ = nullptr;};
      inline int64_t getLatestSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(latestSpecVersion_, 0L) };
      inline Data& setLatestSpecVersion(int64_t latestSpecVersion) { DARABONBA_PTR_SET_VALUE(latestSpecVersion_, latestSpecVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline Data& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The unique identifier of the custom agent. You can retrieve it from the response of CreateCustomAgent or ListCustomAgents.
      shared_ptr<string> agentId_ {};
      // The creation method of the agent. The value is CUSTOM for custom agents.
      shared_ptr<string> createMode_ {};
      // The time when the agent was created. The time is in ISO 8601 format. A trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> createdAt_ {};
      // The deployment method of the agent. Custom agents are deployed and managed by the platform, and the value is MANAGED.
      shared_ptr<string> deployType_ {};
      // The description of the agent\\"s purpose.
      shared_ptr<string> description_ {};
      // The latest configuration version number. Updates with the same configuration may retain the original version number. This field does not indicate that the configuration has taken effect.
      shared_ptr<int64_t> latestSpecVersion_ {};
      // The name of the custom agent.
      shared_ptr<string> name_ {};
      // The compute specifications of the agent. Valid values: INTERACTIVE, STANDARD, and HEAVY.
      shared_ptr<string> runtime_ {};
      // The overall status of the agent. Valid values: Creating: The agent is being created. Running: The agent is running. Failed: The agent failed. Updating: The agent is being updated. Deleting: The agent is being deleted. Deleted: The agent is deleted. To query the execution progress of the latest configuration, call GetCustomAgent.
      shared_ptr<string> status_ {};
      // The time when the agent was last updated. The time is in ISO 8601 format. A trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> updatedAt_ {};
      // The ID of the workspace to which the custom agent belongs.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteCustomAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteCustomAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteCustomAgentResponseBody::Data) };
    inline DeleteCustomAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteCustomAgentResponseBody::Data) };
    inline DeleteCustomAgentResponseBody& setData(const DeleteCustomAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteCustomAgentResponseBody& setData(DeleteCustomAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteCustomAgentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteCustomAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCustomAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteCustomAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code of the request. The value is SUCCESS if the request is successful.
    shared_ptr<string> code_ {};
    // The summary of the custom agent whose deletion is accepted. The runtime resources are subsequently cleaned up in the background.
    shared_ptr<DeleteCustomAgentResponseBody::Data> data_ {};
    // The HTTP status code of the request. The value is 200 if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The processing result message of the request. The value is success if the request is successful.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. You can use this ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. A value of true indicates that the request was processed successfully. A successful creation, update, or deletion does not mean that the background operation is complete.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
