// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_GETUSERACCESSTOKENFORPARTNERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserAccessTokenForPartnerResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAccessTokenForPartnerResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(TokenValue, tokenValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAccessTokenForPartnerResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(TokenValue, tokenValue_);
    };
    GetUserAccessTokenForPartnerResponseBodyModule() = default ;
    GetUserAccessTokenForPartnerResponseBodyModule(const GetUserAccessTokenForPartnerResponseBodyModule &) = default ;
    GetUserAccessTokenForPartnerResponseBodyModule(GetUserAccessTokenForPartnerResponseBodyModule &&) = default ;
    GetUserAccessTokenForPartnerResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAccessTokenForPartnerResponseBodyModule() = default ;
    GetUserAccessTokenForPartnerResponseBodyModule& operator=(const GetUserAccessTokenForPartnerResponseBodyModule &) = default ;
    GetUserAccessTokenForPartnerResponseBodyModule& operator=(GetUserAccessTokenForPartnerResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tokenValue_ == nullptr; };
    // tokenValue Field Functions 
    bool hasTokenValue() const { return this->tokenValue_ != nullptr;};
    void deleteTokenValue() { this->tokenValue_ = nullptr;};
    inline string tokenValue() const { DARABONBA_PTR_GET_DEFAULT(tokenValue_, "") };
    inline GetUserAccessTokenForPartnerResponseBodyModule& setTokenValue(string tokenValue) { DARABONBA_PTR_SET_VALUE(tokenValue_, tokenValue) };


  protected:
    std::shared_ptr<string> tokenValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
