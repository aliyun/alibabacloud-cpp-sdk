// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListNotificationRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NotificationKeys, notificationKeys_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NotificationKeys, notificationKeys_);
    };
    ListNotificationRecordsRequest() = default ;
    ListNotificationRecordsRequest(const ListNotificationRecordsRequest &) = default ;
    ListNotificationRecordsRequest(ListNotificationRecordsRequest &&) = default ;
    ListNotificationRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationRecordsRequest() = default ;
    ListNotificationRecordsRequest& operator=(const ListNotificationRecordsRequest &) = default ;
    ListNotificationRecordsRequest& operator=(ListNotificationRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->notificationKeys_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNotificationRecordsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // notificationKeys Field Functions 
    bool hasNotificationKeys() const { return this->notificationKeys_ != nullptr;};
    void deleteNotificationKeys() { this->notificationKeys_ = nullptr;};
    inline string getNotificationKeys() const { DARABONBA_PTR_GET_DEFAULT(notificationKeys_, "") };
    inline ListNotificationRecordsRequest& setNotificationKeys(string notificationKeys) { DARABONBA_PTR_SET_VALUE(notificationKeys_, notificationKeys) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> notificationKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
