// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMNOTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMNOTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class ConfirmNotificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmNotificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationRequestId, notificationRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmNotificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationRequestId, notificationRequestId_);
    };
    ConfirmNotificationRequest() = default ;
    ConfirmNotificationRequest(const ConfirmNotificationRequest &) = default ;
    ConfirmNotificationRequest(ConfirmNotificationRequest &&) = default ;
    ConfirmNotificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmNotificationRequest() = default ;
    ConfirmNotificationRequest& operator=(const ConfirmNotificationRequest &) = default ;
    ConfirmNotificationRequest& operator=(ConfirmNotificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationRequestId_ != nullptr; };
    // notificationRequestId Field Functions 
    bool hasNotificationRequestId() const { return this->notificationRequestId_ != nullptr;};
    void deleteNotificationRequestId() { this->notificationRequestId_ = nullptr;};
    inline string notificationRequestId() const { DARABONBA_PTR_GET_DEFAULT(notificationRequestId_, "") };
    inline ConfirmNotificationRequest& setNotificationRequestId(string notificationRequestId) { DARABONBA_PTR_SET_VALUE(notificationRequestId_, notificationRequestId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> notificationRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
