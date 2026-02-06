// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLDETAILHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLDETAILHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSkillDetailHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillDetailHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillDetailHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    GetSkillDetailHeaders() = default ;
    GetSkillDetailHeaders(const GetSkillDetailHeaders &) = default ;
    GetSkillDetailHeaders(GetSkillDetailHeaders &&) = default ;
    GetSkillDetailHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillDetailHeaders() = default ;
    GetSkillDetailHeaders& operator=(const GetSkillDetailHeaders &) = default ;
    GetSkillDetailHeaders& operator=(GetSkillDetailHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountContext& obj) { 
        DARABONBA_PTR_TO_JSON(SsoTicket, ssoTicket_);
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
      };
      friend void from_json(const Darabonba::Json& j, AccountContext& obj) { 
        DARABONBA_PTR_FROM_JSON(SsoTicket, ssoTicket_);
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      };
      AccountContext() = default ;
      AccountContext(const AccountContext &) = default ;
      AccountContext(AccountContext &&) = default ;
      AccountContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountContext() = default ;
      AccountContext& operator=(const AccountContext &) = default ;
      AccountContext& operator=(AccountContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ssoTicket_ == nullptr
        && this->accountId_ == nullptr; };
      // ssoTicket Field Functions 
      bool hasSsoTicket() const { return this->ssoTicket_ != nullptr;};
      void deleteSsoTicket() { this->ssoTicket_ = nullptr;};
      inline string getSsoTicket() const { DARABONBA_PTR_GET_DEFAULT(ssoTicket_, "") };
      inline AccountContext& setSsoTicket(string ssoTicket) { DARABONBA_PTR_SET_VALUE(ssoTicket_, ssoTicket) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline AccountContext& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    protected:
      // Buc SsoTicket
      shared_ptr<string> ssoTicket_ {};
      // This parameter is required.
      shared_ptr<string> accountId_ {};
    };

    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->accountContext_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline GetSkillDetailHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetSkillDetailHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const GetSkillDetailHeaders::AccountContext & getAccountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, GetSkillDetailHeaders::AccountContext) };
    inline GetSkillDetailHeaders::AccountContext getAccountContext() { DARABONBA_PTR_GET(accountContext_, GetSkillDetailHeaders::AccountContext) };
    inline GetSkillDetailHeaders& setAccountContext(const GetSkillDetailHeaders::AccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline GetSkillDetailHeaders& setAccountContext(GetSkillDetailHeaders::AccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<GetSkillDetailHeaders::AccountContext> accountContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
