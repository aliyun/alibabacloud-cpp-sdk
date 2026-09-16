// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEUMODELRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEEUMODELRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetDigitalEmployeeUmodelResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class GetDigitalEmployeeUmodelResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeUmodelResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeUmodelResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDigitalEmployeeUmodelResponse() = default ;
    GetDigitalEmployeeUmodelResponse(const GetDigitalEmployeeUmodelResponse &) = default ;
    GetDigitalEmployeeUmodelResponse(GetDigitalEmployeeUmodelResponse &&) = default ;
    GetDigitalEmployeeUmodelResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeUmodelResponse() = default ;
    GetDigitalEmployeeUmodelResponse& operator=(const GetDigitalEmployeeUmodelResponse &) = default ;
    GetDigitalEmployeeUmodelResponse& operator=(GetDigitalEmployeeUmodelResponse &&) = default ;
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
    inline GetDigitalEmployeeUmodelResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDigitalEmployeeUmodelResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDigitalEmployeeUmodelResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDigitalEmployeeUmodelResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetDigitalEmployeeUmodelResponseBody) };
    inline GetDigitalEmployeeUmodelResponseBody getBody() { DARABONBA_PTR_GET(body_, GetDigitalEmployeeUmodelResponseBody) };
    inline GetDigitalEmployeeUmodelResponse& setBody(const GetDigitalEmployeeUmodelResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDigitalEmployeeUmodelResponse& setBody(GetDigitalEmployeeUmodelResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetDigitalEmployeeUmodelResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
