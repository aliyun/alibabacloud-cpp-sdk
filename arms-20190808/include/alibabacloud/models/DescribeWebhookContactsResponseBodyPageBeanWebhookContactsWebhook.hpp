// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODYPAGEBEANWEBHOOKCONTACTSWEBHOOK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODYPAGEBEANWEBHOOKCONTACTSWEBHOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& obj) { 
      DARABONBA_ANY_TO_JSON(BizHeaders, bizHeaders_);
      DARABONBA_ANY_TO_JSON(BizParams, bizParams_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& obj) { 
      DARABONBA_ANY_FROM_JSON(BizHeaders, bizHeaders_);
      DARABONBA_ANY_FROM_JSON(BizParams, bizParams_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook() = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook(const DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook &) = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook(DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook &&) = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook() = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& operator=(const DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook &) = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& operator=(DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizHeaders_ != nullptr
        && this->bizParams_ != nullptr && this->body_ != nullptr && this->method_ != nullptr && this->recoverBody_ != nullptr && this->url_ != nullptr; };
    // bizHeaders Field Functions 
    bool hasBizHeaders() const { return this->bizHeaders_ != nullptr;};
    void deleteBizHeaders() { this->bizHeaders_ = nullptr;};
    inline     const Darabonba::Json & bizHeaders() const { DARABONBA_GET(bizHeaders_) };
    Darabonba::Json & bizHeaders() { DARABONBA_GET(bizHeaders_) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setBizHeaders(const Darabonba::Json & bizHeaders) { DARABONBA_SET_VALUE(bizHeaders_, bizHeaders) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setBizHeaders(Darabonba::Json & bizHeaders) { DARABONBA_SET_RVALUE(bizHeaders_, bizHeaders) };


    // bizParams Field Functions 
    bool hasBizParams() const { return this->bizParams_ != nullptr;};
    void deleteBizParams() { this->bizParams_ = nullptr;};
    inline     const Darabonba::Json & bizParams() const { DARABONBA_GET(bizParams_) };
    Darabonba::Json & bizParams() { DARABONBA_GET(bizParams_) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setBizParams(const Darabonba::Json & bizParams) { DARABONBA_SET_VALUE(bizParams_, bizParams) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setBizParams(Darabonba::Json & bizParams) { DARABONBA_SET_RVALUE(bizParams_, bizParams) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // recoverBody Field Functions 
    bool hasRecoverBody() const { return this->recoverBody_ != nullptr;};
    void deleteRecoverBody() { this->recoverBody_ = nullptr;};
    inline string recoverBody() const { DARABONBA_PTR_GET_DEFAULT(recoverBody_, "") };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setRecoverBody(string recoverBody) { DARABONBA_PTR_SET_VALUE(recoverBody_, recoverBody) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The header of the HTTP request.
    Darabonba::Json bizHeaders_ = nullptr;
    // The parameters in the HTTP request.
    Darabonba::Json bizParams_ = nullptr;
    // The alert notification template.
    std::shared_ptr<string> body_ = nullptr;
    // The HTTP request method.
    // 
    // *   Get
    // *   Post
    std::shared_ptr<string> method_ = nullptr;
    // The notification template for clearing alerts.
    std::shared_ptr<string> recoverBody_ = nullptr;
    // The URL of the request method.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
