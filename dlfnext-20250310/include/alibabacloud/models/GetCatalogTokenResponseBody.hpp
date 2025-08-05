// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGTOKENRESPONSEBODY_HPP_
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
  class GetCatalogTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(expiresAtMillis, expiresAtMillis_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(expiresAtMillis, expiresAtMillis_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    GetCatalogTokenResponseBody() = default ;
    GetCatalogTokenResponseBody(const GetCatalogTokenResponseBody &) = default ;
    GetCatalogTokenResponseBody(GetCatalogTokenResponseBody &&) = default ;
    GetCatalogTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogTokenResponseBody() = default ;
    GetCatalogTokenResponseBody& operator=(const GetCatalogTokenResponseBody &) = default ;
    GetCatalogTokenResponseBody& operator=(GetCatalogTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expiresAtMillis_ != nullptr
        && this->token_ != nullptr; };
    // expiresAtMillis Field Functions 
    bool hasExpiresAtMillis() const { return this->expiresAtMillis_ != nullptr;};
    void deleteExpiresAtMillis() { this->expiresAtMillis_ = nullptr;};
    inline int64_t expiresAtMillis() const { DARABONBA_PTR_GET_DEFAULT(expiresAtMillis_, 0L) };
    inline GetCatalogTokenResponseBody& setExpiresAtMillis(int64_t expiresAtMillis) { DARABONBA_PTR_SET_VALUE(expiresAtMillis_, expiresAtMillis) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const map<string, string> & token() const { DARABONBA_PTR_GET_CONST(token_, map<string, string>) };
    inline map<string, string> token() { DARABONBA_PTR_GET(token_, map<string, string>) };
    inline GetCatalogTokenResponseBody& setToken(const map<string, string> & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline GetCatalogTokenResponseBody& setToken(map<string, string> && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    std::shared_ptr<int64_t> expiresAtMillis_ = nullptr;
    std::shared_ptr<map<string, string>> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
