// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetMeCorpSubmissionHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeCorpSubmissionHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeCorpSubmissionHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeCorpSubmissionHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    GetMeCorpSubmissionHeaders() = default ;
    GetMeCorpSubmissionHeaders(const GetMeCorpSubmissionHeaders &) = default ;
    GetMeCorpSubmissionHeaders(GetMeCorpSubmissionHeaders &&) = default ;
    GetMeCorpSubmissionHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeCorpSubmissionHeaders() = default ;
    GetMeCorpSubmissionHeaders& operator=(const GetMeCorpSubmissionHeaders &) = default ;
    GetMeCorpSubmissionHeaders& operator=(GetMeCorpSubmissionHeaders &&) = default ;
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
    inline GetMeCorpSubmissionHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetMeCorpSubmissionHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const GetMeCorpSubmissionHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, GetMeCorpSubmissionHeadersAccountContext) };
    inline GetMeCorpSubmissionHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, GetMeCorpSubmissionHeadersAccountContext) };
    inline GetMeCorpSubmissionHeaders& setAccountContext(const GetMeCorpSubmissionHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline GetMeCorpSubmissionHeaders& setAccountContext(GetMeCorpSubmissionHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<GetMeCorpSubmissionHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
