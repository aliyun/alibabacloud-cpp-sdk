// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFICATIONCLICKRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFICATIONCLICKRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetNotificationClickRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotificationClickRecordRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetNotificationClickRecordRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetNotificationClickRecordRequest() = default ;
    GetNotificationClickRecordRequest(const GetNotificationClickRecordRequest &) = default ;
    GetNotificationClickRecordRequest(GetNotificationClickRecordRequest &&) = default ;
    GetNotificationClickRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotificationClickRecordRequest() = default ;
    GetNotificationClickRecordRequest& operator=(const GetNotificationClickRecordRequest &) = default ;
    GetNotificationClickRecordRequest& operator=(GetNotificationClickRecordRequest &&) = default ;
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
