// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERPROVISIONINGEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERPROVISIONINGEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserProvisioningEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserProvisioningEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserProvisioningEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
    };
    GetUserProvisioningEventRequest() = default ;
    GetUserProvisioningEventRequest(const GetUserProvisioningEventRequest &) = default ;
    GetUserProvisioningEventRequest(GetUserProvisioningEventRequest &&) = default ;
    GetUserProvisioningEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserProvisioningEventRequest() = default ;
    GetUserProvisioningEventRequest& operator=(const GetUserProvisioningEventRequest &) = default ;
    GetUserProvisioningEventRequest& operator=(GetUserProvisioningEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->eventId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetUserProvisioningEventRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetUserProvisioningEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the RAM user provisioning event.
    // 
    // You can call the [ListUserProvisioningEvents](https://help.aliyun.com/document_detail/2636305.html) operation to query the value of `EventId`.
    shared_ptr<string> eventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
