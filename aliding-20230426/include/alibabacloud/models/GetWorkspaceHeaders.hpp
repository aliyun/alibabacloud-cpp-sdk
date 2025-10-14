// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetWorkspaceHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetWorkspaceHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    GetWorkspaceHeaders() = default ;
    GetWorkspaceHeaders(const GetWorkspaceHeaders &) = default ;
    GetWorkspaceHeaders(GetWorkspaceHeaders &&) = default ;
    GetWorkspaceHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceHeaders() = default ;
    GetWorkspaceHeaders& operator=(const GetWorkspaceHeaders &) = default ;
    GetWorkspaceHeaders& operator=(GetWorkspaceHeaders &&) = default ;
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
    inline GetWorkspaceHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetWorkspaceHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const GetWorkspaceHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, GetWorkspaceHeadersAccountContext) };
    inline GetWorkspaceHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, GetWorkspaceHeadersAccountContext) };
    inline GetWorkspaceHeaders& setAccountContext(const GetWorkspaceHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline GetWorkspaceHeaders& setAccountContext(GetWorkspaceHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<GetWorkspaceHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
