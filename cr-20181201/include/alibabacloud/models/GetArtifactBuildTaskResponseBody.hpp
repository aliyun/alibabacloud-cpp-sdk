// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTBUILDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTBUILDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetArtifactBuildTaskResponseBodySourceArtifact.hpp>
#include <alibabacloud/models/GetArtifactBuildTaskResponseBodyTargetArtifact.hpp>
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
    virtual bool empty() const override { this->artifactBuildType_ != nullptr
        && this->buildTaskId_ != nullptr && this->code_ != nullptr && this->endTime_ != nullptr && this->instructions_ != nullptr && this->isSuccess_ != nullptr
        && this->requestId_ != nullptr && this->sourceArtifact_ != nullptr && this->startTime_ != nullptr && this->targetArtifact_ != nullptr && this->taskStatus_ != nullptr; };
    // artifactBuildType Field Functions 
    bool hasArtifactBuildType() const { return this->artifactBuildType_ != nullptr;};
    void deleteArtifactBuildType() { this->artifactBuildType_ = nullptr;};
    inline string artifactBuildType() const { DARABONBA_PTR_GET_DEFAULT(artifactBuildType_, "") };
    inline GetArtifactBuildTaskResponseBody& setArtifactBuildType(string artifactBuildType) { DARABONBA_PTR_SET_VALUE(artifactBuildType_, artifactBuildType) };


    // buildTaskId Field Functions 
    bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
    void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
    inline string buildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
    inline GetArtifactBuildTaskResponseBody& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactBuildTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetArtifactBuildTaskResponseBody& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline const vector<string> & instructions() const { DARABONBA_PTR_GET_CONST(instructions_, vector<string>) };
    inline vector<string> instructions() { DARABONBA_PTR_GET(instructions_, vector<string>) };
    inline GetArtifactBuildTaskResponseBody& setInstructions(const vector<string> & instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };
    inline GetArtifactBuildTaskResponseBody& setInstructions(vector<string> && instructions) { DARABONBA_PTR_SET_RVALUE(instructions_, instructions) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactBuildTaskResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactBuildTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceArtifact Field Functions 
    bool hasSourceArtifact() const { return this->sourceArtifact_ != nullptr;};
    void deleteSourceArtifact() { this->sourceArtifact_ = nullptr;};
    inline const GetArtifactBuildTaskResponseBodySourceArtifact & sourceArtifact() const { DARABONBA_PTR_GET_CONST(sourceArtifact_, GetArtifactBuildTaskResponseBodySourceArtifact) };
    inline GetArtifactBuildTaskResponseBodySourceArtifact sourceArtifact() { DARABONBA_PTR_GET(sourceArtifact_, GetArtifactBuildTaskResponseBodySourceArtifact) };
    inline GetArtifactBuildTaskResponseBody& setSourceArtifact(const GetArtifactBuildTaskResponseBodySourceArtifact & sourceArtifact) { DARABONBA_PTR_SET_VALUE(sourceArtifact_, sourceArtifact) };
    inline GetArtifactBuildTaskResponseBody& setSourceArtifact(GetArtifactBuildTaskResponseBodySourceArtifact && sourceArtifact) { DARABONBA_PTR_SET_RVALUE(sourceArtifact_, sourceArtifact) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetArtifactBuildTaskResponseBody& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetArtifact Field Functions 
    bool hasTargetArtifact() const { return this->targetArtifact_ != nullptr;};
    void deleteTargetArtifact() { this->targetArtifact_ = nullptr;};
    inline const GetArtifactBuildTaskResponseBodyTargetArtifact & targetArtifact() const { DARABONBA_PTR_GET_CONST(targetArtifact_, GetArtifactBuildTaskResponseBodyTargetArtifact) };
    inline GetArtifactBuildTaskResponseBodyTargetArtifact targetArtifact() { DARABONBA_PTR_GET(targetArtifact_, GetArtifactBuildTaskResponseBodyTargetArtifact) };
    inline GetArtifactBuildTaskResponseBody& setTargetArtifact(const GetArtifactBuildTaskResponseBodyTargetArtifact & targetArtifact) { DARABONBA_PTR_SET_VALUE(targetArtifact_, targetArtifact) };
    inline GetArtifactBuildTaskResponseBody& setTargetArtifact(GetArtifactBuildTaskResponseBodyTargetArtifact && targetArtifact) { DARABONBA_PTR_SET_RVALUE(targetArtifact_, targetArtifact) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetArtifactBuildTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The type of the artifact building task. Valid values:
    // 
    // *   `IMAGE_TO_ACCELERATED_IMAGE`: builds accelerated images for Container Service for Kubernetes (ACK) clusters.
    // *   `IMAGE_TO_ECI_ACCELERATED_IMAGE`: builds accelerated images for elastic container instances.
    std::shared_ptr<string> artifactBuildType_ = nullptr;
    // The ID of the artifact building task.
    std::shared_ptr<string> buildTaskId_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the artifact building task ends.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    std::shared_ptr<vector<string>> instructions_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the source artifact.
    std::shared_ptr<GetArtifactBuildTaskResponseBodySourceArtifact> sourceArtifact_ = nullptr;
    // The time when the artifact building task starts.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    // The artifact that is built in the task.
    std::shared_ptr<GetArtifactBuildTaskResponseBodyTargetArtifact> targetArtifact_ = nullptr;
    // The status of the artifact that is built in the task. Valid values:
    // 
    // *   `PENDING`: The artifact is being scheduled.
    // *   `BUILDING`: The artifact is being built.
    // *   `SUCCESS`: The artifact is built.
    // *   `FAILED`: The artifact fails to be built.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
