// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELGALLERYMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELGALLERYMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class ListModelGalleryModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelGalleryModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collections, collections_);
      DARABONBA_PTR_TO_JSON(Compressible, compressible_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
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
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(Trainable, trainable_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelGalleryModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collections, collections_);
      DARABONBA_PTR_FROM_JSON(Compressible, compressible_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
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
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(Trainable, trainable_);
    };
    ListModelGalleryModelsRequest() = default ;
    ListModelGalleryModelsRequest(const ListModelGalleryModelsRequest &) = default ;
    ListModelGalleryModelsRequest(ListModelGalleryModelsRequest &&) = default ;
    ListModelGalleryModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelGalleryModelsRequest() = default ;
    ListModelGalleryModelsRequest& operator=(const ListModelGalleryModelsRequest &) = default ;
    ListModelGalleryModelsRequest& operator=(ListModelGalleryModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Conditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Conditions() = default ;
      Conditions(const Conditions &) = default ;
      Conditions(Conditions &&) = default ;
      Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conditions() = default ;
      Conditions& operator=(const Conditions &) = default ;
      Conditions& operator=(Conditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->column_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
      inline Conditions& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Conditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> column_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->collections_ == nullptr
        && this->compressible_ == nullptr && this->conditions_ == nullptr && this->deepThink_ == nullptr && this->demonstrable_ == nullptr && this->deployable_ == nullptr
        && this->distillable_ == nullptr && this->domain_ == nullptr && this->evaluable_ == nullptr && this->functionCall_ == nullptr && this->modelName_ == nullptr
        && this->modelSeries_ == nullptr && this->modelType_ == nullptr && this->order_ == nullptr && this->origin_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->query_ == nullptr && this->sortBy_ == nullptr && this->supportedCompressionResource_ == nullptr && this->supportedDistillationResource_ == nullptr
        && this->supportedEvaluationResource_ == nullptr && this->supportedInferenceResource_ == nullptr && this->supportedTrainingResource_ == nullptr && this->tag_ == nullptr && this->task_ == nullptr
        && this->trainable_ == nullptr; };
    // collections Field Functions 
    bool hasCollections() const { return this->collections_ != nullptr;};
    void deleteCollections() { this->collections_ = nullptr;};
    inline string getCollections() const { DARABONBA_PTR_GET_DEFAULT(collections_, "") };
    inline ListModelGalleryModelsRequest& setCollections(string collections) { DARABONBA_PTR_SET_VALUE(collections_, collections) };


    // compressible Field Functions 
    bool hasCompressible() const { return this->compressible_ != nullptr;};
    void deleteCompressible() { this->compressible_ = nullptr;};
    inline bool getCompressible() const { DARABONBA_PTR_GET_DEFAULT(compressible_, false) };
    inline ListModelGalleryModelsRequest& setCompressible(bool compressible) { DARABONBA_PTR_SET_VALUE(compressible_, compressible) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<ListModelGalleryModelsRequest::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<ListModelGalleryModelsRequest::Conditions>) };
    inline vector<ListModelGalleryModelsRequest::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<ListModelGalleryModelsRequest::Conditions>) };
    inline ListModelGalleryModelsRequest& setConditions(const vector<ListModelGalleryModelsRequest::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline ListModelGalleryModelsRequest& setConditions(vector<ListModelGalleryModelsRequest::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // deepThink Field Functions 
    bool hasDeepThink() const { return this->deepThink_ != nullptr;};
    void deleteDeepThink() { this->deepThink_ = nullptr;};
    inline bool getDeepThink() const { DARABONBA_PTR_GET_DEFAULT(deepThink_, false) };
    inline ListModelGalleryModelsRequest& setDeepThink(bool deepThink) { DARABONBA_PTR_SET_VALUE(deepThink_, deepThink) };


    // demonstrable Field Functions 
    bool hasDemonstrable() const { return this->demonstrable_ != nullptr;};
    void deleteDemonstrable() { this->demonstrable_ = nullptr;};
    inline bool getDemonstrable() const { DARABONBA_PTR_GET_DEFAULT(demonstrable_, false) };
    inline ListModelGalleryModelsRequest& setDemonstrable(bool demonstrable) { DARABONBA_PTR_SET_VALUE(demonstrable_, demonstrable) };


    // deployable Field Functions 
    bool hasDeployable() const { return this->deployable_ != nullptr;};
    void deleteDeployable() { this->deployable_ = nullptr;};
    inline bool getDeployable() const { DARABONBA_PTR_GET_DEFAULT(deployable_, false) };
    inline ListModelGalleryModelsRequest& setDeployable(bool deployable) { DARABONBA_PTR_SET_VALUE(deployable_, deployable) };


    // distillable Field Functions 
    bool hasDistillable() const { return this->distillable_ != nullptr;};
    void deleteDistillable() { this->distillable_ = nullptr;};
    inline bool getDistillable() const { DARABONBA_PTR_GET_DEFAULT(distillable_, false) };
    inline ListModelGalleryModelsRequest& setDistillable(bool distillable) { DARABONBA_PTR_SET_VALUE(distillable_, distillable) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListModelGalleryModelsRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // evaluable Field Functions 
    bool hasEvaluable() const { return this->evaluable_ != nullptr;};
    void deleteEvaluable() { this->evaluable_ = nullptr;};
    inline bool getEvaluable() const { DARABONBA_PTR_GET_DEFAULT(evaluable_, false) };
    inline ListModelGalleryModelsRequest& setEvaluable(bool evaluable) { DARABONBA_PTR_SET_VALUE(evaluable_, evaluable) };


    // functionCall Field Functions 
    bool hasFunctionCall() const { return this->functionCall_ != nullptr;};
    void deleteFunctionCall() { this->functionCall_ = nullptr;};
    inline bool getFunctionCall() const { DARABONBA_PTR_GET_DEFAULT(functionCall_, false) };
    inline ListModelGalleryModelsRequest& setFunctionCall(bool functionCall) { DARABONBA_PTR_SET_VALUE(functionCall_, functionCall) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListModelGalleryModelsRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelSeries Field Functions 
    bool hasModelSeries() const { return this->modelSeries_ != nullptr;};
    void deleteModelSeries() { this->modelSeries_ = nullptr;};
    inline string getModelSeries() const { DARABONBA_PTR_GET_DEFAULT(modelSeries_, "") };
    inline ListModelGalleryModelsRequest& setModelSeries(string modelSeries) { DARABONBA_PTR_SET_VALUE(modelSeries_, modelSeries) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListModelGalleryModelsRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListModelGalleryModelsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListModelGalleryModelsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelGalleryModelsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelGalleryModelsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListModelGalleryModelsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListModelGalleryModelsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // supportedCompressionResource Field Functions 
    bool hasSupportedCompressionResource() const { return this->supportedCompressionResource_ != nullptr;};
    void deleteSupportedCompressionResource() { this->supportedCompressionResource_ = nullptr;};
    inline string getSupportedCompressionResource() const { DARABONBA_PTR_GET_DEFAULT(supportedCompressionResource_, "") };
    inline ListModelGalleryModelsRequest& setSupportedCompressionResource(string supportedCompressionResource) { DARABONBA_PTR_SET_VALUE(supportedCompressionResource_, supportedCompressionResource) };


    // supportedDistillationResource Field Functions 
    bool hasSupportedDistillationResource() const { return this->supportedDistillationResource_ != nullptr;};
    void deleteSupportedDistillationResource() { this->supportedDistillationResource_ = nullptr;};
    inline string getSupportedDistillationResource() const { DARABONBA_PTR_GET_DEFAULT(supportedDistillationResource_, "") };
    inline ListModelGalleryModelsRequest& setSupportedDistillationResource(string supportedDistillationResource) { DARABONBA_PTR_SET_VALUE(supportedDistillationResource_, supportedDistillationResource) };


    // supportedEvaluationResource Field Functions 
    bool hasSupportedEvaluationResource() const { return this->supportedEvaluationResource_ != nullptr;};
    void deleteSupportedEvaluationResource() { this->supportedEvaluationResource_ = nullptr;};
    inline string getSupportedEvaluationResource() const { DARABONBA_PTR_GET_DEFAULT(supportedEvaluationResource_, "") };
    inline ListModelGalleryModelsRequest& setSupportedEvaluationResource(string supportedEvaluationResource) { DARABONBA_PTR_SET_VALUE(supportedEvaluationResource_, supportedEvaluationResource) };


    // supportedInferenceResource Field Functions 
    bool hasSupportedInferenceResource() const { return this->supportedInferenceResource_ != nullptr;};
    void deleteSupportedInferenceResource() { this->supportedInferenceResource_ = nullptr;};
    inline string getSupportedInferenceResource() const { DARABONBA_PTR_GET_DEFAULT(supportedInferenceResource_, "") };
    inline ListModelGalleryModelsRequest& setSupportedInferenceResource(string supportedInferenceResource) { DARABONBA_PTR_SET_VALUE(supportedInferenceResource_, supportedInferenceResource) };


    // supportedTrainingResource Field Functions 
    bool hasSupportedTrainingResource() const { return this->supportedTrainingResource_ != nullptr;};
    void deleteSupportedTrainingResource() { this->supportedTrainingResource_ = nullptr;};
    inline string getSupportedTrainingResource() const { DARABONBA_PTR_GET_DEFAULT(supportedTrainingResource_, "") };
    inline ListModelGalleryModelsRequest& setSupportedTrainingResource(string supportedTrainingResource) { DARABONBA_PTR_SET_VALUE(supportedTrainingResource_, supportedTrainingResource) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListModelGalleryModelsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListModelGalleryModelsRequest::Tag>) };
    inline vector<ListModelGalleryModelsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListModelGalleryModelsRequest::Tag>) };
    inline ListModelGalleryModelsRequest& setTag(const vector<ListModelGalleryModelsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListModelGalleryModelsRequest& setTag(vector<ListModelGalleryModelsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline ListModelGalleryModelsRequest& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // trainable Field Functions 
    bool hasTrainable() const { return this->trainable_ != nullptr;};
    void deleteTrainable() { this->trainable_ = nullptr;};
    inline bool getTrainable() const { DARABONBA_PTR_GET_DEFAULT(trainable_, false) };
    inline ListModelGalleryModelsRequest& setTrainable(bool trainable) { DARABONBA_PTR_SET_VALUE(trainable_, trainable) };


  protected:
    shared_ptr<string> collections_ {};
    shared_ptr<bool> compressible_ {};
    shared_ptr<vector<ListModelGalleryModelsRequest::Conditions>> conditions_ {};
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
    shared_ptr<vector<ListModelGalleryModelsRequest::Tag>> tag_ {};
    shared_ptr<string> task_ {};
    shared_ptr<bool> trainable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
