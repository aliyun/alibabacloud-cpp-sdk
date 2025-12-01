// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetDocumentPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveredBy, deliveredBy_);
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveredBy, deliveredBy_);
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    GetDocumentPageResponseBodyData() = default ;
    GetDocumentPageResponseBodyData(const GetDocumentPageResponseBodyData &) = default ;
    GetDocumentPageResponseBodyData(GetDocumentPageResponseBodyData &&) = default ;
    GetDocumentPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentPageResponseBodyData() = default ;
    GetDocumentPageResponseBodyData& operator=(const GetDocumentPageResponseBodyData &) = default ;
    GetDocumentPageResponseBodyData& operator=(GetDocumentPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveredBy_ == nullptr
        && return this->documentName_ == nullptr && return this->documentType_ == nullptr && return this->id_ == nullptr && return this->reportStatus_ == nullptr && return this->uploadTime_ == nullptr; };
    // deliveredBy Field Functions 
    bool hasDeliveredBy() const { return this->deliveredBy_ != nullptr;};
    void deleteDeliveredBy() { this->deliveredBy_ = nullptr;};
    inline string deliveredBy() const { DARABONBA_PTR_GET_DEFAULT(deliveredBy_, "") };
    inline GetDocumentPageResponseBodyData& setDeliveredBy(string deliveredBy) { DARABONBA_PTR_SET_VALUE(deliveredBy_, deliveredBy) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string documentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline GetDocumentPageResponseBodyData& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string documentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline GetDocumentPageResponseBodyData& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDocumentPageResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline GetDocumentPageResponseBodyData& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline GetDocumentPageResponseBodyData& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    // Delivered by.
    std::shared_ptr<string> deliveredBy_ = nullptr;
    // Report name.
    std::shared_ptr<string> documentName_ = nullptr;
    // Service report type.
    std::shared_ptr<string> documentType_ = nullptr;
    // Primary key ID of the document.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Report status.
    std::shared_ptr<string> reportStatus_ = nullptr;
    // Report generation time.
    std::shared_ptr<string> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
