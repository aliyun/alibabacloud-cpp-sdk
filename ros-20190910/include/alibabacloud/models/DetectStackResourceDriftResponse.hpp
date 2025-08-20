// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTSTACKRESOURCEDRIFTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DETECTSTACKRESOURCEDRIFTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DetectStackResourceDriftResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class DetectStackResourceDriftResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectStackResourceDriftResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DetectStackResourceDriftResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DetectStackResourceDriftResponse() = default ;
    DetectStackResourceDriftResponse(const DetectStackResourceDriftResponse &) = default ;
    DetectStackResourceDriftResponse(DetectStackResourceDriftResponse &&) = default ;
    DetectStackResourceDriftResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectStackResourceDriftResponse() = default ;
    DetectStackResourceDriftResponse& operator=(const DetectStackResourceDriftResponse &) = default ;
    DetectStackResourceDriftResponse& operator=(DetectStackResourceDriftResponse &&) = default ;
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
    inline DetectStackResourceDriftResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DetectStackResourceDriftResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DetectStackResourceDriftResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DetectStackResourceDriftResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DetectStackResourceDriftResponseBody) };
    inline DetectStackResourceDriftResponseBody body() { DARABONBA_PTR_GET(body_, DetectStackResourceDriftResponseBody) };
    inline DetectStackResourceDriftResponse& setBody(const DetectStackResourceDriftResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DetectStackResourceDriftResponse& setBody(DetectStackResourceDriftResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DetectStackResourceDriftResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
