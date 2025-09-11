// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLASTACCELERATIONENGINEJOBRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYLASTACCELERATIONENGINEJOBRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryLastAccelerationEngineJobResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryLastAccelerationEngineJobResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLastAccelerationEngineJobResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLastAccelerationEngineJobResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryLastAccelerationEngineJobResponse() = default ;
    QueryLastAccelerationEngineJobResponse(const QueryLastAccelerationEngineJobResponse &) = default ;
    QueryLastAccelerationEngineJobResponse(QueryLastAccelerationEngineJobResponse &&) = default ;
    QueryLastAccelerationEngineJobResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLastAccelerationEngineJobResponse() = default ;
    QueryLastAccelerationEngineJobResponse& operator=(const QueryLastAccelerationEngineJobResponse &) = default ;
    QueryLastAccelerationEngineJobResponse& operator=(QueryLastAccelerationEngineJobResponse &&) = default ;
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
    inline QueryLastAccelerationEngineJobResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryLastAccelerationEngineJobResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryLastAccelerationEngineJobResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryLastAccelerationEngineJobResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, QueryLastAccelerationEngineJobResponseBody) };
    inline QueryLastAccelerationEngineJobResponseBody body() { DARABONBA_PTR_GET(body_, QueryLastAccelerationEngineJobResponseBody) };
    inline QueryLastAccelerationEngineJobResponse& setBody(const QueryLastAccelerationEngineJobResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryLastAccelerationEngineJobResponse& setBody(QueryLastAccelerationEngineJobResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<QueryLastAccelerationEngineJobResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
