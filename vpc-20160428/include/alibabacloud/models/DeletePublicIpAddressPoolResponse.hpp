// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPUBLICIPADDRESSPOOLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEPUBLICIPADDRESSPOOLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeletePublicIpAddressPoolResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeletePublicIpAddressPoolResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePublicIpAddressPoolResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePublicIpAddressPoolResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeletePublicIpAddressPoolResponse() = default ;
    DeletePublicIpAddressPoolResponse(const DeletePublicIpAddressPoolResponse &) = default ;
    DeletePublicIpAddressPoolResponse(DeletePublicIpAddressPoolResponse &&) = default ;
    DeletePublicIpAddressPoolResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePublicIpAddressPoolResponse() = default ;
    DeletePublicIpAddressPoolResponse& operator=(const DeletePublicIpAddressPoolResponse &) = default ;
    DeletePublicIpAddressPoolResponse& operator=(DeletePublicIpAddressPoolResponse &&) = default ;
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
    inline DeletePublicIpAddressPoolResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeletePublicIpAddressPoolResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeletePublicIpAddressPoolResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeletePublicIpAddressPoolResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeletePublicIpAddressPoolResponseBody) };
    inline DeletePublicIpAddressPoolResponseBody body() { DARABONBA_PTR_GET(body_, DeletePublicIpAddressPoolResponseBody) };
    inline DeletePublicIpAddressPoolResponse& setBody(const DeletePublicIpAddressPoolResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeletePublicIpAddressPoolResponse& setBody(DeletePublicIpAddressPoolResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeletePublicIpAddressPoolResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
