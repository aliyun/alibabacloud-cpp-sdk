// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODY_HPP_
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
  class ListIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIndicesResponseBody() = default ;
    ListIndicesResponseBody(const ListIndicesResponseBody &) = default ;
    ListIndicesResponseBody(ListIndicesResponseBody &&) = default ;
    ListIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBody() = default ;
    ListIndicesResponseBody& operator=(const ListIndicesResponseBody &) = default ;
    ListIndicesResponseBody& operator=(ListIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Indices, indices_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Indices, indices_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Indices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Indices& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Indices& obj) { 
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
        Indices() = default ;
        Indices(const Indices &) = default ;
        Indices(Indices &&) = default ;
        Indices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Indices() = default ;
        Indices& operator=(const Indices &) = default ;
        Indices& operator=(Indices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chunkSize_ == nullptr
        && this->confgModel_ == nullptr && this->description_ == nullptr && this->documentIds_ == nullptr && this->embeddingModelName_ == nullptr && this->enableRewrite_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->overlapSize_ == nullptr && this->rerankMinScore_ == nullptr && this->rerankModelName_ == nullptr
        && this->separator_ == nullptr && this->sinkInstanceId_ == nullptr && this->sinkRegion_ == nullptr && this->sinkType_ == nullptr && this->sourceType_ == nullptr
        && this->structureType_ == nullptr; };
        // chunkSize Field Functions 
        bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
        void deleteChunkSize() { this->chunkSize_ = nullptr;};
        inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
        inline Indices& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


        // confgModel Field Functions 
        bool hasConfgModel() const { return this->confgModel_ != nullptr;};
        void deleteConfgModel() { this->confgModel_ = nullptr;};
        inline string getConfgModel() const { DARABONBA_PTR_GET_DEFAULT(confgModel_, "") };
        inline Indices& setConfgModel(string confgModel) { DARABONBA_PTR_SET_VALUE(confgModel_, confgModel) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Indices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // documentIds Field Functions 
        bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
        void deleteDocumentIds() { this->documentIds_ = nullptr;};
        inline const vector<string> & getDocumentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
        inline vector<string> getDocumentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
        inline Indices& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
        inline Indices& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


        // embeddingModelName Field Functions 
        bool hasEmbeddingModelName() const { return this->embeddingModelName_ != nullptr;};
        void deleteEmbeddingModelName() { this->embeddingModelName_ = nullptr;};
        inline string getEmbeddingModelName() const { DARABONBA_PTR_GET_DEFAULT(embeddingModelName_, "") };
        inline Indices& setEmbeddingModelName(string embeddingModelName) { DARABONBA_PTR_SET_VALUE(embeddingModelName_, embeddingModelName) };


        // enableRewrite Field Functions 
        bool hasEnableRewrite() const { return this->enableRewrite_ != nullptr;};
        void deleteEnableRewrite() { this->enableRewrite_ = nullptr;};
        inline bool getEnableRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableRewrite_, false) };
        inline Indices& setEnableRewrite(bool enableRewrite) { DARABONBA_PTR_SET_VALUE(enableRewrite_, enableRewrite) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Indices& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Indices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // overlapSize Field Functions 
        bool hasOverlapSize() const { return this->overlapSize_ != nullptr;};
        void deleteOverlapSize() { this->overlapSize_ = nullptr;};
        inline int32_t getOverlapSize() const { DARABONBA_PTR_GET_DEFAULT(overlapSize_, 0) };
        inline Indices& setOverlapSize(int32_t overlapSize) { DARABONBA_PTR_SET_VALUE(overlapSize_, overlapSize) };


        // rerankMinScore Field Functions 
        bool hasRerankMinScore() const { return this->rerankMinScore_ != nullptr;};
        void deleteRerankMinScore() { this->rerankMinScore_ = nullptr;};
        inline string getRerankMinScore() const { DARABONBA_PTR_GET_DEFAULT(rerankMinScore_, "") };
        inline Indices& setRerankMinScore(string rerankMinScore) { DARABONBA_PTR_SET_VALUE(rerankMinScore_, rerankMinScore) };


        // rerankModelName Field Functions 
        bool hasRerankModelName() const { return this->rerankModelName_ != nullptr;};
        void deleteRerankModelName() { this->rerankModelName_ = nullptr;};
        inline string getRerankModelName() const { DARABONBA_PTR_GET_DEFAULT(rerankModelName_, "") };
        inline Indices& setRerankModelName(string rerankModelName) { DARABONBA_PTR_SET_VALUE(rerankModelName_, rerankModelName) };


        // separator Field Functions 
        bool hasSeparator() const { return this->separator_ != nullptr;};
        void deleteSeparator() { this->separator_ = nullptr;};
        inline string getSeparator() const { DARABONBA_PTR_GET_DEFAULT(separator_, "") };
        inline Indices& setSeparator(string separator) { DARABONBA_PTR_SET_VALUE(separator_, separator) };


        // sinkInstanceId Field Functions 
        bool hasSinkInstanceId() const { return this->sinkInstanceId_ != nullptr;};
        void deleteSinkInstanceId() { this->sinkInstanceId_ = nullptr;};
        inline string getSinkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sinkInstanceId_, "") };
        inline Indices& setSinkInstanceId(string sinkInstanceId) { DARABONBA_PTR_SET_VALUE(sinkInstanceId_, sinkInstanceId) };


        // sinkRegion Field Functions 
        bool hasSinkRegion() const { return this->sinkRegion_ != nullptr;};
        void deleteSinkRegion() { this->sinkRegion_ = nullptr;};
        inline string getSinkRegion() const { DARABONBA_PTR_GET_DEFAULT(sinkRegion_, "") };
        inline Indices& setSinkRegion(string sinkRegion) { DARABONBA_PTR_SET_VALUE(sinkRegion_, sinkRegion) };


        // sinkType Field Functions 
        bool hasSinkType() const { return this->sinkType_ != nullptr;};
        void deleteSinkType() { this->sinkType_ = nullptr;};
        inline string getSinkType() const { DARABONBA_PTR_GET_DEFAULT(sinkType_, "") };
        inline Indices& setSinkType(string sinkType) { DARABONBA_PTR_SET_VALUE(sinkType_, sinkType) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Indices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // structureType Field Functions 
        bool hasStructureType() const { return this->structureType_ != nullptr;};
        void deleteStructureType() { this->structureType_ = nullptr;};
        inline string getStructureType() const { DARABONBA_PTR_GET_DEFAULT(structureType_, "") };
        inline Indices& setStructureType(string structureType) { DARABONBA_PTR_SET_VALUE(structureType_, structureType) };


      protected:
        // The estimated length of chunks. Valid values: [1-2048].
        shared_ptr<int32_t> chunkSize_ {};
        shared_ptr<string> confgModel_ {};
        // The description of the knowledge base.
        shared_ptr<string> description_ {};
        // The list of the primary key IDs of the documents.
        shared_ptr<vector<string>> documentIds_ {};
        // The name of the embedding model. Valid values:
        // 
        // *   text-embedding-v2
        shared_ptr<string> embeddingModelName_ {};
        shared_ptr<bool> enableRewrite_ {};
        // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
        shared_ptr<string> id_ {};
        // The name of the knowledge base.
        shared_ptr<string> name_ {};
        // The overlap length. Valid values: [0-1024].
        shared_ptr<int32_t> overlapSize_ {};
        // Similarity Threshold Valid values: [0.01-1.00].
        shared_ptr<string> rerankMinScore_ {};
        // The name of the rank model. Valid values:
        // 
        // *   gte-rerank-hybrid
        // *   gte-rerank
        shared_ptr<string> rerankModelName_ {};
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
        shared_ptr<string> separator_ {};
        // The ID of the vector storage instance.
        shared_ptr<string> sinkInstanceId_ {};
        // The region of the vector storage instance.
        shared_ptr<string> sinkRegion_ {};
        // The vector storage type of the knowledge base. Valid values:
        // 
        // *   ES: Built-in vector database.
        // *   BUILT_IN: Built-in vector database.
        // *   ADB: AnalyticDB for PostgreSQL database.
        shared_ptr<string> sinkType_ {};
        // The data type of [Data Management](https://bailian.console.aliyun.com/#/data-center). For unstructured knowledge base, possible values:
        // 
        // *   DATA_CENTER_CATEGORY: The category type.
        // *   DATA_CENTER_FILE: The document type.
        // 
        // For structured knowledge base, possible values:
        // 
        // *   DATA_CENTER_STRUCTURED_TABLE: The data table type.
        shared_ptr<string> sourceType_ {};
        // The vector storage type of the knowledge base. Valid values:
        // 
        // *   UNSTRUCTURED
        shared_ptr<string> structureType_ {};
      };

      virtual bool empty() const override { return this->indices_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // indices Field Functions 
      bool hasIndices() const { return this->indices_ != nullptr;};
      void deleteIndices() { this->indices_ = nullptr;};
      inline const vector<Data::Indices> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<Data::Indices>) };
      inline vector<Data::Indices> getIndices() { DARABONBA_PTR_GET(indices_, vector<Data::Indices>) };
      inline Data& setIndices(const vector<Data::Indices> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
      inline Data& setIndices(vector<Data::Indices> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of knowledge bases.
      shared_ptr<vector<Data::Indices>> indices_ {};
      // The specified page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The specified number of documents on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of knowledge bases returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIndicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIndicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIndicesResponseBody::Data) };
    inline ListIndicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIndicesResponseBody::Data) };
    inline ListIndicesResponseBody& setData(const ListIndicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIndicesResponseBody& setData(ListIndicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIndicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIndicesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIndicesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListIndicesResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code returned.
    shared_ptr<string> status_ {};
    // Indications whether the API call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
