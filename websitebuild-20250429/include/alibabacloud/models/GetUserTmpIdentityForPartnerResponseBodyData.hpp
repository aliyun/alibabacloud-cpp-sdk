// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserTmpIdentityForPartnerResponseBodyDataCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserTmpIdentityForPartnerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserTmpIdentityForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(HasCustomRoleAuth, hasCustomRoleAuth_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserTmpIdentityForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(HasCustomRoleAuth, hasCustomRoleAuth_);
    };
    GetUserTmpIdentityForPartnerResponseBodyData() = default ;
    GetUserTmpIdentityForPartnerResponseBodyData(const GetUserTmpIdentityForPartnerResponseBodyData &) = default ;
    GetUserTmpIdentityForPartnerResponseBodyData(GetUserTmpIdentityForPartnerResponseBodyData &&) = default ;
    GetUserTmpIdentityForPartnerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserTmpIdentityForPartnerResponseBodyData() = default ;
    GetUserTmpIdentityForPartnerResponseBodyData& operator=(const GetUserTmpIdentityForPartnerResponseBodyData &) = default ;
    GetUserTmpIdentityForPartnerResponseBodyData& operator=(GetUserTmpIdentityForPartnerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentials_ == nullptr
        && return this->hasCustomRoleAuth_ == nullptr; };
    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials) };
    inline Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials credentials() { DARABONBA_PTR_GET(credentials_, Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials) };
    inline GetUserTmpIdentityForPartnerResponseBodyData& setCredentials(const Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline GetUserTmpIdentityForPartnerResponseBodyData& setCredentials(Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // hasCustomRoleAuth Field Functions 
    bool hasHasCustomRoleAuth() const { return this->hasCustomRoleAuth_ != nullptr;};
    void deleteHasCustomRoleAuth() { this->hasCustomRoleAuth_ = nullptr;};
    inline bool hasCustomRoleAuth() const { DARABONBA_PTR_GET_DEFAULT(hasCustomRoleAuth_, false) };
    inline GetUserTmpIdentityForPartnerResponseBodyData& setHasCustomRoleAuth(bool hasCustomRoleAuth) { DARABONBA_PTR_SET_VALUE(hasCustomRoleAuth_, hasCustomRoleAuth) };


  protected:
    std::shared_ptr<Models::GetUserTmpIdentityForPartnerResponseBodyDataCredentials> credentials_ = nullptr;
    std::shared_ptr<bool> hasCustomRoleAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
