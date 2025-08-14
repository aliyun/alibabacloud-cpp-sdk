// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOEXCELJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOEXCELJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitConvertPdfToExcelJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitConvertPdfToExcelJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_TO_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(ForceExportInnerImage, forceExportInnerImage_);
      DARABONBA_PTR_TO_JSON(ForceMergeExcel, forceMergeExcel_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitConvertPdfToExcelJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_FROM_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(ForceExportInnerImage, forceExportInnerImage_);
      DARABONBA_PTR_FROM_JSON(ForceMergeExcel, forceMergeExcel_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
    };
    SubmitConvertPdfToExcelJobAdvanceRequest() = default ;
    SubmitConvertPdfToExcelJobAdvanceRequest(const SubmitConvertPdfToExcelJobAdvanceRequest &) = default ;
    SubmitConvertPdfToExcelJobAdvanceRequest(SubmitConvertPdfToExcelJobAdvanceRequest &&) = default ;
    SubmitConvertPdfToExcelJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitConvertPdfToExcelJobAdvanceRequest() = default ;
    SubmitConvertPdfToExcelJobAdvanceRequest& operator=(const SubmitConvertPdfToExcelJobAdvanceRequest &) = default ;
    SubmitConvertPdfToExcelJobAdvanceRequest& operator=(SubmitConvertPdfToExcelJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->fileUrlObject_ != nullptr && this->forceExportInnerImage_ != nullptr && this->forceMergeExcel_ != nullptr && this->ossBucket_ != nullptr && this->ossEndpoint_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitConvertPdfToExcelJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitConvertPdfToExcelJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // forceExportInnerImage Field Functions 
    bool hasForceExportInnerImage() const { return this->forceExportInnerImage_ != nullptr;};
    void deleteForceExportInnerImage() { this->forceExportInnerImage_ = nullptr;};
    inline bool forceExportInnerImage() const { DARABONBA_PTR_GET_DEFAULT(forceExportInnerImage_, false) };
    inline SubmitConvertPdfToExcelJobAdvanceRequest& setForceExportInnerImage(bool forceExportInnerImage) { DARABONBA_PTR_SET_VALUE(forceExportInnerImage_, forceExportInnerImage) };


    // forceMergeExcel Field Functions 
    bool hasForceMergeExcel() const { return this->forceMergeExcel_ != nullptr;};
    void deleteForceMergeExcel() { this->forceMergeExcel_ = nullptr;};
    inline bool forceMergeExcel() const { DARABONBA_PTR_GET_DEFAULT(forceMergeExcel_, false) };
    inline SubmitConvertPdfToExcelJobAdvanceRequest& setForceMergeExcel(bool forceMergeExcel) { DARABONBA_PTR_SET_VALUE(forceMergeExcel_, forceMergeExcel) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitConvertPdfToExcelJobAdvanceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitConvertPdfToExcelJobAdvanceRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
    std::shared_ptr<bool> forceExportInnerImage_ = nullptr;
    std::shared_ptr<bool> forceMergeExcel_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
