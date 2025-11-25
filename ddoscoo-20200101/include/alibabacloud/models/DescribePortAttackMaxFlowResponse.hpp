// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTATTACKMAXFLOWRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTATTACKMAXFLOWRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribePortAttackMaxFlowResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortAttackMaxFlowResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortAttackMaxFlowResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortAttackMaxFlowResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribePortAttackMaxFlowResponse() = default ;
    DescribePortAttackMaxFlowResponse(const DescribePortAttackMaxFlowResponse &) = default ;
    DescribePortAttackMaxFlowResponse(DescribePortAttackMaxFlowResponse &&) = default ;
    DescribePortAttackMaxFlowResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortAttackMaxFlowResponse() = default ;
    DescribePortAttackMaxFlowResponse& operator=(const DescribePortAttackMaxFlowResponse &) = default ;
    DescribePortAttackMaxFlowResponse& operator=(DescribePortAttackMaxFlowResponse &&) = default ;
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
    inline DescribePortAttackMaxFlowResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribePortAttackMaxFlowResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribePortAttackMaxFlowResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribePortAttackMaxFlowResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribePortAttackMaxFlowResponseBody) };
    inline DescribePortAttackMaxFlowResponseBody body() { DARABONBA_PTR_GET(body_, DescribePortAttackMaxFlowResponseBody) };
    inline DescribePortAttackMaxFlowResponse& setBody(const DescribePortAttackMaxFlowResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribePortAttackMaxFlowResponse& setBody(DescribePortAttackMaxFlowResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribePortAttackMaxFlowResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
