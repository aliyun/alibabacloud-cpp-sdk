// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSETTINGSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSETTINGSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeTerminalSettingsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20251111
{
namespace Models
{
  class DescribeTerminalSettingsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSettingsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSettingsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeTerminalSettingsResponse() = default ;
    DescribeTerminalSettingsResponse(const DescribeTerminalSettingsResponse &) = default ;
    DescribeTerminalSettingsResponse(DescribeTerminalSettingsResponse &&) = default ;
    DescribeTerminalSettingsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSettingsResponse() = default ;
    DescribeTerminalSettingsResponse& operator=(const DescribeTerminalSettingsResponse &) = default ;
    DescribeTerminalSettingsResponse& operator=(DescribeTerminalSettingsResponse &&) = default ;
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
    inline DescribeTerminalSettingsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeTerminalSettingsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeTerminalSettingsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeTerminalSettingsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeTerminalSettingsResponseBody) };
    inline DescribeTerminalSettingsResponseBody body() { DARABONBA_PTR_GET(body_, DescribeTerminalSettingsResponseBody) };
    inline DescribeTerminalSettingsResponse& setBody(const DescribeTerminalSettingsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeTerminalSettingsResponse& setBody(DescribeTerminalSettingsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeTerminalSettingsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20251111
#endif
