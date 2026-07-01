// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDBYIDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetOperationRecordByIdResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordByIdResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordByIdResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordByIdResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetOperationRecordByIdResponse() = default ;
    GetOperationRecordByIdResponse(const GetOperationRecordByIdResponse &) = default ;
    GetOperationRecordByIdResponse(GetOperationRecordByIdResponse &&) = default ;
    GetOperationRecordByIdResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordByIdResponse() = default ;
    GetOperationRecordByIdResponse& operator=(const GetOperationRecordByIdResponse &) = default ;
    GetOperationRecordByIdResponse& operator=(GetOperationRecordByIdResponse &&) = default ;
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
    inline GetOperationRecordByIdResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetOperationRecordByIdResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetOperationRecordByIdResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetOperationRecordByIdResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetOperationRecordByIdResponseBody) };
    inline GetOperationRecordByIdResponseBody getBody() { DARABONBA_PTR_GET(body_, GetOperationRecordByIdResponseBody) };
    inline GetOperationRecordByIdResponse& setBody(const GetOperationRecordByIdResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetOperationRecordByIdResponse& setBody(GetOperationRecordByIdResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetOperationRecordByIdResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
