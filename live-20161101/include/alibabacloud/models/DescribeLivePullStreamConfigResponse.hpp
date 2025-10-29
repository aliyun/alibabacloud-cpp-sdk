// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeLivePullStreamConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullStreamConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullStreamConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullStreamConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeLivePullStreamConfigResponse() = default ;
    DescribeLivePullStreamConfigResponse(const DescribeLivePullStreamConfigResponse &) = default ;
    DescribeLivePullStreamConfigResponse(DescribeLivePullStreamConfigResponse &&) = default ;
    DescribeLivePullStreamConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullStreamConfigResponse() = default ;
    DescribeLivePullStreamConfigResponse& operator=(const DescribeLivePullStreamConfigResponse &) = default ;
    DescribeLivePullStreamConfigResponse& operator=(DescribeLivePullStreamConfigResponse &&) = default ;
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
    inline DescribeLivePullStreamConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeLivePullStreamConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeLivePullStreamConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeLivePullStreamConfigResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeLivePullStreamConfigResponseBody) };
    inline DescribeLivePullStreamConfigResponseBody body() { DARABONBA_PTR_GET(body_, DescribeLivePullStreamConfigResponseBody) };
    inline DescribeLivePullStreamConfigResponse& setBody(const DescribeLivePullStreamConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeLivePullStreamConfigResponse& setBody(DescribeLivePullStreamConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeLivePullStreamConfigResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
