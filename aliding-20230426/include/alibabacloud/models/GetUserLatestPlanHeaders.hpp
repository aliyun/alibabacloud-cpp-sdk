// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLATESTPLANHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLATESTPLANHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetUserLatestPlanHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserLatestPlanHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserLatestPlanHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserLatestPlanHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    GetUserLatestPlanHeaders() = default ;
    GetUserLatestPlanHeaders(const GetUserLatestPlanHeaders &) = default ;
    GetUserLatestPlanHeaders(GetUserLatestPlanHeaders &&) = default ;
    GetUserLatestPlanHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserLatestPlanHeaders() = default ;
    GetUserLatestPlanHeaders& operator=(const GetUserLatestPlanHeaders &) = default ;
    GetUserLatestPlanHeaders& operator=(GetUserLatestPlanHeaders &&) = default ;
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
    inline GetUserLatestPlanHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetUserLatestPlanHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const GetUserLatestPlanHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, GetUserLatestPlanHeadersAccountContext) };
    inline GetUserLatestPlanHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, GetUserLatestPlanHeadersAccountContext) };
    inline GetUserLatestPlanHeaders& setAccountContext(const GetUserLatestPlanHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline GetUserLatestPlanHeaders& setAccountContext(GetUserLatestPlanHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<GetUserLatestPlanHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
