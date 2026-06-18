// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(CreateIndexType, createIndexType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIds_);
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
      DARABONBA_PTR_TO_JSON(TableIds, tableIds_);
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(connectId, connectId_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(datasourceCode, datasourceCode_);
      DARABONBA_PTR_TO_JSON(enableHeaders, enableHeaders_);
      DARABONBA_PTR_TO_JSON(knowledgeScene, knowledgeScene_);
      DARABONBA_PTR_TO_JSON(knowledgeType, knowledgeType_);
      DARABONBA_PTR_TO_JSON(metaExtractColumns, metaExtractColumns_);
      DARABONBA_PTR_TO_JSON(pipelineCommercialCu, pipelineCommercialCu_);
      DARABONBA_PTR_TO_JSON(pipelineCommercialType, pipelineCommercialType_);
      DARABONBA_PTR_TO_JSON(pipelineRetrieveRateLimitStrategy, pipelineRetrieveRateLimitStrategy_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(CreateIndexType, createIndexType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIds_);
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
      DARABONBA_PTR_FROM_JSON(TableIds, tableIds_);
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(connectId, connectId_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(datasourceCode, datasourceCode_);
      DARABONBA_PTR_FROM_JSON(enableHeaders, enableHeaders_);
      DARABONBA_PTR_FROM_JSON(knowledgeScene, knowledgeScene_);
      DARABONBA_PTR_FROM_JSON(knowledgeType, knowledgeType_);
      DARABONBA_PTR_FROM_JSON(metaExtractColumns, metaExtractColumns_);
      DARABONBA_PTR_FROM_JSON(pipelineCommercialCu, pipelineCommercialCu_);
      DARABONBA_PTR_FROM_JSON(pipelineCommercialType, pipelineCommercialType_);
      DARABONBA_PTR_FROM_JSON(pipelineRetrieveRateLimitStrategy, pipelineRetrieveRateLimitStrategy_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    CreateIndexRequest() = default ;
    CreateIndexRequest(const CreateIndexRequest &) = default ;
    CreateIndexRequest(CreateIndexRequest &&) = default ;
    CreateIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexRequest() = default ;
    CreateIndexRequest& operator=(const CreateIndexRequest &) = default ;
    CreateIndexRequest& operator=(CreateIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetaExtractColumns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetaExtractColumns& obj) { 
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(EnableLlm, enableLlm_);
        DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MetaExtractColumns& obj) { 
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(EnableLlm, enableLlm_);
        DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MetaExtractColumns() = default ;
      MetaExtractColumns(const MetaExtractColumns &) = default ;
      MetaExtractColumns(MetaExtractColumns &&) = default ;
      MetaExtractColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetaExtractColumns() = default ;
      MetaExtractColumns& operator=(const MetaExtractColumns &) = default ;
      MetaExtractColumns& operator=(MetaExtractColumns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->enableLlm_ == nullptr && this->enableSearch_ == nullptr && this->key_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline MetaExtractColumns& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // enableLlm Field Functions 
      bool hasEnableLlm() const { return this->enableLlm_ != nullptr;};
      void deleteEnableLlm() { this->enableLlm_ = nullptr;};
      inline bool getEnableLlm() const { DARABONBA_PTR_GET_DEFAULT(enableLlm_, false) };
      inline MetaExtractColumns& setEnableLlm(bool enableLlm) { DARABONBA_PTR_SET_VALUE(enableLlm_, enableLlm) };


      // enableSearch Field Functions 
      bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
      void deleteEnableSearch() { this->enableSearch_ = nullptr;};
      inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
      inline MetaExtractColumns& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline MetaExtractColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MetaExtractColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline MetaExtractColumns& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The Chinese description of the metadata field. The description can be 0 to 1,000 characters in length and can contain Chinese characters, letters, digits, underscores (_), hyphens (-), periods (.), and colons (:). The default value is empty.
      shared_ptr<string> desc_ {};
      // If enabled, the metadata field and its value are used along with the text chunk content in the answer generation process of the LLM. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // The default value is false.
      shared_ptr<bool> enableLlm_ {};
      // If enabled, the metadata field and its value are used along with the text chunk content in the knowledge base retrieval process. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // The default value is false.
      shared_ptr<bool> enableSearch_ {};
      // The metadata field. The field name can be 1 to 50 characters in length and must consist of letters or underscores. If you specify this parameter, you must also specify the \\`Value\\` and \\`Type\\` parameters.
      shared_ptr<string> key_ {};
      // The method for obtaining the value of the metadata field. Valid values:
      // 
      // - constant: Constant.
      // 
      // - variable: Variable.
      // 
      // - custom_prompt: Large Language Model (LLM).
      // 
      // - regular: Regular expression.
      // 
      // - keywords: Keyword search.
      shared_ptr<string> type_ {};
      // The value of the metadata field.
      shared_ptr<string> value_ {};
    };

    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
        DARABONBA_PTR_TO_JSON(IsRecall, isRecall_);
        DARABONBA_PTR_TO_JSON(IsSearch, isSearch_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
        DARABONBA_PTR_FROM_JSON(IsRecall, isRecall_);
        DARABONBA_PTR_FROM_JSON(IsSearch, isSearch_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->column_ == nullptr
        && this->isRecall_ == nullptr && this->isSearch_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
      inline Columns& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


      // isRecall Field Functions 
      bool hasIsRecall() const { return this->isRecall_ != nullptr;};
      void deleteIsRecall() { this->isRecall_ = nullptr;};
      inline bool getIsRecall() const { DARABONBA_PTR_GET_DEFAULT(isRecall_, false) };
      inline Columns& setIsRecall(bool isRecall) { DARABONBA_PTR_SET_VALUE(isRecall_, isRecall) };


      // isSearch Field Functions 
      bool hasIsSearch() const { return this->isSearch_ != nullptr;};
      void deleteIsSearch() { this->isSearch_ = nullptr;};
      inline bool getIsSearch() const { DARABONBA_PTR_GET_DEFAULT(isSearch_, false) };
      inline Columns& setIsSearch(bool isSearch) { DARABONBA_PTR_SET_VALUE(isSearch_, isSearch) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // > This parameter is not yet available. Do not specify it.
      shared_ptr<string> column_ {};
      // <props="china">
      // 
      // Specifies whether to participate in model response generation. If enabled, the retrieval results from this column are used as input for the LLM to generate an answer. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // 
      // 
      // <props="intl">
      // 
      // > This parameter is not yet available. Do not specify it.
      shared_ptr<bool> isRecall_ {};
      // <props="china">
      // 
      // Specifies whether to participate in knowledge base retrieval. If enabled, the knowledge base is allowed to search for data in this column. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // 
      // 
      // <props="intl">
      // 
      // > This parameter is not yet available. Do not specify it.
      shared_ptr<bool> isSearch_ {};
      // <props="china">
      // 
      // The field name. It must be consistent with the table header of the data table created in Application Data.
      // 
      // 
      // 
      // <props="intl">
      // 
      // > This parameter is not yet available. Do not specify it.
      shared_ptr<string> name_ {};
      // <props="china">
      // 
      // The field type. It must be consistent with the table header of the data table created in Application Data. Valid values:
      // 
      // - string
      // 
      // - double
      // 
      // - long
      // 
      // - datetime
      // 
      // - image_url
      // 
      // 
      // 
      // <props="intl">
      // 
      // > This parameter is not yet available. Do not specify it.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->categoryIds_ == nullptr
        && this->chunkSize_ == nullptr && this->columns_ == nullptr && this->createIndexType_ == nullptr && this->description_ == nullptr && this->documentIds_ == nullptr
        && this->embeddingModelName_ == nullptr && this->enableRewrite_ == nullptr && this->name_ == nullptr && this->overlapSize_ == nullptr && this->rerankInstruct_ == nullptr
        && this->rerankMinScore_ == nullptr && this->rerankMode_ == nullptr && this->rerankModelName_ == nullptr && this->separator_ == nullptr && this->sinkInstanceId_ == nullptr
        && this->sinkRegion_ == nullptr && this->sinkType_ == nullptr && this->sourceType_ == nullptr && this->structureType_ == nullptr && this->tableIds_ == nullptr
        && this->channelType_ == nullptr && this->chunkMode_ == nullptr && this->connectId_ == nullptr && this->database_ == nullptr && this->datasourceCode_ == nullptr
        && this->enableHeaders_ == nullptr && this->knowledgeScene_ == nullptr && this->knowledgeType_ == nullptr && this->metaExtractColumns_ == nullptr && this->pipelineCommercialCu_ == nullptr
        && this->pipelineCommercialType_ == nullptr && this->pipelineRetrieveRateLimitStrategy_ == nullptr && this->table_ == nullptr; };
    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<string> & getCategoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<string>) };
    inline vector<string> getCategoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<string>) };
    inline CreateIndexRequest& setCategoryIds(const vector<string> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline CreateIndexRequest& setCategoryIds(vector<string> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline CreateIndexRequest& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<CreateIndexRequest::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<CreateIndexRequest::Columns>) };
    inline vector<CreateIndexRequest::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<CreateIndexRequest::Columns>) };
    inline CreateIndexRequest& setColumns(const vector<CreateIndexRequest::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CreateIndexRequest& setColumns(vector<CreateIndexRequest::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // createIndexType Field Functions 
    bool hasCreateIndexType() const { return this->createIndexType_ != nullptr;};
    void deleteCreateIndexType() { this->createIndexType_ = nullptr;};
    inline string getCreateIndexType() const { DARABONBA_PTR_GET_DEFAULT(createIndexType_, "") };
    inline CreateIndexRequest& setCreateIndexType(string createIndexType) { DARABONBA_PTR_SET_VALUE(createIndexType_, createIndexType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIndexRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<string> & getDocumentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
    inline vector<string> getDocumentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
    inline CreateIndexRequest& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline CreateIndexRequest& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // embeddingModelName Field Functions 
    bool hasEmbeddingModelName() const { return this->embeddingModelName_ != nullptr;};
    void deleteEmbeddingModelName() { this->embeddingModelName_ = nullptr;};
    inline string getEmbeddingModelName() const { DARABONBA_PTR_GET_DEFAULT(embeddingModelName_, "") };
    inline CreateIndexRequest& setEmbeddingModelName(string embeddingModelName) { DARABONBA_PTR_SET_VALUE(embeddingModelName_, embeddingModelName) };


    // enableRewrite Field Functions 
    bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
    void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
    inline bool getEnableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
    inline CreateIndexRequest& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIndexRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t getOverlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline CreateIndexRequest& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // rerankInstruct Field Functions 
    bool hasRerankInstruct() const { return this->rerankInstruct_ != nullptr;};
    void deleteRerankInstruct() { this->rerankInstruct_ = nullptr;};
    inline string getRerankInstruct() const { DARABONBA_PTR_GET_DEFAULT(rerankInstruct_, "") };
    inline CreateIndexRequest& setRerankInstruct(string rerankInstruct) { DARABONBA_PTR_SET_VALUE(rerankInstruct_, rerankInstruct) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline double getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, 0.0) };
    inline CreateIndexRequest& setRerankMinScore(double rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // rerankMode Field Functions 
    bool hasRerankMode() const { return this->rerankMode_ != nullptr;};
    void deleteRerankMode() { this->rerankMode_ = nullptr;};
    inline string getRerankMode() const { DARABONBA_PTR_GET_DEFAULT(rerankMode_, "") };
    inline CreateIndexRequest& setRerankMode(string rerankMode) { DARABONBA_PTR_SET_VALUE(rerankMode_, rerankMode) };


    // rerankModelName Field Functions 
    bool hasRerankModelName() const { return this->rerankModelName_ != nullptr;};
    void deleteRerankModelName() { this->rerankModelName_ = nullptr;};
    inline string getRerankModelName() const { DARABONBA_PTR_GET_DEFAULT(rerankModelName_, "") };
    inline CreateIndexRequest& setRerankModelName(string rerankModelName) { DARABONBA_PTR_SET_VALUE(rerankModelName_, rerankModelName) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string getSeparator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline CreateIndexRequest& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sinkInstanceId Field Functions 
    bool hasSinkInstanceId() const { return this->sinkInstanceId_ != nullptr;};
    void deleteSinkInstanceId() { this->sinkInstanceId_ = nullptr;};
    inline string getSinkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sinkInstanceId_, "") };
    inline CreateIndexRequest& setSinkInstanceId(string sinkInstanceId) { DARABONBA_PTR_SET_VALUE(sinkInstanceId_, sinkInstanceId) };


    // sinkRegion Field Functions 
    bool hasSinkRegion() const { return this->sinkRegion_ != nullptr;};
    void deleteSinkRegion() { this->sinkRegion_ = nullptr;};
    inline string getSinkRegion() const { DARABONBA_PTR_GET_DEFAULT(sinkRegion_, "") };
    inline CreateIndexRequest& setSinkRegion(string sinkRegion) { DARABONBA_PTR_SET_VALUE(sinkRegion_, sinkRegion) };


    // sinkType Field Functions 
    bool hasSinkType() const { return this->sinkType_ != nullptr;};
    void deleteSinkType() { this->sinkType_ = nullptr;};
    inline string getSinkType() const { DARABONBA_PTR_GET_DEFAULT(sinkType_, "") };
    inline CreateIndexRequest& setSinkType(string sinkType) { DARABONBA_PTR_SET_VALUE(sinkType_, sinkType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateIndexRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // structureType Field Functions 
    bool hasStructureType() const { return this->structureType_ != nullptr;};
    void deleteStructureType() { this->structureType_ = nullptr;};
    inline string getStructureType() const { DARABONBA_PTR_GET_DEFAULT(structureType_, "") };
    inline CreateIndexRequest& setStructureType(string structureType) { DARABONBA_PTR_SET_VALUE(structureType_, structureType) };


    // tableIds Field Functions 
    bool hasTableIds() const { return this->tableIds_ != nullptr;};
    void deleteTableIds() { this->tableIds_ = nullptr;};
    inline const vector<string> & getTableIds() const { DARABONBA_PTR_GET_CONST(tableIds_, vector<string>) };
    inline vector<string> getTableIds() { DARABONBA_PTR_GET(tableIds_, vector<string>) };
    inline CreateIndexRequest& setTableIds(const vector<string> & tableIds) { DARABONBA_PTR_SET_VALUE(tableIds_, tableIds) };
    inline CreateIndexRequest& setTableIds(vector<string> && tableIds) { DARABONBA_PTR_SET_RVALUE(tableIds_, tableIds) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline CreateIndexRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string getChunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline CreateIndexRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


    // connectId Field Functions 
    bool hasConnectId() const { return this->connectId_ != nullptr;};
    void deleteConnectId() { this->connectId_ = nullptr;};
    inline string getConnectId() const { DARABONBA_PTR_GET_DEFAULT(connectId_, "") };
    inline CreateIndexRequest& setConnectId(string connectId) { DARABONBA_PTR_SET_VALUE(connectId_, connectId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CreateIndexRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // datasourceCode Field Functions 
    bool hasDatasourceCode() const { return this->datasourceCode_ != nullptr;};
    void deleteDatasourceCode() { this->datasourceCode_ = nullptr;};
    inline string getDatasourceCode() const { DARABONBA_PTR_GET_DEFAULT(datasourceCode_, "") };
    inline CreateIndexRequest& setDatasourceCode(string datasourceCode) { DARABONBA_PTR_SET_VALUE(datasourceCode_, datasourceCode) };


    // enableHeaders Field Functions 
    bool hasEnableHeaders() const { return this->enableHeaders_ != nullptr;};
    void deleteEnableHeaders() { this->enableHeaders_ = nullptr;};
    inline bool getEnableHeaders() const { DARABONBA_PTR_GET_DEFAULT(enableHeaders_, false) };
    inline CreateIndexRequest& setEnableHeaders(bool enableHeaders) { DARABONBA_PTR_SET_VALUE(enableHeaders_, enableHeaders) };


    // knowledgeScene Field Functions 
    bool hasKnowledgeScene() const { return this->knowledgeScene_ != nullptr;};
    void deleteKnowledgeScene() { this->knowledgeScene_ = nullptr;};
    inline string getKnowledgeScene() const { DARABONBA_PTR_GET_DEFAULT(knowledgeScene_, "") };
    inline CreateIndexRequest& setKnowledgeScene(string knowledgeScene) { DARABONBA_PTR_SET_VALUE(knowledgeScene_, knowledgeScene) };


    // knowledgeType Field Functions 
    bool hasKnowledgeType() const { return this->knowledgeType_ != nullptr;};
    void deleteKnowledgeType() { this->knowledgeType_ = nullptr;};
    inline string getKnowledgeType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeType_, "") };
    inline CreateIndexRequest& setKnowledgeType(string knowledgeType) { DARABONBA_PTR_SET_VALUE(knowledgeType_, knowledgeType) };


    // metaExtractColumns Field Functions 
    bool hasMetaExtractColumns() const { return this->metaExtractColumns_ != nullptr;};
    void deleteMetaExtractColumns() { this->metaExtractColumns_ = nullptr;};
    inline const vector<CreateIndexRequest::MetaExtractColumns> & getMetaExtractColumns() const { DARABONBA_PTR_GET_CONST(metaExtractColumns_, vector<CreateIndexRequest::MetaExtractColumns>) };
    inline vector<CreateIndexRequest::MetaExtractColumns> getMetaExtractColumns() { DARABONBA_PTR_GET(metaExtractColumns_, vector<CreateIndexRequest::MetaExtractColumns>) };
    inline CreateIndexRequest& setMetaExtractColumns(const vector<CreateIndexRequest::MetaExtractColumns> & metaExtractColumns) { DARABONBA_PTR_SET_VALUE(metaExtractColumns_, metaExtractColumns) };
    inline CreateIndexRequest& setMetaExtractColumns(vector<CreateIndexRequest::MetaExtractColumns> && metaExtractColumns) { DARABONBA_PTR_SET_RVALUE(metaExtractColumns_, metaExtractColumns) };


    // pipelineCommercialCu Field Functions 
    bool hasPipelineCommercialCu() const { return this->pipelineCommercialCu_ != nullptr;};
    void deletePipelineCommercialCu() { this->pipelineCommercialCu_ = nullptr;};
    inline int32_t getPipelineCommercialCu() const { DARABONBA_PTR_GET_DEFAULT(pipelineCommercialCu_, 0) };
    inline CreateIndexRequest& setPipelineCommercialCu(int32_t pipelineCommercialCu) { DARABONBA_PTR_SET_VALUE(pipelineCommercialCu_, pipelineCommercialCu) };


    // pipelineCommercialType Field Functions 
    bool hasPipelineCommercialType() const { return this->pipelineCommercialType_ != nullptr;};
    void deletePipelineCommercialType() { this->pipelineCommercialType_ = nullptr;};
    inline string getPipelineCommercialType() const { DARABONBA_PTR_GET_DEFAULT(pipelineCommercialType_, "") };
    inline CreateIndexRequest& setPipelineCommercialType(string pipelineCommercialType) { DARABONBA_PTR_SET_VALUE(pipelineCommercialType_, pipelineCommercialType) };


    // pipelineRetrieveRateLimitStrategy Field Functions 
    bool hasPipelineRetrieveRateLimitStrategy() const { return this->pipelineRetrieveRateLimitStrategy_ != nullptr;};
    void deletePipelineRetrieveRateLimitStrategy() { this->pipelineRetrieveRateLimitStrategy_ = nullptr;};
    inline string getPipelineRetrieveRateLimitStrategy() const { DARABONBA_PTR_GET_DEFAULT(pipelineRetrieveRateLimitStrategy_, "") };
    inline CreateIndexRequest& setPipelineRetrieveRateLimitStrategy(string pipelineRetrieveRateLimitStrategy) { DARABONBA_PTR_SET_VALUE(pipelineRetrieveRateLimitStrategy_, pipelineRetrieveRateLimitStrategy) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline CreateIndexRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // You can import files when you create a knowledge base. Specify category IDs to import all files under the corresponding categories. We recommend importing no more than 10,000 files. If you have more files, you can call the **SubmitIndexAddDocumentsJob** operation to import them later.
    shared_ptr<vector<string>> categoryIds_ {};
    // <props="china">
    // 
    // The chunk size, which is the maximum number of characters for each text chunk. If this length is exceeded:
    // 
    // - **Smart chunking** (the \\`chunkMode\\` parameter is not specified): The text is likely to be truncated.
    // 
    // - **Custom chunking** (the \\`chunkMode\\` parameter is specified): The text is forcibly truncated.
    // 
    // 
    // 
    // <props="intl">
    // 
    // The chunk size, which is the maximum number of characters for each text chunk. If this length is exceeded, the text is likely to be truncated.
    // 
    // 
    // 
    // The value must be between 1 and 6000. If you do not specify this parameter, the default value 500 is used.
    // 
    // > If you set \\`ChunkSize\\` to a value less than 100, you must also set \\`OverlapSize\\`. You can also leave both parameters unspecified, and the system will use the default values.
    shared_ptr<int32_t> chunkSize_ {};
    // <props="china">
    // 
    // The structure of the data table (column names, types, etc.).
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<vector<CreateIndexRequest::Columns>> columns_ {};
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<string> createIndexType_ {};
    // The description of the knowledge base. The description can be 0 to 1,000 English or Chinese characters in length.
    // The default value is empty.
    shared_ptr<string> description_ {};
    // You can import files when you create a knowledge base. Specify a list of files to import by providing their IDs. We recommend importing no more than 10,000 files. If you have more files, you can call the **SubmitIndexAddDocumentsJob** operation to import them later.
    shared_ptr<vector<string>> documentIds_ {};
    // <props="china">
    // 
    // The vector model used by the knowledge base. A vector model converts the original input prompt and knowledge text into numerical vectors to compare their similarity. The text-embedding-v4 model is a comprehensive upgrade over the text-embedding-v3 model in terms of language support, vectorization of code snippets, and vector dimension selection. It is suitable for most scenarios. For more information, see [Vectorization](https://help.aliyun.com/document_detail/2842587.html). Valid values:
    // 
    // - text-embedding-v4
    // 
    // - text-embedding-v3
    // 
    // If you do not specify this parameter, \\`text-embedding-v3\\` is used.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - The vector model used by the knowledge base. A vector model converts the original input prompt and knowledge text into numerical vectors to compare their similarity. The default text-embedding-v2 model (which cannot be changed for now) supports both Chinese and English, along with multiple other languages, and normalizes the vector results. For more information, see [Vectorization](https://help.aliyun.com/document_detail/2842587.html). Valid values:
    // 
    // 
    // 
    // 
    // - text-embedding-v2
    // 
    // If you do not specify this parameter, \\`text-embedding-v2\\` is used.
    shared_ptr<string> embeddingModelName_ {};
    // Specifies whether to enable multi-turn conversation rewriting. Valid values:
    // 
    // - true: Enabled.
    // 
    // - false: Disabled.
    // 
    // If you do not specify this parameter, this feature is enabled by default.
    shared_ptr<bool> enableRewrite_ {};
    // The name of the knowledge base. The name can be 1 to 20 characters in length and can contain Chinese characters, letters, digits, underscores (_), hyphens (-), periods (.), and colons (:).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The overlap size, which is the number of overlapping characters between the current text chunk and the previous one. The value must be between 0 and 1024.
    // 
    // If you do not specify this parameter, the default value 100 is used.
    // 
    // > \\`OverlapSize\\` must be smaller than \\`ChunkSize\\`. Otherwise, chunking errors will occur.
    shared_ptr<int32_t> overlapSize_ {};
    // The name of the database. This parameter is required when creating a data query knowledge base.
    // 
    // The database must exist in the data source specified by \\`datasourceCode\\`.
    shared_ptr<string> rerankInstruct_ {};
    // The similarity threshold. Only text chunks with a similarity score greater than this value are recalled. This is used to filter the text chunks returned by the reranking model. The value must be between 0.01 and 1.00.
    // 
    // If you do not specify this parameter, the default value 0.01 is used.
    shared_ptr<double> rerankMinScore_ {};
    // The name of the data table. This parameter is required when creating a data query knowledge base.
    // 
    // The data table must exist in the data source specified by \\`connectId\\` or \\`datasourceCode\\`.
    shared_ptr<string> rerankMode_ {};
    // The reranking model used by the knowledge base. The reranking model is an external scoring system that calculates a similarity score between the user\\"s question and each text chunk in the knowledge base, sorts them in descending order, and returns the top K text chunks. Valid values:
    // 
    // <props="china">
    // 
    // - qwen3-rerank-hybrid: qwen3-rerank (hybrid) reranking.
    // 
    // - qwen3-rerank: qwen3-rerank reranking.
    // 
    // - gte-rerank-hybrid: gte-rerank (hybrid) reranking.
    // 
    // - gte-rerank: gte-rerank reranking.
    // 
    // 
    // 
    // <props="intl">
    // 
    // - gte-rerank-hybrid: Official reranking.
    // 
    // - gte-rerank: gte-rerank reranking.
    // 
    // 
    // 
    // <props="china">
    // 
    // If you do not specify this parameter, \\`qwen3-rerank\\` is used.
    // 
    // > Use \\`qwen3-rerank\\` if you only need semantic sorting. Use \\`qwen3-rerank-hybrid\\` if you need both semantic sorting and text-matching features to ensure relevance.
    // 
    // 
    // 
    // <props="intl">
    // 
    // If you do not specify this parameter, \\`gte-rerank-hybrid\\` is used.
    // 
    // > Use \\`gte-rerank\\` if you only need semantic sorting. Use \\`gte-rerank-hybrid\\` if you need both semantic sorting and text-matching features to ensure relevance.
    // 
    // 
    // 
    // <props="china">
    // 
    // > The \\`gte-rerank-hybrid\\` and \\`gte-rerank\\` models are no longer updated and are not recommended.
    shared_ptr<string> rerankModelName_ {};
    // <props="china">
    // 
    // The sentence separator. This parameter takes effect only when \\`chunkMode\\` is set to **regex**. It is ignored in other modes, even if specified. You can enter a regular expression (multiple expressions are not supported) to split the file into smaller text chunks.
    // 
    // For smart chunking (the \\`chunkMode\\` parameter is not specified), you can leave this parameter empty.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<string> separator_ {};
    // The ID of the AnalyticDB for PostgreSQL instance. This parameter is required only when \\`SinkType\\` is set to ADB. Go to the [AnalyticDB for PostgreSQL instance list](https://gpdbnext.console.aliyun.com/gpdb/list) page to obtain this ID.
    shared_ptr<string> sinkInstanceId_ {};
    // The region where the AnalyticDB for PostgreSQL instance is located. This parameter is required only when \\`SinkType\\` is set to ADB. You can call the <props="intl">[DescribeRegions ](https://www.alibabacloud.com/help/zh/analyticdb/analyticdb-for-postgresql/developer-reference/api-gpdb-2016-05-03-describeregions?spm=a2c63.p38356.0.i3)operation to obtain a list of regions.
    shared_ptr<string> sinkRegion_ {};
    // The storage class for the knowledge base vectors. For more information, see [Knowledge bases](https://help.aliyun.com/document_detail/2807740.html). Valid values:
    // 
    // - BUILT_IN: Hosts the vector data on the Alibaba Cloud Model Studio platform.
    // 
    // - ADB: AnalyticDB for PostgreSQL. We recommend choosing ADB if you need advanced features such as database management, auditing, and monitoring.
    // 
    // > If you have not used ADB storage on Alibaba Cloud Model Studio, go to the <props="intl">[Create Knowledge Base](https://bailian.console.alibabacloud.com/#/knowledge-base/create) page, set the vector storage class to ADB-PG, and follow the on-screen instructions to grant the required permissions. If you set this parameter to ADB, you must specify the \\`SinkInstanceId\\` and \\`SinkRegion\\` parameters.
    // 
    // This parameter is required.
    shared_ptr<string> sinkType_ {};
    // >Notice: 
    // 
    // In the latest SDK version, this parameter is required. Otherwise, calling the SubmitIndexJob operation will result in the error: Required parameter(data_sources) missing or invalid.
    // 
    // 
    // 
    // The source of the imported data. Valid values:
    // 
    // - DATA_CENTER_CATEGORY: Category type. Imports all files under the specified categories in <props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). You can import multiple categories at the same time.
    // 
    // - DATA_CENTER_FILE: File type. Imports the specified files from <props="intl">[Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center). You can import multiple files at the same time.
    // 
    // > If you set this parameter to DATA_CENTER_CATEGORY, you must specify the \\`CategoryIds\\` parameter. If you set this parameter to DATA_CENTER_FILE, you must specify the \\`DocumentIds\\` parameter.
    // 
    // > To create an empty knowledge base, use an empty category that contains no files. Set this parameter to DATA_CENTER_CATEGORY and specify the ID of the empty category for \\`CategoryIds\\`.
    shared_ptr<string> sourceType_ {};
    // The type of the knowledge base.
    // 
    // **Valid values**:
    // 
    // - unstructured: A knowledge base for document search, audio, or video. The default scenario for document search is basic document Q\\&A.
    // 
    // <props="china">
    // 
    // - structured: A knowledge base for data query or image Q\\&A.
    // 
    // 
    // 
    // 
    // > The type of a knowledge base cannot be changed after it is created.
    // 
    // This parameter is required.
    shared_ptr<string> structureType_ {};
    // <props="china">
    // 
    // Obtain the table ID on the Tables tab of the table connector in Data Connections by clicking the ID icon next to the table name. If the list contains multiple IDs, only the first one is used.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<vector<string>> tableIds_ {};
    shared_ptr<string> channelType_ {};
    // <props="china">
    // 
    // Enables custom chunking and specifies the chunking policy. For more information, see [Knowledge bases](https://help.aliyun.com/document_detail/2807740.html).
    // 
    // Possible values (only one value can be specified at a time):
    // 
    // - **length**: Chunks by length. The text is strictly chunked according to the \\`ChunkSize\\` and \\`OverlapSize\\` you specify. If you do not specify these two parameters, the system uses the default values (\\`ChunkSize\\` is 500, \\`OverlapSize\\` is 100). Chunking by length does not support \\`Separator\\` (it is ignored even if specified).
    // 
    // - **page**: Chunks by page. If \\`ChunkSize\\` is specified, it is also considered during chunking (if not specified, the default value 500 is used). Chunking by page does not support \\`OverlapSize\\` or \\`Separator\\` (they are ignored even if specified).
    // 
    // - **h1**: Chunks by level-1 heading. If \\`ChunkSize\\` is specified, it is also considered during chunking (if not specified, the default value 500 is used). Chunking by level-1 heading does not support \\`OverlapSize\\` or \\`Separator\\` (they are ignored even if specified).
    // 
    // - **h2**: Chunks by level-2 heading. If \\`ChunkSize\\` is specified, it is also considered during chunking (if not specified, the default value 500 is used). Chunking by level-2 heading does not support \\`OverlapSize\\` or \\`Separator\\` (they are ignored even if specified).
    // 
    // - **regex**: Chunks by regular expression. You must specify the \\`Separator\\` parameter. If \\`ChunkSize\\` is specified, it is also considered during chunking (if not specified, the default value 500 is used). Chunking by regular expression does not support \\`OverlapSize\\` (it is ignored even if specified).
    // 
    // If you do not specify this parameter, smart chunking is used by default.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<string> chunkMode_ {};
    shared_ptr<string> connectId_ {};
    shared_ptr<string> database_ {};
    shared_ptr<string> datasourceCode_ {};
    // Specifies whether to treat the first row of all .xlsx and .xls files as the table header and append it to each text chunk. This prevents the LLM from treating the header as a regular data row.
    // 
    // > We recommend enabling this feature only when all imported files are in .xlsx or .xls format and contain a header. Otherwise, do not enable it.
    // 
    // Valid values:
    // 
    // - true: Enabled.
    // 
    // - false: Disabled.
    // 
    // If you do not specify this parameter, this feature is disabled by default.
    shared_ptr<bool> enableHeaders_ {};
    shared_ptr<string> knowledgeScene_ {};
    // The data source code. This parameter is required when creating a data query knowledge base and is used with \\`table\\` and \\`database\\`.
    // 
    // <props="china">
    // 
    // We recommend using the new \\`connectId\\` parameter, which you can obtain from the data connector card on the [Data Connections](https://modelstudio.console.alibabacloud.com/?tab=app#/connector/list) page. This parameter is still compatible but will no longer be maintained in the future.
    // 
    // 
    // 
    // > - This operation does not support associating custom databases. Use the Alibaba Cloud Model Studio console to create them.
    shared_ptr<string> knowledgeType_ {};
    // The metadata extraction configuration. Metadata is a series of additional attributes related to unstructured data content. These attributes are integrated into text chunks as key-value pairs. For more information, see [Knowledge bases](https://help.aliyun.com/document_detail/2807740.html).
    shared_ptr<vector<CreateIndexRequest::MetaExtractColumns>> metaExtractColumns_ {};
    // <props="china">
    // 
    // The number of RCUs for the knowledge base. This parameter is required only when \\`pipelineCommercialType\\` is set to \\`enterprise\\`. The value must be between 1 and 200.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<int32_t> pipelineCommercialCu_ {};
    // <props="china">
    // 
    // The [edition type](https://help.aliyun.com/document_detail/2997110.html) of the knowledge base. Valid values:
    // 
    // - standard: Standard Edition
    // 
    // - enterprise: Ultimate Edition
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<string> pipelineCommercialType_ {};
    // <props="china">
    // 
    // The rate limiting policy for the knowledge base dependency chain. This parameter is required only when \\`pipelineCommercialType\\` is set to \\`enterprise\\`.
    // Value:
    // downgrade: Degrades the service (switches to using a lightweight retrieval chain).
    // If you do not specify this parameter, the default value \\`downgrade\\` is used.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This parameter is not yet available. Do not specify it.
    shared_ptr<string> pipelineRetrieveRateLimitStrategy_ {};
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
