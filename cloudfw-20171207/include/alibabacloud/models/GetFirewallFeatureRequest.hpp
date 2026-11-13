// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFIREWALLFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFIREWALLFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class GetFirewallFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFirewallFeatureRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetFirewallFeatureRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetFirewallFeatureRequest() = default ;
    GetFirewallFeatureRequest(const GetFirewallFeatureRequest &) = default ;
    GetFirewallFeatureRequest(GetFirewallFeatureRequest &&) = default ;
    GetFirewallFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFirewallFeatureRequest() = default ;
    GetFirewallFeatureRequest& operator=(const GetFirewallFeatureRequest &) = default ;
    GetFirewallFeatureRequest& operator=(GetFirewallFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
