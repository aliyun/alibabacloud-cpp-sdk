// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENPLANINVITELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENPLANINVITELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateTokenPlanInviteLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenPlanInviteLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireType, expireType_);
      DARABONBA_PTR_TO_JSON(SsoSource, ssoSource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenPlanInviteLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireType, expireType_);
      DARABONBA_PTR_FROM_JSON(SsoSource, ssoSource_);
    };
    CreateTokenPlanInviteLinkRequest() = default ;
    CreateTokenPlanInviteLinkRequest(const CreateTokenPlanInviteLinkRequest &) = default ;
    CreateTokenPlanInviteLinkRequest(CreateTokenPlanInviteLinkRequest &&) = default ;
    CreateTokenPlanInviteLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenPlanInviteLinkRequest() = default ;
    CreateTokenPlanInviteLinkRequest& operator=(const CreateTokenPlanInviteLinkRequest &) = default ;
    CreateTokenPlanInviteLinkRequest& operator=(CreateTokenPlanInviteLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireType_ == nullptr
        && this->ssoSource_ == nullptr; };
    // expireType Field Functions 
    bool hasExpireType() const { return this->expireType_ != nullptr;};
    void deleteExpireType() { this->expireType_ = nullptr;};
    inline string getExpireType() const { DARABONBA_PTR_GET_DEFAULT(expireType_, "") };
    inline CreateTokenPlanInviteLinkRequest& setExpireType(string expireType) { DARABONBA_PTR_SET_VALUE(expireType_, expireType) };


    // ssoSource Field Functions 
    bool hasSsoSource() const { return this->ssoSource_ != nullptr;};
    void deleteSsoSource() { this->ssoSource_ = nullptr;};
    inline string getSsoSource() const { DARABONBA_PTR_GET_DEFAULT(ssoSource_, "") };
    inline CreateTokenPlanInviteLinkRequest& setSsoSource(string ssoSource) { DARABONBA_PTR_SET_VALUE(ssoSource_, ssoSource) };


  protected:
    // The expiration period. Default value: DAYS_7. Valid values:
    // 
    // - DAYS_7
    // - DAYS_30
    // - MONTHS_6
    // - YEAR_1
    shared_ptr<string> expireType_ {};
    // The SSO logon method bound to the invitation link. Valid values:
    // 
    // - SAML
    // - DINGTALK
    // 
    // This parameter is required.
    shared_ptr<string> ssoSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
