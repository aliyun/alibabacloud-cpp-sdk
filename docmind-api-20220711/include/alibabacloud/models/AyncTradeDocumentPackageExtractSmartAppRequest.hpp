// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AYNCTRADEDOCUMENTPACKAGEEXTRACTSMARTAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AYNCTRADEDOCUMENTPACKAGEEXTRACTSMARTAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class AyncTradeDocumentPackageExtractSmartAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AyncTradeDocumentPackageExtractSmartAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomExtractionRange, customExtractionRange_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, AyncTradeDocumentPackageExtractSmartAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomExtractionRange, customExtractionRange_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    AyncTradeDocumentPackageExtractSmartAppRequest() = default ;
    AyncTradeDocumentPackageExtractSmartAppRequest(const AyncTradeDocumentPackageExtractSmartAppRequest &) = default ;
    AyncTradeDocumentPackageExtractSmartAppRequest(AyncTradeDocumentPackageExtractSmartAppRequest &&) = default ;
    AyncTradeDocumentPackageExtractSmartAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AyncTradeDocumentPackageExtractSmartAppRequest() = default ;
    AyncTradeDocumentPackageExtractSmartAppRequest& operator=(const AyncTradeDocumentPackageExtractSmartAppRequest &) = default ;
    AyncTradeDocumentPackageExtractSmartAppRequest& operator=(AyncTradeDocumentPackageExtractSmartAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customExtractionRange_ != nullptr
        && this->fileName_ != nullptr && this->fileUrl_ != nullptr && this->option_ != nullptr && this->templateName_ != nullptr; };
    // customExtractionRange Field Functions 
    bool hasCustomExtractionRange() const { return this->customExtractionRange_ != nullptr;};
    void deleteCustomExtractionRange() { this->customExtractionRange_ = nullptr;};
    inline const vector<string> & customExtractionRange() const { DARABONBA_PTR_GET_CONST(customExtractionRange_, vector<string>) };
    inline vector<string> customExtractionRange() { DARABONBA_PTR_GET(customExtractionRange_, vector<string>) };
    inline AyncTradeDocumentPackageExtractSmartAppRequest& setCustomExtractionRange(const vector<string> & customExtractionRange) { DARABONBA_PTR_SET_VALUE(customExtractionRange_, customExtractionRange) };
    inline AyncTradeDocumentPackageExtractSmartAppRequest& setCustomExtractionRange(vector<string> && customExtractionRange) { DARABONBA_PTR_SET_RVALUE(customExtractionRange_, customExtractionRange) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline AyncTradeDocumentPackageExtractSmartAppRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<vector<string>> customExtractionRange_ = nullptr;
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
