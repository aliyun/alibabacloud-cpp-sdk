// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListLLMConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLLMConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LLMConfigs, LLMConfigs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLLMConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LLMConfigs, LLMConfigs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLLMConfigsResponseBody() = default ;
    ListLLMConfigsResponseBody(const ListLLMConfigsResponseBody &) = default ;
    ListLLMConfigsResponseBody(ListLLMConfigsResponseBody &&) = default ;
    ListLLMConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLLMConfigsResponseBody() = default ;
    ListLLMConfigsResponseBody& operator=(const ListLLMConfigsResponseBody &) = default ;
    ListLLMConfigsResponseBody& operator=(ListLLMConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LLMConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LLMConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_TO_JSON(EmbeddingDimension, embeddingDimension_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(LLMConfigId, LLMConfigId_);
        DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Rps, rps_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, LLMConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_FROM_JSON(EmbeddingDimension, embeddingDimension_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(LLMConfigId, LLMConfigId_);
        DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Rps, rps_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      LLMConfigs() = default ;
      LLMConfigs(const LLMConfigs &) = default ;
      LLMConfigs(LLMConfigs &&) = default ;
      LLMConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LLMConfigs() = default ;
      LLMConfigs& operator=(const LLMConfigs &) = default ;
      LLMConfigs& operator=(LLMConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->baseUrl_ == nullptr && this->batchSize_ == nullptr && this->embeddingDimension_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->LLMConfigId_ == nullptr && this->maxTokens_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr
        && this->rps_ == nullptr && this->workspaceId_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline LLMConfigs& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline LLMConfigs& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
      inline LLMConfigs& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // embeddingDimension Field Functions 
      bool hasEmbeddingDimension() const { return this->embeddingDimension_ != nullptr;};
      void deleteEmbeddingDimension() { this->embeddingDimension_ = nullptr;};
      inline int32_t getEmbeddingDimension() const { DARABONBA_PTR_GET_DEFAULT(embeddingDimension_, 0) };
      inline LLMConfigs& setEmbeddingDimension(int32_t embeddingDimension) { DARABONBA_PTR_SET_VALUE(embeddingDimension_, embeddingDimension) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline LLMConfigs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline LLMConfigs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // LLMConfigId Field Functions 
      bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
      void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
      inline string getLLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, "") };
      inline LLMConfigs& setLLMConfigId(string LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


      // maxTokens Field Functions 
      bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
      void deleteMaxTokens() { this->maxTokens_ = nullptr;};
      inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
      inline LLMConfigs& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline LLMConfigs& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LLMConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline LLMConfigs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // rps Field Functions 
      bool hasRps() const { return this->rps_ != nullptr;};
      void deleteRps() { this->rps_ = nullptr;};
      inline int32_t getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, 0) };
      inline LLMConfigs& setRps(int32_t rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline LLMConfigs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> baseUrl_ {};
      shared_ptr<int32_t> batchSize_ {};
      shared_ptr<int32_t> embeddingDimension_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> LLMConfigId_ {};
      shared_ptr<int32_t> maxTokens_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<int32_t> rps_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->LLMConfigs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // LLMConfigs Field Functions 
    bool hasLLMConfigs() const { return this->LLMConfigs_ != nullptr;};
    void deleteLLMConfigs() { this->LLMConfigs_ = nullptr;};
    inline const vector<ListLLMConfigsResponseBody::LLMConfigs> & getLLMConfigs() const { DARABONBA_PTR_GET_CONST(LLMConfigs_, vector<ListLLMConfigsResponseBody::LLMConfigs>) };
    inline vector<ListLLMConfigsResponseBody::LLMConfigs> getLLMConfigs() { DARABONBA_PTR_GET(LLMConfigs_, vector<ListLLMConfigsResponseBody::LLMConfigs>) };
    inline ListLLMConfigsResponseBody& setLLMConfigs(const vector<ListLLMConfigsResponseBody::LLMConfigs> & lLMConfigs) { DARABONBA_PTR_SET_VALUE(LLMConfigs_, lLMConfigs) };
    inline ListLLMConfigsResponseBody& setLLMConfigs(vector<ListLLMConfigsResponseBody::LLMConfigs> && lLMConfigs) { DARABONBA_PTR_SET_RVALUE(LLMConfigs_, lLMConfigs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLLMConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLLMConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLLMConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLLMConfigsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // This parameter is required.
    shared_ptr<vector<ListLLMConfigsResponseBody::LLMConfigs>> LLMConfigs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
