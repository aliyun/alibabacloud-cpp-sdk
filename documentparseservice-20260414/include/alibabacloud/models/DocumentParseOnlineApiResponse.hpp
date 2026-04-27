// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTPARSEONLINEAPIRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTPARSEONLINEAPIRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DocumentParseOnlineApiResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocumentParseService20260414
{
namespace Models
{
  class DocumentParseOnlineApiResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentParseOnlineApiResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentParseOnlineApiResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DocumentParseOnlineApiResponse() = default ;
    DocumentParseOnlineApiResponse(const DocumentParseOnlineApiResponse &) = default ;
    DocumentParseOnlineApiResponse(DocumentParseOnlineApiResponse &&) = default ;
    DocumentParseOnlineApiResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentParseOnlineApiResponse() = default ;
    DocumentParseOnlineApiResponse& operator=(const DocumentParseOnlineApiResponse &) = default ;
    DocumentParseOnlineApiResponse& operator=(DocumentParseOnlineApiResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DocumentParseOnlineApiResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DocumentParseOnlineApiResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DocumentParseOnlineApiResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DocumentParseOnlineApiResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DocumentParseOnlineApiResponseBody) };
    inline DocumentParseOnlineApiResponseBody getBody() { DARABONBA_PTR_GET(body_, DocumentParseOnlineApiResponseBody) };
    inline DocumentParseOnlineApiResponse& setBody(const DocumentParseOnlineApiResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DocumentParseOnlineApiResponse& setBody(DocumentParseOnlineApiResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DocumentParseOnlineApiResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocumentParseService20260414
#endif
