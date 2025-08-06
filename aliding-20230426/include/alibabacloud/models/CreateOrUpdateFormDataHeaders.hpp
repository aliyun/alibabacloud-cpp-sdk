// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEFORMDATAHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEFORMDATAHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateOrUpdateFormDataHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateOrUpdateFormDataHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateFormDataHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateFormDataHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    CreateOrUpdateFormDataHeaders() = default ;
    CreateOrUpdateFormDataHeaders(const CreateOrUpdateFormDataHeaders &) = default ;
    CreateOrUpdateFormDataHeaders(CreateOrUpdateFormDataHeaders &&) = default ;
    CreateOrUpdateFormDataHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateFormDataHeaders() = default ;
    CreateOrUpdateFormDataHeaders& operator=(const CreateOrUpdateFormDataHeaders &) = default ;
    CreateOrUpdateFormDataHeaders& operator=(CreateOrUpdateFormDataHeaders &&) = default ;
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
    inline CreateOrUpdateFormDataHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline CreateOrUpdateFormDataHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const CreateOrUpdateFormDataHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, CreateOrUpdateFormDataHeadersAccountContext) };
    inline CreateOrUpdateFormDataHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, CreateOrUpdateFormDataHeadersAccountContext) };
    inline CreateOrUpdateFormDataHeaders& setAccountContext(const CreateOrUpdateFormDataHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline CreateOrUpdateFormDataHeaders& setAccountContext(CreateOrUpdateFormDataHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<CreateOrUpdateFormDataHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
