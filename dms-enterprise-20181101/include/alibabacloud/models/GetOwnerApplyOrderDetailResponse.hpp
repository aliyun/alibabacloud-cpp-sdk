// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetOwnerApplyOrderDetailResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOwnerApplyOrderDetailResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnerApplyOrderDetailResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnerApplyOrderDetailResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetOwnerApplyOrderDetailResponse() = default ;
    GetOwnerApplyOrderDetailResponse(const GetOwnerApplyOrderDetailResponse &) = default ;
    GetOwnerApplyOrderDetailResponse(GetOwnerApplyOrderDetailResponse &&) = default ;
    GetOwnerApplyOrderDetailResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnerApplyOrderDetailResponse() = default ;
    GetOwnerApplyOrderDetailResponse& operator=(const GetOwnerApplyOrderDetailResponse &) = default ;
    GetOwnerApplyOrderDetailResponse& operator=(GetOwnerApplyOrderDetailResponse &&) = default ;
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
    inline GetOwnerApplyOrderDetailResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetOwnerApplyOrderDetailResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetOwnerApplyOrderDetailResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetOwnerApplyOrderDetailResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetOwnerApplyOrderDetailResponseBody) };
    inline GetOwnerApplyOrderDetailResponseBody getBody() { DARABONBA_PTR_GET(body_, GetOwnerApplyOrderDetailResponseBody) };
    inline GetOwnerApplyOrderDetailResponse& setBody(const GetOwnerApplyOrderDetailResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetOwnerApplyOrderDetailResponse& setBody(GetOwnerApplyOrderDetailResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetOwnerApplyOrderDetailResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
