// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPREQUESTVODTESTTOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HTTPREQUESTVODTESTTOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class HttpRequestVodTestToolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRequestVodTestToolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_ANY_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRequestVodTestToolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_ANY_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    HttpRequestVodTestToolRequest() = default ;
    HttpRequestVodTestToolRequest(const HttpRequestVodTestToolRequest &) = default ;
    HttpRequestVodTestToolRequest(HttpRequestVodTestToolRequest &&) = default ;
    HttpRequestVodTestToolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRequestVodTestToolRequest() = default ;
    HttpRequestVodTestToolRequest& operator=(const HttpRequestVodTestToolRequest &) = default ;
    HttpRequestVodTestToolRequest& operator=(HttpRequestVodTestToolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->body_ != nullptr && this->header_ != nullptr && this->host_ != nullptr && this->method_ != nullptr && this->ownerId_ != nullptr
        && this->proxyIp_ != nullptr && this->scheme_ != nullptr && this->uri_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline HttpRequestVodTestToolRequest& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline HttpRequestVodTestToolRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline     const Darabonba::Json & header() const { DARABONBA_GET(header_) };
    Darabonba::Json & header() { DARABONBA_GET(header_) };
    inline HttpRequestVodTestToolRequest& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
    inline HttpRequestVodTestToolRequest& setHeader(Darabonba::Json & header) { DARABONBA_SET_RVALUE(header_, header) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline HttpRequestVodTestToolRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline HttpRequestVodTestToolRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline HttpRequestVodTestToolRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // proxyIp Field Functions 
    bool hasProxyIp() const { return this->proxyIp_ != nullptr;};
    void deleteProxyIp() { this->proxyIp_ = nullptr;};
    inline string proxyIp() const { DARABONBA_PTR_GET_DEFAULT(proxyIp_, "") };
    inline HttpRequestVodTestToolRequest& setProxyIp(string proxyIp) { DARABONBA_PTR_SET_VALUE(proxyIp_, proxyIp) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string scheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline HttpRequestVodTestToolRequest& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline HttpRequestVodTestToolRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> args_ = nullptr;
    std::shared_ptr<string> body_ = nullptr;
    Darabonba::Json header_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> host_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> proxyIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheme_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
