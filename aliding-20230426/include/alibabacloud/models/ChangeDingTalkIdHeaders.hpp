// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDINGTALKIDHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDINGTALKIDHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ChangeDingTalkIdHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ChangeDingTalkIdHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDingTalkIdHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDingTalkIdHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    ChangeDingTalkIdHeaders() = default ;
    ChangeDingTalkIdHeaders(const ChangeDingTalkIdHeaders &) = default ;
    ChangeDingTalkIdHeaders(ChangeDingTalkIdHeaders &&) = default ;
    ChangeDingTalkIdHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDingTalkIdHeaders() = default ;
    ChangeDingTalkIdHeaders& operator=(const ChangeDingTalkIdHeaders &) = default ;
    ChangeDingTalkIdHeaders& operator=(ChangeDingTalkIdHeaders &&) = default ;
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
    inline ChangeDingTalkIdHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ChangeDingTalkIdHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const ChangeDingTalkIdHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, ChangeDingTalkIdHeadersAccountContext) };
    inline ChangeDingTalkIdHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, ChangeDingTalkIdHeadersAccountContext) };
    inline ChangeDingTalkIdHeaders& setAccountContext(const ChangeDingTalkIdHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline ChangeDingTalkIdHeaders& setAccountContext(ChangeDingTalkIdHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<ChangeDingTalkIdHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
