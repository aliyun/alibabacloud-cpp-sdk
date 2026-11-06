// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDBCLUSTERCTABLERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDBCLUSTERCTABLERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EnableDBClusterCTableResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class EnableDBClusterCTableResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDBClusterCTableResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDBClusterCTableResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EnableDBClusterCTableResponse() = default ;
    EnableDBClusterCTableResponse(const EnableDBClusterCTableResponse &) = default ;
    EnableDBClusterCTableResponse(EnableDBClusterCTableResponse &&) = default ;
    EnableDBClusterCTableResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDBClusterCTableResponse() = default ;
    EnableDBClusterCTableResponse& operator=(const EnableDBClusterCTableResponse &) = default ;
    EnableDBClusterCTableResponse& operator=(EnableDBClusterCTableResponse &&) = default ;
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
    inline EnableDBClusterCTableResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline EnableDBClusterCTableResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline EnableDBClusterCTableResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EnableDBClusterCTableResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, EnableDBClusterCTableResponseBody) };
    inline EnableDBClusterCTableResponseBody getBody() { DARABONBA_PTR_GET(body_, EnableDBClusterCTableResponseBody) };
    inline EnableDBClusterCTableResponse& setBody(const EnableDBClusterCTableResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EnableDBClusterCTableResponse& setBody(EnableDBClusterCTableResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<EnableDBClusterCTableResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
