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
        && return this->documentStatus_ == nullptr && return this->enableNameLike_ == nullptr && return this->indexId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string documentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline ListIndexFileDetailsRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // documentStatus Field Functions 
    bool hasDocumentStatus() const { return this->documentStatus_ != nullptr;};
    void deleteDocumentStatus() { this->documentStatus_ = nullptr;};
    inline string documentStatus() const { DARABONBA_PTR_GET_DEFAULT(documentStatus_, "") };
    inline ListIndexFileDetailsRequest& setDocumentStatus(string documentStatus) { DARABONBA_PTR_SET_VALUE(documentStatus_, documentStatus) };


    // enableNameLike Field Functions 
    bool hasEnableNameLike() const { return this->enableNameLike_ != nullptr;};
    void deleteEnableNameLike() { this->enableNameLike_ = nullptr;};
    inline string enableNameLike() const { DARABONBA_PTR_GET_DEFAULT(enableNameLike_, "") };
    inline ListIndexFileDetailsRequest& setEnableNameLike(string enableNameLike) { DARABONBA_PTR_SET_VALUE(enableNameLike_, enableNameLike) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListIndexFileDetailsRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIndexFileDetailsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIndexFileDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> documentName_ = nullptr;
    std::shared_ptr<string> documentStatus_ = nullptr;
    std::shared_ptr<string> enableNameLike_ = nullptr;
    std::shared_ptr<string> indexId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
