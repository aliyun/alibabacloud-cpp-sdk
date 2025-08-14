// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOEXCELJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOEXCELJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitConvertPdfToExcelJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitConvertPdfToExcelJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ForceExportInnerImage, forceExportInnerImage_);
      DARABONBA_PTR_TO_JSON(ForceMergeExcel, forceMergeExcel_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitConvertPdfToExcelJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ForceExportInnerImage, forceExportInnerImage_);
      DARABONBA_PTR_FROM_JSON(ForceMergeExcel, forceMergeExcel_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
    };
    SubmitConvertPdfToExcelJobRequest() = default ;
    SubmitConvertPdfToExcelJobRequest(const SubmitConvertPdfToExcelJobRequest &) = default ;
    SubmitConvertPdfToExcelJobRequest(SubmitConvertPdfToExcelJobRequest &&) = default ;
    SubmitConvertPdfToExcelJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitConvertPdfToExcelJobRequest() = default ;
    SubmitConvertPdfToExcelJobRequest& operator=(const SubmitConvertPdfToExcelJobRequest &) = default ;
    SubmitConvertPdfToExcelJobRequest& operator=(SubmitConvertPdfToExcelJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->fileUrl_ != nullptr && this->forceExportInnerImage_ != nullptr && this->forceMergeExcel_ != nullptr && this->ossBucket_ != nullptr && this->ossEndpoint_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitConvertPdfToExcelJobRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitConvertPdfToExcelJobRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // forceExportInnerImage Field Functions 
    bool hasForceExportInnerImage() const { return this->forceExportInnerImage_ != nullptr;};
    void deleteForceExportInnerImage() { this->forceExportInnerImage_ = nullptr;};
    inline bool forceExportInnerImage() const { DARABONBA_PTR_GET_DEFAULT(forceExportInnerImage_, false) };
    inline SubmitConvertPdfToExcelJobRequest& setForceExportInnerImage(bool forceExportInnerImage) { DARABONBA_PTR_SET_VALUE(forceExportInnerImage_, forceExportInnerImage) };


    // forceMergeExcel Field Functions 
    bool hasForceMergeExcel() const { return this->forceMergeExcel_ != nullptr;};
    void deleteForceMergeExcel() { this->forceMergeExcel_ = nullptr;};
    inline bool forceMergeExcel() const { DARABONBA_PTR_GET_DEFAULT(forceMergeExcel_, false) };
    inline SubmitConvertPdfToExcelJobRequest& setForceMergeExcel(bool forceMergeExcel) { DARABONBA_PTR_SET_VALUE(forceMergeExcel_, forceMergeExcel) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitConvertPdfToExcelJobRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitConvertPdfToExcelJobRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<bool> forceExportInnerImage_ = nullptr;
    std::shared_ptr<bool> forceMergeExcel_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
