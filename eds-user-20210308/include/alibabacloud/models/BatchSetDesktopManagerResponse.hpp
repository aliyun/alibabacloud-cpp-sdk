// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDESKTOPMANAGERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDESKTOPMANAGERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/BatchSetDesktopManagerResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class BatchSetDesktopManagerResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDesktopManagerResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDesktopManagerResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    BatchSetDesktopManagerResponse() = default ;
    BatchSetDesktopManagerResponse(const BatchSetDesktopManagerResponse &) = default ;
    BatchSetDesktopManagerResponse(BatchSetDesktopManagerResponse &&) = default ;
    BatchSetDesktopManagerResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDesktopManagerResponse() = default ;
    BatchSetDesktopManagerResponse& operator=(const BatchSetDesktopManagerResponse &) = default ;
    BatchSetDesktopManagerResponse& operator=(BatchSetDesktopManagerResponse &&) = default ;
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
    inline BatchSetDesktopManagerResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline BatchSetDesktopManagerResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline BatchSetDesktopManagerResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BatchSetDesktopManagerResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, BatchSetDesktopManagerResponseBody) };
    inline BatchSetDesktopManagerResponseBody body() { DARABONBA_PTR_GET(body_, BatchSetDesktopManagerResponseBody) };
    inline BatchSetDesktopManagerResponse& setBody(const BatchSetDesktopManagerResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BatchSetDesktopManagerResponse& setBody(BatchSetDesktopManagerResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<BatchSetDesktopManagerResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
