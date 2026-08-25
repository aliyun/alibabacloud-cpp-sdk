// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERPROVISIONINGEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERPROVISIONINGEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteUserProvisioningEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserProvisioningEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(UserProvisioningId, userProvisioningId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserProvisioningEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(UserProvisioningId, userProvisioningId_);
    };
    DeleteUserProvisioningEventRequest() = default ;
    DeleteUserProvisioningEventRequest(const DeleteUserProvisioningEventRequest &) = default ;
    DeleteUserProvisioningEventRequest(DeleteUserProvisioningEventRequest &&) = default ;
    DeleteUserProvisioningEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserProvisioningEventRequest() = default ;
    DeleteUserProvisioningEventRequest& operator=(const DeleteUserProvisioningEventRequest &) = default ;
    DeleteUserProvisioningEventRequest& operator=(DeleteUserProvisioningEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->eventId_ == nullptr && this->userProvisioningId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteUserProvisioningEventRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DeleteUserProvisioningEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // userProvisioningId Field Functions 
    bool hasUserProvisioningId() const { return this->userProvisioningId_ != nullptr;};
    void deleteUserProvisioningId() { this->userProvisioningId_ = nullptr;};
    inline string getUserProvisioningId() const { DARABONBA_PTR_GET_DEFAULT(userProvisioningId_, "") };
    inline DeleteUserProvisioningEventRequest& setUserProvisioningId(string userProvisioningId) { DARABONBA_PTR_SET_VALUE(userProvisioningId_, userProvisioningId) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the RAM user provisioning event.
    // 
    // You can call the [ListUserProvisioningEvents](https://help.aliyun.com/document_detail/2636305.html) operation to query the value of `EventId`.
    shared_ptr<string> eventId_ {};
    // The ID of the RAM user provisioning.
    shared_ptr<string> userProvisioningId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
