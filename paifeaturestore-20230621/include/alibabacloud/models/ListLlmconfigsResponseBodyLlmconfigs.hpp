// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMCONFIGSRESPONSEBODYLLMCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMCONFIGSRESPONSEBODYLLMCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListLLMConfigsResponseBodyLLMConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLLMConfigsResponseBodyLLMConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
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
    friend void from_json(const Darabonba::Json& j, ListLLMConfigsResponseBodyLLMConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
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
    ListLLMConfigsResponseBodyLLMConfigs() = default ;
    ListLLMConfigsResponseBodyLLMConfigs(const ListLLMConfigsResponseBodyLLMConfigs &) = default ;
    ListLLMConfigsResponseBodyLLMConfigs(ListLLMConfigsResponseBodyLLMConfigs &&) = default ;
    ListLLMConfigsResponseBodyLLMConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLLMConfigsResponseBodyLLMConfigs() = default ;
    ListLLMConfigsResponseBodyLLMConfigs& operator=(const ListLLMConfigsResponseBodyLLMConfigs &) = default ;
    ListLLMConfigsResponseBodyLLMConfigs& operator=(ListLLMConfigsResponseBodyLLMConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->baseUrl_ != nullptr && this->batchSize_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->LLMConfigId_ != nullptr
        && this->maxTokens_ != nullptr && this->model_ != nullptr && this->name_ != nullptr && this->resourceGroupId_ != nullptr && this->rps_ != nullptr
        && this->workspaceId_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline ListLLMConfigsResponseBodyLLMConfigs& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // LLMConfigId Field Functions 
    bool hasLLMConfigId() const { return this->LLMConfigId_ != nullptr;};
    void deleteLLMConfigId() { this->LLMConfigId_ = nullptr;};
    inline string LLMConfigId() const { DARABONBA_PTR_GET_DEFAULT(LLMConfigId_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setLLMConfigId(string LLMConfigId) { DARABONBA_PTR_SET_VALUE(LLMConfigId_, LLMConfigId) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t maxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline ListLLMConfigsResponseBodyLLMConfigs& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rps Field Functions 
    bool hasRps() const { return this->rps_ != nullptr;};
    void deleteRps() { this->rps_ = nullptr;};
    inline int32_t rps() const { DARABONBA_PTR_GET_DEFAULT(rps_, 0) };
    inline ListLLMConfigsResponseBodyLLMConfigs& setRps(int32_t rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListLLMConfigsResponseBodyLLMConfigs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> baseUrl_ = nullptr;
    std::shared_ptr<int32_t> batchSize_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> LLMConfigId_ = nullptr;
    std::shared_ptr<int32_t> maxTokens_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int32_t> rps_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
