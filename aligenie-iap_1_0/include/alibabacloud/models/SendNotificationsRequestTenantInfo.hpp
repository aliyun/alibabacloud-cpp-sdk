// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUESTTENANTINFO_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUESTTENANTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class SendNotificationsRequestTenantInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationsRequestTenantInfo& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationsRequestTenantInfo& obj) { 
    };
    SendNotificationsRequestTenantInfo() = default ;
    SendNotificationsRequestTenantInfo(const SendNotificationsRequestTenantInfo &) = default ;
    SendNotificationsRequestTenantInfo(SendNotificationsRequestTenantInfo &&) = default ;
    SendNotificationsRequestTenantInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationsRequestTenantInfo() = default ;
    SendNotificationsRequestTenantInfo& operator=(const SendNotificationsRequestTenantInfo &) = default ;
    SendNotificationsRequestTenantInfo& operator=(SendNotificationsRequestTenantInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
