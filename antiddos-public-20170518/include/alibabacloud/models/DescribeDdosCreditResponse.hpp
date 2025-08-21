// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeDdosCreditResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCreditResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCreditResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCreditResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeDdosCreditResponse() = default ;
    DescribeDdosCreditResponse(const DescribeDdosCreditResponse &) = default ;
    DescribeDdosCreditResponse(DescribeDdosCreditResponse &&) = default ;
    DescribeDdosCreditResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCreditResponse() = default ;
    DescribeDdosCreditResponse& operator=(const DescribeDdosCreditResponse &) = default ;
    DescribeDdosCreditResponse& operator=(DescribeDdosCreditResponse &&) = default ;
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
    inline DescribeDdosCreditResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeDdosCreditResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeDdosCreditResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeDdosCreditResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeDdosCreditResponseBody) };
    inline DescribeDdosCreditResponseBody body() { DARABONBA_PTR_GET(body_, DescribeDdosCreditResponseBody) };
    inline DescribeDdosCreditResponse& setBody(const DescribeDdosCreditResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeDdosCreditResponse& setBody(DescribeDdosCreditResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeDdosCreditResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
