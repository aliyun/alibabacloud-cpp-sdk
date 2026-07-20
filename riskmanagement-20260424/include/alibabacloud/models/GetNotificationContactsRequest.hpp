// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFICATIONCONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFICATIONCONTACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetNotificationContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotificationContactsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetNotificationContactsRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetNotificationContactsRequest() = default ;
    GetNotificationContactsRequest(const GetNotificationContactsRequest &) = default ;
    GetNotificationContactsRequest(GetNotificationContactsRequest &&) = default ;
    GetNotificationContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotificationContactsRequest() = default ;
    GetNotificationContactsRequest& operator=(const GetNotificationContactsRequest &) = default ;
    GetNotificationContactsRequest& operator=(GetNotificationContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
