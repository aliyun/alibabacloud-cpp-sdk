// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeployDISyncTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeployDISyncTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployDISyncTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeployDISyncTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeployDISyncTaskResponse() = default ;
    DeployDISyncTaskResponse(const DeployDISyncTaskResponse &) = default ;
    DeployDISyncTaskResponse(DeployDISyncTaskResponse &&) = default ;
    DeployDISyncTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployDISyncTaskResponse() = default ;
    DeployDISyncTaskResponse& operator=(const DeployDISyncTaskResponse &) = default ;
    DeployDISyncTaskResponse& operator=(DeployDISyncTaskResponse &&) = default ;
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
    inline DeployDISyncTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeployDISyncTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeployDISyncTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeployDISyncTaskResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeployDISyncTaskResponseBody) };
    inline DeployDISyncTaskResponseBody body() { DARABONBA_PTR_GET(body_, DeployDISyncTaskResponseBody) };
    inline DeployDISyncTaskResponse& setBody(const DeployDISyncTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeployDISyncTaskResponse& setBody(DeployDISyncTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeployDISyncTaskResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
