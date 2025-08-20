// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUESTTENANTINFO_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUESTTENANTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PushNotificationsRequestTenantInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNotificationsRequestTenantInfo& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, PushNotificationsRequestTenantInfo& obj) { 
    };
    PushNotificationsRequestTenantInfo() = default ;
    PushNotificationsRequestTenantInfo(const PushNotificationsRequestTenantInfo &) = default ;
    PushNotificationsRequestTenantInfo(PushNotificationsRequestTenantInfo &&) = default ;
    PushNotificationsRequestTenantInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNotificationsRequestTenantInfo() = default ;
    PushNotificationsRequestTenantInfo& operator=(const PushNotificationsRequestTenantInfo &) = default ;
    PushNotificationsRequestTenantInfo& operator=(PushNotificationsRequestTenantInfo &&) = default ;
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
