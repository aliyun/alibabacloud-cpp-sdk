// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKETOKENPLANINVITELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKETOKENPLANINVITELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class RevokeTokenPlanInviteLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeTokenPlanInviteLinkRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, RevokeTokenPlanInviteLinkRequest& obj) { 
      (void)j; (void)obj; 
    };
    RevokeTokenPlanInviteLinkRequest() = default ;
    RevokeTokenPlanInviteLinkRequest(const RevokeTokenPlanInviteLinkRequest &) = default ;
    RevokeTokenPlanInviteLinkRequest(RevokeTokenPlanInviteLinkRequest &&) = default ;
    RevokeTokenPlanInviteLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeTokenPlanInviteLinkRequest() = default ;
    RevokeTokenPlanInviteLinkRequest& operator=(const RevokeTokenPlanInviteLinkRequest &) = default ;
    RevokeTokenPlanInviteLinkRequest& operator=(RevokeTokenPlanInviteLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
