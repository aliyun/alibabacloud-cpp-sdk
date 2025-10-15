// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTOIDCSSOCONFIGCUSTOMCLAIMS_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTOIDCSSOCONFIGCUSTOMCLAIMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims& obj) { 
      DARABONBA_PTR_TO_JSON(ClaimName, claimName_);
      DARABONBA_PTR_TO_JSON(ClaimValueExpression, claimValueExpression_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims& obj) { 
      DARABONBA_PTR_FROM_JSON(ClaimName, claimName_);
      DARABONBA_PTR_FROM_JSON(ClaimValueExpression, claimValueExpression_);
    };
    SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims() = default ;
    SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims(const SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims &) = default ;
    SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims(SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims &&) = default ;
    SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims() = default ;
    SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims& operator=(const SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims &) = default ;
    SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims& operator=(SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->claimName_ == nullptr
        && return this->claimValueExpression_ == nullptr; };
    // claimName Field Functions 
    bool hasClaimName() const { return this->claimName_ != nullptr;};
    void deleteClaimName() { this->claimName_ = nullptr;};
    inline string claimName() const { DARABONBA_PTR_GET_DEFAULT(claimName_, "") };
    inline SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims& setClaimName(string claimName) { DARABONBA_PTR_SET_VALUE(claimName_, claimName) };


    // claimValueExpression Field Functions 
    bool hasClaimValueExpression() const { return this->claimValueExpression_ != nullptr;};
    void deleteClaimValueExpression() { this->claimValueExpression_ = nullptr;};
    inline string claimValueExpression() const { DARABONBA_PTR_GET_DEFAULT(claimValueExpression_, "") };
    inline SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims& setClaimValueExpression(string claimValueExpression) { DARABONBA_PTR_SET_VALUE(claimValueExpression_, claimValueExpression) };


  protected:
    // The claim name.
    std::shared_ptr<string> claimName_ = nullptr;
    // The expression that is used to calculate the value of the claim.
    std::shared_ptr<string> claimValueExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
