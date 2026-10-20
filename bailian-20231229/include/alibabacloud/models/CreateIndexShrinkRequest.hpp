// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateIndexShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_TO_JSON(CreateIndexType, createIndexType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_TO_JSON(EmbeddingModelName, embeddingModelName_);
      DARABONBA_PTR_TO_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_TO_JSON(RerankInstruct, rerankInstruct_);
      DARABONBA_PTR_TO_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_TO_JSON(RerankMode, rerankMode_);
      DARABONBA_PTR_TO_JSON(RerankModelName, rerankModelName_);
      DARABONBA_PTR_TO_JSON(Separator, separator_);
      DARABONBA_PTR_TO_JSON(SinkInstanceId, sinkInstanceId_);
      DARABONBA_PTR_TO_JSON(SinkRegion, sinkRegion_);
      DARABONBA_PTR_TO_JSON(SinkType, sinkType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StructureType, structureType_);
      DARABONBA_PTR_TO_JSON(TableIds, tableIdsShrink_);
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(connectId, connectId_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(datasourceCode, datasourceCode_);
      DARABONBA_PTR_TO_JSON(enableHeaders, enableHeaders_);
      DARABONBA_PTR_TO_JSON(knowledgeScene, knowledgeScene_);
      DARABONBA_PTR_TO_JSON(knowledgeType, knowledgeType_);
      DARABONBA_PTR_TO_JSON(metaExtractColumns, metaExtractColumnsShrink_);
      DARABONBA_PTR_TO_JSON(pipelineCommercialCu, pipelineCommercialCu_);
      DARABONBA_PTR_TO_JSON(pipelineCommercialType, pipelineCommercialType_);
      DARABONBA_PTR_TO_JSON(pipelineRetrieveRateLimitStrategy, pipelineRetrieveRateLimitStrategy_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_FROM_JSON(CreateIndexType, createIndexType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModelName, embeddingModelName_);
      DARABONBA_PTR_FROM_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_FROM_JSON(RerankInstruct, rerankInstruct_);
      DARABONBA_PTR_FROM_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_FROM_JSON(RerankMode, rerankMode_);
      DARABONBA_PTR_FROM_JSON(RerankModelName, rerankModelName_);
      DARABONBA_PTR_FROM_JSON(Separator, separator_);
      DARABONBA_PTR_FROM_JSON(SinkInstanceId, sinkInstanceId_);
      DARABONBA_PTR_FROM_JSON(SinkRegion, sinkRegion_);
      DARABONBA_PTR_FROM_JSON(SinkType, sinkType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StructureType, structureType_);
      DARABONBA_PTR_FROM_JSON(TableIds, tableIdsShrink_);
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(connectId, connectId_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(datasourceCode, datasourceCode_);
      DARABONBA_PTR_FROM_JSON(enableHeaders, enableHeaders_);
      DARABONBA_PTR_FROM_JSON(knowledgeScene, knowledgeScene_);
      DARABONBA_PTR_FROM_JSON(knowledgeType, knowledgeType_);
      DARABONBA_PTR_FROM_JSON(metaExtractColumns, metaExtractColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(pipelineCommercialCu, pipelineCommercialCu_);
      DARABONBA_PTR_FROM_JSON(pipelineCommercialType, pipelineCommercialType_);
      DARABONBA_PTR_FROM_JSON(pipelineRetrieveRateLimitStrategy, pipelineRetrieveRateLimitStrategy_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    CreateIndexShrinkRequest() = default ;
    CreateIndexShrinkRequest(const CreateIndexShrinkRequest &) = default ;
    CreateIndexShrinkRequest(CreateIndexShrinkRequest &&) = default ;
    CreateIndexShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexShrinkRequest() = default ;
    CreateIndexShrinkRequest& operator=(const CreateIndexShrinkRequest &) = default ;
    CreateIndexShrinkRequest& operator=(CreateIndexShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryIdsShrink_ == nullptr
        && this->chunkSize_ == nullptr && this->columnsShrink_ == nullptr && this->createIndexType_ == nullptr && this->description_ == nullptr && this->documentIdsShrink_ == nullptr
        && this->embeddingModelName_ == nullptr && this->enableRewrite_ == nullptr && this->name_ == nullptr && this->overlapSize_ == nullptr && this->rerankInstruct_ == nullptr
        && this->rerankMinScore_ == nullptr && this->rerankMode_ == nullptr && this->rerankModelName_ == nullptr && this->separator_ == nullptr && this->sinkInstanceId_ == nullptr
        && this->sinkRegion_ == nullptr && this->sinkType_ == nullptr && this->sourceType_ == nullptr && this->structureType_ == nullptr && this->tableIdsShrink_ == nullptr
        && this->channelType_ == nullptr && this->chunkMode_ == nullptr && this->connectId_ == nullptr && this->database_ == nullptr && this->datasourceCode_ == nullptr
        && this->enableHeaders_ == nullptr && this->knowledgeScene_ == nullptr && this->knowledgeType_ == nullptr && this->metaExtractColumnsShrink_ == nullptr && this->pipelineCommercialCu_ == nullptr
        && this->pipelineCommercialType_ == nullptr && this->pipelineRetrieveRateLimitStrategy_ == nullptr && this->table_ == nullptr; };
    // categoryIdsShrink Field Functions 
    bool hasCategoryIdsShrink() const { return this->categoryIdsShrink_ != nullptr;};
    void deleteCategoryIdsShrink() { this->categoryIdsShrink_ = nullptr;};
    inline string getCategoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(categoryIdsShrink_, "") };
    inline CreateIndexShrinkRequest& setCategoryIdsShrink(string categoryIdsShrink) { DARABONBA_PTR_SET_VALUE(categoryIdsShrink_, categoryIdsShrink) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline CreateIndexShrinkRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string getColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline CreateIndexShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // createIndexType Field Functions 
    bool hasCreateIndexType() const { return this->createIndexType_ != nullptr;};
    void deleteCreateIndexType() { this->createIndexType_ = nullptr;};
    inline string getCreateIndexType() const { DARABONBA_PTR_GET_DEFAULT(createIndexType_, "") };
    inline CreateIndexShrinkRequest& setCreateIndexType(string createIndexType) { DARABONBA_PTR_SET_VALUE(createIndexType_, createIndexType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIndexShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentIdsShrink Field Functions 
    bool hasDocumentIdsShrink() const { return this->documentIdsShrink_ != nullptr;};
    void deleteDocumentIdsShrink() { this->documentIdsShrink_ = nullptr;};
    inline string getDocumentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentIdsShrink_, "") };
    inline CreateIndexShrinkRequest& setDocumentIdsShrink(string documentIdsShrink) { DARABONBA_PTR_SET_VALUE(documentIdsShrink_, documentIdsShrink) };


    // embeddingModelName Field Functions 
    bool hasEmbeddingModelName() const { return this->embeddingModelName_ != nullptr;};
    void deleteEmbeddingModelName() { this->embeddingModelName_ = nullptr;};
    inline string getEmbeddingModelName() const { DARABONBA_PTR_GET_DEFAULT(embeddingModelName_, "") };
    inline CreateIndexShrinkRequest& setEmbeddingModelName(string embeddingModelName) { DARABONBA_PTR_SET_VALUE(embeddingModelName_, embeddingModelName) };


    // enableRewrite Field Functions 
    bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
    void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
    inline bool getEnableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
    inline CreateIndexShrinkRequest& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIndexShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t getOverlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline CreateIndexShrinkRequest& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // rerankInstruct Field Functions 
    bool hasRerankInstruct() const { return this->rerankInstruct_ != nullptr;};
    void deleteRerankInstruct() { this->rerankInstruct_ = nullptr;};
    inline string getRerankInstruct() const { DARABONBA_PTR_GET_DEFAULT(rerankInstruct_, "") };
    inline CreateIndexShrinkRequest& setRerankInstruct(string rerankInstruct) { DARABONBA_PTR_SET_VALUE(rerankInstruct_, rerankInstruct) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline double getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, 0.0) };
    inline CreateIndexShrinkRequest& setRerankMinScore(double rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // rerankMode Field Functions 
    bool hasRerankMode() const { return this->rerankMode_ != nullptr;};
    void deleteRerankMode() { this->rerankMode_ = nullptr;};
    inline string getRerankMode() const { DARABONBA_PTR_GET_DEFAULT(rerankMode_, "") };
    inline CreateIndexShrinkRequest& setRerankMode(string rerankMode) { DARABONBA_PTR_SET_VALUE(rerankMode_, rerankMode) };


    // rerankModelName Field Functions 
    bool hasRerankModelName() const { return this->rerankModelName_ != nullptr;};
    void deleteRerankModelName() { this->rerankModelName_ = nullptr;};
    inline string getRerankModelName() const { DARABONBA_PTR_GET_DEFAULT(rerankModelName_, "") };
    inline CreateIndexShrinkRequest& setRerankModelName(string rerankModelName) { DARABONBA_PTR_SET_VALUE(rerankModelName_, rerankModelName) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string getSeparator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline CreateIndexShrinkRequest& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sinkInstanceId Field Functions 
    bool hasSinkInstanceId() const { return this->sinkInstanceId_ != nullptr;};
    void deleteSinkInstanceId() { this->sinkInstanceId_ = nullptr;};
    inline string getSinkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sinkInstanceId_, "") };
    inline CreateIndexShrinkRequest& setSinkInstanceId(string sinkInstanceId) { DARABONBA_PTR_SET_VALUE(sinkInstanceId_, sinkInstanceId) };


    // sinkRegion Field Functions 
    bool hasSinkRegion() const { return this->sinkRegion_ != nullptr;};
    void deleteSinkRegion() { this->sinkRegion_ = nullptr;};
    inline string getSinkRegion() const { DARABONBA_PTR_GET_DEFAULT(sinkRegion_, "") };
    inline CreateIndexShrinkRequest& setSinkRegion(string sinkRegion) { DARABONBA_PTR_SET_VALUE(sinkRegion_, sinkRegion) };


    // sinkType Field Functions 
    bool hasSinkType() const { return this->sinkType_ != nullptr;};
    void deleteSinkType() { this->sinkType_ = nullptr;};
    inline string getSinkType() const { DARABONBA_PTR_GET_DEFAULT(sinkType_, "") };
    inline CreateIndexShrinkRequest& setSinkType(string sinkType) { DARABONBA_PTR_SET_VALUE(sinkType_, sinkType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateIndexShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // structureType Field Functions 
    bool hasStructureType() const { return this->structureType_ != nullptr;};
    void deleteStructureType() { this->structureType_ = nullptr;};
    inline string getStructureType() const { DARABONBA_PTR_GET_DEFAULT(structureType_, "") };
    inline CreateIndexShrinkRequest& setStructureType(string structureType) { DARABONBA_PTR_SET_VALUE(structureType_, structureType) };


    // tableIdsShrink Field Functions 
    bool hasTableIdsShrink() const { return this->tableIdsShrink_ != nullptr;};
    void deleteTableIdsShrink() { this->tableIdsShrink_ = nullptr;};
    inline string getTableIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tableIdsShrink_, "") };
    inline CreateIndexShrinkRequest& setTableIdsShrink(string tableIdsShrink) { DARABONBA_PTR_SET_VALUE(tableIdsShrink_, tableIdsShrink) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline CreateIndexShrinkRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string getChunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline CreateIndexShrinkRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // connectId Field Functions 
    bool hasConnectId() const { return this->connectId_ != nullptr;};
    void deleteConnectId() { this->connectId_ = nullptr;};
    inline string getConnectId() const { DARABONBA_PTR_GET_DEFAULT(connectId_, "") };
    inline CreateIndexShrinkRequest& setConnectId(string connectId) { DARABONBA_PTR_SET_VALUE(connectId_, connectId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CreateIndexShrinkRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // datasourceCode Field Functions 
    bool hasDatasourceCode() const { return this->datasourceCode_ != nullptr;};
    void deleteDatasourceCode() { this->datasourceCode_ = nullptr;};
    inline string getDatasourceCode() const { DARABONBA_PTR_GET_DEFAULT(datasourceCode_, "") };
    inline CreateIndexShrinkRequest& setDatasourceCode(string datasourceCode) { DARABONBA_PTR_SET_VALUE(datasourceCode_, datasourceCode) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline bool getEnableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, false) };
    inline CreateIndexShrinkRequest& setEnableHeaders(bool enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // knowledgeScene Field Functions 
    bool hasKnowledgeScene() const { return this->knowledgeScene_ != nullptr;};
    void deleteKnowledgeScene() { this->knowledgeScene_ = nullptr;};
    inline string getKnowledgeScene() const { DARABONBA_PTR_GET_DEFAULT(knowledgeScene_, "") };
    inline CreateIndexShrinkRequest& setKnowledgeScene(string knowledgeScene) { DARABONBA_PTR_SET_VALUE(knowledgeScene_, knowledgeScene) };


    // knowledgeType Field Functions 
    bool hasKnowledgeType() const { return this->knowledgeType_ != nullptr;};
    void deleteKnowledgeType() { this->knowledgeType_ = nullptr;};
    inline string getKnowledgeType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeType_, "") };
    inline CreateIndexShrinkRequest& setKnowledgeType(string knowledgeType) { DARABONBA_PTR_SET_VALUE(knowledgeType_, knowledgeType) };


    // metaExtractColumnsShrink Field Functions 
    bool hasMetaExtractColumnsShrink() const { return this->metaExtractColumnsShrink_ != nullptr;};
    void deleteMetaExtractColumnsShrink() { this->metaExtractColumnsShrink_ = nullptr;};
    inline string getMetaExtractColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(metaExtractColumnsShrink_, "") };
    inline CreateIndexShrinkRequest& setMetaExtractColumnsShrink(string metaExtractColumnsShrink) { DARABONBA_PTR_SET_VALUE(metaExtractColumnsShrink_, metaExtractColumnsShrink) };


    // pipelineCommercialCu Field Functions 
    bool hasPipelineCommercialCu() const { return this->pipelineCommercialCu_ != nullptr;};
    void deletePipelineCommercialCu() { this->pipelineCommercialCu_ = nullptr;};
    inline int32_t getPipelineCommercialCu() const { DARABONBA_PTR_GET_DEFAULT(pipelineCommercialCu_, 0) };
    inline CreateIndexShrinkRequest& setPipelineCommercialCu(int32_t pipelineCommercialCu) { DARABONBA_PTR_SET_VALUE(pipelineCommercialCu_, pipelineCommercialCu) };


    // pipelineCommercialType Field Functions 
    bool hasPipelineCommercialType() const { return this->pipelineCommercialType_ != nullptr;};
    void deletePipelineCommercialType() { this->pipelineCommercialType_ = nullptr;};
    inline string getPipelineCommercialType() const { DARABONBA_PTR_GET_DEFAULT(pipelineCommercialType_, "") };
    inline CreateIndexShrinkRequest& setPipelineCommercialType(string pipelineCommercialType) { DARABONBA_PTR_SET_VALUE(pipelineCommercialType_, pipelineCommercialType) };


    // pipelineRetrieveRateLimitStrategy Field Functions 
    bool hasPipelineRetrieveRateLimitStrategy() const { return this->pipelineRetrieveRateLimitStrategy_ != nullptr;};
    void deletePipelineRetrieveRateLimitStrategy() { this->pipelineRetrieveRateLimitStrategy_ = nullptr;};
    inline string getPipelineRetrieveRateLimitStrategy() const { DARABONBA_PTR_GET_DEFAULT(pipelineRetrieveRateLimitStrategy_, "") };
    inline CreateIndexShrinkRequest& setPipelineRetrieveRateLimitStrategy(string pipelineRetrieveRateLimitStrategy) { DARABONBA_PTR_SET_VALUE(pipelineRetrieveRateLimitStrategy_, pipelineRetrieveRateLimitStrategy) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline CreateIndexShrinkRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // You can import files synchronously when you create a knowledge base. Here, you can import all files under a specified category by specifying the category ID. We recommend that you import no more than 500 files. If you have remaining files, you can call the **SubmitIndexAddDocumentsJob** operation to continue importing them later.
    shared_ptr<string> categoryIdsShrink_ {};
    // <props="china">
    // 
    // The chunk size, which is the maximum number of characters in each text chunk. If the text exceeds this length:
    // 
    // - **Intelligent chunking** (chunkMode is not specified): The text is highly likely to be truncated.
    // - **Custom chunking** (chunkMode is specified): The text is forcibly truncated.
    // 
    // 
    // 
    // <props="intl">
    // The chunk size, which is the maximum number of characters in each text chunk. If the text exceeds this length, it is highly likely to be truncated.
    // 
    // 
    // 
    // Valid values: [1, 6000]. Default value: 500.
    // 
    // > If you set ChunkSize to a value less than 100, you must also set OverlapSize. You can also leave these two parameters unspecified, and the system uses the default values.
    shared_ptr<int32_t> chunkSize_ {};
    // <props="china">
    // The structure of the data table, such as column names and types.
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    // >
    shared_ptr<string> columnsShrink_ {};
    // > This parameter is not available. Do not pass this parameter.
    // >
    shared_ptr<string> createIndexType_ {};
    // The description of the knowledge base. The description must be 0 to 200 characters in length and can contain English and Chinese characters.
    // Default value: empty.
    shared_ptr<string> description_ {};
    // You can import files synchronously when you create a knowledge base. Here, you can specify the list of files to be imported by passing file IDs. We recommend that you import no more than 10,000 files. If you have remaining files, you can call the **SubmitIndexAddDocumentsJob** operation to continue importing them later.
    shared_ptr<string> documentIdsShrink_ {};
    // <props="china">
    // 
    // The embedding model used by the knowledge base. The embedding model is used to transform the original input prompt and knowledge text into numerical vectors for similarity comparison. Compared with the text-embedding-v3 model, the text-embedding-v4 model is comprehensively upgraded in terms of language support, code snippet vectorization effect, and selection of vector dimensions, and is suitable for most scenarios. For more information, refer to [Quantization](https://help.aliyun.com/document_detail/2842587.html). Valid values:
    // - text-embedding-v4
    // - text-embedding-v3
    // 
    // Default value: empty. In this case, the text-embedding-v3 model is used.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // The embedding model used by the knowledge base. The embedding model is used to transform the original input prompt and knowledge text into numerical vectors for similarity comparison. The default text-embedding-v2 model (which cannot be changed at the moment) supports not only Chinese and English but also multiple other languages, and performs normalization on the vector results. For more information, refer to [Quantization](https://help.aliyun.com/document_detail/2842587.html). Valid values:
    // - text-embedding-v2
    // 
    // Default value: empty. In this case, the text-embedding-v2 model is used.
    shared_ptr<string> embeddingModelName_ {};
    // Specifies whether to enable multi-turn conversation rewriting. Valid values:
    // 
    // - true: enabled.
    // - false: disabled.
    // 
    // Default value: true.
    shared_ptr<bool> enableRewrite_ {};
    // The name of the knowledge base. The name must be 1 to 20 characters in length and can contain Chinese characters, English letters, digits, underscores (_), hyphens (-), periods (.), and colons (:).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The chunk overlap size, which indicates the number of overlapping characters between the current text chunk and the previous text chunk. Valid values: [0, 1024].
    // 
    // Default value: 100.
    // > OverlapSize must be less than ChunkSize. Otherwise, chunking exceptions occur.
    shared_ptr<int32_t> overlapSize_ {};
    // <props="intl">This parameter is not available. Do not specify this parameter.
    // 
    // <props="china">Provides a natural language instruction to fine-tune the behavior of the reranking model.
    // <notice>This parameter takes effect only when rerank_mode is set to "custom".</notice>
    shared_ptr<string> rerankInstruct_ {};
    // The similarity threshold. Only text chunks with a similarity score greater than this value are recalled. This parameter is used to filter the text chunks returned by the reranking model. Valid values: [0.01, 1.00].
    // 
    // Default value: 0.01.
    shared_ptr<double> rerankMinScore_ {};
    // <props="china">
    // Specifies the instruction intervention mode of the reranking model to determine its scoring preference. Valid values:
    // 
    // - **qa**: question answering mode. This is the default value. The model tends to assign higher scores to candidates that can directly answer the query. We recommend that you use this mode in question answering scenarios.
    // 
    // - **similar**: similarity mode. The model tends to assign higher scores to candidates that are highly consistent with the query content. We recommend that you use this mode in matching and retrieval scenarios.
    // 
    // - **custom**: custom mode. The ranking behavior of the model is determined by the instruction in the rerank_instruct parameter.
    // 
    // 
    // 
    // <props="intl">This parameter is not available. Do not specify this parameter.
    shared_ptr<string> rerankMode_ {};
    // The reranking model used by the knowledge base. The reranking model is a scoring system external to the knowledge base. It calculates the similarity score between the user\\"s question and each text chunk in the knowledge base, sorts the chunks in descending order of the scores, and returns the top K text chunks with the highest scores. Valid values:
    // 
    // 
    // <props="china">
    // 
    // - qwen3-rerank-hybrid: qwen3-rerank (hybrid) reranking.
    // - qwen3-rerank: qwen3-rerank reranking.
    // - gte-rerank-hybrid: gte-rerank (hybrid) reranking.
    // - gte-rerank: gte-rerank reranking.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - gte-rerank-hybrid: official reranking.
    // - gte-rerank: gte-rerank reranking.
    // 
    // 
    // 
    // 
    // 
    // <props="china">
    // 
    // Default value: empty. In this case, qwen3-rerank is used.
    // > If you only need semantic reranking, you can use qwen3-rerank. If you need both semantic reranking and text matching features to ensure relevance, use qwen3-rerank-hybrid.
    // >
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // Default value: empty. In this case, gte-rerank-hybrid is used.
    // > If you only need semantic reranking, you can use gte-rerank. If you need both semantic reranking and text matching features to ensure relevance, use gte-rerank-hybrid.
    // >
    // 
    // 
    // 
    // 
    // 
    // <props="china">
    // 
    // > gte-rerank-hybrid and gte-rerank will stop receiving updates and are not recommended.
    // >
    shared_ptr<string> rerankModelName_ {};
    // <props="china">
    // 
    // The sentence separator. This parameter takes effect only when chunkMode is set to **regex**. In other modes, this parameter does not take effect even if it is passed. You can pass a regular expression (multiple regular expressions are not supported) to split the file into small text chunks.
    // 
    // When you use intelligent chunking (chunkMode is not specified), leave this parameter empty.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    shared_ptr<string> separator_ {};
    // The ID of the AnalyticDB for PostgreSQL instance. This parameter is required only when SinkType is set to ADB. Go to the [AnalyticDB for PostgreSQL Instance List](https://gpdbnext.console.aliyun.com/gpdb/list) page to obtain the ID.
    shared_ptr<string> sinkInstanceId_ {};
    // The region where the AnalyticDB for PostgreSQL instance resides. This parameter is required only when SinkType is set to ADB. You can call the <props="china">[DescribeRegions](https://www.alibabacloud.com/help/en/analyticdb-for-postgresql/developer-reference/api-gpdb-2016-05-03-describeregions)<props="intl">[DescribeRegions](https://www.alibabacloud.com/help/zh/analyticdb/analyticdb-for-postgresql/developer-reference/api-gpdb-2016-05-03-describeregions?spm=a2c63.p38356.0.i3) operation to obtain the region list.
    shared_ptr<string> sinkRegion_ {};
    // The vector storage type of the knowledge base. For more information, refer to [Knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values:
    // - BUILT_IN: stores vector data in Alibaba Cloud Model Studio.
    // - ADB: AnalyticDB for PostgreSQL database. If you need advanced features such as managing, auditing, and monitoring the database, select ADB.
    // > If you have not used ADB storage in Alibaba Cloud Model Studio, go to the <props="china">[Create Knowledge Base](https://bailian.console.aliyun.com/#/knowledge-base/create)<props="intl">[Create Knowledge Base](https://bailian.console.alibabacloud.com/#/knowledge-base/create) page, select ADB-PG as the vector storage type, and complete the authorization as prompted. If you pass ADB, you must specify the SinkInstanceId and SinkRegion parameters.
    // 
    // This parameter is required.
    shared_ptr<string> sinkType_ {};
    // >Notice: This parameter is required in the latest SDK version. Otherwise, an error is reported when you call the SubmitIndexJob operation: Required parameter(data_sources) missing or invalid.</notice>
    // 
    // The source of the imported data. Valid values:
    // - DATA_CENTER_CATEGORY: the category type. This value indicates that all files under a specified category in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) are imported. You can import multiple categories at a time.
    // - DATA_CENTER_FILE: the file type. This value indicates that specified files in <props="china">[Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center)<props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) are imported. You can import multiple files at a time.
    // 
    // > If you set this parameter to DATA_CENTER_CATEGORY, you must specify the CategoryIds parameter. If you set this parameter to DATA_CENTER_FILE, you must specify the DocumentIds parameter.
    // >
    // 
    // > To create an empty knowledge base, you can use an empty category that contains no files: set this parameter to DATA_CENTER_CATEGORY and set CategoryIds to the ID of the empty category.
    // >
    shared_ptr<string> sourceType_ {};
    // The type of the knowledge base.
    // 
    // **Valid values**:
    // 
    // - unstructured: a knowledge base for document search or audio and video. The default use scenario for the document search type is basic document question answering. <props="china">To create a knowledge base for other scenarios, you must also pass the knowledgeType and knowledgeScene parameters.
    // 
    // <props="china">
    // 
    // - structured: a knowledge base for data querying or image question answering.
    // 
    // 
    // 
    // > Note that the type of a knowledge base cannot be changed after it is created.
    // >
    // 
    // This parameter is required.
    shared_ptr<string> structureType_ {};
    // <props="china">
    // 
    // You can obtain the ID by clicking the ID icon next to the table name on the Tables tab of the Table Connector in [Data Connection](https://bailian.console.aliyun.com/cn-beijing?tab=app#/connector/list). If the list contains multiple IDs, only the first one is used.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    // >
    shared_ptr<string> tableIdsShrink_ {};
    shared_ptr<string> channelType_ {};
    // <props="china">
    // 
    // Enables custom chunking and specifies the chunking strategy. For more information, refer to [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    // 
    // Valid values (you cannot pass multiple values at a time):
    // 
    // - **length**: chunks by length. The text is strictly chunked according to the ChunkSize and OverlapSize you specify. If you do not pass these two parameters, the system uses the default values (ChunkSize is 500 and OverlapSize is 100). Chunking by length does not support Separator (it does not take effect even if passed).
    // - **page**: chunks by page. If ChunkSize is specified, it is considered during chunking (if not passed, the default value 500 is used). Chunking by page does not support OverlapSize and Separator (they do not take effect even if passed).
    // - **h1**: chunks by level-1 heading. If ChunkSize is specified, it is considered during chunking (if not passed, the default value 500 is used). Chunking by level-1 heading does not support OverlapSize and Separator (they do not take effect even if passed).
    // - **h2**: chunks by level-2 heading. If ChunkSize is specified, it is considered during chunking (if not passed, the default value 500 is used). Chunking by level-2 heading does not support OverlapSize and Separator (they do not take effect even if passed).
    // - **regex**: chunks by regular expression. In this case, you must specify the Separator parameter. If ChunkSize is specified, it is considered during chunking (if not passed, the default value 500 is used). Chunking by regular expression does not support OverlapSize (it does not take effect even if passed).
    // 
    // Default value: empty. In this case, intelligent chunking is used.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    shared_ptr<string> chunkMode_ {};
    shared_ptr<string> connectId_ {};
    shared_ptr<string> database_ {};
    shared_ptr<string> datasourceCode_ {};
    // Specifies whether to use the first row of all .xlsx and .xls files as the header and concatenate it to each text chunk to prevent the large language model from mistakenly treating the header as a normal data row.
    // 
    // 
    // > Enable this feature only when all imported files are in .xlsx or .xls format and contain headers. Otherwise, do not enable it.
    // >
    // 
    // Valid values:
    // - true: enabled.
    // - false: disabled.
    // 
    // Default value: false.
    shared_ptr<bool> enableHeaders_ {};
    shared_ptr<string> knowledgeScene_ {};
    // <props="china">
    // The specific knowledge type, which is used to further specify the type of data processed by the knowledge base.
    // <notice>This parameter must be provided or omitted together with knowledgeScene. It cannot be set separately. If both are omitted, the system uses the default configurations based on structureType.</notice>
    // 
    // **Settings** constraints: The value of this parameter must match the structureType you select and determines the active values for knowledgeScene.
    // 
    // **Valid values**:
    // - document: document search. Must be used with structureType: unstructured.
    // - table: data querying. Must be used with structureType: structured.
    // - image: image question answering. Must be used with structureType: structured.
    // - multimedia: audio and video search. Must be used with structureType: unstructured.
    // 
    // 
    // 
    // 
    // <props="intl">This parameter is not available. Do not pass this parameter.
    shared_ptr<string> knowledgeType_ {};
    // The metadata extraction configuration. Metadata is a series of additional attributes related to the content of unstructured data. These attributes are integrated into text chunks in the form of key-value pairs. For more information, refer to [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    shared_ptr<string> metaExtractColumnsShrink_ {};
    // <props="china">The number of RCUs for the knowledge base. This parameter is required only when pipelineCommercialType is set to enterprise. Valid values: [1, 200].
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    // >
    shared_ptr<int32_t> pipelineCommercialCu_ {};
    // <props="china">
    // 
    // The [edition](https://help.aliyun.com/document_detail/2997110.html) of the knowledge base. Valid values:
    // - standard: Standard Edition
    // - enterprise: Ultimate Edition
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    // >
    shared_ptr<string> pipelineCommercialType_ {};
    // <props="china">The throttling handling strategy for the knowledge base dependency link. This parameter is required only when pipelineCommercialType is set to enterprise.
    // Valid values:
    // downgrade: downgrade processing (switches to lightweight link retrieval).
    // Default value: downgrade.
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not available. Do not pass this parameter.
    // >
    shared_ptr<string> pipelineRetrieveRateLimitStrategy_ {};
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
