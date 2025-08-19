// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLEQUERYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_VEHICLEQUERYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/VehicleQueryResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VehicleQueryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VehicleQueryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, VehicleQueryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    VehicleQueryResponse() = default ;
    VehicleQueryResponse(const VehicleQueryResponse &) = default ;
    VehicleQueryResponse(VehicleQueryResponse &&) = default ;
    VehicleQueryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VehicleQueryResponse() = default ;
    VehicleQueryResponse& operator=(const VehicleQueryResponse &) = default ;
    VehicleQueryResponse& operator=(VehicleQueryResponse &&) = default ;
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
    inline VehicleQueryResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline VehicleQueryResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline VehicleQueryResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const VehicleQueryResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, VehicleQueryResponseBody) };
    inline VehicleQueryResponseBody body() { DARABONBA_PTR_GET(body_, VehicleQueryResponseBody) };
    inline VehicleQueryResponse& setBody(const VehicleQueryResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline VehicleQueryResponse& setBody(VehicleQueryResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<VehicleQueryResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
