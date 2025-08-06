// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEMEMBERSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEMEMBERSHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateWorkspaceMembersHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateWorkspaceMembersHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceMembersHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceMembersHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    UpdateWorkspaceMembersHeaders() = default ;
    UpdateWorkspaceMembersHeaders(const UpdateWorkspaceMembersHeaders &) = default ;
    UpdateWorkspaceMembersHeaders(UpdateWorkspaceMembersHeaders &&) = default ;
    UpdateWorkspaceMembersHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceMembersHeaders() = default ;
    UpdateWorkspaceMembersHeaders& operator=(const UpdateWorkspaceMembersHeaders &) = default ;
    UpdateWorkspaceMembersHeaders& operator=(UpdateWorkspaceMembersHeaders &&) = default ;
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
    inline UpdateWorkspaceMembersHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline UpdateWorkspaceMembersHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const UpdateWorkspaceMembersHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, UpdateWorkspaceMembersHeadersAccountContext) };
    inline UpdateWorkspaceMembersHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, UpdateWorkspaceMembersHeadersAccountContext) };
    inline UpdateWorkspaceMembersHeaders& setAccountContext(const UpdateWorkspaceMembersHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline UpdateWorkspaceMembersHeaders& setAccountContext(UpdateWorkspaceMembersHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<UpdateWorkspaceMembersHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
