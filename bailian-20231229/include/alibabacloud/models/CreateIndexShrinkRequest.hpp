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
      DARABONBA_PTR_TO_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_TO_JSON(EmbeddingModelName, embeddingModelName_);
      DARABONBA_PTR_TO_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_TO_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_TO_JSON(RerankModelName, rerankModelName_);
      DARABONBA_PTR_TO_JSON(Separator, separator_);
      DARABONBA_PTR_TO_JSON(SinkInstanceId, sinkInstanceId_);
      DARABONBA_PTR_TO_JSON(SinkRegion, sinkRegion_);
      DARABONBA_PTR_TO_JSON(SinkType, sinkType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StructureType, structureType_);
      DARABONBA_PTR_TO_JSON(TableIds, tableIdsShrink_);
      DARABONBA_PTR_TO_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(enableHeaders, enableHeaders_);
      DARABONBA_PTR_TO_JSON(metaExtractColumns, metaExtractColumnsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(Columns, columnsShrink_);
      DARABONBA_PTR_FROM_JSON(CreateIndexType, createIndexType_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSourceShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModelName, embeddingModelName_);
      DARABONBA_PTR_FROM_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OverlapSize, overlapSize_);
      DARABONBA_PTR_FROM_JSON(RerankMinScore, rerankMinScore_);
      DARABONBA_PTR_FROM_JSON(RerankModelName, rerankModelName_);
      DARABONBA_PTR_FROM_JSON(Separator, separator_);
      DARABONBA_PTR_FROM_JSON(SinkInstanceId, sinkInstanceId_);
      DARABONBA_PTR_FROM_JSON(SinkRegion, sinkRegion_);
      DARABONBA_PTR_FROM_JSON(SinkType, sinkType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StructureType, structureType_);
      DARABONBA_PTR_FROM_JSON(TableIds, tableIdsShrink_);
      DARABONBA_PTR_FROM_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(enableHeaders, enableHeaders_);
      DARABONBA_PTR_FROM_JSON(metaExtractColumns, metaExtractColumnsShrink_);
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
    virtual bool empty() const override { this->categoryIdsShrink_ != nullptr
        && this->chunkSize_ != nullptr && this->columnsShrink_ != nullptr && this->createIndexType_ != nullptr && this->dataSourceShrink_ != nullptr && this->description_ != nullptr
        && this->documentIdsShrink_ != nullptr && this->embeddingModelName_ != nullptr && this->enableRewrite_ != nullptr && this->name_ != nullptr && this->overlapSize_ != nullptr
        && this->rerankMinScore_ != nullptr && this->rerankModelName_ != nullptr && this->separator_ != nullptr && this->sinkInstanceId_ != nullptr && this->sinkRegion_ != nullptr
        && this->sinkType_ != nullptr && this->sourceType_ != nullptr && this->structureType_ != nullptr && this->tableIdsShrink_ != nullptr && this->chunkMode_ != nullptr
        && this->enableHeaders_ != nullptr && this->metaExtractColumnsShrink_ != nullptr; };
    // categoryIdsShrink Field Functions 
    bool hasCategoryIdsShrink() const { return this->categoryIdsShrink_ != nullptr;};
    void deleteCategoryIdsShrink() { this->categoryIdsShrink_ = nullptr;};
    inline string categoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(categoryIdsShrink_, "") };
    inline CreateIndexShrinkRequest& setCategoryIdsShrink(string categoryIdsShrink) { DARABONBA_PTR_SET_VALUE(categoryIdsShrink_, categoryIdsShrink) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline CreateIndexShrinkRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string columnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline CreateIndexShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // createIndexType Field Functions 
    bool hasCreateIndexType() const { return this->createIndexType_ != nullptr;};
    void deleteCreateIndexType() { this->createIndexType_ = nullptr;};
    inline string createIndexType() const { DARABONBA_PTR_GET_DEFAULT(createIndexType_, "") };
    inline CreateIndexShrinkRequest& setCreateIndexType(string createIndexType) { DARABONBA_PTR_SET_VALUE(createIndexType_, createIndexType) };


    // dataSourceShrink Field Functions 
    bool hasDataSourceShrink() const { return this->dataSourceShrink_ != nullptr;};
    void deleteDataSourceShrink() { this->dataSourceShrink_ = nullptr;};
    inline string dataSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceShrink_, "") };
    inline CreateIndexShrinkRequest& setDataSourceShrink(string dataSourceShrink) { DARABONBA_PTR_SET_VALUE(dataSourceShrink_, dataSourceShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIndexShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentIdsShrink Field Functions 
    bool hasDocumentIdsShrink() const { return this->documentIdsShrink_ != nullptr;};
    void deleteDocumentIdsShrink() { this->documentIdsShrink_ = nullptr;};
    inline string documentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentIdsShrink_, "") };
    inline CreateIndexShrinkRequest& setDocumentIdsShrink(string documentIdsShrink) { DARABONBA_PTR_SET_VALUE(documentIdsShrink_, documentIdsShrink) };


    // embeddingModelName Field Functions 
    bool hasEmbeddingModelName() const { return this->embeddingModelName_ != nullptr;};
    void deleteEmbeddingModelName() { this->embeddingModelName_ = nullptr;};
    inline string embeddingModelName() const { DARABONBA_PTR_GET_DEFAULT(embeddingModelName_, "") };
    inline CreateIndexShrinkRequest& setEmbeddingModelName(string embeddingModelName) { DARABONBA_PTR_SET_VALUE(embeddingModelName_, embeddingModelName) };


    // enableRewrite Field Functions 
    bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
    void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
    inline bool enableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
    inline CreateIndexShrinkRequest& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIndexShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t overlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline CreateIndexShrinkRequest& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline double rerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, 0.0) };
    inline CreateIndexShrinkRequest& setRerankMinScore(double rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // rerankModelName Field Functions 
    bool hasRerankModelName() const { return this->rerankModelName_ != nullptr;};
    void deleteRerankModelName() { this->rerankModelName_ = nullptr;};
    inline string rerankModelName() const { DARABONBA_PTR_GET_DEFAULT(rerankModelName_, "") };
    inline CreateIndexShrinkRequest& setRerankModelName(string rerankModelName) { DARABONBA_PTR_SET_VALUE(rerankModelName_, rerankModelName) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string separator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline CreateIndexShrinkRequest& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sinkInstanceId Field Functions 
    bool hasSinkInstanceId() const { return this->sinkInstanceId_ != nullptr;};
    void deleteSinkInstanceId() { this->sinkInstanceId_ = nullptr;};
    inline string sinkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sinkInstanceId_, "") };
    inline CreateIndexShrinkRequest& setSinkInstanceId(string sinkInstanceId) { DARABONBA_PTR_SET_VALUE(sinkInstanceId_, sinkInstanceId) };


    // sinkRegion Field Functions 
    bool hasSinkRegion() const { return this->sinkRegion_ != nullptr;};
    void deleteSinkRegion() { this->sinkRegion_ = nullptr;};
    inline string sinkRegion() const { DARABONBA_PTR_GET_DEFAULT(sinkRegion_, "") };
    inline CreateIndexShrinkRequest& setSinkRegion(string sinkRegion) { DARABONBA_PTR_SET_VALUE(sinkRegion_, sinkRegion) };


    // sinkType Field Functions 
    bool hasSinkType() const { return this->sinkType_ != nullptr;};
    void deleteSinkType() { this->sinkType_ = nullptr;};
    inline string sinkType() const { DARABONBA_PTR_GET_DEFAULT(sinkType_, "") };
    inline CreateIndexShrinkRequest& setSinkType(string sinkType) { DARABONBA_PTR_SET_VALUE(sinkType_, sinkType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateIndexShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // structureType Field Functions 
    bool hasStructureType() const { return this->structureType_ != nullptr;};
    void deleteStructureType() { this->structureType_ = nullptr;};
    inline string structureType() const { DARABONBA_PTR_GET_DEFAULT(structureType_, "") };
    inline CreateIndexShrinkRequest& setStructureType(string structureType) { DARABONBA_PTR_SET_VALUE(structureType_, structureType) };


    // tableIdsShrink Field Functions 
    bool hasTableIdsShrink() const { return this->tableIdsShrink_ != nullptr;};
    void deleteTableIdsShrink() { this->tableIdsShrink_ = nullptr;};
    inline string tableIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tableIdsShrink_, "") };
    inline CreateIndexShrinkRequest& setTableIdsShrink(string tableIdsShrink) { DARABONBA_PTR_SET_VALUE(tableIdsShrink_, tableIdsShrink) };


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string chunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline CreateIndexShrinkRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline bool enableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, false) };
    inline CreateIndexShrinkRequest& setEnableHeaders(bool enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // metaExtractColumnsShrink Field Functions 
    bool hasMetaExtractColumnsShrink() const { return this->metaExtractColumnsShrink_ != nullptr;};
    void deleteMetaExtractColumnsShrink() { this->metaExtractColumnsShrink_ = nullptr;};
    inline string metaExtractColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(metaExtractColumnsShrink_, "") };
    inline CreateIndexShrinkRequest& setMetaExtractColumnsShrink(string metaExtractColumnsShrink) { DARABONBA_PTR_SET_VALUE(metaExtractColumnsShrink_, metaExtractColumnsShrink) };


  protected:
    // The list of primary key IDs of the categories to be imported into the knowledge base.
    std::shared_ptr<string> categoryIdsShrink_ = nullptr;
    // The estimated length of chunks. The maximum number of characters for a chunk. Texts exceeding this limit are splited. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values: [1-2048].
    // 
    // The default value is empty, which means using the intelligent splitting method.
    // 
    // >  If you specify the `ChunkSize` parameter, you must also specify the `OverlapSize` and `Separator` parameters. If you do not specify these three parameters, the system uses the intelligent splitting method by default.
    std::shared_ptr<int32_t> chunkSize_ = nullptr;
    std::shared_ptr<string> columnsShrink_ = nullptr;
    std::shared_ptr<string> createIndexType_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> dataSourceShrink_ = nullptr;
    // The description of the knowledge base. The description must be 0 to 1,000 characters in length. This parameter is empty by default.
    std::shared_ptr<string> description_ = nullptr;
    // The list of primary key IDs of the documents to be imported into the knowledge base.
    std::shared_ptr<string> documentIdsShrink_ = nullptr;
    // The name of the embedding model. The embedding model converts the original input prompt and knowledge text into numerical vectors for similarity comparison. The default and only model available is DashScope text-embedding-v2. It supports multiple languages including Chinese and English and normalizes the vector results. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid value:
    // 
    // *   text-embedding-v2
    // 
    // The default value is null, which means using the text-embedding-v2 model.
    std::shared_ptr<string> embeddingModelName_ = nullptr;
    std::shared_ptr<bool> enableRewrite_ = nullptr;
    // The name of the knowledge base. The name must be 1 to 20 characters in length and can contain characters classified as letter in Unicode, including English letters, Chinese characters, digits, among others. The name can also contain colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The overlap length. The number of overlapping characters between two consecutive chunks. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values: 0 to 1024.
    // 
    // The default value is empty, which means using the intelligent splitting method.
    std::shared_ptr<int32_t> overlapSize_ = nullptr;
    // Similarity Threshold. The lowest similarity score of chunks that can be returned. This parameter is used to filter text chunks returned by the rank model. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values: [0.01-1.00].
    // 
    // Default value: 0.20.
    std::shared_ptr<double> rerankMinScore_ = nullptr;
    // The name of the rank model. The rank model is a scoring system outside the knowledge base. It calculates the similarity score of each text chunk in the input question and knowledge base and ranks them in descending order. Then, the model returns the top K chunks with the highest scores. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   gte-rerank-hybrid
    // *   gte-rerank
    // 
    // The default value is empty, which means using the official gte-rerank-hybrid model.
    // 
    // >  If you need only semantic ranking, we recommend that you use gte-rerank. If you need both semantic ranking and text matching features to ensure relevance, we recommend that you use gte-rerank-hybrid.
    std::shared_ptr<string> rerankModelName_ = nullptr;
    // The clause identifier. The document is split into chunks based on this identifier. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). You can specify multiple identifiers and do not need to add any other characters to separate them. For example: !,\\\\\\n. Valid values:
    // 
    // *   \\n: line break
    // *   ，: Chinese comma
    // *   ,: English comma
    // *   。 : Chinese full stop
    // *   .: English full stop
    // *   ！ : Chinese exclamation point
    // *   ! : English exclamation point
    // *   ；: Chinese semicolon
    // *   ;: English semicolon
    // *   ？: Chinese question mark
    // *   ?: English question mark
    // 
    // The default value is empty, which means using the intelligent splitting method.
    std::shared_ptr<string> separator_ = nullptr;
    // The ID of the vector storage instance. This parameter is available only when SinkType is set to ADB. You can view the ID on the [Instances](https://gpdbnext.console.aliyun.com/gpdb/list) page of AnalyticDB for PostgreSQL.
    std::shared_ptr<string> sinkInstanceId_ = nullptr;
    // The region of the vector storage instance. This parameter is available only when SinkType is set to ADB. You can call the [DescribeRegions](https://www.alibabacloud.com/help/en/analyticdb/analyticdb-for-postgresql/developer-reference/api-gpdb-2016-05-03-describeregions) operation to query the most recent region list.
    std::shared_ptr<string> sinkRegion_ = nullptr;
    // The vector storage type of the knowledge base. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   DEFAULT: The built-in vector database.
    // *   ADB: AnalyticDB for PostgreSQL database. If you need advanced features, such as managing, auditing, and monitoring, we recommend that you specify ADB.
    // 
    // >  If you have not used AnalyticDB for AnalyticDB in Model Studio before, go to the [Create Knowledge Base](https://bailian.console.aliyun.com/#/knowledge-base/create) page, select ADB-PG as Vector Storage Type, and follow the instructions to grant permissions. If you specify ADB, you must also specify the `SinkInstanceId` and `SinkRegion` parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> sinkType_ = nullptr;
    // The data type of [Data Management](https://bailian.console.aliyun.com/#/data-center). For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   DATA_CENTER_CATEGORY: The category type. Import all documents from one or more categories in Data Center.
    // *   DATA_CENTER_FILE: The document type. Import one or more documents from Data Center.
    // 
    // >  If this parameter is set to DATA_CENTER_CATEGORY, you must specify the `CategoryIds` parameter. If this parameter is set to DATA_CENTER_FILE, you must specify the `DocumentIds` parameter.
    // 
    // >  If you want to create an empty knowledge base, you can use an empty category. Set this parameter to DATA_CENTER_CATEGORY. And specify the ID of an empty category for the `CategoryIds` parameter.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The data type of the knowledge base. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid value:
    // 
    // *   unstructured
    // 
    // >  After a knowledge base is created, its data type cannot be changed. You cannot create a structured knowledge base by calling an API operation. Use the console instead.
    // 
    // This parameter is required.
    std::shared_ptr<string> structureType_ = nullptr;
    std::shared_ptr<string> tableIdsShrink_ = nullptr;
    std::shared_ptr<string> chunkMode_ = nullptr;
    std::shared_ptr<bool> enableHeaders_ = nullptr;
    std::shared_ptr<string> metaExtractColumnsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
