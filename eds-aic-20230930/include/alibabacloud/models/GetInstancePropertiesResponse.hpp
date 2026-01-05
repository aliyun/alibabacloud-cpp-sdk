// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEPROPERTIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEPROPERTIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetInstancePropertiesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class GetInstancePropertiesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancePropertiesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancePropertiesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetInstancePropertiesResponse() = default ;
    GetInstancePropertiesResponse(const GetInstancePropertiesResponse &) = default ;
    GetInstancePropertiesResponse(GetInstancePropertiesResponse &&) = default ;
    GetInstancePropertiesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancePropertiesResponse() = default ;
    GetInstancePropertiesResponse& operator=(const GetInstancePropertiesResponse &) = default ;
    GetInstancePropertiesResponse& operator=(GetInstancePropertiesResponse &&) = default ;
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
    inline GetInstancePropertiesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetInstancePropertiesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetInstancePropertiesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetInstancePropertiesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetInstancePropertiesResponseBody) };
    inline GetInstancePropertiesResponseBody getBody() { DARABONBA_PTR_GET(body_, GetInstancePropertiesResponseBody) };
    inline GetInstancePropertiesResponse& setBody(const GetInstancePropertiesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetInstancePropertiesResponse& setBody(GetInstancePropertiesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetInstancePropertiesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
