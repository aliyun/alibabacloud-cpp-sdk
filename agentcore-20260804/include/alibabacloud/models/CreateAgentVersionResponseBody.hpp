// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateAgentVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateAgentVersionResponseBody() = default ;
    CreateAgentVersionResponseBody(const CreateAgentVersionResponseBody &) = default ;
    CreateAgentVersionResponseBody(CreateAgentVersionResponseBody &&) = default ;
    CreateAgentVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentVersionResponseBody() = default ;
    CreateAgentVersionResponseBody& operator=(const CreateAgentVersionResponseBody &) = default ;
    CreateAgentVersionResponseBody& operator=(CreateAgentVersionResponseBody &&) = default ;
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
      // 版本所属的托管智能体或自定义智能体 ID。
      shared_ptr<string> agentId_ {};
      // 系统按 Agent 递增生成的版本号，例如 v1、v2。查询、删除版本及服务端点引用版本时使用。
      shared_ptr<string> agentVersion_ {};
      // 仅表示版本模板与制品归档是否完整，不代表部署或运行状态。READY 为完整，INVALID 为归档缺失或不一致。
      shared_ptr<string> artifactStatus_ {};
      // 托管智能体与 GetManagedAgent 的 data 结构一致，自定义智能体与 GetCustomAgent 的 data 结构一致，脱敏规则相同。
      Darabonba::Json configuration_ {};
      // 版本保存的时间，采用 ISO 8601 UTC 格式。
      shared_ptr<string> createdAt_ {};
      // 保存该版本的调用者阿里云账号 UID；RAM 用户调用时为其所属阿里云主账号 UID。
      shared_ptr<string> createdBy_ {};
      // 保存版本时填写的版本描述，最多 1024 个字符；保存时未填写则为空。
      shared_ptr<string> description_ {};
      // 保存版本时 Agent 已生效的发布流水号，即当时的 effectiveSpecVersion。版本保存后该值不再变化。
      shared_ptr<int64_t> targetSpecVersion_ {};
      // 保存版本时用户指定的展示名称。早期保存且未记录名称的版本返回 agentVersion。
      shared_ptr<string> versionName_ {};
      // 版本所属智能体所在的 AgentCore 工作空间 ID。
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateAgentVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAgentVersionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAgentVersionResponseBody::Data) };
    inline CreateAgentVersionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAgentVersionResponseBody::Data) };
    inline CreateAgentVersionResponseBody& setData(const CreateAgentVersionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAgentVersionResponseBody& setData(CreateAgentVersionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateAgentVersionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAgentVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAgentVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 业务状态码，请求成功时为 SUCCESS，失败时为错误码。
    shared_ptr<string> code_ {};
    // 已保存的智能体固定版本详情；重复提交命中已有版本时返回该已有版本。
    shared_ptr<CreateAgentVersionResponseBody::Data> data_ {};
    // HTTP 状态码。
    shared_ptr<int32_t> httpStatusCode_ {};
    // 响应消息，请求成功时为 success，失败时为错误信息。
    shared_ptr<string> message_ {};
    // 请求 ID，用于定位和排查请求。
    shared_ptr<string> requestId_ {};
    // 请求是否成功。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
