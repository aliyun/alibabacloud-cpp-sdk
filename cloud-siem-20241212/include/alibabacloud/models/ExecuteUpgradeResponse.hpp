// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEUPGRADERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEUPGRADERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ExecuteUpgradeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ExecuteUpgradeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteUpgradeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteUpgradeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ExecuteUpgradeResponse() = default ;
    ExecuteUpgradeResponse(const ExecuteUpgradeResponse &) = default ;
    ExecuteUpgradeResponse(ExecuteUpgradeResponse &&) = default ;
    ExecuteUpgradeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteUpgradeResponse() = default ;
    ExecuteUpgradeResponse& operator=(const ExecuteUpgradeResponse &) = default ;
    ExecuteUpgradeResponse& operator=(ExecuteUpgradeResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ExecuteUpgradeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ExecuteUpgradeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ExecuteUpgradeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ExecuteUpgradeResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ExecuteUpgradeResponseBody) };
    inline ExecuteUpgradeResponseBody getBody() { DARABONBA_PTR_GET(body_, ExecuteUpgradeResponseBody) };
    inline ExecuteUpgradeResponse& setBody(const ExecuteUpgradeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ExecuteUpgradeResponse& setBody(ExecuteUpgradeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ExecuteUpgradeResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
