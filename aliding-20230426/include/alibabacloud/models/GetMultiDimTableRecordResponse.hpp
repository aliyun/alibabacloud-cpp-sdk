// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetMultiDimTableRecordResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableRecordResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableRecordResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableRecordResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetMultiDimTableRecordResponse() = default ;
    GetMultiDimTableRecordResponse(const GetMultiDimTableRecordResponse &) = default ;
    GetMultiDimTableRecordResponse(GetMultiDimTableRecordResponse &&) = default ;
    GetMultiDimTableRecordResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableRecordResponse() = default ;
    GetMultiDimTableRecordResponse& operator=(const GetMultiDimTableRecordResponse &) = default ;
    GetMultiDimTableRecordResponse& operator=(GetMultiDimTableRecordResponse &&) = default ;
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
    inline GetMultiDimTableRecordResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetMultiDimTableRecordResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetMultiDimTableRecordResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetMultiDimTableRecordResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetMultiDimTableRecordResponseBody) };
    inline GetMultiDimTableRecordResponseBody body() { DARABONBA_PTR_GET(body_, GetMultiDimTableRecordResponseBody) };
    inline GetMultiDimTableRecordResponse& setBody(const GetMultiDimTableRecordResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetMultiDimTableRecordResponse& setBody(GetMultiDimTableRecordResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetMultiDimTableRecordResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
