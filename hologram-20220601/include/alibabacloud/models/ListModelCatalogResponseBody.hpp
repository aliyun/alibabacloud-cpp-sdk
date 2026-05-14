// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELCATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELCATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListModelCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelList, modelList_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelList, modelList_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListModelCatalogResponseBody() = default ;
    ListModelCatalogResponseBody(const ListModelCatalogResponseBody &) = default ;
    ListModelCatalogResponseBody(ListModelCatalogResponseBody &&) = default ;
    ListModelCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelCatalogResponseBody() = default ;
    ListModelCatalogResponseBody& operator=(const ListModelCatalogResponseBody &) = default ;
    ListModelCatalogResponseBody& operator=(ListModelCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelList& obj) { 
        DARABONBA_PTR_TO_JSON(defaultParams, defaultParams_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(modelType, modelType_);
        DARABONBA_PTR_TO_JSON(paramsExample, paramsExample_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(serviceDeployRegion, serviceDeployRegion_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, ModelList& obj) { 
        DARABONBA_PTR_FROM_JSON(defaultParams, defaultParams_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(modelType, modelType_);
        DARABONBA_PTR_FROM_JSON(paramsExample, paramsExample_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(serviceDeployRegion, serviceDeployRegion_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      };
      ModelList() = default ;
      ModelList(const ModelList &) = default ;
      ModelList(ModelList &&) = default ;
      ModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelList() = default ;
      ModelList& operator=(const ModelList &) = default ;
      ModelList& operator=(ModelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultParams_ == nullptr
        && this->extra_ == nullptr && this->modelType_ == nullptr && this->paramsExample_ == nullptr && this->provider_ == nullptr && this->serviceDeployRegion_ == nullptr
        && this->taskType_ == nullptr; };
      // defaultParams Field Functions 
      bool hasDefaultParams() const { return this->defaultParams_ != nullptr;};
      void deleteDefaultParams() { this->defaultParams_ = nullptr;};
      inline string getDefaultParams() const { DARABONBA_PTR_GET_DEFAULT(defaultParams_, "") };
      inline ModelList& setDefaultParams(string defaultParams) { DARABONBA_PTR_SET_VALUE(defaultParams_, defaultParams) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline ModelList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline ModelList& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // paramsExample Field Functions 
      bool hasParamsExample() const { return this->paramsExample_ != nullptr;};
      void deleteParamsExample() { this->paramsExample_ = nullptr;};
      inline string getParamsExample() const { DARABONBA_PTR_GET_DEFAULT(paramsExample_, "") };
      inline ModelList& setParamsExample(string paramsExample) { DARABONBA_PTR_SET_VALUE(paramsExample_, paramsExample) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ModelList& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // serviceDeployRegion Field Functions 
      bool hasServiceDeployRegion() const { return this->serviceDeployRegion_ != nullptr;};
      void deleteServiceDeployRegion() { this->serviceDeployRegion_ = nullptr;};
      inline string getServiceDeployRegion() const { DARABONBA_PTR_GET_DEFAULT(serviceDeployRegion_, "") };
      inline ModelList& setServiceDeployRegion(string serviceDeployRegion) { DARABONBA_PTR_SET_VALUE(serviceDeployRegion_, serviceDeployRegion) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline ModelList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      shared_ptr<string> defaultParams_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<string> modelType_ {};
      shared_ptr<string> paramsExample_ {};
      shared_ptr<string> provider_ {};
      shared_ptr<string> serviceDeployRegion_ {};
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->modelList_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListModelCatalogResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelList Field Functions 
    bool hasModelList() const { return this->modelList_ != nullptr;};
    void deleteModelList() { this->modelList_ = nullptr;};
    inline const vector<ListModelCatalogResponseBody::ModelList> & getModelList() const { DARABONBA_PTR_GET_CONST(modelList_, vector<ListModelCatalogResponseBody::ModelList>) };
    inline vector<ListModelCatalogResponseBody::ModelList> getModelList() { DARABONBA_PTR_GET(modelList_, vector<ListModelCatalogResponseBody::ModelList>) };
    inline ListModelCatalogResponseBody& setModelList(const vector<ListModelCatalogResponseBody::ModelList> & modelList) { DARABONBA_PTR_SET_VALUE(modelList_, modelList) };
    inline ListModelCatalogResponseBody& setModelList(vector<ListModelCatalogResponseBody::ModelList> && modelList) { DARABONBA_PTR_SET_RVALUE(modelList_, modelList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelCatalogResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListModelCatalogResponseBody::ModelList>> modelList_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
