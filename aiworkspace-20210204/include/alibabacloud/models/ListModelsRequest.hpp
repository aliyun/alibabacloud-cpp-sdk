// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSREQUEST_HPP_
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
  class ListModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collections, collections_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collections, collections_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListModelsRequest() = default ;
    ListModelsRequest(const ListModelsRequest &) = default ;
    ListModelsRequest(ListModelsRequest &&) = default ;
    ListModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsRequest() = default ;
    ListModelsRequest& operator=(const ListModelsRequest &) = default ;
    ListModelsRequest& operator=(ListModelsRequest &&) = default ;
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
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
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
      // The parameter name. Example: ParameterSize.
      shared_ptr<string> column_ {};
      // The operator. Example: LessThan.
      shared_ptr<string> operator_ {};
      // The value. Example: 3000.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->collections_ == nullptr
        && this->conditions_ == nullptr && this->domain_ == nullptr && this->label_ == nullptr && this->modelName_ == nullptr && this->modelType_ == nullptr
        && this->order_ == nullptr && this->origin_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->provider_ == nullptr
        && this->query_ == nullptr && this->sortBy_ == nullptr && this->tag_ == nullptr && this->task_ == nullptr && this->workspaceId_ == nullptr; };
    // collections Field Functions 
    bool hasCollections() const { return this->collections_ != nullptr;};
    void deleteCollections() { this->collections_ = nullptr;};
    inline string getCollections() const { DARABONBA_PTR_GET_DEFAULT(collections_, "") };
    inline ListModelsRequest& setCollections(string collections) { DARABONBA_PTR_SET_VALUE(collections_, collections) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<ListModelsRequest::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<ListModelsRequest::Conditions>) };
    inline vector<ListModelsRequest::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<ListModelsRequest::Conditions>) };
    inline ListModelsRequest& setConditions(const vector<ListModelsRequest::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline ListModelsRequest& setConditions(vector<ListModelsRequest::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListModelsRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListModelsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListModelsRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListModelsRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListModelsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ListModelsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListModelsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListModelsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListModelsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListModelsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListModelsRequest::Tag>) };
    inline vector<ListModelsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListModelsRequest::Tag>) };
    inline ListModelsRequest& setTag(const vector<ListModelsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListModelsRequest& setTag(vector<ListModelsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline string getTask() const { DARABONBA_PTR_GET_DEFAULT(task_, "") };
    inline ListModelsRequest& setTask(string task) { DARABONBA_PTR_SET_VALUE(task_, task) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListModelsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The collections to which the model belongs. You can specify multiple collections. Separate them with commas (,).
    shared_ptr<string> collections_ {};
    // The conditions.
    shared_ptr<vector<ListModelsRequest::Conditions>> conditions_ {};
    // The domain. This parameter is used to filter the model list by domain. Examples: nlp (natural language processing) and cv (computer vision).
    shared_ptr<string> domain_ {};
    // The label string. This parameter is used to filter the list. Models are returned if their label keys or values contain the specified string.
    shared_ptr<string> label_ {};
    // The model name. This parameter is used to filter the model list.
    shared_ptr<string> modelName_ {};
    // The model type.
    shared_ptr<string> modelType_ {};
    // The order in which to sort the results of a paged query. The default value is ASC.
    // 
    // - ASC: ascending order.
    // 
    // - DESC: descending order.
    shared_ptr<string> order_ {};
    // The model source. This parameter is used to filter the model list by community or organization. Examples: ModelScope and HuggingFace.
    shared_ptr<string> origin_ {};
    // The page number of the model list. The value starts from 1. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of models to display on each page in a paged query. The default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // The provider. If you specify a provider, only the public models from that provider are returned. If you leave this parameter empty, your own models are returned.
    shared_ptr<string> provider_ {};
    // The query condition. This parameter performs a fuzzy match on ModelName, Domain, Task, LabelKey, and LabelValue. For example, if you enter nlp, models that match in any of these fields are returned.
    shared_ptr<string> query_ {};
    // The field to use for sorting in a paged query. Currently, only the GmtCreateTime field is supported.
    shared_ptr<string> sortBy_ {};
    // The list of tags.
    shared_ptr<vector<ListModelsRequest::Tag>> tag_ {};
    // The task. This parameter is used to filter the model list by task type. Example: text-classification.
    shared_ptr<string> task_ {};
    // The workspace ID. The returned list contains only the models in the specified workspace. For more information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
