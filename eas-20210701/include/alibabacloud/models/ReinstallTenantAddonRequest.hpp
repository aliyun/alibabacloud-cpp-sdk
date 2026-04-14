// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINSTALLTENANTADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINSTALLTENANTADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ReinstallTenantAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReinstallTenantAddonRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ReinstallTenantAddonRequest& obj) { 
      (void)j; (void)obj; 
    };
    ReinstallTenantAddonRequest() = default ;
    ReinstallTenantAddonRequest(const ReinstallTenantAddonRequest &) = default ;
    ReinstallTenantAddonRequest(ReinstallTenantAddonRequest &&) = default ;
    ReinstallTenantAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReinstallTenantAddonRequest() = default ;
    ReinstallTenantAddonRequest& operator=(const ReinstallTenantAddonRequest &) = default ;
    ReinstallTenantAddonRequest& operator=(ReinstallTenantAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
