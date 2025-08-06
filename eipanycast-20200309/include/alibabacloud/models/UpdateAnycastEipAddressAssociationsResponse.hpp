// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANYCASTEIPADDRESSASSOCIATIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class UpdateAnycastEipAddressAssociationsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAnycastEipAddressAssociationsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAnycastEipAddressAssociationsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateAnycastEipAddressAssociationsResponse() = default ;
    UpdateAnycastEipAddressAssociationsResponse(const UpdateAnycastEipAddressAssociationsResponse &) = default ;
    UpdateAnycastEipAddressAssociationsResponse(UpdateAnycastEipAddressAssociationsResponse &&) = default ;
    UpdateAnycastEipAddressAssociationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAnycastEipAddressAssociationsResponse() = default ;
    UpdateAnycastEipAddressAssociationsResponse& operator=(const UpdateAnycastEipAddressAssociationsResponse &) = default ;
    UpdateAnycastEipAddressAssociationsResponse& operator=(UpdateAnycastEipAddressAssociationsResponse &&) = default ;
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
    inline UpdateAnycastEipAddressAssociationsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateAnycastEipAddressAssociationsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateAnycastEipAddressAssociationsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAnycastEipAddressAssociationsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateAnycastEipAddressAssociationsResponseBody) };
    inline UpdateAnycastEipAddressAssociationsResponseBody body() { DARABONBA_PTR_GET(body_, UpdateAnycastEipAddressAssociationsResponseBody) };
    inline UpdateAnycastEipAddressAssociationsResponse& setBody(const UpdateAnycastEipAddressAssociationsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAnycastEipAddressAssociationsResponse& setBody(UpdateAnycastEipAddressAssociationsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateAnycastEipAddressAssociationsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
