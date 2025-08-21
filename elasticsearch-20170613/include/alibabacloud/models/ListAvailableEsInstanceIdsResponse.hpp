// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEESINSTANCEIDSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEESINSTANCEIDSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListAvailableEsInstanceIdsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAvailableEsInstanceIdsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableEsInstanceIdsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableEsInstanceIdsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListAvailableEsInstanceIdsResponse() = default ;
    ListAvailableEsInstanceIdsResponse(const ListAvailableEsInstanceIdsResponse &) = default ;
    ListAvailableEsInstanceIdsResponse(ListAvailableEsInstanceIdsResponse &&) = default ;
    ListAvailableEsInstanceIdsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableEsInstanceIdsResponse() = default ;
    ListAvailableEsInstanceIdsResponse& operator=(const ListAvailableEsInstanceIdsResponse &) = default ;
    ListAvailableEsInstanceIdsResponse& operator=(ListAvailableEsInstanceIdsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListAvailableEsInstanceIdsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListAvailableEsInstanceIdsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListAvailableEsInstanceIdsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListAvailableEsInstanceIdsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListAvailableEsInstanceIdsResponseBody) };
    inline ListAvailableEsInstanceIdsResponseBody body() { DARABONBA_PTR_GET(body_, ListAvailableEsInstanceIdsResponseBody) };
    inline ListAvailableEsInstanceIdsResponse& setBody(const ListAvailableEsInstanceIdsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListAvailableEsInstanceIdsResponse& setBody(ListAvailableEsInstanceIdsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListAvailableEsInstanceIdsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
