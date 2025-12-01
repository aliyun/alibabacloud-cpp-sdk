// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetDocumentPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeliveredBy, deliveredBy_);
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeliveredBy, deliveredBy_);
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    GetDocumentPageRequest() = default ;
    GetDocumentPageRequest(const GetDocumentPageRequest &) = default ;
    GetDocumentPageRequest(GetDocumentPageRequest &&) = default ;
    GetDocumentPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentPageRequest() = default ;
    GetDocumentPageRequest& operator=(const GetDocumentPageRequest &) = default ;
    GetDocumentPageRequest& operator=(GetDocumentPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->deliveredBy_ == nullptr && return this->documentName_ == nullptr && return this->documentType_ == nullptr && return this->pageSize_ == nullptr && return this->reportType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetDocumentPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deliveredBy Field Functions 
    bool hasDeliveredBy() const { return this->deliveredBy_ != nullptr;};
    void deleteDeliveredBy() { this->deliveredBy_ = nullptr;};
    inline string deliveredBy() const { DARABONBA_PTR_GET_DEFAULT(deliveredBy_, "") };
    inline GetDocumentPageRequest& setDeliveredBy(string deliveredBy) { DARABONBA_PTR_SET_VALUE(deliveredBy_, deliveredBy) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string documentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline GetDocumentPageRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string documentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline GetDocumentPageRequest& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDocumentPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetDocumentPageRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    // Current page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Delivered by.
    std::shared_ptr<string> deliveredBy_ = nullptr;
    // Document name.
    std::shared_ptr<string> documentName_ = nullptr;
    // Document type.
    std::shared_ptr<string> documentType_ = nullptr;
    // Page size.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Report type.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
