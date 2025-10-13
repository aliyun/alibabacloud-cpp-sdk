// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSWEBHOOKPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSWEBHOOKPARAM_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsWebhookParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsWebhookParam& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsWebhookParam& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListAlertActionsResponseBodyAlertActionsWebhookParam() = default ;
    ListAlertActionsResponseBodyAlertActionsWebhookParam(const ListAlertActionsResponseBodyAlertActionsWebhookParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsWebhookParam(ListAlertActionsResponseBodyAlertActionsWebhookParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsWebhookParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsWebhookParam() = default ;
    ListAlertActionsResponseBodyAlertActionsWebhookParam& operator=(const ListAlertActionsResponseBodyAlertActionsWebhookParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsWebhookParam& operator=(ListAlertActionsResponseBodyAlertActionsWebhookParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->headers_ == nullptr && return this->method_ == nullptr && return this->url_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListAlertActionsResponseBodyAlertActionsWebhookParam& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListAlertActionsResponseBodyAlertActionsWebhookParam& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListAlertActionsResponseBodyAlertActionsWebhookParam& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ListAlertActionsResponseBodyAlertActionsWebhookParam& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListAlertActionsResponseBodyAlertActionsWebhookParam& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
