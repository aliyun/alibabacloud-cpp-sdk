// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENATFIREWALLCONTROLPOLICYBATCHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETENATFIREWALLCONTROLPOLICYBATCHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteNatFirewallControlPolicyBatchResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteNatFirewallControlPolicyBatchResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNatFirewallControlPolicyBatchResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNatFirewallControlPolicyBatchResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteNatFirewallControlPolicyBatchResponse() = default ;
    DeleteNatFirewallControlPolicyBatchResponse(const DeleteNatFirewallControlPolicyBatchResponse &) = default ;
    DeleteNatFirewallControlPolicyBatchResponse(DeleteNatFirewallControlPolicyBatchResponse &&) = default ;
    DeleteNatFirewallControlPolicyBatchResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNatFirewallControlPolicyBatchResponse() = default ;
    DeleteNatFirewallControlPolicyBatchResponse& operator=(const DeleteNatFirewallControlPolicyBatchResponse &) = default ;
    DeleteNatFirewallControlPolicyBatchResponse& operator=(DeleteNatFirewallControlPolicyBatchResponse &&) = default ;
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
    inline DeleteNatFirewallControlPolicyBatchResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteNatFirewallControlPolicyBatchResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteNatFirewallControlPolicyBatchResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteNatFirewallControlPolicyBatchResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteNatFirewallControlPolicyBatchResponseBody) };
    inline DeleteNatFirewallControlPolicyBatchResponseBody body() { DARABONBA_PTR_GET(body_, DeleteNatFirewallControlPolicyBatchResponseBody) };
    inline DeleteNatFirewallControlPolicyBatchResponse& setBody(const DeleteNatFirewallControlPolicyBatchResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteNatFirewallControlPolicyBatchResponse& setBody(DeleteNatFirewallControlPolicyBatchResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteNatFirewallControlPolicyBatchResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
