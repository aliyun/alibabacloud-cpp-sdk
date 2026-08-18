// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_SNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class Snapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
      DARABONBA_PTR_TO_JSON(artifactDiskTotalSizeInB, artifactDiskTotalSizeInB_);
      DARABONBA_PTR_TO_JSON(artifactDiskUsedSizeInB, artifactDiskUsedSizeInB_);
      DARABONBA_PTR_TO_JSON(artifactMemCacheSizeInB, artifactMemCacheSizeInB_);
      DARABONBA_PTR_TO_JSON(artifactMemTotalSizeInB, artifactMemTotalSizeInB_);
      DARABONBA_PTR_TO_JSON(artifactMemUsedSizeInB, artifactMemUsedSizeInB_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_TO_JSON(envs, envs_);
      DARABONBA_PTR_TO_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(imageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(imageRepository, imageRepository_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(osType, osType_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_TO_JSON(resolvedVersion, resolvedVersion_);
      DARABONBA_PTR_TO_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(sourceSessionId, sourceSessionId_);
      DARABONBA_PTR_TO_JSON(startCommand, startCommand_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactDiskTotalSizeInB, artifactDiskTotalSizeInB_);
      DARABONBA_PTR_FROM_JSON(artifactDiskUsedSizeInB, artifactDiskUsedSizeInB_);
      DARABONBA_PTR_FROM_JSON(artifactMemCacheSizeInB, artifactMemCacheSizeInB_);
      DARABONBA_PTR_FROM_JSON(artifactMemTotalSizeInB, artifactMemTotalSizeInB_);
      DARABONBA_PTR_FROM_JSON(artifactMemUsedSizeInB, artifactMemUsedSizeInB_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_FROM_JSON(envs, envs_);
      DARABONBA_PTR_FROM_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(imageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(imageRepository, imageRepository_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(osType, osType_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_FROM_JSON(resolvedVersion, resolvedVersion_);
      DARABONBA_PTR_FROM_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(sourceSessionId, sourceSessionId_);
      DARABONBA_PTR_FROM_JSON(startCommand, startCommand_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    Snapshot() = default ;
    Snapshot(const Snapshot &) = default ;
    Snapshot(Snapshot &&) = default ;
    Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Snapshot() = default ;
    Snapshot& operator=(const Snapshot &) = default ;
    Snapshot& operator=(Snapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactDiskTotalSizeInB_ == nullptr
        && this->artifactDiskUsedSizeInB_ == nullptr && this->artifactMemCacheSizeInB_ == nullptr && this->artifactMemTotalSizeInB_ == nullptr && this->artifactMemUsedSizeInB_ == nullptr && this->cpu_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->diskSizeMB_ == nullptr && this->envs_ == nullptr && this->expiredTime_ == nullptr
        && this->functionName_ == nullptr && this->imageDigest_ == nullptr && this->imageRepository_ == nullptr && this->memoryMB_ == nullptr && this->osType_ == nullptr
        && this->qualifier_ == nullptr && this->readyCommand_ == nullptr && this->resolvedVersion_ == nullptr && this->snapshotId_ == nullptr && this->sourceSessionId_ == nullptr
        && this->startCommand_ == nullptr && this->status_ == nullptr; };
    // artifactDiskTotalSizeInB Field Functions 
    bool hasArtifactDiskTotalSizeInB() const { return this->artifactDiskTotalSizeInB_ != nullptr;};
    void deleteArtifactDiskTotalSizeInB() { this->artifactDiskTotalSizeInB_ = nullptr;};
    inline int64_t getArtifactDiskTotalSizeInB() const { DARABONBA_PTR_GET_DEFAULT(artifactDiskTotalSizeInB_, 0L) };
    inline Snapshot& setArtifactDiskTotalSizeInB(int64_t artifactDiskTotalSizeInB) { DARABONBA_PTR_SET_VALUE(artifactDiskTotalSizeInB_, artifactDiskTotalSizeInB) };


    // artifactDiskUsedSizeInB Field Functions 
    bool hasArtifactDiskUsedSizeInB() const { return this->artifactDiskUsedSizeInB_ != nullptr;};
    void deleteArtifactDiskUsedSizeInB() { this->artifactDiskUsedSizeInB_ = nullptr;};
    inline int64_t getArtifactDiskUsedSizeInB() const { DARABONBA_PTR_GET_DEFAULT(artifactDiskUsedSizeInB_, 0L) };
    inline Snapshot& setArtifactDiskUsedSizeInB(int64_t artifactDiskUsedSizeInB) { DARABONBA_PTR_SET_VALUE(artifactDiskUsedSizeInB_, artifactDiskUsedSizeInB) };


    // artifactMemCacheSizeInB Field Functions 
    bool hasArtifactMemCacheSizeInB() const { return this->artifactMemCacheSizeInB_ != nullptr;};
    void deleteArtifactMemCacheSizeInB() { this->artifactMemCacheSizeInB_ = nullptr;};
    inline int64_t getArtifactMemCacheSizeInB() const { DARABONBA_PTR_GET_DEFAULT(artifactMemCacheSizeInB_, 0L) };
    inline Snapshot& setArtifactMemCacheSizeInB(int64_t artifactMemCacheSizeInB) { DARABONBA_PTR_SET_VALUE(artifactMemCacheSizeInB_, artifactMemCacheSizeInB) };


    // artifactMemTotalSizeInB Field Functions 
    bool hasArtifactMemTotalSizeInB() const { return this->artifactMemTotalSizeInB_ != nullptr;};
    void deleteArtifactMemTotalSizeInB() { this->artifactMemTotalSizeInB_ = nullptr;};
    inline int64_t getArtifactMemTotalSizeInB() const { DARABONBA_PTR_GET_DEFAULT(artifactMemTotalSizeInB_, 0L) };
    inline Snapshot& setArtifactMemTotalSizeInB(int64_t artifactMemTotalSizeInB) { DARABONBA_PTR_SET_VALUE(artifactMemTotalSizeInB_, artifactMemTotalSizeInB) };


    // artifactMemUsedSizeInB Field Functions 
    bool hasArtifactMemUsedSizeInB() const { return this->artifactMemUsedSizeInB_ != nullptr;};
    void deleteArtifactMemUsedSizeInB() { this->artifactMemUsedSizeInB_ = nullptr;};
    inline int64_t getArtifactMemUsedSizeInB() const { DARABONBA_PTR_GET_DEFAULT(artifactMemUsedSizeInB_, 0L) };
    inline Snapshot& setArtifactMemUsedSizeInB(int64_t artifactMemUsedSizeInB) { DARABONBA_PTR_SET_VALUE(artifactMemUsedSizeInB_, artifactMemUsedSizeInB) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline Snapshot& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline Snapshot& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Snapshot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskSizeMB Field Functions 
    bool hasDiskSizeMB() const { return this->diskSizeMB_ != nullptr;};
    void deleteDiskSizeMB() { this->diskSizeMB_ = nullptr;};
    inline int64_t getDiskSizeMB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeMB_, 0L) };
    inline Snapshot& setDiskSizeMB(int64_t diskSizeMB) { DARABONBA_PTR_SET_VALUE(diskSizeMB_, diskSizeMB) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline Snapshot& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline Snapshot& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline Snapshot& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline Snapshot& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline Snapshot& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageRepository Field Functions 
    bool hasImageRepository() const { return this->imageRepository_ != nullptr;};
    void deleteImageRepository() { this->imageRepository_ = nullptr;};
    inline string getImageRepository() const { DARABONBA_PTR_GET_DEFAULT(imageRepository_, "") };
    inline Snapshot& setImageRepository(string imageRepository) { DARABONBA_PTR_SET_VALUE(imageRepository_, imageRepository) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int64_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0L) };
    inline Snapshot& setMemoryMB(int64_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline Snapshot& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline Snapshot& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // readyCommand Field Functions 
    bool hasReadyCommand() const { return this->readyCommand_ != nullptr;};
    void deleteReadyCommand() { this->readyCommand_ = nullptr;};
    inline string getReadyCommand() const { DARABONBA_PTR_GET_DEFAULT(readyCommand_, "") };
    inline Snapshot& setReadyCommand(string readyCommand) { DARABONBA_PTR_SET_VALUE(readyCommand_, readyCommand) };


    // resolvedVersion Field Functions 
    bool hasResolvedVersion() const { return this->resolvedVersion_ != nullptr;};
    void deleteResolvedVersion() { this->resolvedVersion_ = nullptr;};
    inline string getResolvedVersion() const { DARABONBA_PTR_GET_DEFAULT(resolvedVersion_, "") };
    inline Snapshot& setResolvedVersion(string resolvedVersion) { DARABONBA_PTR_SET_VALUE(resolvedVersion_, resolvedVersion) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline Snapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceSessionId Field Functions 
    bool hasSourceSessionId() const { return this->sourceSessionId_ != nullptr;};
    void deleteSourceSessionId() { this->sourceSessionId_ = nullptr;};
    inline string getSourceSessionId() const { DARABONBA_PTR_GET_DEFAULT(sourceSessionId_, "") };
    inline Snapshot& setSourceSessionId(string sourceSessionId) { DARABONBA_PTR_SET_VALUE(sourceSessionId_, sourceSessionId) };


    // startCommand Field Functions 
    bool hasStartCommand() const { return this->startCommand_ != nullptr;};
    void deleteStartCommand() { this->startCommand_ = nullptr;};
    inline string getStartCommand() const { DARABONBA_PTR_GET_DEFAULT(startCommand_, "") };
    inline Snapshot& setStartCommand(string startCommand) { DARABONBA_PTR_SET_VALUE(startCommand_, startCommand) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Snapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> artifactDiskTotalSizeInB_ {};
    // This parameter is required.
    shared_ptr<int64_t> artifactDiskUsedSizeInB_ {};
    // This parameter is required.
    shared_ptr<int64_t> artifactMemCacheSizeInB_ {};
    // This parameter is required.
    shared_ptr<int64_t> artifactMemTotalSizeInB_ {};
    // This parameter is required.
    shared_ptr<int64_t> artifactMemUsedSizeInB_ {};
    // This parameter is required.
    shared_ptr<int64_t> cpu_ {};
    // This parameter is required.
    shared_ptr<string> createdTime_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> diskSizeMB_ {};
    // This parameter is required.
    shared_ptr<map<string, string>> envs_ {};
    // This parameter is required.
    shared_ptr<string> expiredTime_ {};
    // This parameter is required.
    shared_ptr<string> functionName_ {};
    // This parameter is required.
    shared_ptr<string> imageDigest_ {};
    // This parameter is required.
    shared_ptr<string> imageRepository_ {};
    // This parameter is required.
    shared_ptr<int64_t> memoryMB_ {};
    // This parameter is required.
    shared_ptr<string> osType_ {};
    // This parameter is required.
    shared_ptr<string> qualifier_ {};
    // This parameter is required.
    shared_ptr<string> readyCommand_ {};
    shared_ptr<string> resolvedVersion_ {};
    // This parameter is required.
    shared_ptr<string> snapshotId_ {};
    // This parameter is required.
    shared_ptr<string> sourceSessionId_ {};
    // This parameter is required.
    shared_ptr<string> startCommand_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
