// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYTREERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYTREERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListRepositoryTreeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryTreeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryTreeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryTreeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListRepositoryTreeResponse() = default ;
    ListRepositoryTreeResponse(const ListRepositoryTreeResponse &) = default ;
    ListRepositoryTreeResponse(ListRepositoryTreeResponse &&) = default ;
    ListRepositoryTreeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryTreeResponse() = default ;
    ListRepositoryTreeResponse& operator=(const ListRepositoryTreeResponse &) = default ;
    ListRepositoryTreeResponse& operator=(ListRepositoryTreeResponse &&) = default ;
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
    inline ListRepositoryTreeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListRepositoryTreeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListRepositoryTreeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListRepositoryTreeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListRepositoryTreeResponseBody) };
    inline ListRepositoryTreeResponseBody body() { DARABONBA_PTR_GET(body_, ListRepositoryTreeResponseBody) };
    inline ListRepositoryTreeResponse& setBody(const ListRepositoryTreeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListRepositoryTreeResponse& setBody(ListRepositoryTreeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListRepositoryTreeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
