// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVLEXTRACTIONTASKADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVLEXTRACTIONTASKADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitVLExtractionTaskAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVLExtractionTaskAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_TO_JSON(fileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVLExtractionTaskAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_FROM_JSON(fileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    SubmitVLExtractionTaskAdvanceRequest() = default ;
    SubmitVLExtractionTaskAdvanceRequest(const SubmitVLExtractionTaskAdvanceRequest &) = default ;
    SubmitVLExtractionTaskAdvanceRequest(SubmitVLExtractionTaskAdvanceRequest &&) = default ;
    SubmitVLExtractionTaskAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVLExtractionTaskAdvanceRequest() = default ;
    SubmitVLExtractionTaskAdvanceRequest& operator=(const SubmitVLExtractionTaskAdvanceRequest &) = default ;
    SubmitVLExtractionTaskAdvanceRequest& operator=(SubmitVLExtractionTaskAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->fileUrlObject_ != nullptr && this->folderId_ != nullptr && this->templateId_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitVLExtractionTaskAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitVLExtractionTaskAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitVLExtractionTaskAdvanceRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitVLExtractionTaskAdvanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The filename must include the file type suffix.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // Choose one of fileUrl or fileUrlObject:
    // 
    // - fileUrl: Use by providing the document URL, for a single document (supports up to 1000 pages and 100MB in size)
    // 
    // - fileUrlObject: Use when calling the interface with local file upload, for a single document (supports up to 1000 pages and 100 MB in size)
    // 
    // > The relationship between file parsing methods and supported document types
    // > - Long Text RAG: Supports pdf, doc/docx, up to 1000 pages
    // > - Image Processing: Supports pdf, jpg, jpeg, png, bmp
    // > - Long Text Understanding: Supports pdf, doc/docx, xls/xlsx
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
    // - Unique knowledge base folder ID, used when you need to categorize documents and control the scope of online Q&A queries.
    // - The folder ID needs to be obtained from the intelligent document console after logging in.
    std::shared_ptr<string> folderId_ = nullptr;
    // Unique parsing template ID, used to specify the key-value pairs to be extracted from the document. You need to configure the template on the template management page and then obtain the corresponding template ID.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
