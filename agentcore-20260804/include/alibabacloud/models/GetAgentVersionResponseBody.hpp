// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAgentVersionResponseBody() = default ;
    GetAgentVersionResponseBody(const GetAgentVersionResponseBody &) = default ;
    GetAgentVersionResponseBody(GetAgentVersionResponseBody &&) = default ;
    GetAgentVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentVersionResponseBody() = default ;
    GetAgentVersionResponseBody& operator=(const GetAgentVersionResponseBody &) = default ;
    GetAgentVersionResponseBody& operator=(GetAgentVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(agentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(artifactStatus, artifactStatus_);
        DARABONBA_ANY_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(targetSpecVersion, targetSpecVersion_);
        DARABONBA_PTR_TO_JSON(versionName, versionName_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(agentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(artifactStatus, artifactStatus_);
        DARABONBA_ANY_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(targetSpecVersion, targetSpecVersion_);
        DARABONBA_PTR_FROM_JSON(versionName, versionName_);
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
        && this->agentVersion_ == nullptr && this->artifactStatus_ == nullptr && this->configuration_ == nullptr && this->createdAt_ == nullptr && this->createdBy_ == nullptr
        && this->description_ == nullptr && this->targetSpecVersion_ == nullptr && this->versionName_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline Data& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // artifactStatus Field Functions 
      bool hasArtifactStatus() const { return this->artifactStatus_ != nullptr;};
      void deleteArtifactStatus() { this->artifactStatus_ = nullptr;};
      inline string getArtifactStatus() const { DARABONBA_PTR_GET_DEFAULT(artifactStatus_, "") };
      inline Data& setArtifactStatus(string artifactStatus) { DARABONBA_PTR_SET_VALUE(artifactStatus_, artifactStatus) };


      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline       const Darabonba::Json & getConfiguration() const { DARABONBA_GET(configuration_) };
      Darabonba::Json & getConfiguration() { DARABONBA_GET(configuration_) };
      inline Data& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Darabonba::Json && configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Data& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // targetSpecVersion Field Functions 
      bool hasTargetSpecVersion() const { return this->targetSpecVersion_ != nullptr;};
      void deleteTargetSpecVersion() { this->targetSpecVersion_ = nullptr;};
      inline int64_t getTargetSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(targetSpecVersion_, 0L) };
      inline Data& setTargetSpecVersion(int64_t targetSpecVersion) { DARABONBA_PTR_SET_VALUE(targetSpecVersion_, targetSpecVersion) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Data& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ID of the managed or custom agent to which the version belongs.
      shared_ptr<string> agentId_ {};
      // The system-generated version number that increments for the agent, such as v1 and v2. This is used when querying or deleting versions, and when server endpoints reference the version.
      shared_ptr<string> agentVersion_ {};
      // Indicates only whether the version template and artifact archive are complete, and does not represent the deployment or running status. Valid values: READY indicates that the archive is complete. INVALID indicates that the archive is missing or inconsistent.
      shared_ptr<string> artifactStatus_ {};
      // For managed agents, the structure is consistent with the data structure of GetManagedAgent. For custom agents, the structure is consistent with the data structure of GetCustomAgent. The data masking rules are the same.
      Darabonba::Json configuration_ {};
      // The time when the version was saved, in ISO 8601 UTC format.
      shared_ptr<string> createdAt_ {};
      // The UID of the Alibaba Cloud account of the caller who saved the version. If the API is called by a RAM user, this is the UID of the Alibaba Cloud account to which the RAM user belongs.
      shared_ptr<string> createdBy_ {};
      // The version description provided when the version was saved. It can be up to 1,024 characters in length. If no description was provided when the version was saved, this field is empty.
      shared_ptr<string> description_ {};
      // The effective release sequence number of the agent when the version was saved, which is the effectiveSpecVersion at that time. This value does not change after the version is saved.
      shared_ptr<int64_t> targetSpecVersion_ {};
      // The display name specified by the user when the version was saved. For earlier saved versions where no name was recorded, the agentVersion is returned.
      shared_ptr<string> versionName_ {};
      // The ID of the AgentCore workspace where the agent that owns this version resides.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentVersionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentVersionResponseBody::Data) };
    inline GetAgentVersionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentVersionResponseBody::Data) };
    inline GetAgentVersionResponseBody& setData(const GetAgentVersionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentVersionResponseBody& setData(GetAgentVersionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAgentVersionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgentVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value is SUCCESS if the request is successful, or an error code if the request fails.
    shared_ptr<string> code_ {};
    // The details of the fixed agent version. The configuration field contains the agent configuration at the time the version was saved.
    shared_ptr<GetAgentVersionResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message. The value is success if the request is successful, or an error message if the request fails.
    shared_ptr<string> message_ {};
    // The request ID, which is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
