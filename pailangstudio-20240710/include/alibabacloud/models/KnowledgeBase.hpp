// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASE_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KnowledgeBaseAutoUpdateConfig.hpp>
#include <alibabacloud/models/KnowledgeBaseChunkConfig.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseDataSources.hpp>
#include <alibabacloud/models/KnowledgeBaseEmbeddingConfig.hpp>
#include <alibabacloud/models/KnowledgeBaseIndexColumnConfig.hpp>
#include <alibabacloud/models/KnowledgeBaseMetaDataConfig.hpp>
#include <alibabacloud/models/KnowledgeBaseVectorDBConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBase& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AutoUpdateConfig, autoUpdateConfig_);
      DARABONBA_PTR_TO_JSON(ChunkConfig, chunkConfig_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IndexColumnConfig, indexColumnConfig_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_TO_JSON(MetaDataConfig, metaDataConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputDir, outputDir_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(VectorDBConfig, vectorDBConfig_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBase& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AutoUpdateConfig, autoUpdateConfig_);
      DARABONBA_PTR_FROM_JSON(ChunkConfig, chunkConfig_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IndexColumnConfig, indexColumnConfig_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseType, knowledgeBaseType_);
      DARABONBA_PTR_FROM_JSON(MetaDataConfig, metaDataConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputDir, outputDir_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(VectorDBConfig, vectorDBConfig_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    KnowledgeBase() = default ;
    KnowledgeBase(const KnowledgeBase &) = default ;
    KnowledgeBase(KnowledgeBase &&) = default ;
    KnowledgeBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBase() = default ;
    KnowledgeBase& operator=(const KnowledgeBase &) = default ;
    KnowledgeBase& operator=(KnowledgeBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->autoUpdateConfig_ == nullptr && return this->chunkConfig_ == nullptr && return this->creator_ == nullptr && return this->dataSources_ == nullptr && return this->datasetId_ == nullptr
        && return this->description_ == nullptr && return this->embeddingConfig_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->indexColumnConfig_ == nullptr
        && return this->knowledgeBaseId_ == nullptr && return this->knowledgeBaseType_ == nullptr && return this->metaDataConfig_ == nullptr && return this->name_ == nullptr && return this->outputDir_ == nullptr
        && return this->runtimeId_ == nullptr && return this->vectorDBConfig_ == nullptr && return this->versionName_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline KnowledgeBase& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // autoUpdateConfig Field Functions 
    bool hasAutoUpdateConfig() const { return this->autoUpdateConfig_ != nullptr;};
    void deleteAutoUpdateConfig() { this->autoUpdateConfig_ = nullptr;};
    inline const KnowledgeBaseAutoUpdateConfig & autoUpdateConfig() const { DARABONBA_PTR_GET_CONST(autoUpdateConfig_, KnowledgeBaseAutoUpdateConfig) };
    inline KnowledgeBaseAutoUpdateConfig autoUpdateConfig() { DARABONBA_PTR_GET(autoUpdateConfig_, KnowledgeBaseAutoUpdateConfig) };
    inline KnowledgeBase& setAutoUpdateConfig(const KnowledgeBaseAutoUpdateConfig & autoUpdateConfig) { DARABONBA_PTR_SET_VALUE(autoUpdateConfig_, autoUpdateConfig) };
    inline KnowledgeBase& setAutoUpdateConfig(KnowledgeBaseAutoUpdateConfig && autoUpdateConfig) { DARABONBA_PTR_SET_RVALUE(autoUpdateConfig_, autoUpdateConfig) };


    // chunkConfig Field Functions 
    bool hasChunkConfig() const { return this->chunkConfig_ != nullptr;};
    void deleteChunkConfig() { this->chunkConfig_ = nullptr;};
    inline const KnowledgeBaseChunkConfig & chunkConfig() const { DARABONBA_PTR_GET_CONST(chunkConfig_, KnowledgeBaseChunkConfig) };
    inline KnowledgeBaseChunkConfig chunkConfig() { DARABONBA_PTR_GET(chunkConfig_, KnowledgeBaseChunkConfig) };
    inline KnowledgeBase& setChunkConfig(const KnowledgeBaseChunkConfig & chunkConfig) { DARABONBA_PTR_SET_VALUE(chunkConfig_, chunkConfig) };
    inline KnowledgeBase& setChunkConfig(KnowledgeBaseChunkConfig && chunkConfig) { DARABONBA_PTR_SET_RVALUE(chunkConfig_, chunkConfig) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline KnowledgeBase& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<KnowledgeBaseDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<KnowledgeBaseDataSources>) };
    inline vector<KnowledgeBaseDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<KnowledgeBaseDataSources>) };
    inline KnowledgeBase& setDataSources(const vector<KnowledgeBaseDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline KnowledgeBase& setDataSources(vector<KnowledgeBaseDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline KnowledgeBase& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline KnowledgeBase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const KnowledgeBaseEmbeddingConfig & embeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, KnowledgeBaseEmbeddingConfig) };
    inline KnowledgeBaseEmbeddingConfig embeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, KnowledgeBaseEmbeddingConfig) };
    inline KnowledgeBase& setEmbeddingConfig(const KnowledgeBaseEmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline KnowledgeBase& setEmbeddingConfig(KnowledgeBaseEmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline KnowledgeBase& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline KnowledgeBase& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // indexColumnConfig Field Functions 
    bool hasIndexColumnConfig() const { return this->indexColumnConfig_ != nullptr;};
    void deleteIndexColumnConfig() { this->indexColumnConfig_ = nullptr;};
    inline const KnowledgeBaseIndexColumnConfig & indexColumnConfig() const { DARABONBA_PTR_GET_CONST(indexColumnConfig_, KnowledgeBaseIndexColumnConfig) };
    inline KnowledgeBaseIndexColumnConfig indexColumnConfig() { DARABONBA_PTR_GET(indexColumnConfig_, KnowledgeBaseIndexColumnConfig) };
    inline KnowledgeBase& setIndexColumnConfig(const KnowledgeBaseIndexColumnConfig & indexColumnConfig) { DARABONBA_PTR_SET_VALUE(indexColumnConfig_, indexColumnConfig) };
    inline KnowledgeBase& setIndexColumnConfig(KnowledgeBaseIndexColumnConfig && indexColumnConfig) { DARABONBA_PTR_SET_RVALUE(indexColumnConfig_, indexColumnConfig) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string knowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline KnowledgeBase& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string knowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline KnowledgeBase& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // metaDataConfig Field Functions 
    bool hasMetaDataConfig() const { return this->metaDataConfig_ != nullptr;};
    void deleteMetaDataConfig() { this->metaDataConfig_ = nullptr;};
    inline const KnowledgeBaseMetaDataConfig & metaDataConfig() const { DARABONBA_PTR_GET_CONST(metaDataConfig_, KnowledgeBaseMetaDataConfig) };
    inline KnowledgeBaseMetaDataConfig metaDataConfig() { DARABONBA_PTR_GET(metaDataConfig_, KnowledgeBaseMetaDataConfig) };
    inline KnowledgeBase& setMetaDataConfig(const KnowledgeBaseMetaDataConfig & metaDataConfig) { DARABONBA_PTR_SET_VALUE(metaDataConfig_, metaDataConfig) };
    inline KnowledgeBase& setMetaDataConfig(KnowledgeBaseMetaDataConfig && metaDataConfig) { DARABONBA_PTR_SET_RVALUE(metaDataConfig_, metaDataConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline KnowledgeBase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputDir Field Functions 
    bool hasOutputDir() const { return this->outputDir_ != nullptr;};
    void deleteOutputDir() { this->outputDir_ = nullptr;};
    inline string outputDir() const { DARABONBA_PTR_GET_DEFAULT(outputDir_, "") };
    inline KnowledgeBase& setOutputDir(string outputDir) { DARABONBA_PTR_SET_VALUE(outputDir_, outputDir) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string runtimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline KnowledgeBase& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // vectorDBConfig Field Functions 
    bool hasVectorDBConfig() const { return this->vectorDBConfig_ != nullptr;};
    void deleteVectorDBConfig() { this->vectorDBConfig_ = nullptr;};
    inline const KnowledgeBaseVectorDBConfig & vectorDBConfig() const { DARABONBA_PTR_GET_CONST(vectorDBConfig_, KnowledgeBaseVectorDBConfig) };
    inline KnowledgeBaseVectorDBConfig vectorDBConfig() { DARABONBA_PTR_GET(vectorDBConfig_, KnowledgeBaseVectorDBConfig) };
    inline KnowledgeBase& setVectorDBConfig(const KnowledgeBaseVectorDBConfig & vectorDBConfig) { DARABONBA_PTR_SET_VALUE(vectorDBConfig_, vectorDBConfig) };
    inline KnowledgeBase& setVectorDBConfig(KnowledgeBaseVectorDBConfig && vectorDBConfig) { DARABONBA_PTR_SET_RVALUE(vectorDBConfig_, vectorDBConfig) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline KnowledgeBase& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline KnowledgeBase& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<KnowledgeBaseAutoUpdateConfig> autoUpdateConfig_ = nullptr;
    std::shared_ptr<KnowledgeBaseChunkConfig> chunkConfig_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<vector<KnowledgeBaseDataSources>> dataSources_ = nullptr;
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<KnowledgeBaseEmbeddingConfig> embeddingConfig_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<KnowledgeBaseIndexColumnConfig> indexColumnConfig_ = nullptr;
    std::shared_ptr<string> knowledgeBaseId_ = nullptr;
    std::shared_ptr<string> knowledgeBaseType_ = nullptr;
    std::shared_ptr<KnowledgeBaseMetaDataConfig> metaDataConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> outputDir_ = nullptr;
    std::shared_ptr<string> runtimeId_ = nullptr;
    std::shared_ptr<KnowledgeBaseVectorDBConfig> vectorDBConfig_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
