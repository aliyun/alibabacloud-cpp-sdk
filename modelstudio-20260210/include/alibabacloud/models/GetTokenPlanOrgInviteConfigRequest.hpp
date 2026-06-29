// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENPLANORGINVITECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENPLANORGINVITECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetTokenPlanOrgInviteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenPlanOrgInviteConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetTokenPlanOrgInviteConfigRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetTokenPlanOrgInviteConfigRequest() = default ;
    GetTokenPlanOrgInviteConfigRequest(const GetTokenPlanOrgInviteConfigRequest &) = default ;
    GetTokenPlanOrgInviteConfigRequest(GetTokenPlanOrgInviteConfigRequest &&) = default ;
    GetTokenPlanOrgInviteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenPlanOrgInviteConfigRequest() = default ;
    GetTokenPlanOrgInviteConfigRequest& operator=(const GetTokenPlanOrgInviteConfigRequest &) = default ;
    GetTokenPlanOrgInviteConfigRequest& operator=(GetTokenPlanOrgInviteConfigRequest &&) = default ;
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
