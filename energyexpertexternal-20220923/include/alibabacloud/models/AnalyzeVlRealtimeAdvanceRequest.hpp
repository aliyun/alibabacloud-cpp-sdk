// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEVLREALTIMEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEVLREALTIMEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AnalyzeVlRealtimeAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeVlRealtimeAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(fileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeVlRealtimeAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(fileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    AnalyzeVlRealtimeAdvanceRequest() = default ;
    AnalyzeVlRealtimeAdvanceRequest(const AnalyzeVlRealtimeAdvanceRequest &) = default ;
    AnalyzeVlRealtimeAdvanceRequest(AnalyzeVlRealtimeAdvanceRequest &&) = default ;
    AnalyzeVlRealtimeAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeVlRealtimeAdvanceRequest() = default ;
    AnalyzeVlRealtimeAdvanceRequest& operator=(const AnalyzeVlRealtimeAdvanceRequest &) = default ;
    AnalyzeVlRealtimeAdvanceRequest& operator=(AnalyzeVlRealtimeAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrlObject_ == nullptr
        && return this->language_ == nullptr && return this->templateId_ == nullptr; };
    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline AnalyzeVlRealtimeAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline AnalyzeVlRealtimeAdvanceRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AnalyzeVlRealtimeAdvanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


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
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
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
