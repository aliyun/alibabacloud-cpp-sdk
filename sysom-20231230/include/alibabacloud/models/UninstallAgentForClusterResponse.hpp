// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLAGENTFORCLUSTERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLAGENTFORCLUSTERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UninstallAgentForClusterResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UninstallAgentForClusterResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallAgentForClusterResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallAgentForClusterResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UninstallAgentForClusterResponse() = default ;
    UninstallAgentForClusterResponse(const UninstallAgentForClusterResponse &) = default ;
    UninstallAgentForClusterResponse(UninstallAgentForClusterResponse &&) = default ;
    UninstallAgentForClusterResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallAgentForClusterResponse() = default ;
    UninstallAgentForClusterResponse& operator=(const UninstallAgentForClusterResponse &) = default ;
    UninstallAgentForClusterResponse& operator=(UninstallAgentForClusterResponse &&) = default ;
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
    inline UninstallAgentForClusterResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UninstallAgentForClusterResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UninstallAgentForClusterResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UninstallAgentForClusterResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UninstallAgentForClusterResponseBody) };
    inline UninstallAgentForClusterResponseBody body() { DARABONBA_PTR_GET(body_, UninstallAgentForClusterResponseBody) };
    inline UninstallAgentForClusterResponse& setBody(const UninstallAgentForClusterResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UninstallAgentForClusterResponse& setBody(UninstallAgentForClusterResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UninstallAgentForClusterResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
