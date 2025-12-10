// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTHANDSHAKERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTHANDSHAKERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AcceptHandshakeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class AcceptHandshakeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptHandshakeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptHandshakeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AcceptHandshakeResponse() = default ;
    AcceptHandshakeResponse(const AcceptHandshakeResponse &) = default ;
    AcceptHandshakeResponse(AcceptHandshakeResponse &&) = default ;
    AcceptHandshakeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptHandshakeResponse() = default ;
    AcceptHandshakeResponse& operator=(const AcceptHandshakeResponse &) = default ;
    AcceptHandshakeResponse& operator=(AcceptHandshakeResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline AcceptHandshakeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AcceptHandshakeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AcceptHandshakeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AcceptHandshakeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AcceptHandshakeResponseBody) };
    inline AcceptHandshakeResponseBody body() { DARABONBA_PTR_GET(body_, AcceptHandshakeResponseBody) };
    inline AcceptHandshakeResponse& setBody(const AcceptHandshakeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AcceptHandshakeResponse& setBody(AcceptHandshakeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AcceptHandshakeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
