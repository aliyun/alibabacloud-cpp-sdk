// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEFILESHARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEFILESHARDSRESPONSEBODY_HPP_
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
  class DescribeKnowledgeBaseFileShardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseFileShardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Shards, shards_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseFileShardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Shards, shards_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeKnowledgeBaseFileShardsResponseBody() = default ;
    DescribeKnowledgeBaseFileShardsResponseBody(const DescribeKnowledgeBaseFileShardsResponseBody &) = default ;
    DescribeKnowledgeBaseFileShardsResponseBody(DescribeKnowledgeBaseFileShardsResponseBody &&) = default ;
    DescribeKnowledgeBaseFileShardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseFileShardsResponseBody() = default ;
    DescribeKnowledgeBaseFileShardsResponseBody& operator=(const DescribeKnowledgeBaseFileShardsResponseBody &) = default ;
    DescribeKnowledgeBaseFileShardsResponseBody& operator=(DescribeKnowledgeBaseFileShardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Shards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Shards& obj) { 
        DARABONBA_PTR_TO_JSON(Captions, captions_);
        DARABONBA_PTR_TO_JSON(DocItems, docItems_);
        DARABONBA_PTR_TO_JSON(Headings, headings_);
        DARABONBA_PTR_TO_JSON(ImageResources, imageResources_);
        DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_TO_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_TO_JSON(ShardIndex, shardIndex_);
      };
      friend void from_json(const Darabonba::Json& j, Shards& obj) { 
        DARABONBA_PTR_FROM_JSON(Captions, captions_);
        DARABONBA_PTR_FROM_JSON(DocItems, docItems_);
        DARABONBA_PTR_FROM_JSON(Headings, headings_);
        DARABONBA_PTR_FROM_JSON(ImageResources, imageResources_);
        DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_FROM_JSON(ShardContent, shardContent_);
        DARABONBA_PTR_FROM_JSON(ShardIndex, shardIndex_);
      };
      Shards() = default ;
      Shards(const Shards &) = default ;
      Shards(Shards &&) = default ;
      Shards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Shards() = default ;
      Shards& operator=(const Shards &) = default ;
      Shards& operator=(Shards &&) = default ;
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
        // The unique ID of the image resource.
        shared_ptr<string> id_ {};
        // The element reference of the image in the Docling source document structure.
        shared_ptr<string> itemRef_ {};
        // The media type of the image resource.
        shared_ptr<string> mimeType_ {};
        // The OSS URI of the image resource.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->captions_ == nullptr
        && this->docItems_ == nullptr && this->headings_ == nullptr && this->imageResources_ == nullptr && this->pageNumbers_ == nullptr && this->shardContent_ == nullptr
        && this->shardIndex_ == nullptr; };
      // captions Field Functions 
      bool hasCaptions() const { return this->captions_ != nullptr;};
      void deleteCaptions() { this->captions_ = nullptr;};
      inline const vector<string> & getCaptions() const { DARABONBA_PTR_GET_CONST(captions_, vector<string>) };
      inline vector<string> getCaptions() { DARABONBA_PTR_GET(captions_, vector<string>) };
      inline Shards& setCaptions(const vector<string> & captions) { DARABONBA_PTR_SET_VALUE(captions_, captions) };
      inline Shards& setCaptions(vector<string> && captions) { DARABONBA_PTR_SET_RVALUE(captions_, captions) };


      // docItems Field Functions 
      bool hasDocItems() const { return this->docItems_ != nullptr;};
      void deleteDocItems() { this->docItems_ = nullptr;};
      inline const vector<string> & getDocItems() const { DARABONBA_PTR_GET_CONST(docItems_, vector<string>) };
      inline vector<string> getDocItems() { DARABONBA_PTR_GET(docItems_, vector<string>) };
      inline Shards& setDocItems(const vector<string> & docItems) { DARABONBA_PTR_SET_VALUE(docItems_, docItems) };
      inline Shards& setDocItems(vector<string> && docItems) { DARABONBA_PTR_SET_RVALUE(docItems_, docItems) };


      // headings Field Functions 
      bool hasHeadings() const { return this->headings_ != nullptr;};
      void deleteHeadings() { this->headings_ = nullptr;};
      inline const vector<string> & getHeadings() const { DARABONBA_PTR_GET_CONST(headings_, vector<string>) };
      inline vector<string> getHeadings() { DARABONBA_PTR_GET(headings_, vector<string>) };
      inline Shards& setHeadings(const vector<string> & headings) { DARABONBA_PTR_SET_VALUE(headings_, headings) };
      inline Shards& setHeadings(vector<string> && headings) { DARABONBA_PTR_SET_RVALUE(headings_, headings) };


      // imageResources Field Functions 
      bool hasImageResources() const { return this->imageResources_ != nullptr;};
      void deleteImageResources() { this->imageResources_ = nullptr;};
      inline const vector<Shards::ImageResources> & getImageResources() const { DARABONBA_PTR_GET_CONST(imageResources_, vector<Shards::ImageResources>) };
      inline vector<Shards::ImageResources> getImageResources() { DARABONBA_PTR_GET(imageResources_, vector<Shards::ImageResources>) };
      inline Shards& setImageResources(const vector<Shards::ImageResources> & imageResources) { DARABONBA_PTR_SET_VALUE(imageResources_, imageResources) };
      inline Shards& setImageResources(vector<Shards::ImageResources> && imageResources) { DARABONBA_PTR_SET_RVALUE(imageResources_, imageResources) };


      // pageNumbers Field Functions 
      bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
      void deletePageNumbers() { this->pageNumbers_ = nullptr;};
      inline const vector<string> & getPageNumbers() const { DARABONBA_PTR_GET_CONST(pageNumbers_, vector<string>) };
      inline vector<string> getPageNumbers() { DARABONBA_PTR_GET(pageNumbers_, vector<string>) };
      inline Shards& setPageNumbers(const vector<string> & pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };
      inline Shards& setPageNumbers(vector<string> && pageNumbers) { DARABONBA_PTR_SET_RVALUE(pageNumbers_, pageNumbers) };


      // shardContent Field Functions 
      bool hasShardContent() const { return this->shardContent_ != nullptr;};
      void deleteShardContent() { this->shardContent_ = nullptr;};
      inline string getShardContent() const { DARABONBA_PTR_GET_DEFAULT(shardContent_, "") };
      inline Shards& setShardContent(string shardContent) { DARABONBA_PTR_SET_VALUE(shardContent_, shardContent) };


      // shardIndex Field Functions 
      bool hasShardIndex() const { return this->shardIndex_ != nullptr;};
      void deleteShardIndex() { this->shardIndex_ = nullptr;};
      inline int32_t getShardIndex() const { DARABONBA_PTR_GET_DEFAULT(shardIndex_, 0) };
      inline Shards& setShardIndex(int32_t shardIndex) { DARABONBA_PTR_SET_VALUE(shardIndex_, shardIndex) };


    protected:
      // The list of figure or table captions associated with the shard.
      shared_ptr<vector<string>> captions_ {};
      // The list of Docling source document structured element references associated with the shard. You can use these references to precisely locate original document elements.
      shared_ptr<vector<string>> docItems_ {};
      // The chain of section headings to which the shard belongs.
      shared_ptr<vector<string>> headings_ {};
      // The list of image resources referenced by the shard.
      shared_ptr<vector<Shards::ImageResources>> imageResources_ {};
      // The list of page numbers to which the shard belongs.
      shared_ptr<vector<string>> pageNumbers_ {};
      // The text content of the shard.
      shared_ptr<string> shardContent_ {};
      // The index of the shard.
      shared_ptr<int32_t> shardIndex_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->shards_ == nullptr && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shards Field Functions 
    bool hasShards() const { return this->shards_ != nullptr;};
    void deleteShards() { this->shards_ = nullptr;};
    inline const vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> & getShards() const { DARABONBA_PTR_GET_CONST(shards_, vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards>) };
    inline vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> getShards() { DARABONBA_PTR_GET(shards_, vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards>) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setShards(const vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> & shards) { DARABONBA_PTR_SET_VALUE(shards_, shards) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setShards(vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards> && shards) { DARABONBA_PTR_SET_RVALUE(shards_, shards) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeKnowledgeBaseFileShardsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The number of entries per page in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The shard information.
    shared_ptr<vector<DescribeKnowledgeBaseFileShardsResponseBody::Shards>> shards_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
