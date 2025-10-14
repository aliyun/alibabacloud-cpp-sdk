// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCONFERENCEHOSTSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_SETCONFERENCEHOSTSHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SetConferenceHostsHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SetConferenceHostsHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetConferenceHostsHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, SetConferenceHostsHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    SetConferenceHostsHeaders() = default ;
    SetConferenceHostsHeaders(const SetConferenceHostsHeaders &) = default ;
    SetConferenceHostsHeaders(SetConferenceHostsHeaders &&) = default ;
    SetConferenceHostsHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetConferenceHostsHeaders() = default ;
    SetConferenceHostsHeaders& operator=(const SetConferenceHostsHeaders &) = default ;
    SetConferenceHostsHeaders& operator=(SetConferenceHostsHeaders &&) = default ;
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
    inline SetConferenceHostsHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline SetConferenceHostsHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const SetConferenceHostsHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, SetConferenceHostsHeadersAccountContext) };
    inline SetConferenceHostsHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, SetConferenceHostsHeadersAccountContext) };
    inline SetConferenceHostsHeaders& setAccountContext(const SetConferenceHostsHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline SetConferenceHostsHeaders& setAccountContext(SetConferenceHostsHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<SetConferenceHostsHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
