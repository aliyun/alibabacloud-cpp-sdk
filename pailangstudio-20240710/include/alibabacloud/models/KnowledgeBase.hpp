// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASE_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserVpc.hpp>
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
    class VectorDBConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VectorDBConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
        DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
        DARABONBA_PTR_TO_JSON(VectorDBType, vectorDBType_);
      };
      friend void from_json(const Darabonba::Json& j, VectorDBConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
        DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
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
        && this->connectionId_ == nullptr && this->connectionName_ == nullptr && this->vectorDBType_ == nullptr; };
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


      // connectionName Field Functions 
      bool hasConnectionName() const { return this->connectionName_ != nullptr;};
      void deleteConnectionName() { this->connectionName_ = nullptr;};
      inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
      inline VectorDBConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


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
      // VectorDB连接名称
      shared_ptr<string> connectionName_ {};
      // VectorDB类型
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
          DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
          DARABONBA_PTR_TO_JSON(ValueCount, valueCount_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, CustomMetaData& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
          DARABONBA_PTR_FROM_JSON(ValueCount, valueCount_);
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
        && this->referenceCount_ == nullptr && this->valueCount_ == nullptr && this->valueType_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline CustomMetaData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // referenceCount Field Functions 
        bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
        void deleteReferenceCount() { this->referenceCount_ = nullptr;};
        inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
        inline CustomMetaData& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


        // valueCount Field Functions 
        bool hasValueCount() const { return this->valueCount_ != nullptr;};
        void deleteValueCount() { this->valueCount_ = nullptr;};
        inline int32_t getValueCount() const { DARABONBA_PTR_GET_DEFAULT(valueCount_, 0) };
        inline CustomMetaData& setValueCount(int32_t valueCount) { DARABONBA_PTR_SET_VALUE(valueCount_, valueCount) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline CustomMetaData& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        // 元数据Key
        shared_ptr<string> key_ {};
        // 引用次数
        shared_ptr<int32_t> referenceCount_ {};
        // 值的个数
        shared_ptr<int32_t> valueCount_ {};
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
        DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
        DARABONBA_PTR_TO_JSON(Model, model_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
        DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
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
        && this->connectionName_ == nullptr && this->model_ == nullptr; };
      // connectionId Field Functions 
      bool hasConnectionId() const { return this->connectionId_ != nullptr;};
      void deleteConnectionId() { this->connectionId_ = nullptr;};
      inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
      inline EmbeddingConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


      // connectionName Field Functions 
      bool hasConnectionName() const { return this->connectionName_ != nullptr;};
      void deleteConnectionName() { this->connectionName_ = nullptr;};
      inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
      inline EmbeddingConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline EmbeddingConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    protected:
      // Embedding连接ID
      shared_ptr<string> connectionId_ {};
      // Embedding连接名称
      shared_ptr<string> connectionName_ {};
      // 模型
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

    class AutoUpdateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoUpdateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
        DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
        DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      };
      friend void from_json(const Darabonba::Json& j, AutoUpdateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
        DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
        DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      };
      AutoUpdateConfig() = default ;
      AutoUpdateConfig(const AutoUpdateConfig &) = default ;
      AutoUpdateConfig(AutoUpdateConfig &&) = default ;
      AutoUpdateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoUpdateConfig() = default ;
      AutoUpdateConfig& operator=(const AutoUpdateConfig &) = default ;
      AutoUpdateConfig& operator=(AutoUpdateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EmbeddingConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EmbeddingConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
          DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
        };
        friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
          DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
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
        virtual bool empty() const override { return this->batchSize_ == nullptr
        && this->concurrency_ == nullptr; };
        // batchSize Field Functions 
        bool hasBatchSize() const { return this->batchSize_ != nullptr;};
        void deleteBatchSize() { this->batchSize_ = nullptr;};
        inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
        inline EmbeddingConfig& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


        // concurrency Field Functions 
        bool hasConcurrency() const { return this->concurrency_ != nullptr;};
        void deleteConcurrency() { this->concurrency_ = nullptr;};
        inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
        inline EmbeddingConfig& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      protected:
        // Embedding分批大小
        shared_ptr<int32_t> batchSize_ {};
        // Embedding并发数
        shared_ptr<int32_t> concurrency_ {};
      };

      class EcsSpecs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcsSpecs& obj) { 
          DARABONBA_PTR_TO_JSON(CPU, CPU_);
          DARABONBA_PTR_TO_JSON(Driver, driver_);
          DARABONBA_PTR_TO_JSON(GPU, GPU_);
          DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(PodCount, podCount_);
          DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EcsSpecs& obj) { 
          DARABONBA_PTR_FROM_JSON(CPU, CPU_);
          DARABONBA_PTR_FROM_JSON(Driver, driver_);
          DARABONBA_PTR_FROM_JSON(GPU, GPU_);
          DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
          DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        EcsSpecs() = default ;
        EcsSpecs(const EcsSpecs &) = default ;
        EcsSpecs(EcsSpecs &&) = default ;
        EcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcsSpecs() = default ;
        EcsSpecs& operator=(const EcsSpecs &) = default ;
        EcsSpecs& operator=(EcsSpecs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->CPU_ == nullptr
        && this->driver_ == nullptr && this->GPU_ == nullptr && this->GPUType_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr
        && this->podCount_ == nullptr && this->sharedMemory_ == nullptr && this->type_ == nullptr; };
        // CPU Field Functions 
        bool hasCPU() const { return this->CPU_ != nullptr;};
        void deleteCPU() { this->CPU_ = nullptr;};
        inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
        inline EcsSpecs& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


        // driver Field Functions 
        bool hasDriver() const { return this->driver_ != nullptr;};
        void deleteDriver() { this->driver_ = nullptr;};
        inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
        inline EcsSpecs& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


        // GPU Field Functions 
        bool hasGPU() const { return this->GPU_ != nullptr;};
        void deleteGPU() { this->GPU_ = nullptr;};
        inline int32_t getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
        inline EcsSpecs& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


        // GPUType Field Functions 
        bool hasGPUType() const { return this->GPUType_ != nullptr;};
        void deleteGPUType() { this->GPUType_ = nullptr;};
        inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
        inline EcsSpecs& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline EcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline EcsSpecs& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // podCount Field Functions 
        bool hasPodCount() const { return this->podCount_ != nullptr;};
        void deletePodCount() { this->podCount_ = nullptr;};
        inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
        inline EcsSpecs& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


        // sharedMemory Field Functions 
        bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
        void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
        inline int32_t getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
        inline EcsSpecs& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EcsSpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // CPU核数
        shared_ptr<int32_t> CPU_ {};
        // 驱动版本
        shared_ptr<string> driver_ {};
        // GPU卡数
        shared_ptr<int32_t> GPU_ {};
        // GPU类型
        shared_ptr<string> GPUType_ {};
        // 机型名称
        shared_ptr<string> instanceType_ {};
        // 内存大小
        shared_ptr<int32_t> memory_ {};
        // 副本数量
        shared_ptr<int32_t> podCount_ {};
        // 共享内存容量
        shared_ptr<int32_t> sharedMemory_ {};
        // 节点类型
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->ecsSpecs_ == nullptr
        && this->embeddingConfig_ == nullptr && this->maxRunningTimeInSeconds_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr && this->userVpc_ == nullptr; };
      // ecsSpecs Field Functions 
      bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
      void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
      inline const vector<AutoUpdateConfig::EcsSpecs> & getEcsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<AutoUpdateConfig::EcsSpecs>) };
      inline vector<AutoUpdateConfig::EcsSpecs> getEcsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<AutoUpdateConfig::EcsSpecs>) };
      inline AutoUpdateConfig& setEcsSpecs(const vector<AutoUpdateConfig::EcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
      inline AutoUpdateConfig& setEcsSpecs(vector<AutoUpdateConfig::EcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


      // embeddingConfig Field Functions 
      bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
      void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
      inline const AutoUpdateConfig::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, AutoUpdateConfig::EmbeddingConfig) };
      inline AutoUpdateConfig::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, AutoUpdateConfig::EmbeddingConfig) };
      inline AutoUpdateConfig& setEmbeddingConfig(const AutoUpdateConfig::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
      inline AutoUpdateConfig& setEmbeddingConfig(AutoUpdateConfig::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


      // maxRunningTimeInSeconds Field Functions 
      bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
      void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
      inline int32_t getMaxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
      inline AutoUpdateConfig& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline AutoUpdateConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AutoUpdateConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userVpc Field Functions 
      bool hasUserVpc() const { return this->userVpc_ != nullptr;};
      void deleteUserVpc() { this->userVpc_ = nullptr;};
      inline const UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
      inline UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
      inline AutoUpdateConfig& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
      inline AutoUpdateConfig& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    protected:
      // 运行资源配置
      shared_ptr<vector<AutoUpdateConfig::EcsSpecs>> ecsSpecs_ {};
      // Embedding配置
      shared_ptr<AutoUpdateConfig::EmbeddingConfig> embeddingConfig_ {};
      // 任务最大运行时间
      shared_ptr<int32_t> maxRunningTimeInSeconds_ {};
      // 资源组ID
      shared_ptr<string> resourceId_ {};
      // 知识库自动更新状态
      shared_ptr<string> status_ {};
      // 用户VPC配置
      shared_ptr<UserVpc> userVpc_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->autoUpdateConfig_ == nullptr && this->chunkConfig_ == nullptr && this->creator_ == nullptr && this->dataSources_ == nullptr && this->datasetId_ == nullptr
        && this->description_ == nullptr && this->embeddingConfig_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->indexColumnConfig_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->knowledgeBaseType_ == nullptr && this->metaDataConfig_ == nullptr && this->name_ == nullptr && this->outputDir_ == nullptr
        && this->runtimeId_ == nullptr && this->vectorDBConfig_ == nullptr && this->versionName_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline KnowledgeBase& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // autoUpdateConfig Field Functions 
    bool hasAutoUpdateConfig() const { return this->autoUpdateConfig_ != nullptr;};
    void deleteAutoUpdateConfig() { this->autoUpdateConfig_ = nullptr;};
    inline const KnowledgeBase::AutoUpdateConfig & getAutoUpdateConfig() const { DARABONBA_PTR_GET_CONST(autoUpdateConfig_, KnowledgeBase::AutoUpdateConfig) };
    inline KnowledgeBase::AutoUpdateConfig getAutoUpdateConfig() { DARABONBA_PTR_GET(autoUpdateConfig_, KnowledgeBase::AutoUpdateConfig) };
    inline KnowledgeBase& setAutoUpdateConfig(const KnowledgeBase::AutoUpdateConfig & autoUpdateConfig) { DARABONBA_PTR_SET_VALUE(autoUpdateConfig_, autoUpdateConfig) };
    inline KnowledgeBase& setAutoUpdateConfig(KnowledgeBase::AutoUpdateConfig && autoUpdateConfig) { DARABONBA_PTR_SET_RVALUE(autoUpdateConfig_, autoUpdateConfig) };


    // chunkConfig Field Functions 
    bool hasChunkConfig() const { return this->chunkConfig_ != nullptr;};
    void deleteChunkConfig() { this->chunkConfig_ = nullptr;};
    inline const KnowledgeBase::ChunkConfig & getChunkConfig() const { DARABONBA_PTR_GET_CONST(chunkConfig_, KnowledgeBase::ChunkConfig) };
    inline KnowledgeBase::ChunkConfig getChunkConfig() { DARABONBA_PTR_GET(chunkConfig_, KnowledgeBase::ChunkConfig) };
    inline KnowledgeBase& setChunkConfig(const KnowledgeBase::ChunkConfig & chunkConfig) { DARABONBA_PTR_SET_VALUE(chunkConfig_, chunkConfig) };
    inline KnowledgeBase& setChunkConfig(KnowledgeBase::ChunkConfig && chunkConfig) { DARABONBA_PTR_SET_RVALUE(chunkConfig_, chunkConfig) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline KnowledgeBase& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<KnowledgeBase::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<KnowledgeBase::DataSources>) };
    inline vector<KnowledgeBase::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<KnowledgeBase::DataSources>) };
    inline KnowledgeBase& setDataSources(const vector<KnowledgeBase::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline KnowledgeBase& setDataSources(vector<KnowledgeBase::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline KnowledgeBase& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline KnowledgeBase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const KnowledgeBase::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, KnowledgeBase::EmbeddingConfig) };
    inline KnowledgeBase::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, KnowledgeBase::EmbeddingConfig) };
    inline KnowledgeBase& setEmbeddingConfig(const KnowledgeBase::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline KnowledgeBase& setEmbeddingConfig(KnowledgeBase::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline KnowledgeBase& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline KnowledgeBase& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // indexColumnConfig Field Functions 
    bool hasIndexColumnConfig() const { return this->indexColumnConfig_ != nullptr;};
    void deleteIndexColumnConfig() { this->indexColumnConfig_ = nullptr;};
    inline const KnowledgeBase::IndexColumnConfig & getIndexColumnConfig() const { DARABONBA_PTR_GET_CONST(indexColumnConfig_, KnowledgeBase::IndexColumnConfig) };
    inline KnowledgeBase::IndexColumnConfig getIndexColumnConfig() { DARABONBA_PTR_GET(indexColumnConfig_, KnowledgeBase::IndexColumnConfig) };
    inline KnowledgeBase& setIndexColumnConfig(const KnowledgeBase::IndexColumnConfig & indexColumnConfig) { DARABONBA_PTR_SET_VALUE(indexColumnConfig_, indexColumnConfig) };
    inline KnowledgeBase& setIndexColumnConfig(KnowledgeBase::IndexColumnConfig && indexColumnConfig) { DARABONBA_PTR_SET_RVALUE(indexColumnConfig_, indexColumnConfig) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline KnowledgeBase& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseType Field Functions 
    bool hasKnowledgeBaseType() const { return this->knowledgeBaseType_ != nullptr;};
    void deleteKnowledgeBaseType() { this->knowledgeBaseType_ = nullptr;};
    inline string getKnowledgeBaseType() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseType_, "") };
    inline KnowledgeBase& setKnowledgeBaseType(string knowledgeBaseType) { DARABONBA_PTR_SET_VALUE(knowledgeBaseType_, knowledgeBaseType) };


    // metaDataConfig Field Functions 
    bool hasMetaDataConfig() const { return this->metaDataConfig_ != nullptr;};
    void deleteMetaDataConfig() { this->metaDataConfig_ = nullptr;};
    inline const KnowledgeBase::MetaDataConfig & getMetaDataConfig() const { DARABONBA_PTR_GET_CONST(metaDataConfig_, KnowledgeBase::MetaDataConfig) };
    inline KnowledgeBase::MetaDataConfig getMetaDataConfig() { DARABONBA_PTR_GET(metaDataConfig_, KnowledgeBase::MetaDataConfig) };
    inline KnowledgeBase& setMetaDataConfig(const KnowledgeBase::MetaDataConfig & metaDataConfig) { DARABONBA_PTR_SET_VALUE(metaDataConfig_, metaDataConfig) };
    inline KnowledgeBase& setMetaDataConfig(KnowledgeBase::MetaDataConfig && metaDataConfig) { DARABONBA_PTR_SET_RVALUE(metaDataConfig_, metaDataConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline KnowledgeBase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputDir Field Functions 
    bool hasOutputDir() const { return this->outputDir_ != nullptr;};
    void deleteOutputDir() { this->outputDir_ = nullptr;};
    inline string getOutputDir() const { DARABONBA_PTR_GET_DEFAULT(outputDir_, "") };
    inline KnowledgeBase& setOutputDir(string outputDir) { DARABONBA_PTR_SET_VALUE(outputDir_, outputDir) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline KnowledgeBase& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // vectorDBConfig Field Functions 
    bool hasVectorDBConfig() const { return this->vectorDBConfig_ != nullptr;};
    void deleteVectorDBConfig() { this->vectorDBConfig_ = nullptr;};
    inline const KnowledgeBase::VectorDBConfig & getVectorDBConfig() const { DARABONBA_PTR_GET_CONST(vectorDBConfig_, KnowledgeBase::VectorDBConfig) };
    inline KnowledgeBase::VectorDBConfig getVectorDBConfig() { DARABONBA_PTR_GET(vectorDBConfig_, KnowledgeBase::VectorDBConfig) };
    inline KnowledgeBase& setVectorDBConfig(const KnowledgeBase::VectorDBConfig & vectorDBConfig) { DARABONBA_PTR_SET_VALUE(vectorDBConfig_, vectorDBConfig) };
    inline KnowledgeBase& setVectorDBConfig(KnowledgeBase::VectorDBConfig && vectorDBConfig) { DARABONBA_PTR_SET_RVALUE(vectorDBConfig_, vectorDBConfig) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline KnowledgeBase& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline KnowledgeBase& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<KnowledgeBase::AutoUpdateConfig> autoUpdateConfig_ {};
    shared_ptr<KnowledgeBase::ChunkConfig> chunkConfig_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<vector<KnowledgeBase::DataSources>> dataSources_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<KnowledgeBase::EmbeddingConfig> embeddingConfig_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<KnowledgeBase::IndexColumnConfig> indexColumnConfig_ {};
    shared_ptr<string> knowledgeBaseId_ {};
    shared_ptr<string> knowledgeBaseType_ {};
    shared_ptr<KnowledgeBase::MetaDataConfig> metaDataConfig_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> outputDir_ {};
    shared_ptr<string> runtimeId_ {};
    shared_ptr<KnowledgeBase::VectorDBConfig> vectorDBConfig_ {};
    shared_ptr<string> versionName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
