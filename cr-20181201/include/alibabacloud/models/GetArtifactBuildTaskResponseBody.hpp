// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTBUILDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTBUILDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactBuildTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactBuildTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_TO_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceArtifact, sourceArtifact_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetArtifact, targetArtifact_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactBuildTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildType, artifactBuildType_);
      DARABONBA_PTR_FROM_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceArtifact, sourceArtifact_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetArtifact, targetArtifact_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetArtifactBuildTaskResponseBody() = default ;
    GetArtifactBuildTaskResponseBody(const GetArtifactBuildTaskResponseBody &) = default ;
    GetArtifactBuildTaskResponseBody(GetArtifactBuildTaskResponseBody &&) = default ;
    GetArtifactBuildTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactBuildTaskResponseBody() = default ;
    GetArtifactBuildTaskResponseBody& operator=(const GetArtifactBuildTaskResponseBody &) = default ;
    GetArtifactBuildTaskResponseBody& operator=(GetArtifactBuildTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetArtifact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetArtifact& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, TargetArtifact& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      TargetArtifact() = default ;
      TargetArtifact(const TargetArtifact &) = default ;
      TargetArtifact(TargetArtifact &&) = default ;
      TargetArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetArtifact() = default ;
      TargetArtifact& operator=(const TargetArtifact &) = default ;
      TargetArtifact& operator=(TargetArtifact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->repoId_ == nullptr && this->version_ == nullptr; };
      // artifactType Field Functions 
      bool hasArtifactType() const { return this->artifactType_ != nullptr;};
      void deleteArtifactType() { this->artifactType_ = nullptr;};
      inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
      inline TargetArtifact& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline TargetArtifact& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline TargetArtifact& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of the artifact that is built in the task. The value can only be IMAGE.
      shared_ptr<string> artifactType_ {};
      // The ID of the repository to which the artifact that is built in the task belongs. The repository can only be an image repository. The value is the same as the ID of the repository to which the source artifact belongs.
      shared_ptr<string> repoId_ {};
      // The version of the artifact that is built in the task. The artifact can only be an image.
      shared_ptr<string> version_ {};
    };

    class SourceArtifact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceArtifact& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, SourceArtifact& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      SourceArtifact() = default ;
      SourceArtifact(const SourceArtifact &) = default ;
      SourceArtifact(SourceArtifact &&) = default ;
      SourceArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceArtifact() = default ;
      SourceArtifact& operator=(const SourceArtifact &) = default ;
      SourceArtifact& operator=(SourceArtifact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->repoId_ == nullptr && this->version_ == nullptr; };
      // artifactType Field Functions 
      bool hasArtifactType() const { return this->artifactType_ != nullptr;};
      void deleteArtifactType() { this->artifactType_ = nullptr;};
      inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
      inline SourceArtifact& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline SourceArtifact& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline SourceArtifact& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of the artifact that is built in the task. The value can only be IMAGE.
      shared_ptr<string> artifactType_ {};
      // The ID of the repository to which the source artifact belongs. The repository can only be an image repository.
      shared_ptr<string> repoId_ {};
      // The version of the artifact. The artifact can only be an image.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->artifactBuildType_ == nullptr
        && this->buildTaskId_ == nullptr && this->code_ == nullptr && this->endTime_ == nullptr && this->instructions_ == nullptr && this->isSuccess_ == nullptr
        && this->requestId_ == nullptr && this->sourceArtifact_ == nullptr && this->startTime_ == nullptr && this->targetArtifact_ == nullptr && this->taskStatus_ == nullptr; };
    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string getArtifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline GetArtifactBuildTaskResponseBody& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // buildTaskId Field Functions 
    bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
    void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
    inline string getBuildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
    inline GetArtifactBuildTaskResponseBody& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactBuildTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetArtifactBuildTaskResponseBody& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline const vector<string> & getInstructions() const { DARABONBA_PTR_GET_CONST(instructions_, vector<string>) };
    inline vector<string> getInstructions() { DARABONBA_PTR_GET(instructions_, vector<string>) };
    inline GetArtifactBuildTaskResponseBody& setInstructions(const vector<string> & instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };
    inline GetArtifactBuildTaskResponseBody& setInstructions(vector<string> && instructions) { DARABONBA_PTR_SET_RVALUE(instructions_, instructions) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactBuildTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactBuildTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceArtifact Field Functions 
    bool hasSourceArtifact() const { return this->sourceArtifact_ != nullptr;};
    void deleteSourceArtifact() { this->sourceArtifact_ = nullptr;};
    inline const GetArtifactBuildTaskResponseBody::SourceArtifact & getSourceArtifact() const { DARABONBA_PTR_GET_CONST(sourceArtifact_, GetArtifactBuildTaskResponseBody::SourceArtifact) };
    inline GetArtifactBuildTaskResponseBody::SourceArtifact getSourceArtifact() { DARABONBA_PTR_GET(sourceArtifact_, GetArtifactBuildTaskResponseBody::SourceArtifact) };
    inline GetArtifactBuildTaskResponseBody& setSourceArtifact(const GetArtifactBuildTaskResponseBody::SourceArtifact & sourceArtifact) { DARABONBA_PTR_SET_VALUE(sourceArtifact_, sourceArtifact) };
    inline GetArtifactBuildTaskResponseBody& setSourceArtifact(GetArtifactBuildTaskResponseBody::SourceArtifact && sourceArtifact) { DARABONBA_PTR_SET_RVALUE(sourceArtifact_, sourceArtifact) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetArtifactBuildTaskResponseBody& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetArtifact Field Functions 
    bool hasTargetArtifact() const { return this->targetArtifact_ != nullptr;};
    void deleteTargetArtifact() { this->targetArtifact_ = nullptr;};
    inline const GetArtifactBuildTaskResponseBody::TargetArtifact & getTargetArtifact() const { DARABONBA_PTR_GET_CONST(targetArtifact_, GetArtifactBuildTaskResponseBody::TargetArtifact) };
    inline GetArtifactBuildTaskResponseBody::TargetArtifact getTargetArtifact() { DARABONBA_PTR_GET(targetArtifact_, GetArtifactBuildTaskResponseBody::TargetArtifact) };
    inline GetArtifactBuildTaskResponseBody& setTargetArtifact(const GetArtifactBuildTaskResponseBody::TargetArtifact & targetArtifact) { DARABONBA_PTR_SET_VALUE(targetArtifact_, targetArtifact) };
    inline GetArtifactBuildTaskResponseBody& setTargetArtifact(GetArtifactBuildTaskResponseBody::TargetArtifact && targetArtifact) { DARABONBA_PTR_SET_RVALUE(targetArtifact_, targetArtifact) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetArtifactBuildTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The type of the artifact building task. Valid values:
    // 
    // *   `IMAGE_TO_ACCELERATED_IMAGE`: builds accelerated images for Container Service for Kubernetes (ACK) clusters.
    // *   `IMAGE_TO_ECI_ACCELERATED_IMAGE`: builds accelerated images for elastic container instances.
    shared_ptr<string> artifactBuildType_ {};
    // The ID of the artifact building task.
    shared_ptr<string> buildTaskId_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // The time when the artifact building task ends.
    shared_ptr<int32_t> endTime_ {};
    shared_ptr<vector<string>> instructions_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the source artifact.
    shared_ptr<GetArtifactBuildTaskResponseBody::SourceArtifact> sourceArtifact_ {};
    // The time when the artifact building task starts.
    shared_ptr<int32_t> startTime_ {};
    // The artifact that is built in the task.
    shared_ptr<GetArtifactBuildTaskResponseBody::TargetArtifact> targetArtifact_ {};
    // The status of the artifact that is built in the task. Valid values:
    // 
    // *   `PENDING`: The artifact is being scheduled.
    // *   `BUILDING`: The artifact is being built.
    // *   `SUCCESS`: The artifact is built.
    // *   `FAILED`: The artifact fails to be built.
    shared_ptr<string> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
