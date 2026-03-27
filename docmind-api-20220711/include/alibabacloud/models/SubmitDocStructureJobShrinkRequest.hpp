// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCSTRUCTUREJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCSTRUCTUREJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDocStructureJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocStructureJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowPptFormat, allowPptFormat_);
      DARABONBA_PTR_TO_JSON(EnableEventCallback, enableEventCallback_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormatShrink_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(StructureType, structureType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocStructureJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowPptFormat, allowPptFormat_);
      DARABONBA_PTR_FROM_JSON(EnableEventCallback, enableEventCallback_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FormulaEnhancement, formulaEnhancement_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormatShrink_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(StructureType, structureType_);
    };
    SubmitDocStructureJobShrinkRequest() = default ;
    SubmitDocStructureJobShrinkRequest(const SubmitDocStructureJobShrinkRequest &) = default ;
    SubmitDocStructureJobShrinkRequest(SubmitDocStructureJobShrinkRequest &&) = default ;
    SubmitDocStructureJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocStructureJobShrinkRequest() = default ;
    SubmitDocStructureJobShrinkRequest& operator=(const SubmitDocStructureJobShrinkRequest &) = default ;
    SubmitDocStructureJobShrinkRequest& operator=(SubmitDocStructureJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowPptFormat_ == nullptr
        && this->enableEventCallback_ == nullptr && this->fileName_ == nullptr && this->fileNameExtension_ == nullptr && this->fileUrl_ == nullptr && this->formulaEnhancement_ == nullptr
        && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->outputFormatShrink_ == nullptr && this->pageIndex_ == nullptr && this->structureType_ == nullptr; };
    // allowPptFormat Field Functions 
    bool hasAllowPptFormat() const { return this->allowPptFormat_ != nullptr;};
    void deleteAllowPptFormat() { this->allowPptFormat_ = nullptr;};
    inline bool getAllowPptFormat() const { DARABONBA_PTR_GET_DEFAULT(allowPptFormat_, false) };
    inline SubmitDocStructureJobShrinkRequest& setAllowPptFormat(bool allowPptFormat) { DARABONBA_PTR_SET_VALUE(allowPptFormat_, allowPptFormat) };


    // enableEventCallback Field Functions 
    bool hasEnableEventCallback() const { return this->enableEventCallback_ != nullptr;};
    void deleteEnableEventCallback() { this->enableEventCallback_ = nullptr;};
    inline bool getEnableEventCallback() const { DARABONBA_PTR_GET_DEFAULT(enableEventCallback_, false) };
    inline SubmitDocStructureJobShrinkRequest& setEnableEventCallback(bool enableEventCallback) { DARABONBA_PTR_SET_VALUE(enableEventCallback_, enableEventCallback) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDocStructureJobShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string getFileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitDocStructureJobShrinkRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitDocStructureJobShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // formulaEnhancement Field Functions 
    bool hasFormulaEnhancement() const { return this->formulaEnhancement_ != nullptr;};
    void deleteFormulaEnhancement() { this->formulaEnhancement_ = nullptr;};
    inline bool getFormulaEnhancement() const { DARABONBA_PTR_GET_DEFAULT(formulaEnhancement_, false) };
    inline SubmitDocStructureJobShrinkRequest& setFormulaEnhancement(bool formulaEnhancement) { DARABONBA_PTR_SET_VALUE(formulaEnhancement_, formulaEnhancement) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitDocStructureJobShrinkRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitDocStructureJobShrinkRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // outputFormatShrink Field Functions 
    bool hasOutputFormatShrink() const { return this->outputFormatShrink_ != nullptr;};
    void deleteOutputFormatShrink() { this->outputFormatShrink_ = nullptr;};
    inline string getOutputFormatShrink() const { DARABONBA_PTR_GET_DEFAULT(outputFormatShrink_, "") };
    inline SubmitDocStructureJobShrinkRequest& setOutputFormatShrink(string outputFormatShrink) { DARABONBA_PTR_SET_VALUE(outputFormatShrink_, outputFormatShrink) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline string getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
    inline SubmitDocStructureJobShrinkRequest& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // structureType Field Functions 
    bool hasStructureType() const { return this->structureType_ != nullptr;};
    void deleteStructureType() { this->structureType_ = nullptr;};
    inline string getStructureType() const { DARABONBA_PTR_GET_DEFAULT(structureType_, "") };
    inline SubmitDocStructureJobShrinkRequest& setStructureType(string structureType) { DARABONBA_PTR_SET_VALUE(structureType_, structureType) };


  protected:
    shared_ptr<bool> allowPptFormat_ {};
    shared_ptr<bool> enableEventCallback_ {};
    shared_ptr<string> fileName_ {};
    shared_ptr<string> fileNameExtension_ {};
    shared_ptr<string> fileUrl_ {};
    shared_ptr<bool> formulaEnhancement_ {};
    shared_ptr<string> ossBucket_ {};
    shared_ptr<string> ossEndpoint_ {};
    shared_ptr<string> outputFormatShrink_ {};
    shared_ptr<string> pageIndex_ {};
    shared_ptr<string> structureType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
