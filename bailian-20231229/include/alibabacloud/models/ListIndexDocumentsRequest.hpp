// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(DocumentStatus, documentStatus_);
      DARABONBA_PTR_TO_JSON(EnableNameLike, enableNameLike_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(DocumentStatus, documentStatus_);
      DARABONBA_PTR_FROM_JSON(EnableNameLike, enableNameLike_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListIndexDocumentsRequest() = default ;
    ListIndexDocumentsRequest(const ListIndexDocumentsRequest &) = default ;
    ListIndexDocumentsRequest(ListIndexDocumentsRequest &&) = default ;
    ListIndexDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexDocumentsRequest() = default ;
    ListIndexDocumentsRequest& operator=(const ListIndexDocumentsRequest &) = default ;
    ListIndexDocumentsRequest& operator=(ListIndexDocumentsRequest &&) = default ;
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
    inline ListIndexDocumentsRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // documentStatus Field Functions 
    bool hasDocumentStatus() const { return this->documentStatus_ != nullptr;};
    void deleteDocumentStatus() { this->documentStatus_ = nullptr;};
    inline string getDocumentStatus() const { DARABONBA_PTR_GET_DEFAULT(documentStatus_, "") };
    inline ListIndexDocumentsRequest& setDocumentStatus(string documentStatus) { DARABONBA_PTR_SET_VALUE(documentStatus_, documentStatus) };


    // enableNameLike Field Functions 
    bool hasEnableNameLike() const { return this->enableNameLike_ != nullptr;};
    void deleteEnableNameLike() { this->enableNameLike_ = nullptr;};
    inline string getEnableNameLike() const { DARABONBA_PTR_GET_DEFAULT(enableNameLike_, "") };
    inline ListIndexDocumentsRequest& setEnableNameLike(string enableNameLike) { DARABONBA_PTR_SET_VALUE(enableNameLike_, enableNameLike) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListIndexDocumentsRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIndexDocumentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIndexDocumentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The names of the queried documents. The default value is null, which means the names are not used to filter the results.
    shared_ptr<string> documentName_ {};
    // The import status of the documents to be queried. Valid values:
    // 
    // *   INSERT_ERROR
    // *   RUNNING
    // *   DELETED
    // *   FINISH
    // 
    // The default value is null, which means the import status is not used to filter the results.
    shared_ptr<string> documentStatus_ {};
    shared_ptr<string> enableNameLike_ {};
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
    // The page numbers of the pages to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of documents displayed on each page. No maximum value. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
