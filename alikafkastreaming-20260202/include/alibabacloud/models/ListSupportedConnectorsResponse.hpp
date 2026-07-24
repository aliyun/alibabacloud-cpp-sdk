// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTEDCONNECTORSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTEDCONNECTORSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListSupportedConnectorsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class ListSupportedConnectorsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportedConnectorsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportedConnectorsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListSupportedConnectorsResponse() = default ;
    ListSupportedConnectorsResponse(const ListSupportedConnectorsResponse &) = default ;
    ListSupportedConnectorsResponse(ListSupportedConnectorsResponse &&) = default ;
    ListSupportedConnectorsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportedConnectorsResponse() = default ;
    ListSupportedConnectorsResponse& operator=(const ListSupportedConnectorsResponse &) = default ;
    ListSupportedConnectorsResponse& operator=(ListSupportedConnectorsResponse &&) = default ;
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
    inline ListSupportedConnectorsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListSupportedConnectorsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListSupportedConnectorsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListSupportedConnectorsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListSupportedConnectorsResponseBody) };
    inline ListSupportedConnectorsResponseBody getBody() { DARABONBA_PTR_GET(body_, ListSupportedConnectorsResponseBody) };
    inline ListSupportedConnectorsResponse& setBody(const ListSupportedConnectorsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListSupportedConnectorsResponse& setBody(ListSupportedConnectorsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListSupportedConnectorsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
