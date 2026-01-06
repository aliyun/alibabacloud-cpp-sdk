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
        && this->compressionSpec_ == nullptr && this->distillationSpec_ == nullptr && this->evaluationSpec_ == nullptr && this->extraInfo_ == nullptr && this->formatType_ == nullptr
        && this->frameworkType_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->inferenceSpec_ == nullptr && this->labels_ == nullptr
        && this->metrics_ == nullptr && this->options_ == nullptr && this->ownerId_ == nullptr && this->requestId_ == nullptr && this->sourceId_ == nullptr
        && this->sourceType_ == nullptr && this->trainingSpec_ == nullptr && this->uri_ == nullptr && this->userId_ == nullptr && this->versionDescription_ == nullptr
        && this->versionName_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline GetModelVersionResponseBody& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // compressionSpec Field Functions 
    bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
    void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
    inline     const Darabonba::Json & getCompressionSpec() const { DARABONBA_GET(compressionSpec_) };
    Darabonba::Json & getCompressionSpec() { DARABONBA_GET(compressionSpec_) };
    inline GetModelVersionResponseBody& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
    inline GetModelVersionResponseBody& setCompressionSpec(Darabonba::Json && compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


    // distillationSpec Field Functions 
    bool hasDistillationSpec() const { return this->distillationSpec_ != nullptr;};
    void deleteDistillationSpec() { this->distillationSpec_ = nullptr;};
    inline     const Darabonba::Json & getDistillationSpec() const { DARABONBA_GET(distillationSpec_) };
    Darabonba::Json & getDistillationSpec() { DARABONBA_GET(distillationSpec_) };
    inline GetModelVersionResponseBody& setDistillationSpec(const Darabonba::Json & distillationSpec) { DARABONBA_SET_VALUE(distillationSpec_, distillationSpec) };
    inline GetModelVersionResponseBody& setDistillationSpec(Darabonba::Json && distillationSpec) { DARABONBA_SET_RVALUE(distillationSpec_, distillationSpec) };


    // evaluationSpec Field Functions 
    bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
    void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
    inline     const Darabonba::Json & getEvaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
    Darabonba::Json & getEvaluationSpec() { DARABONBA_GET(evaluationSpec_) };
    inline GetModelVersionResponseBody& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
    inline GetModelVersionResponseBody& setEvaluationSpec(Darabonba::Json && evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline GetModelVersionResponseBody& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline GetModelVersionResponseBody& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline GetModelVersionResponseBody& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline GetModelVersionResponseBody& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetModelVersionResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetModelVersionResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & getInferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & getInferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline GetModelVersionResponseBody& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline GetModelVersionResponseBody& setInferenceSpec(Darabonba::Json && inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline GetModelVersionResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetModelVersionResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & getMetrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & getMetrics() { DARABONBA_GET(metrics_) };
    inline GetModelVersionResponseBody& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline GetModelVersionResponseBody& setMetrics(Darabonba::Json && metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline GetModelVersionResponseBody& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetModelVersionResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetModelVersionResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetModelVersionResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // trainingSpec Field Functions 
    bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
    void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
    inline     const Darabonba::Json & getTrainingSpec() const { DARABONBA_GET(trainingSpec_) };
    Darabonba::Json & getTrainingSpec() { DARABONBA_GET(trainingSpec_) };
    inline GetModelVersionResponseBody& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
    inline GetModelVersionResponseBody& setTrainingSpec(Darabonba::Json && trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetModelVersionResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetModelVersionResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline GetModelVersionResponseBody& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline GetModelVersionResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


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
    // *   Pytorch -XGBoost
    // *   Keras
    // *   Caffe
    // *   Alink
    // *   Xflow
    // *   TensorFlow
    shared_ptr<string> frameworkType_ {};
    // The time when the model was created, in UTC. The time follows the ISO 8601 standard.
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the model was last modified, in UTC. The time follows the ISO 8601 standard.
    shared_ptr<string> gmtModifiedTime_ {};
    // Describes how to apply to downstream inference services. For example, describes the processor and container of Elastic Algorithm Service (EAS).
    Darabonba::Json inferenceSpec_ {};
    // The labels.
    shared_ptr<vector<Label>> labels_ {};
    // The metrics.
    Darabonba::Json metrics_ {};
    // The extended field. The value of this parameter is a JSON string.
    shared_ptr<string> options_ {};
    // The ID of the Alibaba Cloud account.
    shared_ptr<string> ownerId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
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
    // The source type of the model. Valid values:
    // 
    // *   Custom
    // *   PAIFlow
    // *   TrainingService
    shared_ptr<string> sourceType_ {};
    // The training configurations used for fine-tuning and incremental training.
    Darabonba::Json trainingSpec_ {};
    // The URI of the model version, which is the location where the model is stored. Valid values:
    // 
    // *   The HTTP(S) address of the model. Example: `https://myweb.com/mymodel.tar.gz`.
    // *   The Object Storage Service (OSS) path of the model, in the format of `oss://<bucket>.<endpoint>/object`. For endpoint, see [OSS regions and endpoints](https://help.aliyun.com/document_detail/31837.html). Example: `oss://mybucket.oss-cn-beijing.aliyuncs.com/mypath/`.
    shared_ptr<string> uri_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // The version description.
    shared_ptr<string> versionDescription_ {};
    // The model version.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
