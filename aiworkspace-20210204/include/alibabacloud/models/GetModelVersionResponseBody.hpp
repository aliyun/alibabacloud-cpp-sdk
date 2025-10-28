// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELVERSIONRESPONSEBODY_HPP_
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
  class GetModelVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_ANY_TO_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_TO_JSON(DistillationSpec, distillationSpec_);
      DARABONBA_ANY_TO_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_ANY_TO_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_ANY_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_ANY_TO_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
      DARABONBA_ANY_FROM_JSON(CompressionSpec, compressionSpec_);
      DARABONBA_ANY_FROM_JSON(DistillationSpec, distillationSpec_);
      DARABONBA_ANY_FROM_JSON(EvaluationSpec, evaluationSpec_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(FrameworkType, frameworkType_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_ANY_FROM_JSON(InferenceSpec, inferenceSpec_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_ANY_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_ANY_FROM_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    GetModelVersionResponseBody() = default ;
    GetModelVersionResponseBody(const GetModelVersionResponseBody &) = default ;
    GetModelVersionResponseBody(GetModelVersionResponseBody &&) = default ;
    GetModelVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelVersionResponseBody() = default ;
    GetModelVersionResponseBody& operator=(const GetModelVersionResponseBody &) = default ;
    GetModelVersionResponseBody& operator=(GetModelVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalStatus_ == nullptr
        && return this->compressionSpec_ == nullptr && return this->distillationSpec_ == nullptr && return this->evaluationSpec_ == nullptr && return this->extraInfo_ == nullptr && return this->formatType_ == nullptr
        && return this->frameworkType_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->inferenceSpec_ == nullptr && return this->labels_ == nullptr
        && return this->metrics_ == nullptr && return this->options_ == nullptr && return this->ownerId_ == nullptr && return this->requestId_ == nullptr && return this->sourceId_ == nullptr
        && return this->sourceType_ == nullptr && return this->trainingSpec_ == nullptr && return this->uri_ == nullptr && return this->userId_ == nullptr && return this->versionDescription_ == nullptr
        && return this->versionName_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string approvalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline GetModelVersionResponseBody& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // compressionSpec Field Functions 
    bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
    void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
    inline     const Darabonba::Json & compressionSpec() const { DARABONBA_GET(compressionSpec_) };
    Darabonba::Json & compressionSpec() { DARABONBA_GET(compressionSpec_) };
    inline GetModelVersionResponseBody& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
    inline GetModelVersionResponseBody& setCompressionSpec(Darabonba::Json & compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


    // distillationSpec Field Functions 
    bool hasDistillationSpec() const { return this->distillationSpec_ != nullptr;};
    void deleteDistillationSpec() { this->distillationSpec_ = nullptr;};
    inline     const Darabonba::Json & distillationSpec() const { DARABONBA_GET(distillationSpec_) };
    Darabonba::Json & distillationSpec() { DARABONBA_GET(distillationSpec_) };
    inline GetModelVersionResponseBody& setDistillationSpec(const Darabonba::Json & distillationSpec) { DARABONBA_SET_VALUE(distillationSpec_, distillationSpec) };
    inline GetModelVersionResponseBody& setDistillationSpec(Darabonba::Json & distillationSpec) { DARABONBA_SET_RVALUE(distillationSpec_, distillationSpec) };


    // evaluationSpec Field Functions 
    bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
    void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
    inline     const Darabonba::Json & evaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
    Darabonba::Json & evaluationSpec() { DARABONBA_GET(evaluationSpec_) };
    inline GetModelVersionResponseBody& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
    inline GetModelVersionResponseBody& setEvaluationSpec(Darabonba::Json & evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline GetModelVersionResponseBody& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline GetModelVersionResponseBody& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string formatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline GetModelVersionResponseBody& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string frameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline GetModelVersionResponseBody& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetModelVersionResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetModelVersionResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & inferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & inferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline GetModelVersionResponseBody& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline GetModelVersionResponseBody& setInferenceSpec(Darabonba::Json & inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline GetModelVersionResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetModelVersionResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & metrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & metrics() { DARABONBA_GET(metrics_) };
    inline GetModelVersionResponseBody& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline GetModelVersionResponseBody& setMetrics(Darabonba::Json & metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline GetModelVersionResponseBody& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetModelVersionResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetModelVersionResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetModelVersionResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // trainingSpec Field Functions 
    bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
    void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
    inline     const Darabonba::Json & trainingSpec() const { DARABONBA_GET(trainingSpec_) };
    Darabonba::Json & trainingSpec() { DARABONBA_GET(trainingSpec_) };
    inline GetModelVersionResponseBody& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
    inline GetModelVersionResponseBody& setTrainingSpec(Darabonba::Json & trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetModelVersionResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetModelVersionResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string versionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline GetModelVersionResponseBody& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetModelVersionResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The approval status. Valid values:
    // 
    // *   Pending
    // *   Approved
    // *   Rejected
    std::shared_ptr<string> approvalStatus_ = nullptr;
    // The compression configuration.
    Darabonba::Json compressionSpec_ = nullptr;
    Darabonba::Json distillationSpec_ = nullptr;
    // The evaluation configuration.
    Darabonba::Json evaluationSpec_ = nullptr;
    // The additional information.
    Darabonba::Json extraInfo_ = nullptr;
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
    std::shared_ptr<string> formatType_ = nullptr;
    // The model framework. Valid values:
    // 
    // *   Pytorch -XGBoost
    // *   Keras
    // *   Caffe
    // *   Alink
    // *   Xflow
    // *   TensorFlow
    std::shared_ptr<string> frameworkType_ = nullptr;
    // The time when the model was created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the model was last modified, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // Describes how to apply to downstream inference services. For example, describes the processor and container of Elastic Algorithm Service (EAS).
    Darabonba::Json inferenceSpec_ = nullptr;
    // The labels.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The metrics.
    Darabonba::Json metrics_ = nullptr;
    // The extended field. The value of this parameter is a JSON string.
    std::shared_ptr<string> options_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
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
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source type of the model. Valid values:
    // 
    // *   Custom
    // *   PAIFlow
    // *   TrainingService
    std::shared_ptr<string> sourceType_ = nullptr;
    // The training configurations used for fine-tuning and incremental training.
    Darabonba::Json trainingSpec_ = nullptr;
    // The URI of the model version, which is the location where the model is stored. Valid values:
    // 
    // *   The HTTP(S) address of the model. Example: `https://myweb.com/mymodel.tar.gz`.
    // *   The Object Storage Service (OSS) path of the model, in the format of `oss://<bucket>.<endpoint>/object`. For endpoint, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html). Example: `oss://mybucket.oss-cn-beijing.aliyuncs.com/mypath/`.
    std::shared_ptr<string> uri_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The version description.
    std::shared_ptr<string> versionDescription_ = nullptr;
    // The model version.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
