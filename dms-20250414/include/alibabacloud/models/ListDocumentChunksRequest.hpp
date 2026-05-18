// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTCHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTCHUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDocumentChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkTitlePattern, chunkTitlePattern_);
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkTitlePattern, chunkTitlePattern_);
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListDocumentChunksRequest() = default ;
    ListDocumentChunksRequest(const ListDocumentChunksRequest &) = default ;
    ListDocumentChunksRequest(ListDocumentChunksRequest &&) = default ;
    ListDocumentChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentChunksRequest() = default ;
    ListDocumentChunksRequest& operator=(const ListDocumentChunksRequest &) = default ;
    ListDocumentChunksRequest& operator=(ListDocumentChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkTitlePattern_ == nullptr
        && this->documentName_ == nullptr && this->kbUuid_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sortFieldName_ == nullptr
        && this->sortOrder_ == nullptr; };
    // chunkTitlePattern Field Functions 
    bool hasChunkTitlePattern() const { return this->chunkTitlePattern_ != nullptr;};
    void deleteChunkTitlePattern() { this->chunkTitlePattern_ = nullptr;};
    inline string getChunkTitlePattern() const { DARABONBA_PTR_GET_DEFAULT(chunkTitlePattern_, "") };
    inline ListDocumentChunksRequest& setChunkTitlePattern(string chunkTitlePattern) { DARABONBA_PTR_SET_VALUE(chunkTitlePattern_, chunkTitlePattern) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline ListDocumentChunksRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline ListDocumentChunksRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDocumentChunksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDocumentChunksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sortFieldName Field Functions 
    bool hasSortFieldName() const { return this->sortFieldName_ != nullptr;};
    void deleteSortFieldName() { this->sortFieldName_ = nullptr;};
    inline string getSortFieldName() const { DARABONBA_PTR_GET_DEFAULT(sortFieldName_, "") };
    inline ListDocumentChunksRequest& setSortFieldName(string sortFieldName) { DARABONBA_PTR_SET_VALUE(sortFieldName_, sortFieldName) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListDocumentChunksRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    shared_ptr<string> chunkTitlePattern_ {};
    shared_ptr<string> documentName_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> sortFieldName_ {};
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
