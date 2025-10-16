// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AYNCTRADEDOCUMENTPACKAGEEXTRACTSMARTAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AYNCTRADEDOCUMENTPACKAGEEXTRACTSMARTAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class AyncTradeDocumentPackageExtractSmartAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AyncTradeDocumentPackageExtractSmartAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomExtractionRange, customExtractionRangeShrink_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, AyncTradeDocumentPackageExtractSmartAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomExtractionRange, customExtractionRangeShrink_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    AyncTradeDocumentPackageExtractSmartAppShrinkRequest() = default ;
    AyncTradeDocumentPackageExtractSmartAppShrinkRequest(const AyncTradeDocumentPackageExtractSmartAppShrinkRequest &) = default ;
    AyncTradeDocumentPackageExtractSmartAppShrinkRequest(AyncTradeDocumentPackageExtractSmartAppShrinkRequest &&) = default ;
    AyncTradeDocumentPackageExtractSmartAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AyncTradeDocumentPackageExtractSmartAppShrinkRequest() = default ;
    AyncTradeDocumentPackageExtractSmartAppShrinkRequest& operator=(const AyncTradeDocumentPackageExtractSmartAppShrinkRequest &) = default ;
    AyncTradeDocumentPackageExtractSmartAppShrinkRequest& operator=(AyncTradeDocumentPackageExtractSmartAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customExtractionRangeShrink_ == nullptr
        && return this->fileName_ == nullptr && return this->fileUrl_ == nullptr && return this->option_ == nullptr && return this->templateName_ == nullptr; };
    // customExtractionRangeShrink Field Functions 
    bool hasCustomExtractionRangeShrink() const { return this->customExtractionRangeShrink_ != nullptr;};
    void deleteCustomExtractionRangeShrink() { this->customExtractionRangeShrink_ = nullptr;};
    inline string customExtractionRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(customExtractionRangeShrink_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppShrinkRequest& setCustomExtractionRangeShrink(string customExtractionRangeShrink) { DARABONBA_PTR_SET_VALUE(customExtractionRangeShrink_, customExtractionRangeShrink) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppShrinkRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> customExtractionRangeShrink_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> option_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
