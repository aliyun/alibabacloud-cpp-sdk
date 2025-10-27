// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeAttackAnalysisDataResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAttackAnalysisDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAnalysisDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAnalysisDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeAttackAnalysisDataResponse() = default ;
    DescribeAttackAnalysisDataResponse(const DescribeAttackAnalysisDataResponse &) = default ;
    DescribeAttackAnalysisDataResponse(DescribeAttackAnalysisDataResponse &&) = default ;
    DescribeAttackAnalysisDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAnalysisDataResponse() = default ;
    DescribeAttackAnalysisDataResponse& operator=(const DescribeAttackAnalysisDataResponse &) = default ;
    DescribeAttackAnalysisDataResponse& operator=(DescribeAttackAnalysisDataResponse &&) = default ;
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
    inline DescribeAttackAnalysisDataResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeAttackAnalysisDataResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeAttackAnalysisDataResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeAttackAnalysisDataResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeAttackAnalysisDataResponseBody) };
    inline DescribeAttackAnalysisDataResponseBody body() { DARABONBA_PTR_GET(body_, DescribeAttackAnalysisDataResponseBody) };
    inline DescribeAttackAnalysisDataResponse& setBody(const DescribeAttackAnalysisDataResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeAttackAnalysisDataResponse& setBody(DescribeAttackAnalysisDataResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeAttackAnalysisDataResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
