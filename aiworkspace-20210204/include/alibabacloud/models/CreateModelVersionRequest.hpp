// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateModelVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_ANY_TO_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_TO_JSON(DistillationSpec, distillationSpec_);
      DARABONBA_ANY_TO_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_ANY_TO_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_ANY_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_ANY_TO_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_ANY_FROM_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_FROM_JSON(DistillationSpec, distillationSpec_);
      DARABONBA_ANY_FROM_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_ANY_FROM_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_ANY_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_ANY_FROM_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    CreateModelVersionRequest() = default ;
    CreateModelVersionRequest(const CreateModelVersionRequest &) = default ;
    CreateModelVersionRequest(CreateModelVersionRequest &&) = default ;
    CreateModelVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelVersionRequest() = default ;
    CreateModelVersionRequest& operator=(const CreateModelVersionRequest &) = default ;
    CreateModelVersionRequest& operator=(CreateModelVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalStatus_ == nullptr
        && this->compressionSpec_ == nullptr && this->distillationSpec_ == nullptr && this->evaluationSpec_ == nullptr && this->extraInfo_ == nullptr && this->formatType_ == nullptr
        && this->frameworkType_ == nullptr && this->inferenceSpec_ == nullptr && this->labels_ == nullptr && this->metrics_ == nullptr && this->options_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->trainingSpec_ == nullptr && this->uri_ == nullptr && this->versionDescription_ == nullptr
        && this->versionName_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline CreateModelVersionRequest& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // compressionSpec Field Functions 
    bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
    void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
    inline     const Darabonba::Json & getCompressionSpec() const { DARABONBA_GET(compressionSpec_) };
    Darabonba::Json & getCompressionSpec() { DARABONBA_GET(compressionSpec_) };
    inline CreateModelVersionRequest& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
    inline CreateModelVersionRequest& setCompressionSpec(Darabonba::Json && compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


    // distillationSpec Field Functions 
    bool hasDistillationSpec() const { return this->distillationSpec_ != nullptr;};
    void deleteDistillationSpec() { this->distillationSpec_ = nullptr;};
    inline     const Darabonba::Json & getDistillationSpec() const { DARABONBA_GET(distillationSpec_) };
    Darabonba::Json & getDistillationSpec() { DARABONBA_GET(distillationSpec_) };
    inline CreateModelVersionRequest& setDistillationSpec(const Darabonba::Json & distillationSpec) { DARABONBA_SET_VALUE(distillationSpec_, distillationSpec) };
    inline CreateModelVersionRequest& setDistillationSpec(Darabonba::Json && distillationSpec) { DARABONBA_SET_RVALUE(distillationSpec_, distillationSpec) };


    // evaluationSpec Field Functions 
    bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
    void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
    inline     const Darabonba::Json & getEvaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
    Darabonba::Json & getEvaluationSpec() { DARABONBA_GET(evaluationSpec_) };
    inline CreateModelVersionRequest& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
    inline CreateModelVersionRequest& setEvaluationSpec(Darabonba::Json && evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline CreateModelVersionRequest& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline CreateModelVersionRequest& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline CreateModelVersionRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline CreateModelVersionRequest& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & getInferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & getInferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline CreateModelVersionRequest& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline CreateModelVersionRequest& setInferenceSpec(Darabonba::Json && inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateModelVersionRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateModelVersionRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & getMetrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & getMetrics() { DARABONBA_GET(metrics_) };
    inline CreateModelVersionRequest& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline CreateModelVersionRequest& setMetrics(Darabonba::Json && metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateModelVersionRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateModelVersionRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateModelVersionRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // trainingSpec Field Functions 
    bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
    void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
    inline     const Darabonba::Json & getTrainingSpec() const { DARABONBA_GET(trainingSpec_) };
    Darabonba::Json & getTrainingSpec() { DARABONBA_GET(trainingSpec_) };
    inline CreateModelVersionRequest& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
    inline CreateModelVersionRequest& setTrainingSpec(Darabonba::Json && trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateModelVersionRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline CreateModelVersionRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline CreateModelVersionRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


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
    // The model format. Valid values:
    // 
    // *   OfflineModel
    // *   SavedModel
    // *   Keras H5
    // *   Frozen Pb
    // *   Caffe Prototxt
    // *   TorchScript
    // *   XGBoost
    // *   PMML
    // *   AlinkModel
    // *   ONNX
    shared_ptr<string> formatType_ {};
    // The model framework. Valid values:
    // 
    // *   Pytorch
    // *   XGBoost
    // *   Keras
    // *   Caffe
    // *   Alink
    // *   Xflow
    // *   TensorFlow
    shared_ptr<string> frameworkType_ {};
    // Describes how to apply to downstream inference services. For example, describe the processor and container of EAS. Example: `{ "processor": "tensorflow_gpu_1.12" }`
    Darabonba::Json inferenceSpec_ {};
    // The labels.
    shared_ptr<vector<Label>> labels_ {};
    // The metrics for the model. The length after serialization is limited to 8,192.
    Darabonba::Json metrics_ {};
    // The extended field. This is a JSON string.
    shared_ptr<string> options_ {};
    // The ID of the model source.
    // 
    // *   If SourceType is set to Custom, this parameter is not limited.
    // *   If SourceType is set to PAIFlow or TrainingService, the ID of the model source is in the following format:
    // 
    // <!---->
    // 
    //     region=<region_id>,workspaceId=<workspace_id>,kind=<kind>,id=<id>
    // 
    // Take note of the following parameters:
    // 
    // *   region indicates the region ID.
    // *   workspaceId indicates the workspace ID.
    // *   kind indicates the type. Valid values: PipelineRun (PAIFlow) and ServiceJob (training service).
    // *   id indicates the unique identifier.
    shared_ptr<string> sourceId_ {};
    // The type of the model source. Valid values:
    // 
    // *   Custom (default)
    // *   PAIFlow
    // *   TrainingService: the Platform for AI (PAI) training service.
    shared_ptr<string> sourceType_ {};
    // The training configurations, which is used for fine-tuning and incremental training.
    Darabonba::Json trainingSpec_ {};
    // The URI of the model version, which is the location where the model is stored. Valid values:
    // 
    // *   The HTTP(S) address of the model. Example: `https://myweb.com/mymodel.tar.gz`.
    // *   The OSS path of the model, in the format of `oss://<bucket>.<endpoint>/object`. For information about endpoints, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html). Example: `oss://mybucket.oss-cn-beijing.aliyuncs.com/mypath/`.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
    // The version description.
    shared_ptr<string> versionDescription_ {};
    // The model version, which is unique for each model. If you leave this parameter empty, the first version is **0.1.0** by default. After that, the minor version number is increased by 1 in sequence. For example, the second version number is **0.2.0**. A version number consists of a major version number, a minor version number, and a stage version number, separated by periods (.). The major version number and minor version number are numeric. The stage version number begins with a digit and can include numbers, underscores, and letters. For example, the version number is 1.1.0 or 2.3.4_beta.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
