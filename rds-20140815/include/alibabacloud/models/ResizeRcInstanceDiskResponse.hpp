// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZERCINSTANCEDISKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RESIZERCINSTANCEDISKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ResizeRCInstanceDiskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ResizeRCInstanceDiskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeRCInstanceDiskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeRCInstanceDiskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ResizeRCInstanceDiskResponse() = default ;
    ResizeRCInstanceDiskResponse(const ResizeRCInstanceDiskResponse &) = default ;
    ResizeRCInstanceDiskResponse(ResizeRCInstanceDiskResponse &&) = default ;
    ResizeRCInstanceDiskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeRCInstanceDiskResponse() = default ;
    ResizeRCInstanceDiskResponse& operator=(const ResizeRCInstanceDiskResponse &) = default ;
    ResizeRCInstanceDiskResponse& operator=(ResizeRCInstanceDiskResponse &&) = default ;
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
    inline ResizeRCInstanceDiskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ResizeRCInstanceDiskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ResizeRCInstanceDiskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ResizeRCInstanceDiskResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ResizeRCInstanceDiskResponseBody) };
    inline ResizeRCInstanceDiskResponseBody body() { DARABONBA_PTR_GET(body_, ResizeRCInstanceDiskResponseBody) };
    inline ResizeRCInstanceDiskResponse& setBody(const ResizeRCInstanceDiskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ResizeRCInstanceDiskResponse& setBody(ResizeRCInstanceDiskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ResizeRCInstanceDiskResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
