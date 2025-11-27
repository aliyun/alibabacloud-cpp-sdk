// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTRACTDOCUMENTTEXTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTRACTDOCUMENTTEXTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ExtractDocumentTextShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtractDocumentTextShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
    };
    friend void from_json(const Darabonba::Json& j, ExtractDocumentTextShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
    };
    ExtractDocumentTextShrinkRequest() = default ;
    ExtractDocumentTextShrinkRequest(const ExtractDocumentTextShrinkRequest &) = default ;
    ExtractDocumentTextShrinkRequest(ExtractDocumentTextShrinkRequest &&) = default ;
    ExtractDocumentTextShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtractDocumentTextShrinkRequest() = default ;
    ExtractDocumentTextShrinkRequest& operator=(const ExtractDocumentTextShrinkRequest &) = default ;
    ExtractDocumentTextShrinkRequest& operator=(ExtractDocumentTextShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && return this->projectName_ == nullptr && return this->sourceType_ == nullptr && return this->sourceURI_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline ExtractDocumentTextShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ExtractDocumentTextShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ExtractDocumentTextShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline ExtractDocumentTextShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


  protected:
    // **If there are no special requirements, leave it blank.**
    // 
    // Chain authorization configuration, optional. For more information, see [Using Chain Authorization to Access Other Entity Resources](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // Project name. For how to obtain it, see [Creating a Project](https://help.aliyun.com/document_detail/477051.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Suffix type of the source data. By default, the type of the source data is determined based on the suffix of the input object. When the input object does not have a suffix, you can set this parameter. The available values are as follows:
    // 
    // - Word Documents: doc, docx, wps, wpss, docm, dotm, dot, dotx, html
    // - Presentation Documents (PPT): pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, dpss
    // - Spreadsheet Documents (Excel): xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, ets
    // - PDF Documents: pdf
    std::shared_ptr<string> sourceType_ = nullptr;
    // Storage address of the source data.
    // 
    // The OSS address rule is oss://${Bucket}/${Object}, where `${Bucket}` is the name of the OSS Bucket in the same region (Region) as the current project, and `${Object}` is the complete path of the file including the file extension.
    // >Notice: Currently, only HTTP protocol addresses are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
