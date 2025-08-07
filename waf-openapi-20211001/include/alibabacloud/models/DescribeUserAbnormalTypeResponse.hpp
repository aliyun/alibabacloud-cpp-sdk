// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTYPERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTypeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTypeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTypeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeUserAbnormalTypeResponse() = default ;
    DescribeUserAbnormalTypeResponse(const DescribeUserAbnormalTypeResponse &) = default ;
    DescribeUserAbnormalTypeResponse(DescribeUserAbnormalTypeResponse &&) = default ;
    DescribeUserAbnormalTypeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTypeResponse() = default ;
    DescribeUserAbnormalTypeResponse& operator=(const DescribeUserAbnormalTypeResponse &) = default ;
    DescribeUserAbnormalTypeResponse& operator=(DescribeUserAbnormalTypeResponse &&) = default ;
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
    inline DescribeUserAbnormalTypeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeUserAbnormalTypeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeUserAbnormalTypeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeUserAbnormalTypeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeUserAbnormalTypeResponseBody) };
    inline DescribeUserAbnormalTypeResponseBody body() { DARABONBA_PTR_GET(body_, DescribeUserAbnormalTypeResponseBody) };
    inline DescribeUserAbnormalTypeResponse& setBody(const DescribeUserAbnormalTypeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeUserAbnormalTypeResponse& setBody(DescribeUserAbnormalTypeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeUserAbnormalTypeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
