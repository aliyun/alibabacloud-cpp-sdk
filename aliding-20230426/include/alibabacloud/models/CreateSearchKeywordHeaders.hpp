// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEARCHKEYWORDHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CREATESEARCHKEYWORDHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateSearchKeywordHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateSearchKeywordHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSearchKeywordHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSearchKeywordHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    CreateSearchKeywordHeaders() = default ;
    CreateSearchKeywordHeaders(const CreateSearchKeywordHeaders &) = default ;
    CreateSearchKeywordHeaders(CreateSearchKeywordHeaders &&) = default ;
    CreateSearchKeywordHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSearchKeywordHeaders() = default ;
    CreateSearchKeywordHeaders& operator=(const CreateSearchKeywordHeaders &) = default ;
    CreateSearchKeywordHeaders& operator=(CreateSearchKeywordHeaders &&) = default ;
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
    inline CreateSearchKeywordHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline CreateSearchKeywordHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const CreateSearchKeywordHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, CreateSearchKeywordHeadersAccountContext) };
    inline CreateSearchKeywordHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, CreateSearchKeywordHeadersAccountContext) };
    inline CreateSearchKeywordHeaders& setAccountContext(const CreateSearchKeywordHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline CreateSearchKeywordHeaders& setAccountContext(CreateSearchKeywordHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<CreateSearchKeywordHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
