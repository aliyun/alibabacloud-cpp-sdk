// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEINSTANCEHEADERS_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEINSTANCEHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/TerminateInstanceHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class TerminateInstanceHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminateInstanceHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, TerminateInstanceHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    TerminateInstanceHeaders() = default ;
    TerminateInstanceHeaders(const TerminateInstanceHeaders &) = default ;
    TerminateInstanceHeaders(TerminateInstanceHeaders &&) = default ;
    TerminateInstanceHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminateInstanceHeaders() = default ;
    TerminateInstanceHeaders& operator=(const TerminateInstanceHeaders &) = default ;
    TerminateInstanceHeaders& operator=(TerminateInstanceHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && return this->accountContext_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline TerminateInstanceHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline TerminateInstanceHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const TerminateInstanceHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, TerminateInstanceHeadersAccountContext) };
    inline TerminateInstanceHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, TerminateInstanceHeadersAccountContext) };
    inline TerminateInstanceHeaders& setAccountContext(const TerminateInstanceHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline TerminateInstanceHeaders& setAccountContext(TerminateInstanceHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<TerminateInstanceHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
