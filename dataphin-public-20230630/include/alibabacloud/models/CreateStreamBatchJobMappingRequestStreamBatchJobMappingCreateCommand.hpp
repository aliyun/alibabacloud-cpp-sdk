// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGREQUESTSTREAMBATCHJOBMAPPINGCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGREQUESTSTREAMBATCHJOBMAPPINGCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& obj) { 
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
    CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand() = default ;
    CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand(const CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand &) = default ;
    CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand(CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand &&) = default ;
    CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand() = default ;
    CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& operator=(const CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand &) = default ;
    CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& operator=(CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->description_ != nullptr && this->directory_ != nullptr && this->engineVersion_ != nullptr && this->env_ != nullptr && this->fileName_ != nullptr
        && this->fileType_ != nullptr && this->projectId_ != nullptr && this->queueName_ != nullptr && this->vvpClusterType_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // vvpClusterType Field Functions 
    bool hasVvpClusterType() const { return this->vvpClusterType_ != nullptr;};
    void deleteVvpClusterType() { this->vvpClusterType_ = nullptr;};
    inline string vvpClusterType() const { DARABONBA_PTR_GET_DEFAULT(vvpClusterType_, "") };
    inline CreateStreamBatchJobMappingRequestStreamBatchJobMappingCreateCommand& setVvpClusterType(string vvpClusterType) { DARABONBA_PTR_SET_VALUE(vvpClusterType_, vvpClusterType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> directory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vvpClusterType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
