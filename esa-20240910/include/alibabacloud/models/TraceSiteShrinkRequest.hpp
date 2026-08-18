// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACESITESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRACESITESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class TraceSiteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TraceSiteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(Cookies, cookiesShrink_);
      DARABONBA_PTR_TO_JSON(Headers, headersShrink_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, TraceSiteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookiesShrink_);
      DARABONBA_PTR_FROM_JSON(Headers, headersShrink_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    TraceSiteShrinkRequest() = default ;
    TraceSiteShrinkRequest(const TraceSiteShrinkRequest &) = default ;
    TraceSiteShrinkRequest(TraceSiteShrinkRequest &&) = default ;
    TraceSiteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TraceSiteShrinkRequest() = default ;
    TraceSiteShrinkRequest& operator=(const TraceSiteShrinkRequest &) = default ;
    TraceSiteShrinkRequest& operator=(TraceSiteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->contextShrink_ == nullptr && this->cookiesShrink_ == nullptr && this->headersShrink_ == nullptr && this->method_ == nullptr && this->protocol_ == nullptr
        && this->url_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline TraceSiteShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string getContextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline TraceSiteShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // cookiesShrink Field Functions 
    bool hasCookiesShrink() const { return this->cookiesShrink_ != nullptr;};
    void deleteCookiesShrink() { this->cookiesShrink_ = nullptr;};
    inline string getCookiesShrink() const { DARABONBA_PTR_GET_DEFAULT(cookiesShrink_, "") };
    inline TraceSiteShrinkRequest& setCookiesShrink(string cookiesShrink) { DARABONBA_PTR_SET_VALUE(cookiesShrink_, cookiesShrink) };


    // headersShrink Field Functions 
    bool hasHeadersShrink() const { return this->headersShrink_ != nullptr;};
    void deleteHeadersShrink() { this->headersShrink_ = nullptr;};
    inline string getHeadersShrink() const { DARABONBA_PTR_GET_DEFAULT(headersShrink_, "") };
    inline TraceSiteShrinkRequest& setHeadersShrink(string headersShrink) { DARABONBA_PTR_SET_VALUE(headersShrink_, headersShrink) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline TraceSiteShrinkRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline TraceSiteShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline TraceSiteShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The HTTP request body.
    shared_ptr<string> bodyShrink_ {};
    // The environment context. This parameter is optional.
    shared_ptr<string> contextShrink_ {};
    // The cookie parameters.
    shared_ptr<string> cookiesShrink_ {};
    // The request headers.
    shared_ptr<string> headersShrink_ {};
    // The HTTP method.
    shared_ptr<string> method_ {};
    // The HTTP protocol.
    shared_ptr<string> protocol_ {};
    // The URL of the request.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
