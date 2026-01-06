// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELVERSION_HPP_
#define ALIBABACLOUD_MODELS_MODELVERSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ModelVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelVersion& obj) { 
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
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_ANY_TO_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelVersion& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_ANY_FROM_JSON(TrainingSpec, trainingSpec_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ModelVersion() = default ;
    ModelVersion(const ModelVersion &) = default ;
    ModelVersion(ModelVersion &&) = default ;
    ModelVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelVersion() = default ;
    ModelVersion& operator=(const ModelVersion &) = default ;
    ModelVersion& operator=(ModelVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->approvalStatus_ == nullptr
        && this->compressionSpec_ == nullptr && this->distillationSpec_ == nullptr && this->evaluationSpec_ == nullptr && this->extraInfo_ == nullptr && this->formatType_ == nullptr
        && this->frameworkType_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->inferenceSpec_ == nullptr && this->labels_ == nullptr
        && this->metrics_ == nullptr && this->options_ == nullptr && this->ownerId_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr
        && this->trainingSpec_ == nullptr && this->uri_ == nullptr && this->userId_ == nullptr && this->versionDescription_ == nullptr && this->versionName_ == nullptr; };
    // approvalStatus Field Functions 
    bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
    void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
    inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
    inline ModelVersion& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


    // compressionSpec Field Functions 
    bool hasCompressionSpec() const { return this->compressionSpec_ != nullptr;};
    void deleteCompressionSpec() { this->compressionSpec_ = nullptr;};
    inline     const Darabonba::Json & getCompressionSpec() const { DARABONBA_GET(compressionSpec_) };
    Darabonba::Json & getCompressionSpec() { DARABONBA_GET(compressionSpec_) };
    inline ModelVersion& setCompressionSpec(const Darabonba::Json & compressionSpec) { DARABONBA_SET_VALUE(compressionSpec_, compressionSpec) };
    inline ModelVersion& setCompressionSpec(Darabonba::Json && compressionSpec) { DARABONBA_SET_RVALUE(compressionSpec_, compressionSpec) };


    // distillationSpec Field Functions 
    bool hasDistillationSpec() const { return this->distillationSpec_ != nullptr;};
    void deleteDistillationSpec() { this->distillationSpec_ = nullptr;};
    inline     const Darabonba::Json & getDistillationSpec() const { DARABONBA_GET(distillationSpec_) };
    Darabonba::Json & getDistillationSpec() { DARABONBA_GET(distillationSpec_) };
    inline ModelVersion& setDistillationSpec(const Darabonba::Json & distillationSpec) { DARABONBA_SET_VALUE(distillationSpec_, distillationSpec) };
    inline ModelVersion& setDistillationSpec(Darabonba::Json && distillationSpec) { DARABONBA_SET_RVALUE(distillationSpec_, distillationSpec) };


    // evaluationSpec Field Functions 
    bool hasEvaluationSpec() const { return this->evaluationSpec_ != nullptr;};
    void deleteEvaluationSpec() { this->evaluationSpec_ = nullptr;};
    inline     const Darabonba::Json & getEvaluationSpec() const { DARABONBA_GET(evaluationSpec_) };
    Darabonba::Json & getEvaluationSpec() { DARABONBA_GET(evaluationSpec_) };
    inline ModelVersion& setEvaluationSpec(const Darabonba::Json & evaluationSpec) { DARABONBA_SET_VALUE(evaluationSpec_, evaluationSpec) };
    inline ModelVersion& setEvaluationSpec(Darabonba::Json && evaluationSpec) { DARABONBA_SET_RVALUE(evaluationSpec_, evaluationSpec) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline ModelVersion& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline ModelVersion& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline ModelVersion& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // frameworkType Field Functions 
    bool hasFrameworkType() const { return this->frameworkType_ != nullptr;};
    void deleteFrameworkType() { this->frameworkType_ = nullptr;};
    inline string getFrameworkType() const { DARABONBA_PTR_GET_DEFAULT(frameworkType_, "") };
    inline ModelVersion& setFrameworkType(string frameworkType) { DARABONBA_PTR_SET_VALUE(frameworkType_, frameworkType) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ModelVersion& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ModelVersion& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // inferenceSpec Field Functions 
    bool hasInferenceSpec() const { return this->inferenceSpec_ != nullptr;};
    void deleteInferenceSpec() { this->inferenceSpec_ = nullptr;};
    inline     const Darabonba::Json & getInferenceSpec() const { DARABONBA_GET(inferenceSpec_) };
    Darabonba::Json & getInferenceSpec() { DARABONBA_GET(inferenceSpec_) };
    inline ModelVersion& setInferenceSpec(const Darabonba::Json & inferenceSpec) { DARABONBA_SET_VALUE(inferenceSpec_, inferenceSpec) };
    inline ModelVersion& setInferenceSpec(Darabonba::Json && inferenceSpec) { DARABONBA_SET_RVALUE(inferenceSpec_, inferenceSpec) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ModelVersion::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ModelVersion::Labels>) };
    inline vector<ModelVersion::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<ModelVersion::Labels>) };
    inline ModelVersion& setLabels(const vector<ModelVersion::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ModelVersion& setLabels(vector<ModelVersion::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & getMetrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & getMetrics() { DARABONBA_GET(metrics_) };
    inline ModelVersion& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline ModelVersion& setMetrics(Darabonba::Json && metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline ModelVersion& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModelVersion& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ModelVersion& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModelVersion& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // trainingSpec Field Functions 
    bool hasTrainingSpec() const { return this->trainingSpec_ != nullptr;};
    void deleteTrainingSpec() { this->trainingSpec_ = nullptr;};
    inline     const Darabonba::Json & getTrainingSpec() const { DARABONBA_GET(trainingSpec_) };
    Darabonba::Json & getTrainingSpec() { DARABONBA_GET(trainingSpec_) };
    inline ModelVersion& setTrainingSpec(const Darabonba::Json & trainingSpec) { DARABONBA_SET_VALUE(trainingSpec_, trainingSpec) };
    inline ModelVersion& setTrainingSpec(Darabonba::Json && trainingSpec) { DARABONBA_SET_RVALUE(trainingSpec_, trainingSpec) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline ModelVersion& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ModelVersion& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline ModelVersion& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ModelVersion& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    shared_ptr<string> approvalStatus_ {};
    Darabonba::Json compressionSpec_ {};
    Darabonba::Json distillationSpec_ {};
    Darabonba::Json evaluationSpec_ {};
    Darabonba::Json extraInfo_ {};
    shared_ptr<string> formatType_ {};
    shared_ptr<string> frameworkType_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    Darabonba::Json inferenceSpec_ {};
    shared_ptr<vector<ModelVersion::Labels>> labels_ {};
    Darabonba::Json metrics_ {};
    shared_ptr<string> options_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> sourceId_ {};
    shared_ptr<string> sourceType_ {};
    Darabonba::Json trainingSpec_ {};
    shared_ptr<string> uri_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> versionDescription_ {};
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
