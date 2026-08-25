// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYUSERPROVISIONINGEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYUSERPROVISIONINGEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class RetryUserProvisioningEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryUserProvisioningEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DuplicationStrategy, duplicationStrategy_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryUserProvisioningEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DuplicationStrategy, duplicationStrategy_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
    };
    RetryUserProvisioningEventRequest() = default ;
    RetryUserProvisioningEventRequest(const RetryUserProvisioningEventRequest &) = default ;
    RetryUserProvisioningEventRequest(RetryUserProvisioningEventRequest &&) = default ;
    RetryUserProvisioningEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryUserProvisioningEventRequest() = default ;
    RetryUserProvisioningEventRequest& operator=(const RetryUserProvisioningEventRequest &) = default ;
    RetryUserProvisioningEventRequest& operator=(RetryUserProvisioningEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->duplicationStrategy_ == nullptr && this->eventId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline RetryUserProvisioningEventRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // duplicationStrategy Field Functions 
    bool hasDuplicationStrategy() const { return this->duplicationStrategy_ != nullptr;};
    void deleteDuplicationStrategy() { this->duplicationStrategy_ = nullptr;};
    inline string getDuplicationStrategy() const { DARABONBA_PTR_GET_DEFAULT(duplicationStrategy_, "") };
    inline RetryUserProvisioningEventRequest& setDuplicationStrategy(string duplicationStrategy) { DARABONBA_PTR_SET_VALUE(duplicationStrategy_, duplicationStrategy) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RetryUserProvisioningEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The conflict handling policy. The policy is used when a RAM user has the same username as the CloudSSO user who is synchronized to RAM. Valid values:
    // 
    // *   KeepBoth: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system creates a RAM user whose username is the username of the CloudSSO user plus the suffix `_sso`.
    // *   TakeOver: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system replaces the RAM user with the CloudSSO user.
    shared_ptr<string> duplicationStrategy_ {};
    // The ID of the RAM user provisioning event.
    // 
    // You can call the [ListUserProvisioningEvents](https://help.aliyun.com/document_detail/2636305.html) operation to query the value of `EventId`.
    shared_ptr<string> eventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
