// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELGALLERYMODELSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELGALLERYMODELSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class ListModelGalleryModelsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelGalleryModelsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collections, collections_);
      DARABONBA_PTR_TO_JSON(Compressible, compressible_);
      DARABONBA_PTR_TO_JSON(Conditions, conditionsShrink_);
      DARABONBA_PTR_TO_JSON(DeepThink, deepThink_);
      DARABONBA_PTR_TO_JSON(Demonstrable, demonstrable_);
      DARABONBA_PTR_TO_JSON(Deployable, deployable_);
      DARABONBA_PTR_TO_JSON(Distillable, distillable_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Evaluable, evaluable_);
      DARABONBA_PTR_TO_JSON(FunctionCall, functionCall_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelSeries, modelSeries_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SupportedCompressionResource, supportedCompressionResource_);
      DARABONBA_PTR_TO_JSON(SupportedDistillationResource, supportedDistillationResource_);
      DARABONBA_PTR_TO_JSON(SupportedEvaluationResource, supportedEvaluationResource_);
      DARABONBA_PTR_TO_JSON(SupportedInferenceResource, supportedInferenceResource_);
      DARABONBA_PTR_TO_JSON(SupportedTrainingResource, supportedTrainingResource_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(Trainable, trainable_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelGalleryModelsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collections, collections_);
      DARABONBA_PTR_FROM_JSON(Compressible, compressible_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditionsShrink_);
      DARABONBA_PTR_FROM_JSON(DeepThink, deepThink_);
      DARABONBA_PTR_FROM_JSON(Demonstrable, demonstrable_);
      DARABONBA_PTR_FROM_JSON(Deployable, deployable_);
      DARABONBA_PTR_FROM_JSON(Distillable, distillable_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Evaluable, evaluable_);
      DARABONBA_PTR_FROM_JSON(FunctionCall, functionCall_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelSeries, modelSeries_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SupportedCompressionResource, supportedCompressionResource_);
      DARABONBA_PTR_FROM_JSON(SupportedDistillationResource, supportedDistillationResource_);
      DARABONBA_PTR_FROM_JSON(SupportedEvaluationResource, supportedEvaluationResource_);
      DARABONBA_PTR_FROM_JSON(SupportedInferenceResource, supportedInferenceResource_);
      DARABONBA_PTR_FROM_JSON(SupportedTrainingResource, supportedTrainingResource_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(Trainable, trainable_);
    };
    ListModelGalleryModelsShrinkRequest() = default ;
    ListModelGalleryModelsShrinkRequest(const ListModelGalleryModelsShrinkRequest &) = default ;
    ListModelGalleryModelsShrinkRequest(ListModelGalleryModelsShrinkRequest &&) = default ;
    ListModelGalleryModelsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelGalleryModelsShrinkRequest() = default ;
    ListModelGalleryModelsShrinkRequest& operator=(const ListModelGalleryModelsShrinkRequest &) = default ;
    ListModelGalleryModelsShrinkRequest& operator=(ListModelGalleryModelsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collections_ == nullptr
        && this->compressible_ == nullptr && this->conditionsShrink_ == nullptr && this->deepThink_ == nullptr && this->demonstrable_ == nullptr && this->deployable_ == nullptr
        && this->distillable_ == nullptr && this->domain_ == nullptr && this->evaluable_ == nullptr && this->functionCall_ == nullptr && this->modelName_ == nullptr
        && this->modelSeries_ == nullptr && this->modelType_ == nullptr && this->order_ == nullptr && this->origin_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->query_ == nullptr && this->sortBy_ == nullptr && this->supportedCompressionResource_ == nullptr && this->supportedDistillationResource_ == nullptr
        && this->supportedEvaluationResource_ == nullptr && this->supportedInferenceResource_ == nullptr && this->supportedTrainingResource_ == nullptr && this->tagShrink_ == nullptr && this->task_ == nullptr
        && this->trainable_ == nullptr; };
    // collections Field Functions 
    bool hasCollections() const { return this->collections_ != nullptr;};
    void deleteCollections() { this->collections_ = nullptr;};
    inline string getCollections() const { DARABONBA_PTR_GET_DEFAULT(collections_, "") };
    inline ListModelGalleryModelsShrinkRequest& setCollections(string collections) { DARABONBA_PTR_SET_VALUE(collections_, collections) };


    // compressible Field Functions 
    bool hasCompressible() const { return this->compressible_ != nullptr;};
    void deleteCompressible() { this->compressible_ = nullptr;};
    inline bool getCompressible() const { DARABONBA_PTR_GET_DEFAULT(compressible_, false) };
    inline ListModelGalleryModelsShrinkRequest& setCompressible(bool compressible) { DARABONBA_PTR_SET_VALUE(compressible_, compressible) };


    // conditionsShrink Field Functions 
    bool hasConditionsShrink() const { return this->conditionsShrink_ != nullptr;};
    void deleteConditionsShrink() { this->conditionsShrink_ = nullptr;};
    inline string getConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(conditionsShrink_, "") };
    inline ListModelGalleryModelsShrinkRequest& setConditionsShrink(string conditionsShrink) { DARABONBA_PTR_SET_VALUE(conditionsShrink_, conditionsShrink) };


    // deepThink Field Functions 
    bool hasDeepThink() const { return this->deepThink_ != nullptr;};
    void deleteDeepThink() { this->deepThink_ = nullptr;};
    inline bool getDeepThink() const { DARABONBA_PTR_GET_DEFAULT(deepThink_, false) };
    inline ListModelGalleryModelsShrinkRequest& setDeepThink(bool deepThink) { DARABONBA_PTR_SET_VALUE(deepThink_, deepThink) };


    // demonstrable Field Functions 
    bool hasDemonstrable() const { return this->demonstrable_ != nullptr;};
    void deleteDemonstrable() { this->demonstrable_ = nullptr;};
    inline bool getDemonstrable() const { DARABONBA_PTR_GET_DEFAULT(demonstrable_, false) };
    inline ListModelGalleryModelsShrinkRequest& setDemonstrable(bool demonstrable) { DARABONBA_PTR_SET_VALUE(demonstrable_, demonstrable) };


    // deployable Field Functions 
    bool hasDeployable() const { return this->deployable_ != nullptr;};
    void deleteDeployable() { this->deployable_ = nullptr;};
    inline bool getDeployable() const { DARABONBA_PTR_GET_DEFAULT(deployable_, false) };
    inline ListModelGalleryModelsShrinkRequest& setDeployable(bool deployable) { DARABONBA_PTR_SET_VALUE(deployable_, deployable) };


    // distillable Field Functions 
    bool hasDistillable() const { return this->distillable_ != nullptr;};
    void deleteDistillable() { this->distillable_ = nullptr;};
    inline bool getDistillable() const { DARABONBA_PTR_GET_DEFAULT(distillable_, false) };
    inline ListModelGalleryModelsShrinkRequest& setDistillable(bool distillable) { DARABONBA_PTR_SET_VALUE(distillable_, distillable) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListModelGalleryModelsShrinkRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // evaluable Field Functions 
    bool hasEvaluable() const { return this->evaluable_ != nullptr;};
    void deleteEvaluable() { this->evaluable_ = nullptr;};
    inline bool getEvaluable() const { DARABONBA_PTR_GET_DEFAULT(evaluable_, false) };
    inline ListModelGalleryModelsShrinkRequest& setEvaluable(bool evaluable) { DARABONBA_PTR_SET_VALUE(evaluable_, evaluable) };


    // functionCall Field Functions 
    bool hasFunctionCall() const { return this->functionCall_ != nullptr;};
    void deleteFunctionCall() { this->functionCall_ = nullptr;};
    inline bool getFunctionCall() const { DARABONBA_PTR_GET_DEFAULT(functionCall_, false) };
    inline ListModelGalleryModelsShrinkRequest& setFunctionCall(bool functionCall) { DARABONBA_PTR_SET_VALUE(functionCall_, functionCall) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListModelGalleryModelsShrinkRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelSeries Field Functions 
    bool hasModelSeries() const { return this->modelSeries_ != nullptr;};
    void deleteModelSeries() { this->modelSeries_ = nullptr;};
    inline string getModelSeries() const { DARABONBA_PTR_GET_DEFAULT(modelSeries_, "") };
    inline ListModelGalleryModelsShrinkRequest& setModelSeries(string modelSeries) { DARABONBA_PTR_SET_VALUE(modelSeries_, modelSeries) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListModelGalleryModelsShrinkRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListModelGalleryModelsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListModelGalleryModelsShrinkRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelGalleryModelsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelGalleryModelsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListModelGalleryModelsShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListModelGalleryModelsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // supportedCompressionResource Field Functions 
    bool hasSupportedCompressionResource() const { return this->supportedCompressionResource_ != nullptr;};
    void deleteSupportedCompressionResource() { this->supportedCompressionResource_ = nullptr;};
    inline string getSupportedCompressionResource() const { DARABONBA_PTR_GET_DEFAULT(supportedCompressionResource_, "") };
    inline ListModelGalleryModelsShrinkRequest& setSupportedCompressionResource(string supportedCompressionResource) { DARABONBA_PTR_SET_VALUE(supportedCompressionResource_, supportedCompressionResource) };


    // supportedDistillationResource Field Functions 
    bool hasSupportedDistillationResource() const { return this->supportedDistillationResource_ != nullptr;};
    void deleteSupportedDistillationResource() { this->supportedDistillationResource_ = nullptr;};
    inline string getSupportedDistillationResource() const { DARABONBA_PTR_GET_DEFAULT(supportedDistillationResource_, "") };
    inline ListModelGalleryModelsShrinkRequest& setSupportedDistillationResource(string supportedDistillationResource) { DARABONBA_PTR_SET_VALUE(supportedDistillationResource_, supportedDistillationResource) };


    // supportedEvaluationResource Field Functions 
    bool hasSupportedEvaluationResource() const { return this->supportedEvaluationResource_ != nullptr;};
    void deleteSupportedEvaluationResource() { this->supportedEvaluationResource_ = nullptr;};
    inline string getSupportedEvaluationResource() const { DARABONBA_PTR_GET_DEFAULT(supportedEvaluationResource_, "") };
    inline ListModelGalleryModelsShrinkRequest& setSupportedEvaluationResource(string supportedEvaluationResource) { DARABONBA_PTR_SET_VALUE(supportedEvaluationResource_, supportedEvaluationResource) };


    // supportedInferenceResource Field Functions 
    bool hasSupportedInferenceResource() const { return this->supportedInferenceResource_ != nullptr;};
    void deleteSupportedInferenceResource() { this->supportedInferenceResource_ = nullptr;};
    inline string getSupportedInferenceResource() const { DARABONBA_PTR_GET_DEFAULT(supportedInferenceResource_, "") };
    inline ListModelGalleryModelsShrinkRequest& setSupportedInferenceResource(string supportedInferenceResource) { DARABONBA_PTR_SET_VALUE(supportedInferenceResource_, supportedInferenceResource) };


    // supportedTrainingResource Field Functions 
    bool hasSupportedTrainingResource() const { return this->supportedTrainingResource_ != nullptr;};
    void deleteSupportedTrainingResource() { this->supportedTrainingResource_ = nullptr;};
    inline string getSupportedTrainingResource() const { DARABONBA_PTR_GET_DEFAULT(supportedTrainingResource_, "") };
    inline ListModelGalleryModelsShrinkRequest& setSupportedTrainingResource(string supportedTrainingResource) { DARABONBA_PTR_SET_VALUE(supportedTrainingResource_, supportedTrainingResource) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListModelGalleryModelsShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline ListModelGalleryModelsShrinkRequest& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // trainable Field Functions 
    bool hasTrainable() const { return this->trainable_ != nullptr;};
    void deleteTrainable() { this->trainable_ = nullptr;};
    inline bool getTrainable() const { DARABONBA_PTR_GET_DEFAULT(trainable_, false) };
    inline ListModelGalleryModelsShrinkRequest& setTrainable(bool trainable) { DARABONBA_PTR_SET_VALUE(trainable_, trainable) };


  protected:
    shared_ptr<string> collections_ {};
    shared_ptr<bool> compressible_ {};
    shared_ptr<string> conditionsShrink_ {};
    shared_ptr<bool> deepThink_ {};
    shared_ptr<bool> demonstrable_ {};
    shared_ptr<bool> deployable_ {};
    shared_ptr<bool> distillable_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<bool> evaluable_ {};
    shared_ptr<bool> functionCall_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelSeries_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> origin_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> supportedCompressionResource_ {};
    shared_ptr<string> supportedDistillationResource_ {};
    shared_ptr<string> supportedEvaluationResource_ {};
    shared_ptr<string> supportedInferenceResource_ {};
    shared_ptr<string> supportedTrainingResource_ {};
    shared_ptr<string> tagShrink_ {};
    shared_ptr<string> task_ {};
    shared_ptr<bool> trainable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
