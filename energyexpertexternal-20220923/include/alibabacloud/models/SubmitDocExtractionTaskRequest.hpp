// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCEXTRACTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCEXTRACTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocExtractionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocExtractionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(extractType, extractType_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocExtractionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(extractType, extractType_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    SubmitDocExtractionTaskRequest() = default ;
    SubmitDocExtractionTaskRequest(const SubmitDocExtractionTaskRequest &) = default ;
    SubmitDocExtractionTaskRequest(SubmitDocExtractionTaskRequest &&) = default ;
    SubmitDocExtractionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocExtractionTaskRequest() = default ;
    SubmitDocExtractionTaskRequest& operator=(const SubmitDocExtractionTaskRequest &) = default ;
    SubmitDocExtractionTaskRequest& operator=(SubmitDocExtractionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extractType_ == nullptr
        && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->folderId_ == nullptr && this->templateId_ == nullptr; };
    // extractType Field Functions 
    bool hasExtractType() const { return this->extractType_ != nullptr;};
    void deleteExtractType() { this->extractType_ = nullptr;};
    inline string getExtractType() const { DARABONBA_PTR_GET_DEFAULT(extractType_, "") };
    inline SubmitDocExtractionTaskRequest& setExtractType(string extractType) { DARABONBA_PTR_SET_VALUE(extractType_, extractType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocExtractionTaskRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitDocExtractionTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitDocExtractionTaskRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitDocExtractionTaskRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Document extraction type:
    // Supports rag and long text understanding types, default is rag.
    shared_ptr<string> extractType_ {};
    // The filename must include the file type extension.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // Choose one of fileUrl or fileUrlObject:
    // 
    // - fileUrl: Use by providing the document URL, for a single document (supports up to 1000 pages, 100MB in size)
    // 
    // - fileUrlObject: Use when calling the interface with local file upload, for a single document (supports up to 1000 pages, 100 MB in size)
    // 
    // > The relationship between file extraction methods and supported document types
    // > - Long text RAG: Supports pdf, doc/docx, xlsx, csv, txt, up to 1000 pages
    // > - Image processing: Supports pdf, jpg, jpeg, png, bmp, jpe, tif, tiff, webp, heic
    // > - Long text understanding: Supports doc/docx, xlsx, pdf, csv, txt
    shared_ptr<string> fileUrl_ {};
    // - A unique knowledge base folder ID, used when you need to categorize documents and control the scope of documents for online Q&A queries.
    // - The folder ID needs to be obtained by logging into the intelligent document console.
    shared_ptr<string> folderId_ {};
    // A unique extraction template ID used to specify the content to be extracted from the document. You need to log in to the template management page to configure the template and obtain the corresponding template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
