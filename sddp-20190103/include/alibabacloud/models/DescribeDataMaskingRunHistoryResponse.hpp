// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAMASKINGRUNHISTORYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeDataMaskingRunHistoryResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataMaskingRunHistoryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataMaskingRunHistoryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataMaskingRunHistoryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeDataMaskingRunHistoryResponse() = default ;
    DescribeDataMaskingRunHistoryResponse(const DescribeDataMaskingRunHistoryResponse &) = default ;
    DescribeDataMaskingRunHistoryResponse(DescribeDataMaskingRunHistoryResponse &&) = default ;
    DescribeDataMaskingRunHistoryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataMaskingRunHistoryResponse() = default ;
    DescribeDataMaskingRunHistoryResponse& operator=(const DescribeDataMaskingRunHistoryResponse &) = default ;
    DescribeDataMaskingRunHistoryResponse& operator=(DescribeDataMaskingRunHistoryResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeDataMaskingRunHistoryResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeDataMaskingRunHistoryResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeDataMaskingRunHistoryResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeDataMaskingRunHistoryResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeDataMaskingRunHistoryResponseBody) };
    inline DescribeDataMaskingRunHistoryResponseBody body() { DARABONBA_PTR_GET(body_, DescribeDataMaskingRunHistoryResponseBody) };
    inline DescribeDataMaskingRunHistoryResponse& setBody(const DescribeDataMaskingRunHistoryResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeDataMaskingRunHistoryResponse& setBody(DescribeDataMaskingRunHistoryResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeDataMaskingRunHistoryResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
