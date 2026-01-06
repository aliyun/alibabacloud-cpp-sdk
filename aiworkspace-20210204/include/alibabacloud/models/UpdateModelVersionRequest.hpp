// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateModelVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_ANY_TO_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_TO_JSON(DistillationSpec, distillationSpec_);
      DARABONBA_ANY_TO_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_ANY_TO_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_ANY_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_ANY_TO_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_ANY_FROM_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_FROM_JSON(DistillationSpec, distillationSpec_);
      DARABONBA_ANY_FROM_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_ANY_FROM_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_ANY_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_ANY_FROM_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
    };
    UpdateModelVersionRequest() = default ;
    UpdateModelVersionRequest(const UpdateModelVersionRequest &) = default ;
    UpdateModelVersionRequest(UpdateModelVersionRequest &&) = default ;
    UpdateModelVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelVersionRequest() = default ;
    UpdateModelVersionRequest& operator=(const UpdateModelVersionRequest &) = default ;
    UpdateModelVersionRequest& operator=(UpdateModelVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalStatus_ == nullptr
        && this->compressionSpec_ == nullptr && this->distillationSpec_ == nullptr && this->evaluationSpec_ == nullptr && this->extraInfo_ == nullptr && this->inferenceSpec_ == nullptr
        && this->metrics_ == nullptr && this->options_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->trainingSpec_ == nullptr
        && this->versionDescription_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline UpdateModelVersionRequest& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // compressionSpec Field Functions 
    bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
    void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
    inline     const Darabonba::Json & getCompressionSpec() const { DARABONBA_GET(compressionSpec_) };
    Darabonba::Json & getCompressionSpec() { DARABONBA_GET(compressionSpec_) };
    inline UpdateModelVersionRequest& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
    inline UpdateModelVersionRequest& setCompressionSpec(Darabonba::Json && compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


    // distillationSpec Field Functions 
    bool hasDistillationSpec() const { return this->distillationSpec_ != nullptr;};
    void deleteDistillationSpec() { this->distillationSpec_ = nullptr;};
    inline     const Darabonba::Json & getDistillationSpec() const { DARABONBA_GET(distillationSpec_) };
    Darabonba::Json & getDistillationSpec() { DARABONBA_GET(distillationSpec_) };
    inline UpdateModelVersionRequest& setDistillationSpec(const Darabonba::Json & distillationSpec) { DARABONBA_SET_VALUE(distillationSpec_, distillationSpec) };
    inline UpdateModelVersionRequest& setDistillationSpec(Darabonba::Json && distillationSpec) { DARABONBA_SET_RVALUE(distillationSpec_, distillationSpec) };


    // evaluationSpec Field Functions 
    bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
    void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
    inline     const Darabonba::Json & getEvaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
    Darabonba::Json & getEvaluationSpec() { DARABONBA_GET(evaluationSpec_) };
    inline UpdateModelVersionRequest& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
    inline UpdateModelVersionRequest& setEvaluationSpec(Darabonba::Json && evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline UpdateModelVersionRequest& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline UpdateModelVersionRequest& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & getInferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & getInferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline UpdateModelVersionRequest& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline UpdateModelVersionRequest& setInferenceSpec(Darabonba::Json && inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & getMetrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & getMetrics() { DARABONBA_GET(metrics_) };
    inline UpdateModelVersionRequest& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline UpdateModelVersionRequest& setMetrics(Darabonba::Json && metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateModelVersionRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateModelVersionRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateModelVersionRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // trainingSpec Field Functions 
    bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
    void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
    inline     const Darabonba::Json & getTrainingSpec() const { DARABONBA_GET(trainingSpec_) };
    Darabonba::Json & getTrainingSpec() { DARABONBA_GET(trainingSpec_) };
    inline UpdateModelVersionRequest& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
    inline UpdateModelVersionRequest& setTrainingSpec(Darabonba::Json && trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline UpdateModelVersionRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


  protected:
    // The approval status. Valid values:
    // 
    // *   Pending
    // *   Approved
    // *   Rejected
    shared_ptr<string> approvalStatus_ {};
    // The compression configuration.
    Darabonba::Json compressionSpec_ {};
    Darabonba::Json distillationSpec_ {};
    // The evaluation configuration.
    Darabonba::Json evaluationSpec_ {};
    // The additional information.
    Darabonba::Json extraInfo_ {};
    // Describes how to apply to downstream inference services. For example, describes the processor and container of Elastic Algorithm Service (EAS). Example: `{ "processor": "tensorflow_gpu_1.12" }`.
    Darabonba::Json inferenceSpec_ {};
    // The model metrics. The length after serialization is limited to 8,192.
    Darabonba::Json metrics_ {};
    // The extended field, which is of the JsonString type.
    shared_ptr<string> options_ {};
    // The source ID.
    // 
    // *   If the source type is Custom, this field is not limited.
    // *   If the source type is PAIFlow or TrainingService, the format is:
    // 
    // <!---->
    // 
    //     region=<region_id>,workspaceId=<workspace_id>,kind=<kind>,id=<id>
    // 
    // Take note of the following parameters:
    // 
    // *   region is the region ID.
    // *   workspaceId is the ID of the workspace.
    // *   kind is the type. Valid values: PipelineRun (PAIFlow) and ServiceJob (training service).
    // *   id is a unique identifier.
    shared_ptr<string> sourceId_ {};
    // The type of the model source. Valid values:
    // 
    // *   Custom (default)
    // *   PAIFlow
    // *   TrainingService
    shared_ptr<string> sourceType_ {};
    // The training configurations used for fine-tuning and incremental training.
    Darabonba::Json trainingSpec_ {};
    // The model version description.
    shared_ptr<string> versionDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
