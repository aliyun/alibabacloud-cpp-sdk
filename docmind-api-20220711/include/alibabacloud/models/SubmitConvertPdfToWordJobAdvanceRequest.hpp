// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOWORDJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOWORDJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitConvertPdfToWordJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitConvertPdfToWordJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableEventCallback, enableEventCallback_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_TO_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(ForceExportInnerImage, forceExportInnerImage_);
      DARABONBA_PTR_TO_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitConvertPdfToWordJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableEventCallback, enableEventCallback_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_FROM_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(ForceExportInnerImage, forceExportInnerImage_);
      DARABONBA_PTR_FROM_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
    };
    SubmitConvertPdfToWordJobAdvanceRequest() = default ;
    SubmitConvertPdfToWordJobAdvanceRequest(const SubmitConvertPdfToWordJobAdvanceRequest &) = default ;
    SubmitConvertPdfToWordJobAdvanceRequest(SubmitConvertPdfToWordJobAdvanceRequest &&) = default ;
    SubmitConvertPdfToWordJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitConvertPdfToWordJobAdvanceRequest() = default ;
    SubmitConvertPdfToWordJobAdvanceRequest& operator=(const SubmitConvertPdfToWordJobAdvanceRequest &) = default ;
    SubmitConvertPdfToWordJobAdvanceRequest& operator=(SubmitConvertPdfToWordJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableEventCallback_ == nullptr
        && return this->fileName_ == nullptr && return this->fileUrlObject_ == nullptr && return this->forceExportInnerImage_ == nullptr && return this->formulaEnhancement_ == nullptr && return this->option_ == nullptr
        && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr; };
    // enableEventCallback Field Functions 
    bool hasEnableEventCallback() const { return this->enableEventCallback_ != nullptr;};
    void deleteEnableEventCallback() { this->enableEventCallback_ = nullptr;};
    inline bool enableEventCallback() const { DARABONBA_PTR_GET_DEFAULT(enableEventCallback_, false) };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setEnableEventCallback(bool enableEventCallback) { DARABONBA_PTR_SET_VALUE(enableEventCallback_, enableEventCallback) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // forceExportInnerImage Field Functions 
    bool hasForceExportInnerImage() const { return this->forceExportInnerImage_ != nullptr;};
    void deleteForceExportInnerImage() { this->forceExportInnerImage_ = nullptr;};
    inline bool forceExportInnerImage() const { DARABONBA_PTR_GET_DEFAULT(forceExportInnerImage_, false) };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setForceExportInnerImage(bool forceExportInnerImage) { DARABONBA_PTR_SET_VALUE(forceExportInnerImage_, forceExportInnerImage) };


    // formulaEnhancement Field Functions 
    bool hasFormulaEnhancement() const { return this->formulaEnhancement_ != nullptr;};
    void deleteFormulaEnhancement() { this->formulaEnhancement_ = nullptr;};
    inline bool formulaEnhancement() const { DARABONBA_PTR_GET_DEFAULT(formulaEnhancement_, false) };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setFormulaEnhancement(bool formulaEnhancement) { DARABONBA_PTR_SET_VALUE(formulaEnhancement_, formulaEnhancement) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitConvertPdfToWordJobAdvanceRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


  protected:
    std::shared_ptr<bool> enableEventCallback_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
    std::shared_ptr<bool> forceExportInnerImage_ = nullptr;
    std::shared_ptr<bool> formulaEnhancement_ = nullptr;
    std::shared_ptr<string> option_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
