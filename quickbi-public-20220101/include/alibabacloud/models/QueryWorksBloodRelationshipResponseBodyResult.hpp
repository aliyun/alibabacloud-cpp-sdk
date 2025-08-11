// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryWorksBloodRelationshipResponseBodyResultQueryParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksBloodRelationshipResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksBloodRelationshipResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(ComponentTypeCnName, componentTypeCnName_);
      DARABONBA_PTR_TO_JSON(ComponentTypeName, componentTypeName_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(QueryParams, queryParams_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksBloodRelationshipResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(ComponentTypeCnName, componentTypeCnName_);
      DARABONBA_PTR_FROM_JSON(ComponentTypeName, componentTypeName_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(QueryParams, queryParams_);
    };
    QueryWorksBloodRelationshipResponseBodyResult() = default ;
    QueryWorksBloodRelationshipResponseBodyResult(const QueryWorksBloodRelationshipResponseBodyResult &) = default ;
    QueryWorksBloodRelationshipResponseBodyResult(QueryWorksBloodRelationshipResponseBodyResult &&) = default ;
    QueryWorksBloodRelationshipResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksBloodRelationshipResponseBodyResult() = default ;
    QueryWorksBloodRelationshipResponseBodyResult& operator=(const QueryWorksBloodRelationshipResponseBodyResult &) = default ;
    QueryWorksBloodRelationshipResponseBodyResult& operator=(QueryWorksBloodRelationshipResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->componentName_ != nullptr && this->componentType_ != nullptr && this->componentTypeCnName_ != nullptr && this->componentTypeName_ != nullptr && this->datasetId_ != nullptr
        && this->queryParams_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResult& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResult& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline int32_t componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
    inline QueryWorksBloodRelationshipResponseBodyResult& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // componentTypeCnName Field Functions 
    bool hasComponentTypeCnName() const { return this->componentTypeCnName_ != nullptr;};
    void deleteComponentTypeCnName() { this->componentTypeCnName_ = nullptr;};
    inline string componentTypeCnName() const { DARABONBA_PTR_GET_DEFAULT(componentTypeCnName_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResult& setComponentTypeCnName(string componentTypeCnName) { DARABONBA_PTR_SET_VALUE(componentTypeCnName_, componentTypeCnName) };


    // componentTypeName Field Functions 
    bool hasComponentTypeName() const { return this->componentTypeName_ != nullptr;};
    void deleteComponentTypeName() { this->componentTypeName_ = nullptr;};
    inline string componentTypeName() const { DARABONBA_PTR_GET_DEFAULT(componentTypeName_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResult& setComponentTypeName(string componentTypeName) { DARABONBA_PTR_SET_VALUE(componentTypeName_, componentTypeName) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResult& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // queryParams Field Functions 
    bool hasQueryParams() const { return this->queryParams_ != nullptr;};
    void deleteQueryParams() { this->queryParams_ = nullptr;};
    inline const vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams> & queryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams>) };
    inline vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams> queryParams() { DARABONBA_PTR_GET(queryParams_, vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams>) };
    inline QueryWorksBloodRelationshipResponseBodyResult& setQueryParams(const vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams> & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
    inline QueryWorksBloodRelationshipResponseBodyResult& setQueryParams(vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams> && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


  protected:
    // The ID of the component that you want to modify.
    std::shared_ptr<string> componentId_ = nullptr;
    // The name of the component.
    std::shared_ptr<string> componentName_ = nullptr;
    // The type of the image component.
    std::shared_ptr<int32_t> componentType_ = nullptr;
    // Chinese name of the component type
    std::shared_ptr<string> componentTypeCnName_ = nullptr;
    // The name of the component type.
    std::shared_ptr<string> componentTypeName_ = nullptr;
    // The ID of the training dataset that you want to remove from the specified custom linguistic model.
    std::shared_ptr<string> datasetId_ = nullptr;
    // A list of query parameter reference columns.
    std::shared_ptr<vector<Models::QueryWorksBloodRelationshipResponseBodyResultQueryParams>> queryParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
