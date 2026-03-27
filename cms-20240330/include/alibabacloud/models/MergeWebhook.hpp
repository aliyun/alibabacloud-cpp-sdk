// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEWEBHOOK_HPP_
#define ALIBABACLOUD_MODELS_MERGEWEBHOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MergeWebhook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeWebhook& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_ANY_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, MergeWebhook& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_ANY_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(webhook, webhook_);
    };
    MergeWebhook() = default ;
    MergeWebhook(const MergeWebhook &) = default ;
    MergeWebhook(MergeWebhook &&) = default ;
    MergeWebhook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeWebhook() = default ;
    MergeWebhook& operator=(const MergeWebhook &) = default ;
    MergeWebhook& operator=(MergeWebhook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->extend_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->headers_ == nullptr && this->identifier_ == nullptr
        && this->lang_ == nullptr && this->method_ == nullptr && this->name_ == nullptr && this->source_ == nullptr && this->type_ == nullptr
        && this->webhook_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline MergeWebhook& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline MergeWebhook& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MergeWebhook& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline     const Darabonba::Json & getGmtModified() const { DARABONBA_GET(gmtModified_) };
    Darabonba::Json & getGmtModified() { DARABONBA_GET(gmtModified_) };
    inline MergeWebhook& setGmtModified(const Darabonba::Json & gmtModified) { DARABONBA_SET_VALUE(gmtModified_, gmtModified) };
    inline MergeWebhook& setGmtModified(Darabonba::Json && gmtModified) { DARABONBA_SET_RVALUE(gmtModified_, gmtModified) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline MergeWebhook& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeWebhook& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MergeWebhook& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline MergeWebhook& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeWebhook& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeWebhook& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MergeWebhook& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline MergeWebhook& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    shared_ptr<string> contentType_ {};
    shared_ptr<string> extend_ {};
    shared_ptr<string> gmtCreate_ {};
    Darabonba::Json gmtModified_ {};
    shared_ptr<string> headers_ {};
    shared_ptr<string> identifier_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> method_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
