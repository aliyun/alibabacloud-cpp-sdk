// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateStreamBatchJobMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamBatchJobMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(StreamBatchJobMappingCreateCommand, streamBatchJobMappingCreateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamBatchJobMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(StreamBatchJobMappingCreateCommand, streamBatchJobMappingCreateCommand_);
    };
    CreateStreamBatchJobMappingRequest() = default ;
    CreateStreamBatchJobMappingRequest(const CreateStreamBatchJobMappingRequest &) = default ;
    CreateStreamBatchJobMappingRequest(CreateStreamBatchJobMappingRequest &&) = default ;
    CreateStreamBatchJobMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamBatchJobMappingRequest() = default ;
    CreateStreamBatchJobMappingRequest& operator=(const CreateStreamBatchJobMappingRequest &) = default ;
    CreateStreamBatchJobMappingRequest& operator=(CreateStreamBatchJobMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamBatchJobMappingCreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamBatchJobMappingCreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(VvpClusterType, vvpClusterType_);
      };
      friend void from_json(const Darabonba::Json& j, StreamBatchJobMappingCreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(VvpClusterType, vvpClusterType_);
      };
      StreamBatchJobMappingCreateCommand() = default ;
      StreamBatchJobMappingCreateCommand(const StreamBatchJobMappingCreateCommand &) = default ;
      StreamBatchJobMappingCreateCommand(StreamBatchJobMappingCreateCommand &&) = default ;
      StreamBatchJobMappingCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamBatchJobMappingCreateCommand() = default ;
      StreamBatchJobMappingCreateCommand& operator=(const StreamBatchJobMappingCreateCommand &) = default ;
      StreamBatchJobMappingCreateCommand& operator=(StreamBatchJobMappingCreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->description_ == nullptr && this->directory_ == nullptr && this->engineVersion_ == nullptr && this->env_ == nullptr && this->fileName_ == nullptr
        && this->fileType_ == nullptr && this->projectId_ == nullptr && this->queueName_ == nullptr && this->vvpClusterType_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline StreamBatchJobMappingCreateCommand& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StreamBatchJobMappingCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline StreamBatchJobMappingCreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline StreamBatchJobMappingCreateCommand& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline StreamBatchJobMappingCreateCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline StreamBatchJobMappingCreateCommand& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline StreamBatchJobMappingCreateCommand& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline StreamBatchJobMappingCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline StreamBatchJobMappingCreateCommand& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // vvpClusterType Field Functions 
      bool hasVvpClusterType() const { return this->vvpClusterType_ != nullptr;};
      void deleteVvpClusterType() { this->vvpClusterType_ = nullptr;};
      inline string getVvpClusterType() const { DARABONBA_PTR_GET_DEFAULT(vvpClusterType_, "") };
      inline StreamBatchJobMappingCreateCommand& setVvpClusterType(string vvpClusterType) { DARABONBA_PTR_SET_VALUE(vvpClusterType_, vvpClusterType) };


    protected:
      // This parameter is required.
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> directory_ {};
      // This parameter is required.
      shared_ptr<string> engineVersion_ {};
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<string> fileName_ {};
      // This parameter is required.
      shared_ptr<string> fileType_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<string> queueName_ {};
      // This parameter is required.
      shared_ptr<string> vvpClusterType_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->streamBatchJobMappingCreateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStreamBatchJobMappingRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // streamBatchJobMappingCreateCommand Field Functions 
    bool hasStreamBatchJobMappingCreateCommand() const { return this->streamBatchJobMappingCreateCommand_ != nullptr;};
    void deleteStreamBatchJobMappingCreateCommand() { this->streamBatchJobMappingCreateCommand_ = nullptr;};
    inline const CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand & getStreamBatchJobMappingCreateCommand() const { DARABONBA_PTR_GET_CONST(streamBatchJobMappingCreateCommand_, CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand) };
    inline CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand getStreamBatchJobMappingCreateCommand() { DARABONBA_PTR_GET(streamBatchJobMappingCreateCommand_, CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand) };
    inline CreateStreamBatchJobMappingRequest& setStreamBatchJobMappingCreateCommand(const CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand & streamBatchJobMappingCreateCommand) { DARABONBA_PTR_SET_VALUE(streamBatchJobMappingCreateCommand_, streamBatchJobMappingCreateCommand) };
    inline CreateStreamBatchJobMappingRequest& setStreamBatchJobMappingCreateCommand(CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand && streamBatchJobMappingCreateCommand) { DARABONBA_PTR_SET_RVALUE(streamBatchJobMappingCreateCommand_, streamBatchJobMappingCreateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<CreateStreamBatchJobMappingRequest::StreamBatchJobMappingCreateCommand> streamBatchJobMappingCreateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
