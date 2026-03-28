// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_TO_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_TO_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_TO_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_FROM_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_FROM_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_FROM_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDeploymentRequest() = default ;
    CreateDeploymentRequest(const CreateDeploymentRequest &) = default ;
    CreateDeploymentRequest(CreateDeploymentRequest &&) = default ;
    CreateDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentRequest() = default ;
    CreateDeploymentRequest& operator=(const CreateDeploymentRequest &) = default ;
    CreateDeploymentRequest& operator=(CreateDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContentModerationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentModerationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableInputModeration, enableInputModeration_);
        DARABONBA_PTR_TO_JSON(EnableOutputModeration, enableOutputModeration_);
        DARABONBA_PTR_TO_JSON(StreamingModerationThreshold, streamingModerationThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, ContentModerationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableInputModeration, enableInputModeration_);
        DARABONBA_PTR_FROM_JSON(EnableOutputModeration, enableOutputModeration_);
        DARABONBA_PTR_FROM_JSON(StreamingModerationThreshold, streamingModerationThreshold_);
      };
      ContentModerationConfig() = default ;
      ContentModerationConfig(const ContentModerationConfig &) = default ;
      ContentModerationConfig(ContentModerationConfig &&) = default ;
      ContentModerationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentModerationConfig() = default ;
      ContentModerationConfig& operator=(const ContentModerationConfig &) = default ;
      ContentModerationConfig& operator=(ContentModerationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableInputModeration_ == nullptr
        && this->enableOutputModeration_ == nullptr && this->streamingModerationThreshold_ == nullptr; };
      // enableInputModeration Field Functions 
      bool hasEnableInputModeration() const { return this->enableInputModeration_ != nullptr;};
      void deleteEnableInputModeration() { this->enableInputModeration_ = nullptr;};
      inline bool getEnableInputModeration() const { DARABONBA_PTR_GET_DEFAULT(enableInputModeration_, false) };
      inline ContentModerationConfig& setEnableInputModeration(bool enableInputModeration) { DARABONBA_PTR_SET_VALUE(enableInputModeration_, enableInputModeration) };


      // enableOutputModeration Field Functions 
      bool hasEnableOutputModeration() const { return this->enableOutputModeration_ != nullptr;};
      void deleteEnableOutputModeration() { this->enableOutputModeration_ = nullptr;};
      inline bool getEnableOutputModeration() const { DARABONBA_PTR_GET_DEFAULT(enableOutputModeration_, false) };
      inline ContentModerationConfig& setEnableOutputModeration(bool enableOutputModeration) { DARABONBA_PTR_SET_VALUE(enableOutputModeration_, enableOutputModeration) };


      // streamingModerationThreshold Field Functions 
      bool hasStreamingModerationThreshold() const { return this->streamingModerationThreshold_ != nullptr;};
      void deleteStreamingModerationThreshold() { this->streamingModerationThreshold_ = nullptr;};
      inline int32_t getStreamingModerationThreshold() const { DARABONBA_PTR_GET_DEFAULT(streamingModerationThreshold_, 0) };
      inline ContentModerationConfig& setStreamingModerationThreshold(int32_t streamingModerationThreshold) { DARABONBA_PTR_SET_VALUE(streamingModerationThreshold_, streamingModerationThreshold) };


    protected:
      // Whether to enable security review for input.
      shared_ptr<bool> enableInputModeration_ {};
      // Whether to enable content moderation for output.
      shared_ptr<bool> enableOutputModeration_ {};
      // The cache size for streaming output content submitted for moderation. Default value: 5.
      shared_ptr<int32_t> streamingModerationThreshold_ {};
    };

    class ChatHistoryConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatHistoryConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, ChatHistoryConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      ChatHistoryConfig() = default ;
      ChatHistoryConfig(const ChatHistoryConfig &) = default ;
      ChatHistoryConfig(ChatHistoryConfig &&) = default ;
      ChatHistoryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatHistoryConfig() = default ;
      ChatHistoryConfig& operator=(const ChatHistoryConfig &) = default ;
      ChatHistoryConfig& operator=(ChatHistoryConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionName_ == nullptr
        && this->storageType_ == nullptr; };
      // connectionName Field Functions 
      bool hasConnectionName() const { return this->connectionName_ != nullptr;};
      void deleteConnectionName() { this->connectionName_ = nullptr;};
      inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
      inline ChatHistoryConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline ChatHistoryConfig& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // Connection name. This parameter is required when the chat history storage type is RDS.
      shared_ptr<string> connectionName_ {};
      // Storage class. Valid values:  
      // * LOCAL: Chat history is stored in a local SQLite file. This option does not support multi-instance deployment.  
      // * OSS: Chat history is stored under a specific path within the service\\"s OSS workspace path.  
      // * RDS: Chat history is stored in an RDS table, and an RDS connection must be specified.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->autoApproval_ == nullptr && this->chatHistoryConfig_ == nullptr && this->contentModerationConfig_ == nullptr && this->deploymentConfig_ == nullptr && this->description_ == nullptr
        && this->enableTrace_ == nullptr && this->resourceId_ == nullptr && this->resourceSnapshotId_ == nullptr && this->resourceType_ == nullptr && this->serviceName_ == nullptr
        && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateDeploymentRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // autoApproval Field Functions 
    bool hasAutoApproval() const { return this->autoApproval_ != nullptr;};
    void deleteAutoApproval() { this->autoApproval_ = nullptr;};
    inline bool getAutoApproval() const { DARABONBA_PTR_GET_DEFAULT(autoApproval_, false) };
    inline CreateDeploymentRequest& setAutoApproval(bool autoApproval) { DARABONBA_PTR_SET_VALUE(autoApproval_, autoApproval) };


    // chatHistoryConfig Field Functions 
    bool hasChatHistoryConfig() const { return this->chatHistoryConfig_ != nullptr;};
    void deleteChatHistoryConfig() { this->chatHistoryConfig_ = nullptr;};
    inline const CreateDeploymentRequest::ChatHistoryConfig & getChatHistoryConfig() const { DARABONBA_PTR_GET_CONST(chatHistoryConfig_, CreateDeploymentRequest::ChatHistoryConfig) };
    inline CreateDeploymentRequest::ChatHistoryConfig getChatHistoryConfig() { DARABONBA_PTR_GET(chatHistoryConfig_, CreateDeploymentRequest::ChatHistoryConfig) };
    inline CreateDeploymentRequest& setChatHistoryConfig(const CreateDeploymentRequest::ChatHistoryConfig & chatHistoryConfig) { DARABONBA_PTR_SET_VALUE(chatHistoryConfig_, chatHistoryConfig) };
    inline CreateDeploymentRequest& setChatHistoryConfig(CreateDeploymentRequest::ChatHistoryConfig && chatHistoryConfig) { DARABONBA_PTR_SET_RVALUE(chatHistoryConfig_, chatHistoryConfig) };


    // contentModerationConfig Field Functions 
    bool hasContentModerationConfig() const { return this->contentModerationConfig_ != nullptr;};
    void deleteContentModerationConfig() { this->contentModerationConfig_ = nullptr;};
    inline const CreateDeploymentRequest::ContentModerationConfig & getContentModerationConfig() const { DARABONBA_PTR_GET_CONST(contentModerationConfig_, CreateDeploymentRequest::ContentModerationConfig) };
    inline CreateDeploymentRequest::ContentModerationConfig getContentModerationConfig() { DARABONBA_PTR_GET(contentModerationConfig_, CreateDeploymentRequest::ContentModerationConfig) };
    inline CreateDeploymentRequest& setContentModerationConfig(const CreateDeploymentRequest::ContentModerationConfig & contentModerationConfig) { DARABONBA_PTR_SET_VALUE(contentModerationConfig_, contentModerationConfig) };
    inline CreateDeploymentRequest& setContentModerationConfig(CreateDeploymentRequest::ContentModerationConfig && contentModerationConfig) { DARABONBA_PTR_SET_RVALUE(contentModerationConfig_, contentModerationConfig) };


    // deploymentConfig Field Functions 
    bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
    void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
    inline string getDeploymentConfig() const { DARABONBA_PTR_GET_DEFAULT(deploymentConfig_, "") };
    inline CreateDeploymentRequest& setDeploymentConfig(string deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDeploymentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableTrace Field Functions 
    bool hasEnableTrace() const { return this->enableTrace_ != nullptr;};
    void deleteEnableTrace() { this->enableTrace_ = nullptr;};
    inline bool getEnableTrace() const { DARABONBA_PTR_GET_DEFAULT(enableTrace_, false) };
    inline CreateDeploymentRequest& setEnableTrace(bool enableTrace) { DARABONBA_PTR_SET_VALUE(enableTrace_, enableTrace) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateDeploymentRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSnapshotId Field Functions 
    bool hasResourceSnapshotId() const { return this->resourceSnapshotId_ != nullptr;};
    void deleteResourceSnapshotId() { this->resourceSnapshotId_ = nullptr;};
    inline string getResourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(resourceSnapshotId_, "") };
    inline CreateDeploymentRequest& setResourceSnapshotId(string resourceSnapshotId) { DARABONBA_PTR_SET_VALUE(resourceSnapshotId_, resourceSnapshotId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateDeploymentRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateDeploymentRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline CreateDeploymentRequest& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDeploymentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Workspace visibility. Valid values:  
    // - PRIVATE: The service is visible only to you and administrators within this workspace.  
    // - PUBLIC: The service is visible to all users within this workspace.
    shared_ptr<string> accessibility_ {};
    // Indicates whether to automatically skip the deployment confirmation step.
    shared_ptr<bool> autoApproval_ {};
    // Chat history configuration.
    shared_ptr<CreateDeploymentRequest::ChatHistoryConfig> chatHistoryConfig_ {};
    // Content moderation configuration.
    shared_ptr<CreateDeploymentRequest::ContentModerationConfig> contentModerationConfig_ {};
    // Deployment configuration. For details, see [Deployment Configuration](https://help.aliyun.com/zh/pai/user-guide/parameters-of-model-services) in PAI-EAS.
    shared_ptr<string> deploymentConfig_ {};
    // Service description.
    shared_ptr<string> description_ {};
    // Indicates whether to enable Tracing Analysis.
    shared_ptr<bool> enableTrace_ {};
    // The ID of the resource to deploy.
    shared_ptr<string> resourceId_ {};
    // The snapshot ID of the resource to deploy. If this parameter is provided, the system deploys directly based on this snapshot. If this parameter is not provided, the system creates a new snapshot of the resource and then executes the deployment.
    shared_ptr<string> resourceSnapshotId_ {};
    // The resource type to deploy. Valid values:
    // * Flow: A pipeline project
    // * Code: A code project
    shared_ptr<string> resourceType_ {};
    // Service name. Format requirements:
    // * Supports lowercase letters, digits, and underscores
    // * Must start with a letter
    // * Length must be 1 to 45 characters
    shared_ptr<string> serviceName_ {};
    // The OSS working directory for the service. It is used to store the service\\"s runtime logs, conversation history, and other data.
    shared_ptr<string> workDir_ {};
    // Workspace ID. For information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
