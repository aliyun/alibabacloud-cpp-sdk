// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFIELDDEFBYUUIDHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GETFIELDDEFBYUUIDHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetFieldDefByUuidHeadersAccountContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFieldDefByUuidHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFieldDefByUuidHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetFieldDefByUuidHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContext_);
    };
    GetFieldDefByUuidHeaders() = default ;
    GetFieldDefByUuidHeaders(const GetFieldDefByUuidHeaders &) = default ;
    GetFieldDefByUuidHeaders(GetFieldDefByUuidHeaders &&) = default ;
    GetFieldDefByUuidHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFieldDefByUuidHeaders() = default ;
    GetFieldDefByUuidHeaders& operator=(const GetFieldDefByUuidHeaders &) = default ;
    GetFieldDefByUuidHeaders& operator=(GetFieldDefByUuidHeaders &&) = default ;
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
    inline GetFieldDefByUuidHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GetFieldDefByUuidHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContext Field Functions 
    bool hasAccountContext() const { return this->accountContext_ != nullptr;};
    void deleteAccountContext() { this->accountContext_ = nullptr;};
    inline const GetFieldDefByUuidHeadersAccountContext & accountContext() const { DARABONBA_PTR_GET_CONST(accountContext_, GetFieldDefByUuidHeadersAccountContext) };
    inline GetFieldDefByUuidHeadersAccountContext accountContext() { DARABONBA_PTR_GET(accountContext_, GetFieldDefByUuidHeadersAccountContext) };
    inline GetFieldDefByUuidHeaders& setAccountContext(const GetFieldDefByUuidHeadersAccountContext & accountContext) { DARABONBA_PTR_SET_VALUE(accountContext_, accountContext) };
    inline GetFieldDefByUuidHeaders& setAccountContext(GetFieldDefByUuidHeadersAccountContext && accountContext) { DARABONBA_PTR_SET_RVALUE(accountContext_, accountContext) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    std::shared_ptr<GetFieldDefByUuidHeadersAccountContext> accountContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
