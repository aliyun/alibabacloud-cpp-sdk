// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDRESULTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDRESULTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeMVRecommendResultsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeMVRecommendResultsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMVRecommendResultsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMVRecommendResultsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeMVRecommendResultsResponse() = default ;
    DescribeMVRecommendResultsResponse(const DescribeMVRecommendResultsResponse &) = default ;
    DescribeMVRecommendResultsResponse(DescribeMVRecommendResultsResponse &&) = default ;
    DescribeMVRecommendResultsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMVRecommendResultsResponse() = default ;
    DescribeMVRecommendResultsResponse& operator=(const DescribeMVRecommendResultsResponse &) = default ;
    DescribeMVRecommendResultsResponse& operator=(DescribeMVRecommendResultsResponse &&) = default ;
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
    inline DescribeMVRecommendResultsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeMVRecommendResultsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeMVRecommendResultsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeMVRecommendResultsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeMVRecommendResultsResponseBody) };
    inline DescribeMVRecommendResultsResponseBody body() { DARABONBA_PTR_GET(body_, DescribeMVRecommendResultsResponseBody) };
    inline DescribeMVRecommendResultsResponse& setBody(const DescribeMVRecommendResultsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeMVRecommendResultsResponse& setBody(DescribeMVRecommendResultsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeMVRecommendResultsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
