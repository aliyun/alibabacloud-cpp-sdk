// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBECALENDARHEADERS_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBECALENDARHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SubscribeCalendarHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SubscribeCalendarHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeCalendarHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeCalendarHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    SubscribeCalendarHeaders() = default ;
    SubscribeCalendarHeaders(const SubscribeCalendarHeaders &) = default ;
    SubscribeCalendarHeaders(SubscribeCalendarHeaders &&) = default ;
    SubscribeCalendarHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeCalendarHeaders() = default ;
    SubscribeCalendarHeaders& operator=(const SubscribeCalendarHeaders &) = default ;
    SubscribeCalendarHeaders& operator=(SubscribeCalendarHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonHeaders_ != nullptr
        && this->accountContext_ != nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline SubscribeCalendarHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline SubscribeCalendarHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const SubscribeCalendarHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, SubscribeCalendarHeadersAccountContext) };
    inline SubscribeCalendarHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, SubscribeCalendarHeadersAccountContext) };
    inline SubscribeCalendarHeaders& setAccountContext(const SubscribeCalendarHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline SubscribeCalendarHeaders& setAccountContext(SubscribeCalendarHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<SubscribeCalendarHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
