// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAPPSITEVALIDATIONFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAPPSITEVALIDATIONFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UploadAppSiteValidationFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAppSiteValidationFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(FileContent, fileContent_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAppSiteValidationFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(FileContent, fileContent_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
    };
    UploadAppSiteValidationFileRequest() = default ;
    UploadAppSiteValidationFileRequest(const UploadAppSiteValidationFileRequest &) = default ;
    UploadAppSiteValidationFileRequest(UploadAppSiteValidationFileRequest &&) = default ;
    UploadAppSiteValidationFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAppSiteValidationFileRequest() = default ;
    UploadAppSiteValidationFileRequest& operator=(const UploadAppSiteValidationFileRequest &) = default ;
    UploadAppSiteValidationFileRequest& operator=(UploadAppSiteValidationFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->domain_ == nullptr && this->file_ == nullptr && this->fileContent_ == nullptr && this->fileType_ == nullptr && this->siteHost_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UploadAppSiteValidationFileRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UploadAppSiteValidationFileRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline UploadAppSiteValidationFileRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // fileContent Field Functions 
    bool hasFileContent() const { return this->fileContent_ != nullptr;};
    void deleteFileContent() { this->fileContent_ = nullptr;};
    inline string getFileContent() const { DARABONBA_PTR_GET_DEFAULT(fileContent_, "") };
    inline UploadAppSiteValidationFileRequest& setFileContent(string fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline UploadAppSiteValidationFileRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // siteHost Field Functions 
    bool hasSiteHost() const { return this->siteHost_ != nullptr;};
    void deleteSiteHost() { this->siteHost_ = nullptr;};
    inline string getSiteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
    inline UploadAppSiteValidationFileRequest& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<string> file_ {};
    shared_ptr<string> fileContent_ {};
    shared_ptr<string> fileType_ {};
    shared_ptr<string> siteHost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
