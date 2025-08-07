// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEDOCUMENTINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEDOCUMENTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyServiceDocumentInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyServiceDocumentInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyServiceDocumentInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetServiceResponseBodyServiceDocumentInfos() = default ;
    GetServiceResponseBodyServiceDocumentInfos(const GetServiceResponseBodyServiceDocumentInfos &) = default ;
    GetServiceResponseBodyServiceDocumentInfos(GetServiceResponseBodyServiceDocumentInfos &&) = default ;
    GetServiceResponseBodyServiceDocumentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyServiceDocumentInfos() = default ;
    GetServiceResponseBodyServiceDocumentInfos& operator=(const GetServiceResponseBodyServiceDocumentInfos &) = default ;
    GetServiceResponseBodyServiceDocumentInfos& operator=(GetServiceResponseBodyServiceDocumentInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->documentUrl_ != nullptr
        && this->locale_ != nullptr && this->templateName_ != nullptr; };
    // documentUrl Field Functions 
    bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
    void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
    inline string documentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
    inline GetServiceResponseBodyServiceDocumentInfos& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string locale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetServiceResponseBodyServiceDocumentInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceResponseBodyServiceDocumentInfos& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The URL that is used to access the document.
    std::shared_ptr<string> documentUrl_ = nullptr;
    // The language that you use for the query. Valid values: zh-CN and en-US.
    std::shared_ptr<string> locale_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
