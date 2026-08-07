// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELGALLERYMODEL_HPP_
#define ALIBABACLOUD_MODELS_MODELGALLERYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class ModelGalleryModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelGalleryModel& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Compressible, compressible_);
      DARABONBA_PTR_TO_JSON(DeepThink, deepThink_);
      DARABONBA_PTR_TO_JSON(Demonstrable, demonstrable_);
      DARABONBA_PTR_TO_JSON(Deployable, deployable_);
      DARABONBA_PTR_TO_JSON(Distillable, distillable_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Evaluable, evaluable_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(FunctionCall, functionCall_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtLatestVersionModified, gmtLatestVersionModified_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LatestVersionName, latestVersionName_);
      DARABONBA_PTR_TO_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_TO_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelSeries, modelSeries_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_TO_JSON(SearchWords, searchWords_);
      DARABONBA_ANY_TO_JSON(SupportedCompressionMethods, supportedCompressionMethods_);
      DARABONBA_PTR_TO_JSON(SupportedCompressionResources, supportedCompressionResources_);
      DARABONBA_ANY_TO_JSON(SupportedDistillationMethods, supportedDistillationMethods_);
      DARABONBA_PTR_TO_JSON(SupportedDistillationResources, supportedDistillationResources_);
      DARABONBA_ANY_TO_JSON(SupportedEvaluationMethods, supportedEvaluationMethods_);
      DARABONBA_PTR_TO_JSON(SupportedEvaluationResources, supportedEvaluationResources_);
      DARABONBA_ANY_TO_JSON(SupportedInferenceMethods, supportedInferenceMethods_);
      DARABONBA_PTR_TO_JSON(SupportedInferenceResources, supportedInferenceResources_);
      DARABONBA_ANY_TO_JSON(SupportedTrainingMethods, supportedTrainingMethods_);
      DARABONBA_PTR_TO_JSON(SupportedTrainingResources, supportedTrainingResources_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(Trainable, trainable_);
    };
    friend void from_json(const Darabonba::Json& j, ModelGalleryModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Compressible, compressible_);
      DARABONBA_PTR_FROM_JSON(DeepThink, deepThink_);
      DARABONBA_PTR_FROM_JSON(Demonstrable, demonstrable_);
      DARABONBA_PTR_FROM_JSON(Deployable, deployable_);
      DARABONBA_PTR_FROM_JSON(Distillable, distillable_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Evaluable, evaluable_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(FunctionCall, functionCall_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtLatestVersionModified, gmtLatestVersionModified_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LatestVersionName, latestVersionName_);
      DARABONBA_PTR_FROM_JSON(ModelDescription, modelDescription_);
      DARABONBA_PTR_FROM_JSON(ModelDoc, modelDoc_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelSeries, modelSeries_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(ParameterSize, parameterSize_);
      DARABONBA_PTR_FROM_JSON(SearchWords, searchWords_);
      DARABONBA_ANY_FROM_JSON(SupportedCompressionMethods, supportedCompressionMethods_);
      DARABONBA_PTR_FROM_JSON(SupportedCompressionResources, supportedCompressionResources_);
      DARABONBA_ANY_FROM_JSON(SupportedDistillationMethods, supportedDistillationMethods_);
      DARABONBA_PTR_FROM_JSON(SupportedDistillationResources, supportedDistillationResources_);
      DARABONBA_ANY_FROM_JSON(SupportedEvaluationMethods, supportedEvaluationMethods_);
      DARABONBA_PTR_FROM_JSON(SupportedEvaluationResources, supportedEvaluationResources_);
      DARABONBA_ANY_FROM_JSON(SupportedInferenceMethods, supportedInferenceMethods_);
      DARABONBA_PTR_FROM_JSON(SupportedInferenceResources, supportedInferenceResources_);
      DARABONBA_ANY_FROM_JSON(SupportedTrainingMethods, supportedTrainingMethods_);
      DARABONBA_PTR_FROM_JSON(SupportedTrainingResources, supportedTrainingResources_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(Trainable, trainable_);
    };
    ModelGalleryModel() = default ;
    ModelGalleryModel(const ModelGalleryModel &) = default ;
    ModelGalleryModel(ModelGalleryModel &&) = default ;
    ModelGalleryModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelGalleryModel() = default ;
    ModelGalleryModel& operator=(const ModelGalleryModel &) = default ;
    ModelGalleryModel& operator=(ModelGalleryModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->collection_ == nullptr
        && this->compressible_ == nullptr && this->deepThink_ == nullptr && this->demonstrable_ == nullptr && this->deployable_ == nullptr && this->distillable_ == nullptr
        && this->domain_ == nullptr && this->evaluable_ == nullptr && this->extraInfo_ == nullptr && this->functionCall_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtLatestVersionModified_ == nullptr && this->gmtModifiedTime_ == nullptr && this->latestVersionName_ == nullptr && this->modelDescription_ == nullptr && this->modelDoc_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelSeries_ == nullptr && this->modelType_ == nullptr && this->orderNumber_ == nullptr
        && this->origin_ == nullptr && this->parameterSize_ == nullptr && this->searchWords_ == nullptr && this->supportedCompressionMethods_ == nullptr && this->supportedCompressionResources_ == nullptr
        && this->supportedDistillationMethods_ == nullptr && this->supportedDistillationResources_ == nullptr && this->supportedEvaluationMethods_ == nullptr && this->supportedEvaluationResources_ == nullptr && this->supportedInferenceMethods_ == nullptr
        && this->supportedInferenceResources_ == nullptr && this->supportedTrainingMethods_ == nullptr && this->supportedTrainingResources_ == nullptr && this->tags_ == nullptr && this->task_ == nullptr
        && this->trainable_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline ModelGalleryModel& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // compressible Field Functions 
    bool hasCompressible() const { return this->compressible_ != nullptr;};
    void deleteCompressible() { this->compressible_ = nullptr;};
    inline bool getCompressible() const { DARABONBA_PTR_GET_DEFAULT(compressible_, false) };
    inline ModelGalleryModel& setCompressible(bool compressible) { DARABONBA_PTR_SET_VALUE(compressible_, compressible) };


    // deepThink Field Functions 
    bool hasDeepThink() const { return this->deepThink_ != nullptr;};
    void deleteDeepThink() { this->deepThink_ = nullptr;};
    inline bool getDeepThink() const { DARABONBA_PTR_GET_DEFAULT(deepThink_, false) };
    inline ModelGalleryModel& setDeepThink(bool deepThink) { DARABONBA_PTR_SET_VALUE(deepThink_, deepThink) };


    // demonstrable Field Functions 
    bool hasDemonstrable() const { return this->demonstrable_ != nullptr;};
    void deleteDemonstrable() { this->demonstrable_ = nullptr;};
    inline bool getDemonstrable() const { DARABONBA_PTR_GET_DEFAULT(demonstrable_, false) };
    inline ModelGalleryModel& setDemonstrable(bool demonstrable) { DARABONBA_PTR_SET_VALUE(demonstrable_, demonstrable) };


    // deployable Field Functions 
    bool hasDeployable() const { return this->deployable_ != nullptr;};
    void deleteDeployable() { this->deployable_ = nullptr;};
    inline bool getDeployable() const { DARABONBA_PTR_GET_DEFAULT(deployable_, false) };
    inline ModelGalleryModel& setDeployable(bool deployable) { DARABONBA_PTR_SET_VALUE(deployable_, deployable) };


    // distillable Field Functions 
    bool hasDistillable() const { return this->distillable_ != nullptr;};
    void deleteDistillable() { this->distillable_ = nullptr;};
    inline bool getDistillable() const { DARABONBA_PTR_GET_DEFAULT(distillable_, false) };
    inline ModelGalleryModel& setDistillable(bool distillable) { DARABONBA_PTR_SET_VALUE(distillable_, distillable) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModelGalleryModel& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // evaluable Field Functions 
    bool hasEvaluable() const { return this->evaluable_ != nullptr;};
    void deleteEvaluable() { this->evaluable_ = nullptr;};
    inline bool getEvaluable() const { DARABONBA_PTR_GET_DEFAULT(evaluable_, false) };
    inline ModelGalleryModel& setEvaluable(bool evaluable) { DARABONBA_PTR_SET_VALUE(evaluable_, evaluable) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline ModelGalleryModel& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline ModelGalleryModel& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // functionCall Field Functions 
    bool hasFunctionCall() const { return this->functionCall_ != nullptr;};
    void deleteFunctionCall() { this->functionCall_ = nullptr;};
    inline bool getFunctionCall() const { DARABONBA_PTR_GET_DEFAULT(functionCall_, false) };
    inline ModelGalleryModel& setFunctionCall(bool functionCall) { DARABONBA_PTR_SET_VALUE(functionCall_, functionCall) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ModelGalleryModel& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtLatestVersionModified Field Functions 
    bool hasGmtLatestVersionModified() const { return this->gmtLatestVersionModified_ != nullptr;};
    void deleteGmtLatestVersionModified() { this->gmtLatestVersionModified_ = nullptr;};
    inline string getGmtLatestVersionModified() const { DARABONBA_PTR_GET_DEFAULT(gmtLatestVersionModified_, "") };
    inline ModelGalleryModel& setGmtLatestVersionModified(string gmtLatestVersionModified) { DARABONBA_PTR_SET_VALUE(gmtLatestVersionModified_, gmtLatestVersionModified) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ModelGalleryModel& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // latestVersionName Field Functions 
    bool hasLatestVersionName() const { return this->latestVersionName_ != nullptr;};
    void deleteLatestVersionName() { this->latestVersionName_ = nullptr;};
    inline string getLatestVersionName() const { DARABONBA_PTR_GET_DEFAULT(latestVersionName_, "") };
    inline ModelGalleryModel& setLatestVersionName(string latestVersionName) { DARABONBA_PTR_SET_VALUE(latestVersionName_, latestVersionName) };


    // modelDescription Field Functions 
    bool hasModelDescription() const { return this->modelDescription_ != nullptr;};
    void deleteModelDescription() { this->modelDescription_ = nullptr;};
    inline string getModelDescription() const { DARABONBA_PTR_GET_DEFAULT(modelDescription_, "") };
    inline ModelGalleryModel& setModelDescription(string modelDescription) { DARABONBA_PTR_SET_VALUE(modelDescription_, modelDescription) };


    // modelDoc Field Functions 
    bool hasModelDoc() const { return this->modelDoc_ != nullptr;};
    void deleteModelDoc() { this->modelDoc_ = nullptr;};
    inline string getModelDoc() const { DARABONBA_PTR_GET_DEFAULT(modelDoc_, "") };
    inline ModelGalleryModel& setModelDoc(string modelDoc) { DARABONBA_PTR_SET_VALUE(modelDoc_, modelDoc) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ModelGalleryModel& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModelGalleryModel& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelSeries Field Functions 
    bool hasModelSeries() const { return this->modelSeries_ != nullptr;};
    void deleteModelSeries() { this->modelSeries_ = nullptr;};
    inline string getModelSeries() const { DARABONBA_PTR_GET_DEFAULT(modelSeries_, "") };
    inline ModelGalleryModel& setModelSeries(string modelSeries) { DARABONBA_PTR_SET_VALUE(modelSeries_, modelSeries) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelGalleryModel& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline int64_t getOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, 0L) };
    inline ModelGalleryModel& setOrderNumber(int64_t orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ModelGalleryModel& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // parameterSize Field Functions 
    bool hasParameterSize() const { return this->parameterSize_ != nullptr;};
    void deleteParameterSize() { this->parameterSize_ = nullptr;};
    inline int64_t getParameterSize() const { DARABONBA_PTR_GET_DEFAULT(parameterSize_, 0L) };
    inline ModelGalleryModel& setParameterSize(int64_t parameterSize) { DARABONBA_PTR_SET_VALUE(parameterSize_, parameterSize) };


    // searchWords Field Functions 
    bool hasSearchWords() const { return this->searchWords_ != nullptr;};
    void deleteSearchWords() { this->searchWords_ = nullptr;};
    inline string getSearchWords() const { DARABONBA_PTR_GET_DEFAULT(searchWords_, "") };
    inline ModelGalleryModel& setSearchWords(string searchWords) { DARABONBA_PTR_SET_VALUE(searchWords_, searchWords) };


    // supportedCompressionMethods Field Functions 
    bool hasSupportedCompressionMethods() const { return this->supportedCompressionMethods_ != nullptr;};
    void deleteSupportedCompressionMethods() { this->supportedCompressionMethods_ = nullptr;};
    inline     const Darabonba::Json & getSupportedCompressionMethods() const { DARABONBA_GET(supportedCompressionMethods_) };
    Darabonba::Json & getSupportedCompressionMethods() { DARABONBA_GET(supportedCompressionMethods_) };
    inline ModelGalleryModel& setSupportedCompressionMethods(const Darabonba::Json & supportedCompressionMethods) { DARABONBA_SET_VALUE(supportedCompressionMethods_, supportedCompressionMethods) };
    inline ModelGalleryModel& setSupportedCompressionMethods(Darabonba::Json && supportedCompressionMethods) { DARABONBA_SET_RVALUE(supportedCompressionMethods_, supportedCompressionMethods) };


    // supportedCompressionResources Field Functions 
    bool hasSupportedCompressionResources() const { return this->supportedCompressionResources_ != nullptr;};
    void deleteSupportedCompressionResources() { this->supportedCompressionResources_ = nullptr;};
    inline string getSupportedCompressionResources() const { DARABONBA_PTR_GET_DEFAULT(supportedCompressionResources_, "") };
    inline ModelGalleryModel& setSupportedCompressionResources(string supportedCompressionResources) { DARABONBA_PTR_SET_VALUE(supportedCompressionResources_, supportedCompressionResources) };


    // supportedDistillationMethods Field Functions 
    bool hasSupportedDistillationMethods() const { return this->supportedDistillationMethods_ != nullptr;};
    void deleteSupportedDistillationMethods() { this->supportedDistillationMethods_ = nullptr;};
    inline     const Darabonba::Json & getSupportedDistillationMethods() const { DARABONBA_GET(supportedDistillationMethods_) };
    Darabonba::Json & getSupportedDistillationMethods() { DARABONBA_GET(supportedDistillationMethods_) };
    inline ModelGalleryModel& setSupportedDistillationMethods(const Darabonba::Json & supportedDistillationMethods) { DARABONBA_SET_VALUE(supportedDistillationMethods_, supportedDistillationMethods) };
    inline ModelGalleryModel& setSupportedDistillationMethods(Darabonba::Json && supportedDistillationMethods) { DARABONBA_SET_RVALUE(supportedDistillationMethods_, supportedDistillationMethods) };


    // supportedDistillationResources Field Functions 
    bool hasSupportedDistillationResources() const { return this->supportedDistillationResources_ != nullptr;};
    void deleteSupportedDistillationResources() { this->supportedDistillationResources_ = nullptr;};
    inline string getSupportedDistillationResources() const { DARABONBA_PTR_GET_DEFAULT(supportedDistillationResources_, "") };
    inline ModelGalleryModel& setSupportedDistillationResources(string supportedDistillationResources) { DARABONBA_PTR_SET_VALUE(supportedDistillationResources_, supportedDistillationResources) };


    // supportedEvaluationMethods Field Functions 
    bool hasSupportedEvaluationMethods() const { return this->supportedEvaluationMethods_ != nullptr;};
    void deleteSupportedEvaluationMethods() { this->supportedEvaluationMethods_ = nullptr;};
    inline     const Darabonba::Json & getSupportedEvaluationMethods() const { DARABONBA_GET(supportedEvaluationMethods_) };
    Darabonba::Json & getSupportedEvaluationMethods() { DARABONBA_GET(supportedEvaluationMethods_) };
    inline ModelGalleryModel& setSupportedEvaluationMethods(const Darabonba::Json & supportedEvaluationMethods) { DARABONBA_SET_VALUE(supportedEvaluationMethods_, supportedEvaluationMethods) };
    inline ModelGalleryModel& setSupportedEvaluationMethods(Darabonba::Json && supportedEvaluationMethods) { DARABONBA_SET_RVALUE(supportedEvaluationMethods_, supportedEvaluationMethods) };


    // supportedEvaluationResources Field Functions 
    bool hasSupportedEvaluationResources() const { return this->supportedEvaluationResources_ != nullptr;};
    void deleteSupportedEvaluationResources() { this->supportedEvaluationResources_ = nullptr;};
    inline string getSupportedEvaluationResources() const { DARABONBA_PTR_GET_DEFAULT(supportedEvaluationResources_, "") };
    inline ModelGalleryModel& setSupportedEvaluationResources(string supportedEvaluationResources) { DARABONBA_PTR_SET_VALUE(supportedEvaluationResources_, supportedEvaluationResources) };


    // supportedInferenceMethods Field Functions 
    bool hasSupportedInferenceMethods() const { return this->supportedInferenceMethods_ != nullptr;};
    void deleteSupportedInferenceMethods() { this->supportedInferenceMethods_ = nullptr;};
    inline     const Darabonba::Json & getSupportedInferenceMethods() const { DARABONBA_GET(supportedInferenceMethods_) };
    Darabonba::Json & getSupportedInferenceMethods() { DARABONBA_GET(supportedInferenceMethods_) };
    inline ModelGalleryModel& setSupportedInferenceMethods(const Darabonba::Json & supportedInferenceMethods) { DARABONBA_SET_VALUE(supportedInferenceMethods_, supportedInferenceMethods) };
    inline ModelGalleryModel& setSupportedInferenceMethods(Darabonba::Json && supportedInferenceMethods) { DARABONBA_SET_RVALUE(supportedInferenceMethods_, supportedInferenceMethods) };


    // supportedInferenceResources Field Functions 
    bool hasSupportedInferenceResources() const { return this->supportedInferenceResources_ != nullptr;};
    void deleteSupportedInferenceResources() { this->supportedInferenceResources_ = nullptr;};
    inline string getSupportedInferenceResources() const { DARABONBA_PTR_GET_DEFAULT(supportedInferenceResources_, "") };
    inline ModelGalleryModel& setSupportedInferenceResources(string supportedInferenceResources) { DARABONBA_PTR_SET_VALUE(supportedInferenceResources_, supportedInferenceResources) };


    // supportedTrainingMethods Field Functions 
    bool hasSupportedTrainingMethods() const { return this->supportedTrainingMethods_ != nullptr;};
    void deleteSupportedTrainingMethods() { this->supportedTrainingMethods_ = nullptr;};
    inline     const Darabonba::Json & getSupportedTrainingMethods() const { DARABONBA_GET(supportedTrainingMethods_) };
    Darabonba::Json & getSupportedTrainingMethods() { DARABONBA_GET(supportedTrainingMethods_) };
    inline ModelGalleryModel& setSupportedTrainingMethods(const Darabonba::Json & supportedTrainingMethods) { DARABONBA_SET_VALUE(supportedTrainingMethods_, supportedTrainingMethods) };
    inline ModelGalleryModel& setSupportedTrainingMethods(Darabonba::Json && supportedTrainingMethods) { DARABONBA_SET_RVALUE(supportedTrainingMethods_, supportedTrainingMethods) };


    // supportedTrainingResources Field Functions 
    bool hasSupportedTrainingResources() const { return this->supportedTrainingResources_ != nullptr;};
    void deleteSupportedTrainingResources() { this->supportedTrainingResources_ = nullptr;};
    inline string getSupportedTrainingResources() const { DARABONBA_PTR_GET_DEFAULT(supportedTrainingResources_, "") };
    inline ModelGalleryModel& setSupportedTrainingResources(string supportedTrainingResources) { DARABONBA_PTR_SET_VALUE(supportedTrainingResources_, supportedTrainingResources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const ModelGalleryModel::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ModelGalleryModel::Tags) };
    inline ModelGalleryModel::Tags getTags() { DARABONBA_PTR_GET(tags_, ModelGalleryModel::Tags) };
    inline ModelGalleryModel& setTags(const ModelGalleryModel::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ModelGalleryModel& setTags(ModelGalleryModel::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline ModelGalleryModel& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // trainable Field Functions 
    bool hasTrainable() const { return this->trainable_ != nullptr;};
    void deleteTrainable() { this->trainable_ = nullptr;};
    inline bool getTrainable() const { DARABONBA_PTR_GET_DEFAULT(trainable_, false) };
    inline ModelGalleryModel& setTrainable(bool trainable) { DARABONBA_PTR_SET_VALUE(trainable_, trainable) };


  protected:
    shared_ptr<string> collection_ {};
    shared_ptr<bool> compressible_ {};
    shared_ptr<bool> deepThink_ {};
    shared_ptr<bool> demonstrable_ {};
    shared_ptr<bool> deployable_ {};
    shared_ptr<bool> distillable_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<bool> evaluable_ {};
    Darabonba::Json extraInfo_ {};
    shared_ptr<bool> functionCall_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtLatestVersionModified_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> latestVersionName_ {};
    shared_ptr<string> modelDescription_ {};
    shared_ptr<string> modelDoc_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelSeries_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<int64_t> orderNumber_ {};
    shared_ptr<string> origin_ {};
    shared_ptr<int64_t> parameterSize_ {};
    shared_ptr<string> searchWords_ {};
    Darabonba::Json supportedCompressionMethods_ {};
    shared_ptr<string> supportedCompressionResources_ {};
    Darabonba::Json supportedDistillationMethods_ {};
    shared_ptr<string> supportedDistillationResources_ {};
    Darabonba::Json supportedEvaluationMethods_ {};
    shared_ptr<string> supportedEvaluationResources_ {};
    Darabonba::Json supportedInferenceMethods_ {};
    shared_ptr<string> supportedInferenceResources_ {};
    Darabonba::Json supportedTrainingMethods_ {};
    shared_ptr<string> supportedTrainingResources_ {};
    shared_ptr<ModelGalleryModel::Tags> tags_ {};
    shared_ptr<string> task_ {};
    shared_ptr<bool> trainable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
