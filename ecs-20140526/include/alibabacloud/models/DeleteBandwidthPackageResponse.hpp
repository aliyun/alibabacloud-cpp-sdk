// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBANDWIDTHPACKAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEBANDWIDTHPACKAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteBandwidthPackageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBandwidthPackageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBandwidthPackageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteBandwidthPackageResponse() = default ;
    DeleteBandwidthPackageResponse(const DeleteBandwidthPackageResponse &) = default ;
    DeleteBandwidthPackageResponse(DeleteBandwidthPackageResponse &&) = default ;
    DeleteBandwidthPackageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBandwidthPackageResponse() = default ;
    DeleteBandwidthPackageResponse& operator=(const DeleteBandwidthPackageResponse &) = default ;
    DeleteBandwidthPackageResponse& operator=(DeleteBandwidthPackageResponse &&) = default ;
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
    inline DeleteBandwidthPackageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteBandwidthPackageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteBandwidthPackageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteBandwidthPackageResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteBandwidthPackageResponseBody) };
    inline DeleteBandwidthPackageResponseBody body() { DARABONBA_PTR_GET(body_, DeleteBandwidthPackageResponseBody) };
    inline DeleteBandwidthPackageResponse& setBody(const DeleteBandwidthPackageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteBandwidthPackageResponse& setBody(DeleteBandwidthPackageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteBandwidthPackageResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
