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
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIds_);
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
      DARABONBA_PTR_TO_JSON(TableIds, tableIds_);
      DARABONBA_PTR_TO_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(datasourceCode, datasourceCode_);
      DARABONBA_PTR_TO_JSON(enableHeaders, enableHeaders_);
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
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIds_);
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
      DARABONBA_PTR_FROM_JSON(TableIds, tableIds_);
      DARABONBA_PTR_FROM_JSON(chunkMode, chunkMode_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(datasourceCode, datasourceCode_);
      DARABONBA_PTR_FROM_JSON(enableHeaders, enableHeaders_);
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
      // The description of the metadata field. The description must be 0 to 1,000 characters in length, and can contain Chinese characters, letters, digits, underscores (_), hyphens (-), periods (.), and colons (:). This parameter is left empty by default.
      shared_ptr<string> desc_ {};
      // When set to true, the key and value of this metadata filed will participate in the generation process of the model, together with the chunk. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> enableLlm_ {};
      // When set to true, the key and value of this metadata filed will participate in the knowledge base retrieval, together with the chunk. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> enableSearch_ {};
      // The metadata key. It must be 1 to 50 characters in length and must be English letters or underscores. If you specify this parameter, the `Value` and `Type` parameters are required.
      shared_ptr<string> key_ {};
      // The type of the metadata field. Valid values:
      // 
      // *   constant
      // *   variable
      // *   custom_prompt
      // *   regular
      // *   keywords
      // 
      // Enumerated value:
      // 
      // *   constant: constant extraction.
      // *   keywords: keyword extraction.
      // *   custom_prompt: LLM.
      // *   variable: variable extraction.
      // *   regular: regular expression.
      shared_ptr<string> type_ {};
      // The metadata value.
      shared_ptr<string> value_ {};
    };

    class DataSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
        DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
        DARABONBA_PTR_TO_JSON(CredentialKey, credentialKey_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(IsPrivateLink, isPrivateLink_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SubPath, subPath_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(Table, table_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
        DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
        DARABONBA_PTR_FROM_JSON(CredentialKey, credentialKey_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(IsPrivateLink, isPrivateLink_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(Table, table_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DataSource() = default ;
      DataSource(const DataSource &) = default ;
      DataSource(DataSource &&) = default ;
      DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSource() = default ;
      DataSource& operator=(const DataSource &) = default ;
      DataSource& operator=(DataSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->credentialKey_ == nullptr && this->database_ == nullptr && this->endpoint_ == nullptr && this->isPrivateLink_ == nullptr && this->region_ == nullptr
        && this->subPath_ == nullptr && this->subType_ == nullptr && this->table_ == nullptr && this->type_ == nullptr; };
      // credentialId Field Functions 
      bool hasCredentialId() const { return this->credentialId_ != nullptr;};
      void deleteCredentialId() { this->credentialId_ = nullptr;};
      inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
      inline DataSource& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


      // credentialKey Field Functions 
      bool hasCredentialKey() const { return this->credentialKey_ != nullptr;};
      void deleteCredentialKey() { this->credentialKey_ = nullptr;};
      inline string getCredentialKey() const { DARABONBA_PTR_GET_DEFAULT(credentialKey_, "") };
      inline DataSource& setCredentialKey(string credentialKey) { DARABONBA_PTR_SET_VALUE(credentialKey_, credentialKey) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline DataSource& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline DataSource& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // isPrivateLink Field Functions 
      bool hasIsPrivateLink() const { return this->isPrivateLink_ != nullptr;};
      void deleteIsPrivateLink() { this->isPrivateLink_ = nullptr;};
      inline bool getIsPrivateLink() const { DARABONBA_PTR_GET_DEFAULT(isPrivateLink_, false) };
      inline DataSource& setIsPrivateLink(bool isPrivateLink) { DARABONBA_PTR_SET_VALUE(isPrivateLink_, isPrivateLink) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DataSource& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // subPath Field Functions 
      bool hasSubPath() const { return this->subPath_ != nullptr;};
      void deleteSubPath() { this->subPath_ = nullptr;};
      inline string getSubPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
      inline DataSource& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline DataSource& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
      inline DataSource& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> credentialId_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> credentialKey_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> database_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> endpoint_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<bool> isPrivateLink_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> region_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> subPath_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> subType_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> table_ {};
      // >  This parameter is not available. Do not specify this parameter.
      shared_ptr<string> type_ {};
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
      shared_ptr<string> column_ {};
      shared_ptr<bool> isRecall_ {};
      shared_ptr<bool> isSearch_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->categoryIds_ == nullptr
        && this->chunkSize_ == nullptr && this->columns_ == nullptr && this->createIndexType_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr
        && this->documentIds_ == nullptr && this->embeddingModelName_ == nullptr && this->enableRewrite_ == nullptr && this->name_ == nullptr && this->overlapSize_ == nullptr
        && this->rerankMinScore_ == nullptr && this->rerankModelName_ == nullptr && this->separator_ == nullptr && this->sinkInstanceId_ == nullptr && this->sinkRegion_ == nullptr
        && this->sinkType_ == nullptr && this->sourceType_ == nullptr && this->structureType_ == nullptr && this->tableIds_ == nullptr && this->chunkMode_ == nullptr
        && this->database_ == nullptr && this->datasourceCode_ == nullptr && this->enableHeaders_ == nullptr && this->metaExtractColumns_ == nullptr && this->pipelineCommercialCu_ == nullptr
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


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const CreateIndexRequest::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, CreateIndexRequest::DataSource) };
    inline CreateIndexRequest::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, CreateIndexRequest::DataSource) };
    inline CreateIndexRequest& setDataSource(const CreateIndexRequest::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline CreateIndexRequest& setDataSource(CreateIndexRequest::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


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


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline double getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, 0.0) };
    inline CreateIndexRequest& setRerankMinScore(double rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


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


    // chunkMode Field Functions 
    bool hasChunkMode() const { return this->chunkMode_ != nullptr;};
    void deleteChunkMode() { this->chunkMode_ = nullptr;};
    inline string getChunkMode() const { DARABONBA_PTR_GET_DEFAULT(chunkMode_, "") };
    inline CreateIndexRequest& setChunkMode(string chunkMode) { DARABONBA_PTR_SET_VALUE(chunkMode_, chunkMode) };


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
    // The files to imported to the knowledge base. Specify the category IDs. All files under the categories will be imported (up to 10,000 files). To add more files later, call **SubmitIndexAddDocumentsJob**.
    shared_ptr<vector<string>> categoryIds_ {};
    // The chunk size, which is the maximum number of characters in each chunk. Text exceeding this length may be truncated.
    // 
    // Valid values: 1 to 6000. Default value: 500.
    // 
    // > If `ChunkSize` is set to a value less than 100, `OverlapSize` is required. Or, if you do not pass these two parameters, the system uses the default values of the two.
    shared_ptr<int32_t> chunkSize_ {};
    shared_ptr<vector<CreateIndexRequest::Columns>> columns_ {};
    // > This parameter is not available. Do not specify this parameter.
    shared_ptr<string> createIndexType_ {};
    // >  This parameter is not available. Do not specify this parameter.
    shared_ptr<CreateIndexRequest::DataSource> dataSource_ {};
    // The description of the knowledge base. The description must be 0 to 1,000 characters in length. This parameter is empty by default.
    shared_ptr<string> description_ {};
    // The files to imported to the knowledge base. Specify the file IDs to import (up to 10,000 files). To add more files later, call **SubmitIndexAddDocumentsJob**.
    shared_ptr<vector<string>> documentIds_ {};
    // The embedding model used in the knowledge base. The embedding model converts the original input prompt and knowledge text into numerical embeddings for similarity comparison. The default and only model available is text-embedding-v2. It supports multiple languages including Chinese and English and normalizes the embedding results. For more information, see [Embedding](https://help.aliyun.com/document_detail/2842587.html). Valid values:
    // 
    // *   text-embedding-v2
    // 
    // The default value is null, which means using text-embedding-v2.
    shared_ptr<string> embeddingModelName_ {};
    // Whether to enable rewriting for multi-turn conversations. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    shared_ptr<bool> enableRewrite_ {};
    // The name of the knowledge base. The name must be 1 to 20 characters in length, and can contain Chinese characters, letters, digits, underscores (_), hyphens (-), periods (.), and colons (:).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The overlap size, which is the number of overlapping characters between two consecutive chunks. Valid values: 0 to 1024.
    // 
    // Default value: 100.
    // 
    // > `OverlapSize` must be less than `ChunkSize`. Otherwise, chunking errors may occur.
    shared_ptr<int32_t> overlapSize_ {};
    // The similarity threshold. Only chunks with a similarity score higher than this value can be recalled. This parameter is used to filter chunks returned by the re-rank model. Valid values: 0.01 to 1.00.
    // 
    // Default value: 0.01.
    shared_ptr<double> rerankMinScore_ {};
    // The re-ranking model used in the knowledge base. The re-rank model is a scoring system outside the knowledge base. It calculates the similarity score of the query and text chunks in the knowledge base and ranks them in descending order. Then, the model returns the top K chunks with the highest scores. Valid values:
    // 
    // *   gte-rerank-hybrid
    // *   gte-rerank
    // 
    // The default value is empty, which means using gte-rerank-hybrid.
    // 
    // > If you need only semantic ranking, we recommend gte-rerank. If you need both semantic ranking and text matching features to ensure relevance, we recommend gte-rerank-hybrid.
    shared_ptr<string> rerankModelName_ {};
    // > This parameter is not available. Do not specify this parameter.
    shared_ptr<string> separator_ {};
    // The ID of the AnalyticDB for PostgreSQL instance. Required only when `SinkType` is set to ADB. Get the ID on the [Instances](https://gpdbnext.console.aliyun.com/gpdb/list) page of AnalyticDB for PostgreSQL.
    shared_ptr<string> sinkInstanceId_ {};
    // The region of the AnalyticDB for PostgreSQL instance. Required only when `SinkType` is set to ADB. Call [DescribeRegions](https://www.alibabacloud.com/help/zh/analyticdb/analyticdb-for-postgresql/developer-reference/api-gpdb-2016-05-03-describeregions?spm=a2c63.p38356.0.i3) to obtain the region list.
    shared_ptr<string> sinkRegion_ {};
    // The vector storage type of the knowledge base. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html). Valid values:
    // 
    // *   BUILT_IN: The vector data is hosted by Alibaba Cloud Model Studio.
    // *   ADB: AnalyticDB for PostgreSQL database. If you need advanced features, such as managing, auditing, and monitoring, we recommend ADB.
    // 
    // > If you have not used AnalyticDB for AnalyticDB in Model Studio before, go to the [Create Knowledge Base](https://bailian.console.alibabacloud.com/#/knowledge-base/create) page, select ADB-PG as Vector Storage Type, and follow the instructions to grant permissions. If you specify ADB, the `SinkInstanceId` and `SinkRegion` parameters are required.
    // 
    // This parameter is required.
    shared_ptr<string> sinkType_ {};
    // > This parameter is required in the latest version of the SDK. Otherwise, when you call SubmitIndexJob, an error will occur: Required parameter(data_sources) missing or invalid.
    // 
    // The source of the imported data. Valid values:
    // 
    // *   DATA_CENTER_CATEGORY: The category type, that is to import all files in one or more specified categories in [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
    // *   DATA_CENTER_FILE: The file type, that is to import one or more specified files in [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center).
    // 
    // > If set to DATA_CENTER_CATEGORY, `CategoryIds` is required. If set to DATA_CENTER_FILE, `DocumentIds` is required.
    // 
    // > To create an empty knowledge base, you can use an empty category with no files: Set this parameter to DATA_CENTER_CATEGORY, and `CategoryIds` to the ID of an empty category.
    shared_ptr<string> sourceType_ {};
    // The type of the knowledge base. Valid values:
    // 
    // *   unstructured: The document search type.
    // 
    // > After you create a knowledge base, its type cannot be changed. This operation does not support data query and image Q\\&A types. Use the console instead.
    // 
    // This parameter is required.
    shared_ptr<string> structureType_ {};
    // > This parameter is not available. Do not specify this parameter.
    shared_ptr<vector<string>> tableIds_ {};
    // > This parameter is not available. Do not specify this parameter.
    shared_ptr<string> chunkMode_ {};
    shared_ptr<string> database_ {};
    shared_ptr<string> datasourceCode_ {};
    // Whether to treat the first row of all .xlsx and .xls files as headers and concatenate them into each text chunk. This prevents the models from mistakenly interpreting headers as regular data rows.
    // 
    // > Enable this feature only when all imported files are in .xlsx or .xls format and contain headers. Otherwise, leave it disabled.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    shared_ptr<bool> enableHeaders_ {};
    // The metadata extraction configurations. Metadata refers to a set of additional attributes associated with unstructured data, which are integrated into text chunks in key-value pairs. For more information, see [Knowledge base](https://help.aliyun.com/document_detail/2807740.html).
    shared_ptr<vector<CreateIndexRequest::MetaExtractColumns>> metaExtractColumns_ {};
    shared_ptr<int32_t> pipelineCommercialCu_ {};
    shared_ptr<string> pipelineCommercialType_ {};
    shared_ptr<string> pipelineRetrieveRateLimitStrategy_ {};
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
