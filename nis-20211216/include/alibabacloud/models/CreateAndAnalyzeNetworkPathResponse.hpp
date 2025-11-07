// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDANALYZENETWORKPATHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDANALYZENETWORKPATHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateAndAnalyzeNetworkPathResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateAndAnalyzeNetworkPathResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndAnalyzeNetworkPathResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndAnalyzeNetworkPathResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAndAnalyzeNetworkPathResponse() = default ;
    CreateAndAnalyzeNetworkPathResponse(const CreateAndAnalyzeNetworkPathResponse &) = default ;
    CreateAndAnalyzeNetworkPathResponse(CreateAndAnalyzeNetworkPathResponse &&) = default ;
    CreateAndAnalyzeNetworkPathResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndAnalyzeNetworkPathResponse() = default ;
    CreateAndAnalyzeNetworkPathResponse& operator=(const CreateAndAnalyzeNetworkPathResponse &) = default ;
    CreateAndAnalyzeNetworkPathResponse& operator=(CreateAndAnalyzeNetworkPathResponse &&) = default ;
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
    inline CreateAndAnalyzeNetworkPathResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateAndAnalyzeNetworkPathResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateAndAnalyzeNetworkPathResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAndAnalyzeNetworkPathResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateAndAnalyzeNetworkPathResponseBody) };
    inline CreateAndAnalyzeNetworkPathResponseBody body() { DARABONBA_PTR_GET(body_, CreateAndAnalyzeNetworkPathResponseBody) };
    inline CreateAndAnalyzeNetworkPathResponse& setBody(const CreateAndAnalyzeNetworkPathResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAndAnalyzeNetworkPathResponse& setBody(CreateAndAnalyzeNetworkPathResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateAndAnalyzeNetworkPathResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
