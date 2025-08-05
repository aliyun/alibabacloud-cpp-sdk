// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCREATEINDEXJOBRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CANCELCREATEINDEXJOBRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CancelCreateIndexJobResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCreateIndexJobResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCreateIndexJobResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CancelCreateIndexJobResponse() = default ;
    CancelCreateIndexJobResponse(const CancelCreateIndexJobResponse &) = default ;
    CancelCreateIndexJobResponse(CancelCreateIndexJobResponse &&) = default ;
    CancelCreateIndexJobResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCreateIndexJobResponse() = default ;
    CancelCreateIndexJobResponse& operator=(const CancelCreateIndexJobResponse &) = default ;
    CancelCreateIndexJobResponse& operator=(CancelCreateIndexJobResponse &&) = default ;
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
    inline CancelCreateIndexJobResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CancelCreateIndexJobResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CancelCreateIndexJobResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CancelCreateIndexJobResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CancelCreateIndexJobResponseBody) };
    inline CancelCreateIndexJobResponseBody body() { DARABONBA_PTR_GET(body_, CancelCreateIndexJobResponseBody) };
    inline CancelCreateIndexJobResponse& setBody(const CancelCreateIndexJobResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CancelCreateIndexJobResponse& setBody(CancelCreateIndexJobResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CancelCreateIndexJobResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
