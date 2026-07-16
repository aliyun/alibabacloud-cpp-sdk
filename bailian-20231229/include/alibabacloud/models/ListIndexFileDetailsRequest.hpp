// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXFILEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXFILEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexFileDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexFileDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(DocumentStatus, documentStatus_);
      DARABONBA_PTR_TO_JSON(EnableNameLike, enableNameLike_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexFileDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(DocumentStatus, documentStatus_);
      DARABONBA_PTR_FROM_JSON(EnableNameLike, enableNameLike_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListIndexFileDetailsRequest() = default ;
    ListIndexFileDetailsRequest(const ListIndexFileDetailsRequest &) = default ;
    ListIndexFileDetailsRequest(ListIndexFileDetailsRequest &&) = default ;
    ListIndexFileDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexFileDetailsRequest() = default ;
    ListIndexFileDetailsRequest& operator=(const ListIndexFileDetailsRequest &) = default ;
    ListIndexFileDetailsRequest& operator=(ListIndexFileDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentName_ == nullptr
        && this->documentStatus_ == nullptr && this->enableNameLike_ == nullptr && this->indexId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline ListIndexFileDetailsRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // documentStatus Field Functions 
    bool hasDocumentStatus() const { return this->documentStatus_ != nullptr;};
    void deleteDocumentStatus() { this->documentStatus_ = nullptr;};
    inline string getDocumentStatus() const { DARABONBA_PTR_GET_DEFAULT(documentStatus_, "") };
    inline ListIndexFileDetailsRequest& setDocumentStatus(string documentStatus) { DARABONBA_PTR_SET_VALUE(documentStatus_, documentStatus) };


    // enableNameLike Field Functions 
    bool hasEnableNameLike() const { return this->enableNameLike_ != nullptr;};
    void deleteEnableNameLike() { this->enableNameLike_ = nullptr;};
    inline string getEnableNameLike() const { DARABONBA_PTR_GET_DEFAULT(enableNameLike_, "") };
    inline ListIndexFileDetailsRequest& setEnableNameLike(string enableNameLike) { DARABONBA_PTR_SET_VALUE(enableNameLike_, enableNameLike) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListIndexFileDetailsRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIndexFileDetailsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIndexFileDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Filters the returned file details list by file name. Default value: empty, which means no filtering by file name.
    shared_ptr<string> documentName_ {};
    // Filters the returned file list by file import status. Valid values:
    // 
    // - INSERT_ERROR: Failed to import to the index.
    // - RUNNING: Index building in progress.
    // - DELETED: Deleted.
    // - FINISH: Index building succeeded.
    // - PARSE_FAILED: Parsing failed.
    // - DOC_PARSING: Parsing in progress.
    // 
    // Default value: empty, which means no filtering by file import status.
    shared_ptr<string> documentStatus_ {};
    // Specifies whether to enable fuzzy matching for file names. This parameter is used together with the `DocumentName` parameter. Valid values:
    // 
    // - true: Performs fuzzy matching on the returned file list based on the file name.
    // - false: Performs exact matching on the returned file list based on the file name.
    // 
    // Default value: false.
    shared_ptr<string> enableNameLike_ {};
    // The knowledge base ID, which is the `Data.Id` returned by the **CreateIndex** operation.
    shared_ptr<string> indexId_ {};
    // The page number to query. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of files to display per page for paging. Maximum value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
