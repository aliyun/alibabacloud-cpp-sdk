// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeWebhookContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebhookContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebhookContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebhookContactsResponseBody() = default ;
    DescribeWebhookContactsResponseBody(const DescribeWebhookContactsResponseBody &) = default ;
    DescribeWebhookContactsResponseBody(DescribeWebhookContactsResponseBody &&) = default ;
    DescribeWebhookContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebhookContactsResponseBody() = default ;
    DescribeWebhookContactsResponseBody& operator=(const DescribeWebhookContactsResponseBody &) = default ;
    DescribeWebhookContactsResponseBody& operator=(DescribeWebhookContactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(WebhookContacts, webhookContacts_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(WebhookContacts, webhookContacts_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WebhookContacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebhookContacts& obj) { 
          DARABONBA_PTR_TO_JSON(Webhook, webhook_);
          DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
          DARABONBA_PTR_TO_JSON(WebhookName, webhookName_);
        };
        friend void from_json(const Darabonba::Json& j, WebhookContacts& obj) { 
          DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
          DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
          DARABONBA_PTR_FROM_JSON(WebhookName, webhookName_);
        };
        WebhookContacts() = default ;
        WebhookContacts(const WebhookContacts &) = default ;
        WebhookContacts(WebhookContacts &&) = default ;
        WebhookContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebhookContacts() = default ;
        WebhookContacts& operator=(const WebhookContacts &) = default ;
        WebhookContacts& operator=(WebhookContacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Webhook : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Webhook& obj) { 
            DARABONBA_ANY_TO_JSON(BizHeaders, bizHeaders_);
            DARABONBA_ANY_TO_JSON(BizParams, bizParams_);
            DARABONBA_PTR_TO_JSON(Body, body_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(RecoverBody, recoverBody_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Webhook& obj) { 
            DARABONBA_ANY_FROM_JSON(BizHeaders, bizHeaders_);
            DARABONBA_ANY_FROM_JSON(BizParams, bizParams_);
            DARABONBA_PTR_FROM_JSON(Body, body_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(RecoverBody, recoverBody_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Webhook() = default ;
          Webhook(const Webhook &) = default ;
          Webhook(Webhook &&) = default ;
          Webhook(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Webhook() = default ;
          Webhook& operator=(const Webhook &) = default ;
          Webhook& operator=(Webhook &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizHeaders_ == nullptr
        && this->bizParams_ == nullptr && this->body_ == nullptr && this->method_ == nullptr && this->recoverBody_ == nullptr && this->url_ == nullptr; };
          // bizHeaders Field Functions 
          bool hasBizHeaders() const { return this->bizHeaders_ != nullptr;};
          void deleteBizHeaders() { this->bizHeaders_ = nullptr;};
          inline           const Darabonba::Json & getBizHeaders() const { DARABONBA_GET(bizHeaders_) };
          Darabonba::Json & getBizHeaders() { DARABONBA_GET(bizHeaders_) };
          inline Webhook& setBizHeaders(const Darabonba::Json & bizHeaders) { DARABONBA_SET_VALUE(bizHeaders_, bizHeaders) };
          inline Webhook& setBizHeaders(Darabonba::Json && bizHeaders) { DARABONBA_SET_RVALUE(bizHeaders_, bizHeaders) };


          // bizParams Field Functions 
          bool hasBizParams() const { return this->bizParams_ != nullptr;};
          void deleteBizParams() { this->bizParams_ = nullptr;};
          inline           const Darabonba::Json & getBizParams() const { DARABONBA_GET(bizParams_) };
          Darabonba::Json & getBizParams() { DARABONBA_GET(bizParams_) };
          inline Webhook& setBizParams(const Darabonba::Json & bizParams) { DARABONBA_SET_VALUE(bizParams_, bizParams) };
          inline Webhook& setBizParams(Darabonba::Json && bizParams) { DARABONBA_SET_RVALUE(bizParams_, bizParams) };


          // body Field Functions 
          bool hasBody() const { return this->body_ != nullptr;};
          void deleteBody() { this->body_ = nullptr;};
          inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
          inline Webhook& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline Webhook& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // recoverBody Field Functions 
          bool hasRecoverBody() const { return this->recoverBody_ != nullptr;};
          void deleteRecoverBody() { this->recoverBody_ = nullptr;};
          inline string getRecoverBody() const { DARABONBA_PTR_GET_DEFAULT(recoverBody_, "") };
          inline Webhook& setRecoverBody(string recoverBody) { DARABONBA_PTR_SET_VALUE(recoverBody_, recoverBody) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Webhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The header of the HTTP request.
          Darabonba::Json bizHeaders_ {};
          // The parameters in the HTTP request.
          Darabonba::Json bizParams_ {};
          // The alert notification template.
          shared_ptr<string> body_ {};
          // The HTTP request method.
          // 
          // *   Get
          // *   Post
          shared_ptr<string> method_ {};
          // The notification template for clearing alerts.
          shared_ptr<string> recoverBody_ {};
          // The URL of the request method.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->webhook_ == nullptr
        && this->webhookId_ == nullptr && this->webhookName_ == nullptr; };
        // webhook Field Functions 
        bool hasWebhook() const { return this->webhook_ != nullptr;};
        void deleteWebhook() { this->webhook_ = nullptr;};
        inline const WebhookContacts::Webhook & getWebhook() const { DARABONBA_PTR_GET_CONST(webhook_, WebhookContacts::Webhook) };
        inline WebhookContacts::Webhook getWebhook() { DARABONBA_PTR_GET(webhook_, WebhookContacts::Webhook) };
        inline WebhookContacts& setWebhook(const WebhookContacts::Webhook & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
        inline WebhookContacts& setWebhook(WebhookContacts::Webhook && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


        // webhookId Field Functions 
        bool hasWebhookId() const { return this->webhookId_ != nullptr;};
        void deleteWebhookId() { this->webhookId_ = nullptr;};
        inline float getWebhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0.0) };
        inline WebhookContacts& setWebhookId(float webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


        // webhookName Field Functions 
        bool hasWebhookName() const { return this->webhookName_ != nullptr;};
        void deleteWebhookName() { this->webhookName_ = nullptr;};
        inline string getWebhookName() const { DARABONBA_PTR_GET_DEFAULT(webhookName_, "") };
        inline WebhookContacts& setWebhookName(string webhookName) { DARABONBA_PTR_SET_VALUE(webhookName_, webhookName) };


      protected:
        // The details of the webhook alert contact.
        shared_ptr<WebhookContacts::Webhook> webhook_ {};
        // The ID of the webhook alert contact.
        shared_ptr<float> webhookId_ {};
        // The name of the webhook alert contact.
        shared_ptr<string> webhookName_ {};
      };

      virtual bool empty() const override { return this->page_ == nullptr
        && this->size_ == nullptr && this->total_ == nullptr && this->webhookContacts_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // webhookContacts Field Functions 
      bool hasWebhookContacts() const { return this->webhookContacts_ != nullptr;};
      void deleteWebhookContacts() { this->webhookContacts_ = nullptr;};
      inline const vector<PageBean::WebhookContacts> & getWebhookContacts() const { DARABONBA_PTR_GET_CONST(webhookContacts_, vector<PageBean::WebhookContacts>) };
      inline vector<PageBean::WebhookContacts> getWebhookContacts() { DARABONBA_PTR_GET(webhookContacts_, vector<PageBean::WebhookContacts>) };
      inline PageBean& setWebhookContacts(const vector<PageBean::WebhookContacts> & webhookContacts) { DARABONBA_PTR_SET_VALUE(webhookContacts_, webhookContacts) };
      inline PageBean& setWebhookContacts(vector<PageBean::WebhookContacts> && webhookContacts) { DARABONBA_PTR_SET_RVALUE(webhookContacts_, webhookContacts) };


    protected:
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of alert contacts displayed on each page.
      shared_ptr<int64_t> size_ {};
      // The total number of alert contacts.
      shared_ptr<int64_t> total_ {};
      // The list of webhook alert contacts.
      shared_ptr<vector<PageBean::WebhookContacts>> webhookContacts_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const DescribeWebhookContactsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, DescribeWebhookContactsResponseBody::PageBean) };
    inline DescribeWebhookContactsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, DescribeWebhookContactsResponseBody::PageBean) };
    inline DescribeWebhookContactsResponseBody& setPageBean(const DescribeWebhookContactsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline DescribeWebhookContactsResponseBody& setPageBean(DescribeWebhookContactsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebhookContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned objects.
    shared_ptr<DescribeWebhookContactsResponseBody::PageBean> pageBean_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
