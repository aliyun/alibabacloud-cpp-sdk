// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSINGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocParsingTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParsingTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(needAnalyzeImg, needAnalyzeImg_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParsingTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(needAnalyzeImg, needAnalyzeImg_);
    };
    SubmitDocParsingTaskRequest() = default ;
    SubmitDocParsingTaskRequest(const SubmitDocParsingTaskRequest &) = default ;
    SubmitDocParsingTaskRequest(SubmitDocParsingTaskRequest &&) = default ;
    SubmitDocParsingTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParsingTaskRequest() = default ;
    SubmitDocParsingTaskRequest& operator=(const SubmitDocParsingTaskRequest &) = default ;
    SubmitDocParsingTaskRequest& operator=(SubmitDocParsingTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->fileUrl_ != nullptr && this->folderId_ != nullptr && this->needAnalyzeImg_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocParsingTaskRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitDocParsingTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitDocParsingTaskRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // needAnalyzeImg Field Functions 
    bool hasNeedAnalyzeImg() const { return this->needAnalyzeImg_ != nullptr;};
    void deleteNeedAnalyzeImg() { this->needAnalyzeImg_ = nullptr;};
    inline bool needAnalyzeImg() const { DARABONBA_PTR_GET_DEFAULT(needAnalyzeImg_, false) };
    inline SubmitDocParsingTaskRequest& setNeedAnalyzeImg(bool needAnalyzeImg) { DARABONBA_PTR_SET_VALUE(needAnalyzeImg_, needAnalyzeImg) };


  protected:
    // The filename must include the file type extension.
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
    // > - Long Text RAG: Supports pdf, doc/docx, supports up to 1000 pages
    // > - Image Processing: Supports pdf, jpg, jpeg, png, bmp
    // > - Long Text Understanding: Supports pdf, doc/docx, xls/xlsx
    std::shared_ptr<string> fileUrl_ = nullptr;
    // - Unique knowledge base folder ID, used when categorizing documents and controlling the scope of documents for online Q&A queries.
    // - The folder ID needs to be obtained from the Intelligent Document Console after logging in.
    std::shared_ptr<string> folderId_ = nullptr;
    // Whether to parse image content within the document.
    std::shared_ptr<bool> needAnalyzeImg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
