// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVALKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVALKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RetrievalKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrievalKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryText, queryText_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCount, resultCount_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, RetrievalKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryText, queryText_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCount, resultCount_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    RetrievalKnowledgeBaseResponseBody() = default ;
    RetrievalKnowledgeBaseResponseBody(const RetrievalKnowledgeBaseResponseBody &) = default ;
    RetrievalKnowledgeBaseResponseBody(RetrievalKnowledgeBaseResponseBody &&) = default ;
    RetrievalKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrievalKnowledgeBaseResponseBody() = default ;
    RetrievalKnowledgeBaseResponseBody& operator=(const RetrievalKnowledgeBaseResponseBody &) = default ;
    RetrievalKnowledgeBaseResponseBody& operator=(RetrievalKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Captions, captions_);
        DARABONBA_PTR_TO_JSON(DocItems, docItems_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Headings, headings_);
        DARABONBA_PTR_TO_JSON(ImageResources, imageResources_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_TO_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_TO_JSON(ShardIndex, shardIndex_);
        DARABONBA_PTR_TO_JSON(SimilarityScore, similarityScore_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Captions, captions_);
        DARABONBA_PTR_FROM_JSON(DocItems, docItems_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Headings, headings_);
        DARABONBA_PTR_FROM_JSON(ImageResources, imageResources_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_FROM_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_FROM_JSON(ShardIndex, shardIndex_);
        DARABONBA_PTR_FROM_JSON(SimilarityScore, similarityScore_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImageResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageResources& obj) { 
          DARABONBA_PTR_TO_JSON(DocumentIndex, documentIndex_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ItemRef, itemRef_);
          DARABONBA_PTR_TO_JSON(MimeType, mimeType_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, ImageResources& obj) { 
          DARABONBA_PTR_FROM_JSON(DocumentIndex, documentIndex_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ItemRef, itemRef_);
          DARABONBA_PTR_FROM_JSON(MimeType, mimeType_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        ImageResources() = default ;
        ImageResources(const ImageResources &) = default ;
        ImageResources(ImageResources &&) = default ;
        ImageResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageResources() = default ;
        ImageResources& operator=(const ImageResources &) = default ;
        ImageResources& operator=(ImageResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->documentIndex_ == nullptr
        && this->id_ == nullptr && this->itemRef_ == nullptr && this->mimeType_ == nullptr && this->uri_ == nullptr; };
        // documentIndex Field Functions 
        bool hasDocumentIndex() const { return this->documentIndex_ != nullptr;};
        void deleteDocumentIndex() { this->documentIndex_ = nullptr;};
        inline int32_t getDocumentIndex() const { DARABONBA_PTR_GET_DEFAULT(documentIndex_, 0) };
        inline ImageResources& setDocumentIndex(int32_t documentIndex) { DARABONBA_PTR_SET_VALUE(documentIndex_, documentIndex) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ImageResources& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // itemRef Field Functions 
        bool hasItemRef() const { return this->itemRef_ != nullptr;};
        void deleteItemRef() { this->itemRef_ = nullptr;};
        inline string getItemRef() const { DARABONBA_PTR_GET_DEFAULT(itemRef_, "") };
        inline ImageResources& setItemRef(string itemRef) { DARABONBA_PTR_SET_VALUE(itemRef_, itemRef) };


        // mimeType Field Functions 
        bool hasMimeType() const { return this->mimeType_ != nullptr;};
        void deleteMimeType() { this->mimeType_ = nullptr;};
        inline string getMimeType() const { DARABONBA_PTR_GET_DEFAULT(mimeType_, "") };
        inline ImageResources& setMimeType(string mimeType) { DARABONBA_PTR_SET_VALUE(mimeType_, mimeType) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline ImageResources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The index of the source document to which the image belongs, starting from 0.
        shared_ptr<int32_t> documentIndex_ {};
        // The unique identifier of the image resource.
        shared_ptr<string> id_ {};
        // The element reference of the image in the Docling source document structure.
        shared_ptr<string> itemRef_ {};
        // The media type of the image resource.
        shared_ptr<string> mimeType_ {};
        // The OSS URI of the image resource.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->captions_ == nullptr
        && this->docItems_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->headings_ == nullptr && this->imageResources_ == nullptr
        && this->metadata_ == nullptr && this->pageNumbers_ == nullptr && this->shardContent_ == nullptr && this->shardIndex_ == nullptr && this->similarityScore_ == nullptr; };
      // captions Field Functions 
      bool hasCaptions() const { return this->captions_ != nullptr;};
      void deleteCaptions() { this->captions_ = nullptr;};
      inline const vector<string> & getCaptions() const { DARABONBA_PTR_GET_CONST(captions_, vector<string>) };
      inline vector<string> getCaptions() { DARABONBA_PTR_GET(captions_, vector<string>) };
      inline Results& setCaptions(const vector<string> & captions) { DARABONBA_PTR_SET_VALUE(captions_, captions) };
      inline Results& setCaptions(vector<string> && captions) { DARABONBA_PTR_SET_RVALUE(captions_, captions) };


      // docItems Field Functions 
      bool hasDocItems() const { return this->docItems_ != nullptr;};
      void deleteDocItems() { this->docItems_ = nullptr;};
      inline const vector<string> & getDocItems() const { DARABONBA_PTR_GET_CONST(docItems_, vector<string>) };
      inline vector<string> getDocItems() { DARABONBA_PTR_GET(docItems_, vector<string>) };
      inline Results& setDocItems(const vector<string> & docItems) { DARABONBA_PTR_SET_VALUE(docItems_, docItems) };
      inline Results& setDocItems(vector<string> && docItems) { DARABONBA_PTR_SET_RVALUE(docItems_, docItems) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Results& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Results& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // headings Field Functions 
      bool hasHeadings() const { return this->headings_ != nullptr;};
      void deleteHeadings() { this->headings_ = nullptr;};
      inline const vector<string> & getHeadings() const { DARABONBA_PTR_GET_CONST(headings_, vector<string>) };
      inline vector<string> getHeadings() { DARABONBA_PTR_GET(headings_, vector<string>) };
      inline Results& setHeadings(const vector<string> & headings) { DARABONBA_PTR_SET_VALUE(headings_, headings) };
      inline Results& setHeadings(vector<string> && headings) { DARABONBA_PTR_SET_RVALUE(headings_, headings) };


      // imageResources Field Functions 
      bool hasImageResources() const { return this->imageResources_ != nullptr;};
      void deleteImageResources() { this->imageResources_ = nullptr;};
      inline const vector<Results::ImageResources> & getImageResources() const { DARABONBA_PTR_GET_CONST(imageResources_, vector<Results::ImageResources>) };
      inline vector<Results::ImageResources> getImageResources() { DARABONBA_PTR_GET(imageResources_, vector<Results::ImageResources>) };
      inline Results& setImageResources(const vector<Results::ImageResources> & imageResources) { DARABONBA_PTR_SET_VALUE(imageResources_, imageResources) };
      inline Results& setImageResources(vector<Results::ImageResources> && imageResources) { DARABONBA_PTR_SET_RVALUE(imageResources_, imageResources) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
      inline Results& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


      // pageNumbers Field Functions 
      bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
      void deletePageNumbers() { this->pageNumbers_ = nullptr;};
      inline const vector<int32_t> & getPageNumbers() const { DARABONBA_PTR_GET_CONST(pageNumbers_, vector<int32_t>) };
      inline vector<int32_t> getPageNumbers() { DARABONBA_PTR_GET(pageNumbers_, vector<int32_t>) };
      inline Results& setPageNumbers(const vector<int32_t> & pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };
      inline Results& setPageNumbers(vector<int32_t> && pageNumbers) { DARABONBA_PTR_SET_RVALUE(pageNumbers_, pageNumbers) };


      // shardContent Field Functions 
      bool hasShardContent() const { return this->shardContent_ != nullptr;};
      void deleteShardContent() { this->shardContent_ = nullptr;};
      inline string getShardContent() const { DARABONBA_PTR_GET_DEFAULT(shardContent_, "") };
      inline Results& setShardContent(string shardContent) { DARABONBA_PTR_SET_VALUE(shardContent_, shardContent) };


      // shardIndex Field Functions 
      bool hasShardIndex() const { return this->shardIndex_ != nullptr;};
      void deleteShardIndex() { this->shardIndex_ = nullptr;};
      inline int32_t getShardIndex() const { DARABONBA_PTR_GET_DEFAULT(shardIndex_, 0) };
      inline Results& setShardIndex(int32_t shardIndex) { DARABONBA_PTR_SET_VALUE(shardIndex_, shardIndex) };


      // similarityScore Field Functions 
      bool hasSimilarityScore() const { return this->similarityScore_ != nullptr;};
      void deleteSimilarityScore() { this->similarityScore_ = nullptr;};
      inline double getSimilarityScore() const { DARABONBA_PTR_GET_DEFAULT(similarityScore_, 0.0) };
      inline Results& setSimilarityScore(double similarityScore) { DARABONBA_PTR_SET_VALUE(similarityScore_, similarityScore) };


    protected:
      // The list of figure or table captions associated with the chunk.
      shared_ptr<vector<string>> captions_ {};
      // The list of Docling source document structured element references associated with the chunk. You can use these references to precisely locate elements in the original document.
      shared_ptr<vector<string>> docItems_ {};
      // The unique identifier of the file.
      shared_ptr<string> fileId_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The chain of section headings to which the chunk belongs.
      shared_ptr<vector<string>> headings_ {};
      // The list of image resources referenced by the chunk.
      shared_ptr<vector<Results::ImageResources>> imageResources_ {};
      // The metadata.
      shared_ptr<string> metadata_ {};
      // The list of page numbers to which the chunk belongs.
      shared_ptr<vector<int32_t>> pageNumbers_ {};
      // The text content of the chunk.
      shared_ptr<string> shardContent_ {};
      // The index of the chunk.
      shared_ptr<int32_t> shardIndex_ {};
      // The similarity score.
      shared_ptr<double> similarityScore_ {};
    };

    virtual bool empty() const override { return this->queryText_ == nullptr
        && this->requestId_ == nullptr && this->resultCount_ == nullptr && this->results_ == nullptr; };
    // queryText Field Functions 
    bool hasQueryText() const { return this->queryText_ != nullptr;};
    void deleteQueryText() { this->queryText_ = nullptr;};
    inline string getQueryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
    inline RetrievalKnowledgeBaseResponseBody& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrievalKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCount Field Functions 
    bool hasResultCount() const { return this->resultCount_ != nullptr;};
    void deleteResultCount() { this->resultCount_ = nullptr;};
    inline int32_t getResultCount() const { DARABONBA_PTR_GET_DEFAULT(resultCount_, 0) };
    inline RetrievalKnowledgeBaseResponseBody& setResultCount(int32_t resultCount) { DARABONBA_PTR_SET_VALUE(resultCount_, resultCount) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<RetrievalKnowledgeBaseResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<RetrievalKnowledgeBaseResponseBody::Results>) };
    inline vector<RetrievalKnowledgeBaseResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<RetrievalKnowledgeBaseResponseBody::Results>) };
    inline RetrievalKnowledgeBaseResponseBody& setResults(const vector<RetrievalKnowledgeBaseResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RetrievalKnowledgeBaseResponseBody& setResults(vector<RetrievalKnowledgeBaseResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The query text.
    shared_ptr<string> queryText_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The number of results.
    shared_ptr<int32_t> resultCount_ {};
    // The search results.
    shared_ptr<vector<RetrievalKnowledgeBaseResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
