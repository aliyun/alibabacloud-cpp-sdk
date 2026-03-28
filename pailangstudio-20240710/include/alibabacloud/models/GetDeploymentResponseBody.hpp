// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetDeploymentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_TO_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_TO_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(DeploymentStages, deploymentStages_);
      DARABONBA_PTR_TO_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_FROM_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_FROM_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(DeploymentStages, deploymentStages_);
      DARABONBA_PTR_FROM_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetDeploymentResponseBody() = default ;
    GetDeploymentResponseBody(const GetDeploymentResponseBody &) = default ;
    GetDeploymentResponseBody(GetDeploymentResponseBody &&) = default ;
    GetDeploymentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentResponseBody() = default ;
    GetDeploymentResponseBody& operator=(const GetDeploymentResponseBody &) = default ;
    GetDeploymentResponseBody& operator=(GetDeploymentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeploymentStages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentStages& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_TO_JSON(Stage, stage_);
        DARABONBA_PTR_TO_JSON(StageInfo, stageInfo_);
        DARABONBA_PTR_TO_JSON(StageName, stageName_);
        DARABONBA_PTR_TO_JSON(StageStatus, stageStatus_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentStages& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_FROM_JSON(Stage, stage_);
        DARABONBA_PTR_FROM_JSON(StageInfo, stageInfo_);
        DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        DARABONBA_PTR_FROM_JSON(StageStatus, stageStatus_);
      };
      DeploymentStages() = default ;
      DeploymentStages(const DeploymentStages &) = default ;
      DeploymentStages(DeploymentStages &&) = default ;
      DeploymentStages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentStages() = default ;
      DeploymentStages& operator=(const DeploymentStages &) = default ;
      DeploymentStages& operator=(DeploymentStages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->errorMessage_ == nullptr && this->gmtEndTime_ == nullptr && this->gmtStartTime_ == nullptr && this->stage_ == nullptr && this->stageInfo_ == nullptr
        && this->stageName_ == nullptr && this->stageStatus_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DeploymentStages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DeploymentStages& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // gmtEndTime Field Functions 
      bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
      void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
      inline string getGmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
      inline DeploymentStages& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


      // gmtStartTime Field Functions 
      bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
      void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
      inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
      inline DeploymentStages& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline int32_t getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, 0) };
      inline DeploymentStages& setStage(int32_t stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // stageInfo Field Functions 
      bool hasStageInfo() const { return this->stageInfo_ != nullptr;};
      void deleteStageInfo() { this->stageInfo_ = nullptr;};
      inline string getStageInfo() const { DARABONBA_PTR_GET_DEFAULT(stageInfo_, "") };
      inline DeploymentStages& setStageInfo(string stageInfo) { DARABONBA_PTR_SET_VALUE(stageInfo_, stageInfo) };


      // stageName Field Functions 
      bool hasStageName() const { return this->stageName_ != nullptr;};
      void deleteStageName() { this->stageName_ = nullptr;};
      inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
      inline DeploymentStages& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      // stageStatus Field Functions 
      bool hasStageStatus() const { return this->stageStatus_ != nullptr;};
      void deleteStageStatus() { this->stageStatus_ = nullptr;};
      inline string getStageStatus() const { DARABONBA_PTR_GET_DEFAULT(stageStatus_, "") };
      inline DeploymentStages& setStageStatus(string stageStatus) { DARABONBA_PTR_SET_VALUE(stageStatus_, stageStatus) };


    protected:
      // Deployment stage description.
      shared_ptr<string> description_ {};
      // Error message.
      shared_ptr<string> errorMessage_ {};
      // End time.
      shared_ptr<string> gmtEndTime_ {};
      // Start Time.
      shared_ptr<string> gmtStartTime_ {};
      // Deployment stage.
      shared_ptr<int32_t> stage_ {};
      // Deployment stage information.
      shared_ptr<string> stageInfo_ {};
      // Deployment stage name.
      shared_ptr<string> stageName_ {};
      // Deployment stage status. Valid values:  
      // * NotStarted: Not started.  
      // * WaitForConfirm: Waiting for confirmation.  
      // * Waiting: Waiting.  
      // * Creating: Creating.  
      // * Running: Running.  
      // * Succeed: Succeeded.  
      // * Failed: Failed.  
      // * Canceled: Canceled.
      shared_ptr<string> stageStatus_ {};
    };

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
      // Indicates whether to enable security review for input.
      shared_ptr<bool> enableInputModeration_ {};
      // Indicates whether to enable content moderation for output.
      shared_ptr<bool> enableOutputModeration_ {};
      // Cache size for streaming output content submitted for moderation. The default value is 5.
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
      // The connection name. This parameter is required when the chat history storage type is RDS.
      shared_ptr<string> connectionName_ {};
      // The storage class. Valid values:  
      // * LOCAL: Chat history is stored in a local SQLite file. This option does not support multi-instance deployment.  
      // * OSS: Chat history is stored in a specific path under the service OSS workspace path.  
      // * RDS: Chat history is stored in an RDS Table, and an RDS connection must be specified.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->autoApproval_ == nullptr && this->chatHistoryConfig_ == nullptr && this->contentModerationConfig_ == nullptr && this->creator_ == nullptr && this->deploymentConfig_ == nullptr
        && this->deploymentId_ == nullptr && this->deploymentStages_ == nullptr && this->deploymentStatus_ == nullptr && this->description_ == nullptr && this->enableTrace_ == nullptr
        && this->errorMessage_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->operationType_ == nullptr && this->requestId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceSnapshotId_ == nullptr && this->resourceType_ == nullptr && this->serviceName_ == nullptr && this->workDir_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetDeploymentResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // autoApproval Field Functions 
    bool hasAutoApproval() const { return this->autoApproval_ != nullptr;};
    void deleteAutoApproval() { this->autoApproval_ = nullptr;};
    inline bool getAutoApproval() const { DARABONBA_PTR_GET_DEFAULT(autoApproval_, false) };
    inline GetDeploymentResponseBody& setAutoApproval(bool autoApproval) { DARABONBA_PTR_SET_VALUE(autoApproval_, autoApproval) };


    // chatHistoryConfig Field Functions 
    bool hasChatHistoryConfig() const { return this->chatHistoryConfig_ != nullptr;};
    void deleteChatHistoryConfig() { this->chatHistoryConfig_ = nullptr;};
    inline const GetDeploymentResponseBody::ChatHistoryConfig & getChatHistoryConfig() const { DARABONBA_PTR_GET_CONST(chatHistoryConfig_, GetDeploymentResponseBody::ChatHistoryConfig) };
    inline GetDeploymentResponseBody::ChatHistoryConfig getChatHistoryConfig() { DARABONBA_PTR_GET(chatHistoryConfig_, GetDeploymentResponseBody::ChatHistoryConfig) };
    inline GetDeploymentResponseBody& setChatHistoryConfig(const GetDeploymentResponseBody::ChatHistoryConfig & chatHistoryConfig) { DARABONBA_PTR_SET_VALUE(chatHistoryConfig_, chatHistoryConfig) };
    inline GetDeploymentResponseBody& setChatHistoryConfig(GetDeploymentResponseBody::ChatHistoryConfig && chatHistoryConfig) { DARABONBA_PTR_SET_RVALUE(chatHistoryConfig_, chatHistoryConfig) };


    // contentModerationConfig Field Functions 
    bool hasContentModerationConfig() const { return this->contentModerationConfig_ != nullptr;};
    void deleteContentModerationConfig() { this->contentModerationConfig_ = nullptr;};
    inline const GetDeploymentResponseBody::ContentModerationConfig & getContentModerationConfig() const { DARABONBA_PTR_GET_CONST(contentModerationConfig_, GetDeploymentResponseBody::ContentModerationConfig) };
    inline GetDeploymentResponseBody::ContentModerationConfig getContentModerationConfig() { DARABONBA_PTR_GET(contentModerationConfig_, GetDeploymentResponseBody::ContentModerationConfig) };
    inline GetDeploymentResponseBody& setContentModerationConfig(const GetDeploymentResponseBody::ContentModerationConfig & contentModerationConfig) { DARABONBA_PTR_SET_VALUE(contentModerationConfig_, contentModerationConfig) };
    inline GetDeploymentResponseBody& setContentModerationConfig(GetDeploymentResponseBody::ContentModerationConfig && contentModerationConfig) { DARABONBA_PTR_SET_RVALUE(contentModerationConfig_, contentModerationConfig) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetDeploymentResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deploymentConfig Field Functions 
    bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
    void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
    inline string getDeploymentConfig() const { DARABONBA_PTR_GET_DEFAULT(deploymentConfig_, "") };
    inline GetDeploymentResponseBody& setDeploymentConfig(string deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline GetDeploymentResponseBody& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentStages Field Functions 
    bool hasDeploymentStages() const { return this->deploymentStages_ != nullptr;};
    void deleteDeploymentStages() { this->deploymentStages_ = nullptr;};
    inline const vector<GetDeploymentResponseBody::DeploymentStages> & getDeploymentStages() const { DARABONBA_PTR_GET_CONST(deploymentStages_, vector<GetDeploymentResponseBody::DeploymentStages>) };
    inline vector<GetDeploymentResponseBody::DeploymentStages> getDeploymentStages() { DARABONBA_PTR_GET(deploymentStages_, vector<GetDeploymentResponseBody::DeploymentStages>) };
    inline GetDeploymentResponseBody& setDeploymentStages(const vector<GetDeploymentResponseBody::DeploymentStages> & deploymentStages) { DARABONBA_PTR_SET_VALUE(deploymentStages_, deploymentStages) };
    inline GetDeploymentResponseBody& setDeploymentStages(vector<GetDeploymentResponseBody::DeploymentStages> && deploymentStages) { DARABONBA_PTR_SET_RVALUE(deploymentStages_, deploymentStages) };


    // deploymentStatus Field Functions 
    bool hasDeploymentStatus() const { return this->deploymentStatus_ != nullptr;};
    void deleteDeploymentStatus() { this->deploymentStatus_ = nullptr;};
    inline string getDeploymentStatus() const { DARABONBA_PTR_GET_DEFAULT(deploymentStatus_, "") };
    inline GetDeploymentResponseBody& setDeploymentStatus(string deploymentStatus) { DARABONBA_PTR_SET_VALUE(deploymentStatus_, deploymentStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDeploymentResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableTrace Field Functions 
    bool hasEnableTrace() const { return this->enableTrace_ != nullptr;};
    void deleteEnableTrace() { this->enableTrace_ = nullptr;};
    inline bool getEnableTrace() const { DARABONBA_PTR_GET_DEFAULT(enableTrace_, false) };
    inline GetDeploymentResponseBody& setEnableTrace(bool enableTrace) { DARABONBA_PTR_SET_VALUE(enableTrace_, enableTrace) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDeploymentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetDeploymentResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetDeploymentResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline GetDeploymentResponseBody& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeploymentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetDeploymentResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSnapshotId Field Functions 
    bool hasResourceSnapshotId() const { return this->resourceSnapshotId_ != nullptr;};
    void deleteResourceSnapshotId() { this->resourceSnapshotId_ = nullptr;};
    inline string getResourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(resourceSnapshotId_, "") };
    inline GetDeploymentResponseBody& setResourceSnapshotId(string resourceSnapshotId) { DARABONBA_PTR_SET_VALUE(resourceSnapshotId_, resourceSnapshotId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetDeploymentResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetDeploymentResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline GetDeploymentResponseBody& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDeploymentResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The workspace visibility. Valid values:  
    // - PRIVATE: The resource is visible only to you and administrators in this workspace.  
    // - PUBLIC: The resource is visible to all users in this workspace.
    shared_ptr<string> accessibility_ {};
    // Indicates whether deployment confirmation is automatically skipped.
    shared_ptr<bool> autoApproval_ {};
    // Chat history configuration.
    shared_ptr<GetDeploymentResponseBody::ChatHistoryConfig> chatHistoryConfig_ {};
    // Content moderation configuration.
    shared_ptr<GetDeploymentResponseBody::ContentModerationConfig> contentModerationConfig_ {};
    // Creator ID.
    shared_ptr<string> creator_ {};
    // Deployment configuration. For details, see [Deployment Configuration](https://help.aliyun.com/zh/pai/user-guide/parameters-of-model-services) in PAI-EAS documentation.
    shared_ptr<string> deploymentConfig_ {};
    // The ID of the deployment job.
    shared_ptr<string> deploymentId_ {};
    // Stage information of the deployment.
    shared_ptr<vector<GetDeploymentResponseBody::DeploymentStages>> deploymentStages_ {};
    // Task Status. Valid values:  
    // * Creating: Creating.  
    // * Failed: Deployment failed.  
    // * Stopping: Stopping.  
    // * Waiting: Waiting.  
    // * Starting: Starting.  
    // * Running: Running.  
    // * Pending: Pending.  
    // * WaitForConfirm: Waiting for confirmation.  
    // * Canceled: Canceled.  
    // * Succeed: Succeeded.
    shared_ptr<string> deploymentStatus_ {};
    // The service description.
    shared_ptr<string> description_ {};
    // Indicates whether Tracing Analysis is enabled.
    shared_ptr<bool> enableTrace_ {};
    // Error message.
    shared_ptr<string> errorMessage_ {};
    // Creation Time.
    shared_ptr<string> gmtCreateTime_ {};
    // Updated At.
    shared_ptr<string> gmtModifiedTime_ {};
    // Operation Type. Valid values:  
    // * Create: Create a new service.  
    // * Update: Update an existing service.
    shared_ptr<string> operationType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource to be deployed.
    shared_ptr<string> resourceId_ {};
    // The snapshot ID of the resource to be deployed. If this parameter is provided, the system deploys directly based on this snapshot. If not provided, the system creates a new snapshot of the resource before deployment.
    shared_ptr<string> resourceSnapshotId_ {};
    // The resource type to be deployed. Valid values:  
    // * Flow: A pipeline project  
    // * Code: A Code project
    shared_ptr<string> resourceType_ {};
    // Service Name. Format requirements:  
    // * Supports lowercase letters, digits, and underscores.  
    // * Must start with a letter.  
    // * Length must be 1–45 characters.
    shared_ptr<string> serviceName_ {};
    // The OSS working directory for the service. It stores runtime logs, conversation history, and other data.
    shared_ptr<string> workDir_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
