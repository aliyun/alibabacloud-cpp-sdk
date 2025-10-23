// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEVLREALTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEVLREALTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AnalyzeVlRealtimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeVlRealtimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeVlRealtimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    AnalyzeVlRealtimeRequest() = default ;
    AnalyzeVlRealtimeRequest(const AnalyzeVlRealtimeRequest &) = default ;
    AnalyzeVlRealtimeRequest(AnalyzeVlRealtimeRequest &&) = default ;
    AnalyzeVlRealtimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeVlRealtimeRequest() = default ;
    AnalyzeVlRealtimeRequest& operator=(const AnalyzeVlRealtimeRequest &) = default ;
    AnalyzeVlRealtimeRequest& operator=(AnalyzeVlRealtimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr
        && return this->language_ == nullptr && return this->templateId_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline AnalyzeVlRealtimeRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline AnalyzeVlRealtimeRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AnalyzeVlRealtimeRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Choose one of fileUrl or fileUrlObject:
    // 
    // - fileUrl: Use in the form of a document URL, for a single document (supports up to 1000 pages and 100MB)
    // 
    // - fileUrlObject: Use when calling the interface with local file upload, for a single document (supports up to 1000 pages and 100 MB)
    // 
    // > The relationship between file parsing methods and supported document types
    // > - Long Text RAG: Supports pdf, doc/docx, up to 1000 pages
    // > - Image Processing: Supports pdf, jpg, jpeg, png, bmp
    // > - Long Text Understanding: Supports pdf, doc/docx, xls/xlsx
    std::shared_ptr<string> fileUrl_ = nullptr;
    // Language, parameters that can be passed
    // - zh-CN: Chinese (default)
    // - en-US: English
    std::shared_ptr<string> language_ = nullptr;
    // A unique parsing template ID used to specify the key-value pairs to be extracted from the document. You need to log in to the template management page, configure the template, and then get the corresponding template ID.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
