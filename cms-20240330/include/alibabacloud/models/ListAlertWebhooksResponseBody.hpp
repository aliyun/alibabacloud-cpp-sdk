// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTWEBHOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTWEBHOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertWebhooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertWebhooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertWebhooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(webhooks, webhooks_);
    };
    ListAlertWebhooksResponseBody() = default ;
    ListAlertWebhooksResponseBody(const ListAlertWebhooksResponseBody &) = default ;
    ListAlertWebhooksResponseBody(ListAlertWebhooksResponseBody &&) = default ;
    ListAlertWebhooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertWebhooksResponseBody() = default ;
    ListAlertWebhooksResponseBody& operator=(const ListAlertWebhooksResponseBody &) = default ;
    ListAlertWebhooksResponseBody& operator=(ListAlertWebhooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Webhooks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Webhooks& obj) { 
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_ANY_TO_JSON(headers, headers_);
        DARABONBA_PTR_TO_JSON(lang, lang_);
        DARABONBA_PTR_TO_JSON(method, method_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(url, url_);
        DARABONBA_PTR_TO_JSON(webhookId, webhookId_);
      };
      friend void from_json(const Darabonba::Json& j, Webhooks& obj) { 
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_ANY_FROM_JSON(headers, headers_);
        DARABONBA_PTR_FROM_JSON(lang, lang_);
        DARABONBA_PTR_FROM_JSON(method, method_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(url, url_);
        DARABONBA_PTR_FROM_JSON(webhookId, webhookId_);
      };
      Webhooks() = default ;
      Webhooks(const Webhooks &) = default ;
      Webhooks(Webhooks &&) = default ;
      Webhooks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Webhooks() = default ;
      Webhooks& operator=(const Webhooks &) = default ;
      Webhooks& operator=(Webhooks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->headers_ == nullptr && this->lang_ == nullptr && this->method_ == nullptr && this->name_ == nullptr && this->url_ == nullptr
        && this->webhookId_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Webhooks& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline       const Darabonba::Json & getHeaders() const { DARABONBA_GET(headers_) };
      Darabonba::Json & getHeaders() { DARABONBA_GET(headers_) };
      inline Webhooks& setHeaders(const Darabonba::Json & headers) { DARABONBA_SET_VALUE(headers_, headers) };
      inline Webhooks& setHeaders(Darabonba::Json && headers) { DARABONBA_SET_RVALUE(headers_, headers) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline Webhooks& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Webhooks& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Webhooks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Webhooks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // webhookId Field Functions 
      bool hasWebhookId() const { return this->webhookId_ != nullptr;};
      void deleteWebhookId() { this->webhookId_ = nullptr;};
      inline string getWebhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, "") };
      inline Webhooks& setWebhookId(string webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


    protected:
      shared_ptr<string> contentType_ {};
      // headers
      Darabonba::Json headers_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<string> method_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> webhookId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr && this->webhooks_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertWebhooksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertWebhooksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertWebhooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAlertWebhooksResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<ListAlertWebhooksResponseBody::Webhooks> & getWebhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<ListAlertWebhooksResponseBody::Webhooks>) };
    inline vector<ListAlertWebhooksResponseBody::Webhooks> getWebhooks() { DARABONBA_PTR_GET(webhooks_, vector<ListAlertWebhooksResponseBody::Webhooks>) };
    inline ListAlertWebhooksResponseBody& setWebhooks(const vector<ListAlertWebhooksResponseBody::Webhooks> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline ListAlertWebhooksResponseBody& setWebhooks(vector<ListAlertWebhooksResponseBody::Webhooks> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
    // webhooks
    shared_ptr<vector<ListAlertWebhooksResponseBody::Webhooks>> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
