// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETVBRFLOWTOPNRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetVbrFlowTopNResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetVbrFlowTopNResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVbrFlowTopNResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetVbrFlowTopNResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetVbrFlowTopNResponse() = default ;
    GetVbrFlowTopNResponse(const GetVbrFlowTopNResponse &) = default ;
    GetVbrFlowTopNResponse(GetVbrFlowTopNResponse &&) = default ;
    GetVbrFlowTopNResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVbrFlowTopNResponse() = default ;
    GetVbrFlowTopNResponse& operator=(const GetVbrFlowTopNResponse &) = default ;
    GetVbrFlowTopNResponse& operator=(GetVbrFlowTopNResponse &&) = default ;
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
    inline GetVbrFlowTopNResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetVbrFlowTopNResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetVbrFlowTopNResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetVbrFlowTopNResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetVbrFlowTopNResponseBody) };
    inline GetVbrFlowTopNResponseBody getBody() { DARABONBA_PTR_GET(body_, GetVbrFlowTopNResponseBody) };
    inline GetVbrFlowTopNResponse& setBody(const GetVbrFlowTopNResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetVbrFlowTopNResponse& setBody(GetVbrFlowTopNResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetVbrFlowTopNResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
