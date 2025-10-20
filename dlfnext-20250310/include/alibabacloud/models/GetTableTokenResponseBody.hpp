// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetTableTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(expiresAtMillis, expiresAtMillis_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(expiresAtMillis, expiresAtMillis_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    GetTableTokenResponseBody() = default ;
    GetTableTokenResponseBody(const GetTableTokenResponseBody &) = default ;
    GetTableTokenResponseBody(GetTableTokenResponseBody &&) = default ;
    GetTableTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableTokenResponseBody() = default ;
    GetTableTokenResponseBody& operator=(const GetTableTokenResponseBody &) = default ;
    GetTableTokenResponseBody& operator=(GetTableTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiresAtMillis_ == nullptr
        && return this->token_ == nullptr; };
    // expiresAtMillis Field Functions 
    bool hasExpiresAtMillis() const { return this->expiresAtMillis_ != nullptr;};
    void deleteExpiresAtMillis() { this->expiresAtMillis_ = nullptr;};
    inline int64_t expiresAtMillis() const { DARABONBA_PTR_GET_DEFAULT(expiresAtMillis_, 0L) };
    inline GetTableTokenResponseBody& setExpiresAtMillis(int64_t expiresAtMillis) { DARABONBA_PTR_SET_VALUE(expiresAtMillis_, expiresAtMillis) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const map<string, string> & token() const { DARABONBA_PTR_GET_CONST(token_, map<string, string>) };
    inline map<string, string> token() { DARABONBA_PTR_GET(token_, map<string, string>) };
    inline GetTableTokenResponseBody& setToken(const map<string, string> & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline GetTableTokenResponseBody& setToken(map<string, string> && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    std::shared_ptr<int64_t> expiresAtMillis_ = nullptr;
    std::shared_ptr<map<string, string>> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
