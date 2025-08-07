// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYDATAINDICES_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYDATAINDICES_HPP_
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
  class ListIndicesResponseBodyDataIndices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBodyDataIndices& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(ConfgModel, confgModel_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIds_);
      DARABONBA_PTR_TO_JSON(EmbeddingModelName, embeddingModelName_);
      DARABONBA_PTR_TO_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_TO_JSON(Id, id_);
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
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBodyDataIndices& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(ConfgModel, confgModel_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIds_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModelName, embeddingModelName_);
      DARABONBA_PTR_FROM_JSON(EnableRewrite, enableRewrite_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
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
    };
    ListIndicesResponseBodyDataIndices() = default ;
    ListIndicesResponseBodyDataIndices(const ListIndicesResponseBodyDataIndices &) = default ;
    ListIndicesResponseBodyDataIndices(ListIndicesResponseBodyDataIndices &&) = default ;
    ListIndicesResponseBodyDataIndices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBodyDataIndices() = default ;
    ListIndicesResponseBodyDataIndices& operator=(const ListIndicesResponseBodyDataIndices &) = default ;
    ListIndicesResponseBodyDataIndices& operator=(ListIndicesResponseBodyDataIndices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkSize_ != nullptr
        && this->confgModel_ != nullptr && this->description_ != nullptr && this->documentIds_ != nullptr && this->embeddingModelName_ != nullptr && this->enableRewrite_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->overlapSize_ != nullptr && this->rerankMinScore_ != nullptr && this->rerankModelName_ != nullptr
        && this->separator_ != nullptr && this->sinkInstanceId_ != nullptr && this->sinkRegion_ != nullptr && this->sinkType_ != nullptr && this->sourceType_ != nullptr
        && this->structureType_ != nullptr; };
    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline ListIndicesResponseBodyDataIndices& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // confgModel Field Functions 
    bool hasConfgModel() const { return this->confgModel_ != nullptr;};
    void deleteConfgModel() { this->confgModel_ = nullptr;};
    inline string confgModel() const { DARABONBA_PTR_GET_DEFAULT(confgModel_, "") };
    inline ListIndicesResponseBodyDataIndices& setConfgModel(string confgModel) { DARABONBA_PTR_SET_VALUE(confgModel_, confgModel) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIndicesResponseBodyDataIndices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<string> & documentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
    inline vector<string> documentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
    inline ListIndicesResponseBodyDataIndices& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline ListIndicesResponseBodyDataIndices& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // embeddingModelName Field Functions 
    bool hasEmbeddingModelName() const { return this->embeddingModelName_ != nullptr;};
    void deleteEmbeddingModelName() { this->embeddingModelName_ = nullptr;};
    inline string embeddingModelName() const { DARABONBA_PTR_GET_DEFAULT(embeddingModelName_, "") };
    inline ListIndicesResponseBodyDataIndices& setEmbeddingModelName(string embeddingModelName) { DARABONBA_PTR_SET_VALUE(embeddingModelName_, embeddingModelName) };


    // enableRewrite Field Functions 
    bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
    void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
    inline bool enableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
    inline ListIndicesResponseBodyDataIndices& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIndicesResponseBodyDataIndices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIndicesResponseBodyDataIndices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // overlapSize Field Functions 
    bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
    void deleteOverlapSize() { this->overlapSize_ = nullptr;};
    inline int32_t overlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
    inline ListIndicesResponseBodyDataIndices& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


    // rerankMinScore Field Functions 
    bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
    void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
    inline string rerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, "") };
    inline ListIndicesResponseBodyDataIndices& setRerankMinScore(string rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


    // rerankModelName Field Functions 
    bool hasRerankModelName() const { return this->rerankModelName_ != nullptr;};
    void deleteRerankModelName() { this->rerankModelName_ = nullptr;};
    inline string rerankModelName() const { DARABONBA_PTR_GET_DEFAULT(rerankModelName_, "") };
    inline ListIndicesResponseBodyDataIndices& setRerankModelName(string rerankModelName) { DARABONBA_PTR_SET_VALUE(rerankModelName_, rerankModelName) };


    // separator Field Functions 
    bool hasSeparator() const { return this->separator_ != nullptr;};
    void deleteSeparator() { this->separator_ = nullptr;};
    inline string separator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
    inline ListIndicesResponseBodyDataIndices& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


    // sinkInstanceId Field Functions 
    bool hasSinkInstanceId() const { return this->sinkInstanceId_ != nullptr;};
    void deleteSinkInstanceId() { this->sinkInstanceId_ = nullptr;};
    inline string sinkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sinkInstanceId_, "") };
    inline ListIndicesResponseBodyDataIndices& setSinkInstanceId(string sinkInstanceId) { DARABONBA_PTR_SET_VALUE(sinkInstanceId_, sinkInstanceId) };


    // sinkRegion Field Functions 
    bool hasSinkRegion() const { return this->sinkRegion_ != nullptr;};
    void deleteSinkRegion() { this->sinkRegion_ = nullptr;};
    inline string sinkRegion() const { DARABONBA_PTR_GET_DEFAULT(sinkRegion_, "") };
    inline ListIndicesResponseBodyDataIndices& setSinkRegion(string sinkRegion) { DARABONBA_PTR_SET_VALUE(sinkRegion_, sinkRegion) };


    // sinkType Field Functions 
    bool hasSinkType() const { return this->sinkType_ != nullptr;};
    void deleteSinkType() { this->sinkType_ = nullptr;};
    inline string sinkType() const { DARABONBA_PTR_GET_DEFAULT(sinkType_, "") };
    inline ListIndicesResponseBodyDataIndices& setSinkType(string sinkType) { DARABONBA_PTR_SET_VALUE(sinkType_, sinkType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListIndicesResponseBodyDataIndices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // structureType Field Functions 
    bool hasStructureType() const { return this->structureType_ != nullptr;};
    void deleteStructureType() { this->structureType_ = nullptr;};
    inline string structureType() const { DARABONBA_PTR_GET_DEFAULT(structureType_, "") };
    inline ListIndicesResponseBodyDataIndices& setStructureType(string structureType) { DARABONBA_PTR_SET_VALUE(structureType_, structureType) };


  protected:
    // The estimated length of chunks. Valid values: [1-2048].
    std::shared_ptr<int32_t> chunkSize_ = nullptr;
    std::shared_ptr<string> confgModel_ = nullptr;
    // The description of the knowledge base.
    std::shared_ptr<string> description_ = nullptr;
    // The list of the primary key IDs of the documents.
    std::shared_ptr<vector<string>> documentIds_ = nullptr;
    // The name of the embedding model. Valid values:
    // 
    // *   text-embedding-v2
    std::shared_ptr<string> embeddingModelName_ = nullptr;
    std::shared_ptr<bool> enableRewrite_ = nullptr;
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the knowledge base.
    std::shared_ptr<string> name_ = nullptr;
    // The overlap length. Valid values: [0-1024].
    std::shared_ptr<int32_t> overlapSize_ = nullptr;
    // Similarity Threshold Valid values: [0.01-1.00].
    std::shared_ptr<string> rerankMinScore_ = nullptr;
    // The name of the rank model. Valid values:
    // 
    // *   gte-rerank-hybrid
    // *   gte-rerank
    std::shared_ptr<string> rerankModelName_ = nullptr;
    // The clause identifier. Separate multiple clause identifiers with |. Valid values:
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
    // *   ？ : Chinese question mark
    // *   ?: English question mark
    std::shared_ptr<string> separator_ = nullptr;
    // The ID of the vector storage instance.
    std::shared_ptr<string> sinkInstanceId_ = nullptr;
    // The region of the vector storage instance.
    std::shared_ptr<string> sinkRegion_ = nullptr;
    // The vector storage type of the knowledge base. Valid values:
    // 
    // *   ES: Built-in vector database.
    // *   BUILT_IN: Built-in vector database.
    // *   ADB: AnalyticDB for PostgreSQL database.
    std::shared_ptr<string> sinkType_ = nullptr;
    // The data type of [Data Management](https://bailian.console.aliyun.com/#/data-center). For unstructured knowledge base, possible values:
    // 
    // *   DATA_CENTER_CATEGORY: The category type.
    // *   DATA_CENTER_FILE: The document type.
    // 
    // For structured knowledge base, possible values:
    // 
    // *   DATA_CENTER_STRUCTURED_TABLE: The data table type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The vector storage type of the knowledge base. Valid values:
    // 
    // *   UNSTRUCTURED
    std::shared_ptr<string> structureType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
