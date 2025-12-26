// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestChunkConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateKnowledgeBaseRequestDataSources.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestEmbeddingConfig.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestIndexColumnConfig.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestMetaDataConfig.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseRequestVectorDBConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ChunkConfig, chunkConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(IndexColumnConfig, indexColumnConfig_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_TO_JSON(MetaDataConfig, metaDataConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputDir, outputDir_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(VectorDBConfig, vectorDBConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ChunkConfig, chunkConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(IndexColumnConfig, indexColumnConfig_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_FROM_JSON(MetaDataConfig, metaDataConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputDir, outputDir_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(VectorDBConfig, vectorDBConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateKnowledgeBaseRequest() = default ;
    CreateKnowledgeBaseRequest(const CreateKnowledgeBaseRequest &) = default ;
    CreateKnowledgeBaseRequest(CreateKnowledgeBaseRequest &&) = default ;
    CreateKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequest() = default ;
    CreateKnowledgeBaseRequest& operator=(const CreateKnowledgeBaseRequest &) = default ;
    CreateKnowledgeBaseRequest& operator=(CreateKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->chunkConfig_ == nullptr && return this->dataSources_ == nullptr && return this->description_ == nullptr && return this->embeddingConfig_ == nullptr && return this->indexColumnConfig_ == nullptr
        && return this->knowledgeBaseType_ == nullptr && return this->metaDataConfig_ == nullptr && return this->name_ == nullptr && return this->outputDir_ == nullptr && return this->runtimeId_ == nullptr
        && return this->vectorDBConfig_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateKnowledgeBaseRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // chunkConfig Field Functions 
    bool hasChunkConfig() const { return this->chunkConfig_ != nullptr;};
    void deleteChunkConfig() { this->chunkConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequestChunkConfig & chunkConfig() const { DARABONBA_PTR_GET_CONST(chunkConfig_, CreateKnowledgeBaseRequestChunkConfig) };
    inline CreateKnowledgeBaseRequestChunkConfig chunkConfig() { DARABONBA_PTR_GET(chunkConfig_, CreateKnowledgeBaseRequestChunkConfig) };
    inline CreateKnowledgeBaseRequest& setChunkConfig(const CreateKnowledgeBaseRequestChunkConfig & chunkConfig) { DARABONBA_PTR_SET_VALUE(chunkConfig_, chunkConfig) };
    inline CreateKnowledgeBaseRequest& setChunkConfig(CreateKnowledgeBaseRequestChunkConfig && chunkConfig) { DARABONBA_PTR_SET_RVALUE(chunkConfig_, chunkConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<CreateKnowledgeBaseRequestDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<CreateKnowledgeBaseRequestDataSources>) };
    inline vector<CreateKnowledgeBaseRequestDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<CreateKnowledgeBaseRequestDataSources>) };
    inline CreateKnowledgeBaseRequest& setDataSources(const vector<CreateKnowledgeBaseRequestDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateKnowledgeBaseRequest& setDataSources(vector<CreateKnowledgeBaseRequestDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequestEmbeddingConfig & embeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, CreateKnowledgeBaseRequestEmbeddingConfig) };
    inline CreateKnowledgeBaseRequestEmbeddingConfig embeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, CreateKnowledgeBaseRequestEmbeddingConfig) };
    inline CreateKnowledgeBaseRequest& setEmbeddingConfig(const CreateKnowledgeBaseRequestEmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline CreateKnowledgeBaseRequest& setEmbeddingConfig(CreateKnowledgeBaseRequestEmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // indexColumnConfig Field Functions 
    bool hasIndexColumnConfig() const { return this->indexColumnConfig_ != nullptr;};
    void deleteIndexColumnConfig() { this->indexColumnConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequestIndexColumnConfig & indexColumnConfig() const { DARABONBA_PTR_GET_CONST(indexColumnConfig_, CreateKnowledgeBaseRequestIndexColumnConfig) };
    inline CreateKnowledgeBaseRequestIndexColumnConfig indexColumnConfig() { DARABONBA_PTR_GET(indexColumnConfig_, CreateKnowledgeBaseRequestIndexColumnConfig) };
    inline CreateKnowledgeBaseRequest& setIndexColumnConfig(const CreateKnowledgeBaseRequestIndexColumnConfig & indexColumnConfig) { DARABONBA_PTR_SET_VALUE(indexColumnConfig_, indexColumnConfig) };
    inline CreateKnowledgeBaseRequest& setIndexColumnConfig(CreateKnowledgeBaseRequestIndexColumnConfig && indexColumnConfig) { DARABONBA_PTR_SET_RVALUE(indexColumnConfig_, indexColumnConfig) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string knowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline CreateKnowledgeBaseRequest& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // metaDataConfig Field Functions 
    bool hasMetaDataConfig() const { return this->metaDataConfig_ != nullptr;};
    void deleteMetaDataConfig() { this->metaDataConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequestMetaDataConfig & metaDataConfig() const { DARABONBA_PTR_GET_CONST(metaDataConfig_, CreateKnowledgeBaseRequestMetaDataConfig) };
    inline CreateKnowledgeBaseRequestMetaDataConfig metaDataConfig() { DARABONBA_PTR_GET(metaDataConfig_, CreateKnowledgeBaseRequestMetaDataConfig) };
    inline CreateKnowledgeBaseRequest& setMetaDataConfig(const CreateKnowledgeBaseRequestMetaDataConfig & metaDataConfig) { DARABONBA_PTR_SET_VALUE(metaDataConfig_, metaDataConfig) };
    inline CreateKnowledgeBaseRequest& setMetaDataConfig(CreateKnowledgeBaseRequestMetaDataConfig && metaDataConfig) { DARABONBA_PTR_SET_RVALUE(metaDataConfig_, metaDataConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputDir Field Functions 
    bool hasOutputDir() const { return this->outputDir_ != nullptr;};
    void deleteOutputDir() { this->outputDir_ = nullptr;};
    inline string outputDir() const { DARABONBA_PTR_GET_DEFAULT(outputDir_, "") };
    inline CreateKnowledgeBaseRequest& setOutputDir(string outputDir) { DARABONBA_PTR_SET_VALUE(outputDir_, outputDir) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string runtimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline CreateKnowledgeBaseRequest& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // vectorDBConfig Field Functions 
    bool hasVectorDBConfig() const { return this->vectorDBConfig_ != nullptr;};
    void deleteVectorDBConfig() { this->vectorDBConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequestVectorDBConfig & vectorDBConfig() const { DARABONBA_PTR_GET_CONST(vectorDBConfig_, CreateKnowledgeBaseRequestVectorDBConfig) };
    inline CreateKnowledgeBaseRequestVectorDBConfig vectorDBConfig() { DARABONBA_PTR_GET(vectorDBConfig_, CreateKnowledgeBaseRequestVectorDBConfig) };
    inline CreateKnowledgeBaseRequest& setVectorDBConfig(const CreateKnowledgeBaseRequestVectorDBConfig & vectorDBConfig) { DARABONBA_PTR_SET_VALUE(vectorDBConfig_, vectorDBConfig) };
    inline CreateKnowledgeBaseRequest& setVectorDBConfig(CreateKnowledgeBaseRequestVectorDBConfig && vectorDBConfig) { DARABONBA_PTR_SET_RVALUE(vectorDBConfig_, vectorDBConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateKnowledgeBaseRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateKnowledgeBaseRequestChunkConfig> chunkConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateKnowledgeBaseRequestDataSources>> dataSources_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateKnowledgeBaseRequestEmbeddingConfig> embeddingConfig_ = nullptr;
    std::shared_ptr<CreateKnowledgeBaseRequestIndexColumnConfig> indexColumnConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> knowledgeBaseType_ = nullptr;
    std::shared_ptr<CreateKnowledgeBaseRequestMetaDataConfig> metaDataConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputDir_ = nullptr;
    std::shared_ptr<string> runtimeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateKnowledgeBaseRequestVectorDBConfig> vectorDBConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
