// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINJWTAUTHENTICATIONTOKENBYDERIVEDSHORTTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINJWTAUTHENTICATIONTOKENBYDERIVEDSHORTTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ObtainJwtAuthenticationTokenByDerivedShortTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainJwtAuthenticationTokenByDerivedShortTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(derivedShortToken, derivedShortToken_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainJwtAuthenticationTokenByDerivedShortTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(derivedShortToken, derivedShortToken_);
    };
    ObtainJwtAuthenticationTokenByDerivedShortTokenRequest() = default ;
    ObtainJwtAuthenticationTokenByDerivedShortTokenRequest(const ObtainJwtAuthenticationTokenByDerivedShortTokenRequest &) = default ;
    ObtainJwtAuthenticationTokenByDerivedShortTokenRequest(ObtainJwtAuthenticationTokenByDerivedShortTokenRequest &&) = default ;
    ObtainJwtAuthenticationTokenByDerivedShortTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainJwtAuthenticationTokenByDerivedShortTokenRequest() = default ;
    ObtainJwtAuthenticationTokenByDerivedShortTokenRequest& operator=(const ObtainJwtAuthenticationTokenByDerivedShortTokenRequest &) = default ;
    ObtainJwtAuthenticationTokenByDerivedShortTokenRequest& operator=(ObtainJwtAuthenticationTokenByDerivedShortTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->derivedShortToken_ == nullptr; };
    // derivedShortToken Field Functions 
    bool hasDerivedShortToken() const { return this->derivedShortToken_ != nullptr;};
    void deleteDerivedShortToken() { this->derivedShortToken_ = nullptr;};
    inline string getDerivedShortToken() const { DARABONBA_PTR_GET_DEFAULT(derivedShortToken_, "") };
    inline ObtainJwtAuthenticationTokenByDerivedShortTokenRequest& setDerivedShortToken(string derivedShortToken) { DARABONBA_PTR_SET_VALUE(derivedShortToken_, derivedShortToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> derivedShortToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
