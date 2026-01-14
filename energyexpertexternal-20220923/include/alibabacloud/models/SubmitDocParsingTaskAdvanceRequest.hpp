// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSINGTASKADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSINGTASKADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocParsingTaskAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParsingTaskAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(needAnalyzeImg, needAnalyzeImg_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParsingTaskAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(needAnalyzeImg, needAnalyzeImg_);
    };
    SubmitDocParsingTaskAdvanceRequest() = default ;
    SubmitDocParsingTaskAdvanceRequest(const SubmitDocParsingTaskAdvanceRequest &) = default ;
    SubmitDocParsingTaskAdvanceRequest(SubmitDocParsingTaskAdvanceRequest &&) = default ;
    SubmitDocParsingTaskAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParsingTaskAdvanceRequest() = default ;
    SubmitDocParsingTaskAdvanceRequest& operator=(const SubmitDocParsingTaskAdvanceRequest &) = default ;
    SubmitDocParsingTaskAdvanceRequest& operator=(SubmitDocParsingTaskAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileUrlObject_ == nullptr && this->folderId_ == nullptr && this->needAnalyzeImg_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocParsingTaskAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitDocParsingTaskAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline SubmitDocParsingTaskAdvanceRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // needAnalyzeImg Field Functions 
    bool hasNeedAnalyzeImg() const { return this->needAnalyzeImg_ != nullptr;};
    void deleteNeedAnalyzeImg() { this->needAnalyzeImg_ = nullptr;};
    inline bool getNeedAnalyzeImg() const { DARABONBA_PTR_GET_DEFAULT(needAnalyzeImg_, false) };
    inline SubmitDocParsingTaskAdvanceRequest& setNeedAnalyzeImg(bool needAnalyzeImg) { DARABONBA_PTR_SET_VALUE(needAnalyzeImg_, needAnalyzeImg) };


  protected:
    // The filename must include the file type extension.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
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
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // - Unique knowledge base folder ID, used when categorizing documents and controlling the scope of documents for online Q&A queries.
    // - The folder ID needs to be obtained from the Intelligent Document Console after logging in.
    shared_ptr<string> folderId_ {};
    // Whether to parse image content within the document.
    shared_ptr<bool> needAnalyzeImg_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
