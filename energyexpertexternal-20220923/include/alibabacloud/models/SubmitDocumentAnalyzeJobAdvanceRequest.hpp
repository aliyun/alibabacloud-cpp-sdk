// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCUMENTANALYZEJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCUMENTANALYZEJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocumentAnalyzeJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocumentAnalyzeJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysisType, analysisType_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_TO_JSON(fileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocumentAnalyzeJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisType, analysisType_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_FROM_JSON(fileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    SubmitDocumentAnalyzeJobAdvanceRequest() = default ;
    SubmitDocumentAnalyzeJobAdvanceRequest(const SubmitDocumentAnalyzeJobAdvanceRequest &) = default ;
    SubmitDocumentAnalyzeJobAdvanceRequest(SubmitDocumentAnalyzeJobAdvanceRequest &&) = default ;
    SubmitDocumentAnalyzeJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocumentAnalyzeJobAdvanceRequest() = default ;
    SubmitDocumentAnalyzeJobAdvanceRequest& operator=(const SubmitDocumentAnalyzeJobAdvanceRequest &) = default ;
    SubmitDocumentAnalyzeJobAdvanceRequest& operator=(SubmitDocumentAnalyzeJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisType_ == nullptr
        && return this->fileName_ == nullptr && return this->fileUrlObject_ == nullptr && return this->folderId_ == nullptr && return this->templateId_ == nullptr; };
    // analysisType Field Functions 
    bool hasAnalysisType() const { return this->analysisType_ != nullptr;};
    void deleteAnalysisType() { this->analysisType_ = nullptr;};
    inline string analysisType() const { DARABONBA_PTR_GET_DEFAULT(analysisType_, "") };
    inline SubmitDocumentAnalyzeJobAdvanceRequest& setAnalysisType(string analysisType) { DARABONBA_PTR_SET_VALUE(analysisType_, analysisType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocumentAnalyzeJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitDocumentAnalyzeJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitDocumentAnalyzeJobAdvanceRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitDocumentAnalyzeJobAdvanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The default extraction method is "doc", with the following optional values:
    // 
    // - vl: Image processing
    // - doc: Long text RAG (Retrieval-Augmented Generation)
    // - docUnderstanding: Long text comprehension
    // - recommender: Recommendation type
    std::shared_ptr<string> analysisType_ = nullptr;
    // The filename must include the file type extension.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // Choose one between fileUrl and fileUrlObject:
    // 
    // - fileUrl: Use the document URL method for a single document (supports documents with up to 1000 pages and within 100MB).
    // 
    // - fileUrlObject: Use when calling the API via local file upload, for a single document (supports documents with up to 1000 pages and 
    // within 100MB).
    // 
    // > Relationship between file parsing methods and supported document types. 
    // >- Long Text RAG: Supports pdf, doc/docx, and up to 1000 pages
    // >- Image Processing: Supports pdf, jpg, jpeg, png, bmp
    // >- Long Text Understanding: Supports pdf, doc/docx, xls/xlsx
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
    // Unique knowledge base folder ID, used for categorizing documents and controlling the scope of online Q&A queries. If empty, the document will be uploaded to the tenant\\"s root directory.
    std::shared_ptr<string> folderId_ = nullptr;
    // The unique extraction template ID is used to specify the key-value pairs to be extracted from the document. You need to log in to the template management page to configure the template and obtain the corresponding template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
