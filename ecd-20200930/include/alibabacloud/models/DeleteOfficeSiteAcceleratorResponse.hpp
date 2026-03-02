// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOFFICESITEACCELERATORRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEOFFICESITEACCELERATORRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteOfficeSiteAcceleratorResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteOfficeSiteAcceleratorResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOfficeSiteAcceleratorResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOfficeSiteAcceleratorResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteOfficeSiteAcceleratorResponse() = default ;
    DeleteOfficeSiteAcceleratorResponse(const DeleteOfficeSiteAcceleratorResponse &) = default ;
    DeleteOfficeSiteAcceleratorResponse(DeleteOfficeSiteAcceleratorResponse &&) = default ;
    DeleteOfficeSiteAcceleratorResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOfficeSiteAcceleratorResponse() = default ;
    DeleteOfficeSiteAcceleratorResponse& operator=(const DeleteOfficeSiteAcceleratorResponse &) = default ;
    DeleteOfficeSiteAcceleratorResponse& operator=(DeleteOfficeSiteAcceleratorResponse &&) = default ;
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
    inline DeleteOfficeSiteAcceleratorResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteOfficeSiteAcceleratorResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteOfficeSiteAcceleratorResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteOfficeSiteAcceleratorResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteOfficeSiteAcceleratorResponseBody) };
    inline DeleteOfficeSiteAcceleratorResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteOfficeSiteAcceleratorResponseBody) };
    inline DeleteOfficeSiteAcceleratorResponse& setBody(const DeleteOfficeSiteAcceleratorResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteOfficeSiteAcceleratorResponse& setBody(DeleteOfficeSiteAcceleratorResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteOfficeSiteAcceleratorResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
