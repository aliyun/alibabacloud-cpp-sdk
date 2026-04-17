// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCREATELINDORMV2INSTANCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CHECKCREATELINDORMV2INSTANCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CheckCreateLindormV2InstanceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CheckCreateLindormV2InstanceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCreateLindormV2InstanceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCreateLindormV2InstanceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CheckCreateLindormV2InstanceResponse() = default ;
    CheckCreateLindormV2InstanceResponse(const CheckCreateLindormV2InstanceResponse &) = default ;
    CheckCreateLindormV2InstanceResponse(CheckCreateLindormV2InstanceResponse &&) = default ;
    CheckCreateLindormV2InstanceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCreateLindormV2InstanceResponse() = default ;
    CheckCreateLindormV2InstanceResponse& operator=(const CheckCreateLindormV2InstanceResponse &) = default ;
    CheckCreateLindormV2InstanceResponse& operator=(CheckCreateLindormV2InstanceResponse &&) = default ;
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
    inline CheckCreateLindormV2InstanceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CheckCreateLindormV2InstanceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CheckCreateLindormV2InstanceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CheckCreateLindormV2InstanceResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CheckCreateLindormV2InstanceResponseBody) };
    inline CheckCreateLindormV2InstanceResponseBody getBody() { DARABONBA_PTR_GET(body_, CheckCreateLindormV2InstanceResponseBody) };
    inline CheckCreateLindormV2InstanceResponse& setBody(const CheckCreateLindormV2InstanceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CheckCreateLindormV2InstanceResponse& setBody(CheckCreateLindormV2InstanceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CheckCreateLindormV2InstanceResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
