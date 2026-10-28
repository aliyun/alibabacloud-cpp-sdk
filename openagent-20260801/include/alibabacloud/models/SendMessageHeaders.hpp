// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEHEADERS_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class SendMessageHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-OpenAgent-Idempotency-Key, xOpenAgentIdempotencyKey_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-OpenAgent-Idempotency-Key, xOpenAgentIdempotencyKey_);
    };
    SendMessageHeaders() = default ;
    SendMessageHeaders(const SendMessageHeaders &) = default ;
    SendMessageHeaders(SendMessageHeaders &&) = default ;
    SendMessageHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageHeaders() = default ;
    SendMessageHeaders& operator=(const SendMessageHeaders &) = default ;
    SendMessageHeaders& operator=(SendMessageHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xOpenAgentIdempotencyKey_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline SendMessageHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline SendMessageHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xOpenAgentIdempotencyKey Field Functions 
    bool hasXOpenAgentIdempotencyKey() const { return this->xOpenAgentIdempotencyKey_ != nullptr;};
    void deleteXOpenAgentIdempotencyKey() { this->xOpenAgentIdempotencyKey_ = nullptr;};
    inline string getXOpenAgentIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(xOpenAgentIdempotencyKey_, "") };
    inline SendMessageHeaders& setXOpenAgentIdempotencyKey(string xOpenAgentIdempotencyKey) { DARABONBA_PTR_SET_VALUE(xOpenAgentIdempotencyKey_, xOpenAgentIdempotencyKey) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // The idempotency key for the request. Use the same key and the same business parameters when retrying the same request.
    shared_ptr<string> xOpenAgentIdempotencyKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
