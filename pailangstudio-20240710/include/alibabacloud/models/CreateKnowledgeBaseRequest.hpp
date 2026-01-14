// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class VectorDBConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VectorDBConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
        DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_TO_JSON(VectorDBType, vectorDBType_);
      };
      friend void from_json(const Darabonba::Json& j, VectorDBConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
        DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_FROM_JSON(VectorDBType, vectorDBType_);
      };
      VectorDBConfig() = default ;
      VectorDBConfig(const VectorDBConfig &) = default ;
      VectorDBConfig(VectorDBConfig &&) = default ;
      VectorDBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VectorDBConfig() = default ;
      VectorDBConfig& operator=(const VectorDBConfig &) = default ;
      VectorDBConfig& operator=(VectorDBConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collectionName_ == nullptr
        && this->connectionId_ == nullptr && this->vectorDBType_ == nullptr; };
      // collectionName Field Functions 
      bool hasCollectionName() const { return this->collectionName_ != nullptr;};
      void deleteCollectionName() { this->collectionName_ = nullptr;};
      inline string getCollectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
      inline VectorDBConfig& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


      // connectionId Field Functions 
      bool hasConnectionId() const { return this->connectionId_ != nullptr;};
      void deleteConnectionId() { this->connectionId_ = nullptr;};
      inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
      inline VectorDBConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


      // vectorDBType Field Functions 
      bool hasVectorDBType() const { return this->vectorDBType_ != nullptr;};
      void deleteVectorDBType() { this->vectorDBType_ = nullptr;};
      inline string getVectorDBType() const { DARABONBA_PTR_GET_DEFAULT(vectorDBType_, "") };
      inline VectorDBConfig& setVectorDBType(string vectorDBType) { DARABONBA_PTR_SET_VALUE(vectorDBType_, vectorDBType) };


    protected:
      // Collectioin名称
      shared_ptr<string> collectionName_ {};
      // Embedding连接ID
      shared_ptr<string> connectionId_ {};
      // VectorDB类型
      // 
      // This parameter is required.
      shared_ptr<string> vectorDBType_ {};
    };

    class MetaDataConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetaDataConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CustomMetaData, customMetaData_);
      };
      friend void from_json(const Darabonba::Json& j, MetaDataConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomMetaData, customMetaData_);
      };
      MetaDataConfig() = default ;
      MetaDataConfig(const MetaDataConfig &) = default ;
      MetaDataConfig(MetaDataConfig &&) = default ;
      MetaDataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetaDataConfig() = default ;
      MetaDataConfig& operator=(const MetaDataConfig &) = default ;
      MetaDataConfig& operator=(MetaDataConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomMetaData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomMetaData& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, CustomMetaData& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        };
        CustomMetaData() = default ;
        CustomMetaData(const CustomMetaData &) = default ;
        CustomMetaData(CustomMetaData &&) = default ;
        CustomMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomMetaData() = default ;
        CustomMetaData& operator=(const CustomMetaData &) = default ;
        CustomMetaData& operator=(CustomMetaData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->valueType_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline CustomMetaData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline CustomMetaData& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        // 元数据Key
        shared_ptr<string> key_ {};
        // 元数据Value类型
        shared_ptr<string> valueType_ {};
      };

      virtual bool empty() const override { return this->customMetaData_ == nullptr; };
      // customMetaData Field Functions 
      bool hasCustomMetaData() const { return this->customMetaData_ != nullptr;};
      void deleteCustomMetaData() { this->customMetaData_ = nullptr;};
      inline const vector<MetaDataConfig::CustomMetaData> & getCustomMetaData() const { DARABONBA_PTR_GET_CONST(customMetaData_, vector<MetaDataConfig::CustomMetaData>) };
      inline vector<MetaDataConfig::CustomMetaData> getCustomMetaData() { DARABONBA_PTR_GET(customMetaData_, vector<MetaDataConfig::CustomMetaData>) };
      inline MetaDataConfig& setCustomMetaData(const vector<MetaDataConfig::CustomMetaData> & customMetaData) { DARABONBA_PTR_SET_VALUE(customMetaData_, customMetaData) };
      inline MetaDataConfig& setCustomMetaData(vector<MetaDataConfig::CustomMetaData> && customMetaData) { DARABONBA_PTR_SET_RVALUE(customMetaData_, customMetaData) };


    protected:
      // 自定义元数据
      shared_ptr<vector<MetaDataConfig::CustomMetaData>> customMetaData_ {};
    };

    class IndexColumnConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndexColumnConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnDefinitions, columnDefinitions_);
        DARABONBA_PTR_TO_JSON(ContentColumns, contentColumns_);
        DARABONBA_PTR_TO_JSON(EmbeddingColumns, embeddingColumns_);
      };
      friend void from_json(const Darabonba::Json& j, IndexColumnConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnDefinitions, columnDefinitions_);
        DARABONBA_PTR_FROM_JSON(ContentColumns, contentColumns_);
        DARABONBA_PTR_FROM_JSON(EmbeddingColumns, embeddingColumns_);
      };
      IndexColumnConfig() = default ;
      IndexColumnConfig(const IndexColumnConfig &) = default ;
      IndexColumnConfig(IndexColumnConfig &&) = default ;
      IndexColumnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndexColumnConfig() = default ;
      IndexColumnConfig& operator=(const IndexColumnConfig &) = default ;
      IndexColumnConfig& operator=(IndexColumnConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EmbeddingColumns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EmbeddingColumns& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, EmbeddingColumns& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        EmbeddingColumns() = default ;
        EmbeddingColumns(const EmbeddingColumns &) = default ;
        EmbeddingColumns(EmbeddingColumns &&) = default ;
        EmbeddingColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EmbeddingColumns() = default ;
        EmbeddingColumns& operator=(const EmbeddingColumns &) = default ;
        EmbeddingColumns& operator=(EmbeddingColumns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline EmbeddingColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // 列Key
        shared_ptr<string> key_ {};
      };

      class ContentColumns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContentColumns& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, ContentColumns& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        ContentColumns() = default ;
        ContentColumns(const ContentColumns &) = default ;
        ContentColumns(ContentColumns &&) = default ;
        ContentColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContentColumns() = default ;
        ContentColumns& operator=(const ContentColumns &) = default ;
        ContentColumns& operator=(ContentColumns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ContentColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // 列Key
        shared_ptr<string> key_ {};
      };

      class ColumnDefinitions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnDefinitions& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnDefinitions& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        ColumnDefinitions() = default ;
        ColumnDefinitions(const ColumnDefinitions &) = default ;
        ColumnDefinitions(ColumnDefinitions &&) = default ;
        ColumnDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnDefinitions() = default ;
        ColumnDefinitions& operator=(const ColumnDefinitions &) = default ;
        ColumnDefinitions& operator=(ColumnDefinitions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ColumnDefinitions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // 列Key
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->columnDefinitions_ == nullptr
        && this->contentColumns_ == nullptr && this->embeddingColumns_ == nullptr; };
      // columnDefinitions Field Functions 
      bool hasColumnDefinitions() const { return this->columnDefinitions_ != nullptr;};
      void deleteColumnDefinitions() { this->columnDefinitions_ = nullptr;};
      inline const vector<IndexColumnConfig::ColumnDefinitions> & getColumnDefinitions() const { DARABONBA_PTR_GET_CONST(columnDefinitions_, vector<IndexColumnConfig::ColumnDefinitions>) };
      inline vector<IndexColumnConfig::ColumnDefinitions> getColumnDefinitions() { DARABONBA_PTR_GET(columnDefinitions_, vector<IndexColumnConfig::ColumnDefinitions>) };
      inline IndexColumnConfig& setColumnDefinitions(const vector<IndexColumnConfig::ColumnDefinitions> & columnDefinitions) { DARABONBA_PTR_SET_VALUE(columnDefinitions_, columnDefinitions) };
      inline IndexColumnConfig& setColumnDefinitions(vector<IndexColumnConfig::ColumnDefinitions> && columnDefinitions) { DARABONBA_PTR_SET_RVALUE(columnDefinitions_, columnDefinitions) };


      // contentColumns Field Functions 
      bool hasContentColumns() const { return this->contentColumns_ != nullptr;};
      void deleteContentColumns() { this->contentColumns_ = nullptr;};
      inline const vector<IndexColumnConfig::ContentColumns> & getContentColumns() const { DARABONBA_PTR_GET_CONST(contentColumns_, vector<IndexColumnConfig::ContentColumns>) };
      inline vector<IndexColumnConfig::ContentColumns> getContentColumns() { DARABONBA_PTR_GET(contentColumns_, vector<IndexColumnConfig::ContentColumns>) };
      inline IndexColumnConfig& setContentColumns(const vector<IndexColumnConfig::ContentColumns> & contentColumns) { DARABONBA_PTR_SET_VALUE(contentColumns_, contentColumns) };
      inline IndexColumnConfig& setContentColumns(vector<IndexColumnConfig::ContentColumns> && contentColumns) { DARABONBA_PTR_SET_RVALUE(contentColumns_, contentColumns) };


      // embeddingColumns Field Functions 
      bool hasEmbeddingColumns() const { return this->embeddingColumns_ != nullptr;};
      void deleteEmbeddingColumns() { this->embeddingColumns_ = nullptr;};
      inline const vector<IndexColumnConfig::EmbeddingColumns> & getEmbeddingColumns() const { DARABONBA_PTR_GET_CONST(embeddingColumns_, vector<IndexColumnConfig::EmbeddingColumns>) };
      inline vector<IndexColumnConfig::EmbeddingColumns> getEmbeddingColumns() { DARABONBA_PTR_GET(embeddingColumns_, vector<IndexColumnConfig::EmbeddingColumns>) };
      inline IndexColumnConfig& setEmbeddingColumns(const vector<IndexColumnConfig::EmbeddingColumns> & embeddingColumns) { DARABONBA_PTR_SET_VALUE(embeddingColumns_, embeddingColumns) };
      inline IndexColumnConfig& setEmbeddingColumns(vector<IndexColumnConfig::EmbeddingColumns> && embeddingColumns) { DARABONBA_PTR_SET_RVALUE(embeddingColumns_, embeddingColumns) };


    protected:
      // 所有列名
      shared_ptr<vector<IndexColumnConfig::ColumnDefinitions>> columnDefinitions_ {};
      // 内容检索列
      shared_ptr<vector<IndexColumnConfig::ContentColumns>> contentColumns_ {};
      // Embedding列
      shared_ptr<vector<IndexColumnConfig::EmbeddingColumns>> embeddingColumns_ {};
    };

    class EmbeddingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmbeddingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_TO_JSON(Model, model_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
      };
      EmbeddingConfig() = default ;
      EmbeddingConfig(const EmbeddingConfig &) = default ;
      EmbeddingConfig(EmbeddingConfig &&) = default ;
      EmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmbeddingConfig() = default ;
      EmbeddingConfig& operator=(const EmbeddingConfig &) = default ;
      EmbeddingConfig& operator=(EmbeddingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionId_ == nullptr
        && this->model_ == nullptr; };
      // connectionId Field Functions 
      bool hasConnectionId() const { return this->connectionId_ != nullptr;};
      void deleteConnectionId() { this->connectionId_ = nullptr;};
      inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
      inline EmbeddingConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline EmbeddingConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    protected:
      // Embedding连接ID
      // 
      // This parameter is required.
      shared_ptr<string> connectionId_ {};
      // 模型
      // 
      // This parameter is required.
      shared_ptr<string> model_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      DataSources() = default ;
      DataSources(const DataSources &) = default ;
      DataSources(DataSources &&) = default ;
      DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSources() = default ;
      DataSources& operator=(const DataSources &) = default ;
      DataSources& operator=(DataSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->uri_ == nullptr; };
      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline DataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      // 统一资源识别码
      shared_ptr<string> uri_ {};
    };

    class ChunkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChunkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ChunkDuration, chunkDuration_);
        DARABONBA_PTR_TO_JSON(ChunkOverlap, chunkOverlap_);
        DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
        DARABONBA_PTR_TO_JSON(ChunkStrategy, chunkStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, ChunkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ChunkDuration, chunkDuration_);
        DARABONBA_PTR_FROM_JSON(ChunkOverlap, chunkOverlap_);
        DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
        DARABONBA_PTR_FROM_JSON(ChunkStrategy, chunkStrategy_);
      };
      ChunkConfig() = default ;
      ChunkConfig(const ChunkConfig &) = default ;
      ChunkConfig(ChunkConfig &&) = default ;
      ChunkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChunkConfig() = default ;
      ChunkConfig& operator=(const ChunkConfig &) = default ;
      ChunkConfig& operator=(ChunkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chunkDuration_ == nullptr
        && this->chunkOverlap_ == nullptr && this->chunkSize_ == nullptr && this->chunkStrategy_ == nullptr; };
      // chunkDuration Field Functions 
      bool hasChunkDuration() const { return this->chunkDuration_ != nullptr;};
      void deleteChunkDuration() { this->chunkDuration_ = nullptr;};
      inline int32_t getChunkDuration() const { DARABONBA_PTR_GET_DEFAULT(chunkDuration_, 0) };
      inline ChunkConfig& setChunkDuration(int32_t chunkDuration) { DARABONBA_PTR_SET_VALUE(chunkDuration_, chunkDuration) };


      // chunkOverlap Field Functions 
      bool hasChunkOverlap() const { return this->chunkOverlap_ != nullptr;};
      void deleteChunkOverlap() { this->chunkOverlap_ = nullptr;};
      inline int32_t getChunkOverlap() const { DARABONBA_PTR_GET_DEFAULT(chunkOverlap_, 0) };
      inline ChunkConfig& setChunkOverlap(int32_t chunkOverlap) { DARABONBA_PTR_SET_VALUE(chunkOverlap_, chunkOverlap) };


      // chunkSize Field Functions 
      bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
      void deleteChunkSize() { this->chunkSize_ = nullptr;};
      inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
      inline ChunkConfig& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


      // chunkStrategy Field Functions 
      bool hasChunkStrategy() const { return this->chunkStrategy_ != nullptr;};
      void deleteChunkStrategy() { this->chunkStrategy_ = nullptr;};
      inline string getChunkStrategy() const { DARABONBA_PTR_GET_DEFAULT(chunkStrategy_, "") };
      inline ChunkConfig& setChunkStrategy(string chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };


    protected:
      // 分块时长
      shared_ptr<int32_t> chunkDuration_ {};
      // 分块重叠大小
      shared_ptr<int32_t> chunkOverlap_ {};
      // 分块大小
      shared_ptr<int32_t> chunkSize_ {};
      // 分块策略
      shared_ptr<string> chunkStrategy_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->chunkConfig_ == nullptr && this->dataSources_ == nullptr && this->description_ == nullptr && this->embeddingConfig_ == nullptr && this->indexColumnConfig_ == nullptr
        && this->knowledgeBaseType_ == nullptr && this->metaDataConfig_ == nullptr && this->name_ == nullptr && this->outputDir_ == nullptr && this->runtimeId_ == nullptr
        && this->vectorDBConfig_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateKnowledgeBaseRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // chunkConfig Field Functions 
    bool hasChunkConfig() const { return this->chunkConfig_ != nullptr;};
    void deleteChunkConfig() { this->chunkConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequest::ChunkConfig & getChunkConfig() const { DARABONBA_PTR_GET_CONST(chunkConfig_, CreateKnowledgeBaseRequest::ChunkConfig) };
    inline CreateKnowledgeBaseRequest::ChunkConfig getChunkConfig() { DARABONBA_PTR_GET(chunkConfig_, CreateKnowledgeBaseRequest::ChunkConfig) };
    inline CreateKnowledgeBaseRequest& setChunkConfig(const CreateKnowledgeBaseRequest::ChunkConfig & chunkConfig) { DARABONBA_PTR_SET_VALUE(chunkConfig_, chunkConfig) };
    inline CreateKnowledgeBaseRequest& setChunkConfig(CreateKnowledgeBaseRequest::ChunkConfig && chunkConfig) { DARABONBA_PTR_SET_RVALUE(chunkConfig_, chunkConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<CreateKnowledgeBaseRequest::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<CreateKnowledgeBaseRequest::DataSources>) };
    inline vector<CreateKnowledgeBaseRequest::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<CreateKnowledgeBaseRequest::DataSources>) };
    inline CreateKnowledgeBaseRequest& setDataSources(const vector<CreateKnowledgeBaseRequest::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateKnowledgeBaseRequest& setDataSources(vector<CreateKnowledgeBaseRequest::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequest::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, CreateKnowledgeBaseRequest::EmbeddingConfig) };
    inline CreateKnowledgeBaseRequest::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, CreateKnowledgeBaseRequest::EmbeddingConfig) };
    inline CreateKnowledgeBaseRequest& setEmbeddingConfig(const CreateKnowledgeBaseRequest::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline CreateKnowledgeBaseRequest& setEmbeddingConfig(CreateKnowledgeBaseRequest::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // indexColumnConfig Field Functions 
    bool hasIndexColumnConfig() const { return this->indexColumnConfig_ != nullptr;};
    void deleteIndexColumnConfig() { this->indexColumnConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequest::IndexColumnConfig & getIndexColumnConfig() const { DARABONBA_PTR_GET_CONST(indexColumnConfig_, CreateKnowledgeBaseRequest::IndexColumnConfig) };
    inline CreateKnowledgeBaseRequest::IndexColumnConfig getIndexColumnConfig() { DARABONBA_PTR_GET(indexColumnConfig_, CreateKnowledgeBaseRequest::IndexColumnConfig) };
    inline CreateKnowledgeBaseRequest& setIndexColumnConfig(const CreateKnowledgeBaseRequest::IndexColumnConfig & indexColumnConfig) { DARABONBA_PTR_SET_VALUE(indexColumnConfig_, indexColumnConfig) };
    inline CreateKnowledgeBaseRequest& setIndexColumnConfig(CreateKnowledgeBaseRequest::IndexColumnConfig && indexColumnConfig) { DARABONBA_PTR_SET_RVALUE(indexColumnConfig_, indexColumnConfig) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string getKnowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline CreateKnowledgeBaseRequest& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // metaDataConfig Field Functions 
    bool hasMetaDataConfig() const { return this->metaDataConfig_ != nullptr;};
    void deleteMetaDataConfig() { this->metaDataConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequest::MetaDataConfig & getMetaDataConfig() const { DARABONBA_PTR_GET_CONST(metaDataConfig_, CreateKnowledgeBaseRequest::MetaDataConfig) };
    inline CreateKnowledgeBaseRequest::MetaDataConfig getMetaDataConfig() { DARABONBA_PTR_GET(metaDataConfig_, CreateKnowledgeBaseRequest::MetaDataConfig) };
    inline CreateKnowledgeBaseRequest& setMetaDataConfig(const CreateKnowledgeBaseRequest::MetaDataConfig & metaDataConfig) { DARABONBA_PTR_SET_VALUE(metaDataConfig_, metaDataConfig) };
    inline CreateKnowledgeBaseRequest& setMetaDataConfig(CreateKnowledgeBaseRequest::MetaDataConfig && metaDataConfig) { DARABONBA_PTR_SET_RVALUE(metaDataConfig_, metaDataConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputDir Field Functions 
    bool hasOutputDir() const { return this->outputDir_ != nullptr;};
    void deleteOutputDir() { this->outputDir_ = nullptr;};
    inline string getOutputDir() const { DARABONBA_PTR_GET_DEFAULT(outputDir_, "") };
    inline CreateKnowledgeBaseRequest& setOutputDir(string outputDir) { DARABONBA_PTR_SET_VALUE(outputDir_, outputDir) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline CreateKnowledgeBaseRequest& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // vectorDBConfig Field Functions 
    bool hasVectorDBConfig() const { return this->vectorDBConfig_ != nullptr;};
    void deleteVectorDBConfig() { this->vectorDBConfig_ = nullptr;};
    inline const CreateKnowledgeBaseRequest::VectorDBConfig & getVectorDBConfig() const { DARABONBA_PTR_GET_CONST(vectorDBConfig_, CreateKnowledgeBaseRequest::VectorDBConfig) };
    inline CreateKnowledgeBaseRequest::VectorDBConfig getVectorDBConfig() { DARABONBA_PTR_GET(vectorDBConfig_, CreateKnowledgeBaseRequest::VectorDBConfig) };
    inline CreateKnowledgeBaseRequest& setVectorDBConfig(const CreateKnowledgeBaseRequest::VectorDBConfig & vectorDBConfig) { DARABONBA_PTR_SET_VALUE(vectorDBConfig_, vectorDBConfig) };
    inline CreateKnowledgeBaseRequest& setVectorDBConfig(CreateKnowledgeBaseRequest::VectorDBConfig && vectorDBConfig) { DARABONBA_PTR_SET_RVALUE(vectorDBConfig_, vectorDBConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateKnowledgeBaseRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    // This parameter is required.
    shared_ptr<CreateKnowledgeBaseRequest::ChunkConfig> chunkConfig_ {};
    // This parameter is required.
    shared_ptr<vector<CreateKnowledgeBaseRequest::DataSources>> dataSources_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<CreateKnowledgeBaseRequest::EmbeddingConfig> embeddingConfig_ {};
    shared_ptr<CreateKnowledgeBaseRequest::IndexColumnConfig> indexColumnConfig_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseType_ {};
    shared_ptr<CreateKnowledgeBaseRequest::MetaDataConfig> metaDataConfig_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> outputDir_ {};
    shared_ptr<string> runtimeId_ {};
    // This parameter is required.
    shared_ptr<CreateKnowledgeBaseRequest::VectorDBConfig> vectorDBConfig_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
