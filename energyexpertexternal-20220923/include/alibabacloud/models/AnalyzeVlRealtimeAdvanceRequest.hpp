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
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeVlRealtimeAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
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
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileUrlObject_ == nullptr && this->language_ == nullptr && this->templateId_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline AnalyzeVlRealtimeAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline AnalyzeVlRealtimeAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline AnalyzeVlRealtimeAdvanceRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AnalyzeVlRealtimeAdvanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // 文件名需带文件类型后缀
    shared_ptr<string> fileName_ {};
    // Valid values: fileUrl and fileUrlObject.
    // 
    // *   fileUrl: used as a document URL. A single document with not more than 1,000 pages and whose size does not exceed 100 MB is supported.
    // *   fileUrlObject: used when the operation is called in local file upload mode. A single document with not more than 1,000 pages and whose size does not exceed 100 MB is supported.
    // 
    // > The relationship between file extraction methods and supported document types
    // > - Long text RAG: Supports pdf, doc/docx, xlsx, csv, txt, up to 1000 pages
    // > - Image processing: Supports pdf, jpg, jpeg, png, bmp, jpe, tif, tiff, webp, heic
    // > - Long text understanding: Supports doc/docx, xlsx, pdf, csv, txt
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // The language, which can be transferred. Valid values:
    // 
    // *   zh-CN (default)
    // *   en-US
    shared_ptr<string> language_ {};
    // The unique ID of an extraction template, which is used to specify the content to be extracted from a document. You must log on to the Template Management page to configure the template and then obtain the corresponding template ID.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
