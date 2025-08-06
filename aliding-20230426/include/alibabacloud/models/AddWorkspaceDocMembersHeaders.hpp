// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEDOCMEMBERSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEDOCMEMBERSHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddWorkspaceDocMembersHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceDocMembersHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceDocMembersHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceDocMembersHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    AddWorkspaceDocMembersHeaders() = default ;
    AddWorkspaceDocMembersHeaders(const AddWorkspaceDocMembersHeaders &) = default ;
    AddWorkspaceDocMembersHeaders(AddWorkspaceDocMembersHeaders &&) = default ;
    AddWorkspaceDocMembersHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceDocMembersHeaders() = default ;
    AddWorkspaceDocMembersHeaders& operator=(const AddWorkspaceDocMembersHeaders &) = default ;
    AddWorkspaceDocMembersHeaders& operator=(AddWorkspaceDocMembersHeaders &&) = default ;
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
    inline AddWorkspaceDocMembersHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline AddWorkspaceDocMembersHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const AddWorkspaceDocMembersHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, AddWorkspaceDocMembersHeadersAccountContext) };
    inline AddWorkspaceDocMembersHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, AddWorkspaceDocMembersHeadersAccountContext) };
    inline AddWorkspaceDocMembersHeaders& setAccountContext(const AddWorkspaceDocMembersHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline AddWorkspaceDocMembersHeaders& setAccountContext(AddWorkspaceDocMembersHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<AddWorkspaceDocMembersHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
