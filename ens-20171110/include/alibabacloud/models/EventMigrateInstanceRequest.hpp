// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTMIGRATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVENTMIGRATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class EventMigrateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventMigrateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPolicy, dataPolicy_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(OpsType, opsType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, EventMigrateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPolicy, dataPolicy_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(OpsType, opsType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    EventMigrateInstanceRequest() = default ;
    EventMigrateInstanceRequest(const EventMigrateInstanceRequest &) = default ;
    EventMigrateInstanceRequest(EventMigrateInstanceRequest &&) = default ;
    EventMigrateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventMigrateInstanceRequest() = default ;
    EventMigrateInstanceRequest& operator=(const EventMigrateInstanceRequest &) = default ;
    EventMigrateInstanceRequest& operator=(EventMigrateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPolicy_ == nullptr
        && return this->eventId_ == nullptr && return this->opsType_ == nullptr && return this->password_ == nullptr && return this->planTime_ == nullptr && return this->resourceId_ == nullptr; };
    // dataPolicy Field Functions 
    bool hasDataPolicy() const { return this->dataPolicy_ != nullptr;};
    void deleteDataPolicy() { this->dataPolicy_ = nullptr;};
    inline string dataPolicy() const { DARABONBA_PTR_GET_DEFAULT(dataPolicy_, "") };
    inline EventMigrateInstanceRequest& setDataPolicy(string dataPolicy) { DARABONBA_PTR_SET_VALUE(dataPolicy_, dataPolicy) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline EventMigrateInstanceRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // opsType Field Functions 
    bool hasOpsType() const { return this->opsType_ != nullptr;};
    void deleteOpsType() { this->opsType_ = nullptr;};
    inline string opsType() const { DARABONBA_PTR_GET_DEFAULT(opsType_, "") };
    inline EventMigrateInstanceRequest& setOpsType(string opsType) { DARABONBA_PTR_SET_VALUE(opsType_, opsType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline EventMigrateInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // planTime Field Functions 
    bool hasPlanTime() const { return this->planTime_ != nullptr;};
    void deletePlanTime() { this->planTime_ = nullptr;};
    inline int64_t planTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, 0L) };
    inline EventMigrateInstanceRequest& setPlanTime(int64_t planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline EventMigrateInstanceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The data migration policy. Valid values:
    // 
    // *   abandon: does not migrate data. This is the default value.
    // *   force_transfer: forcibly migrates data.
    // *   try_transfer: Migrate data as much as possible.
    std::shared_ptr<string> dataPolicy_ = nullptr;
    // The ID of the system event.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    // The type of the O\\&M task. Valid values:
    // 
    // *   immediate
    // *   scheduled
    // 
    // This parameter is required.
    std::shared_ptr<string> opsType_ = nullptr;
    // The password of the instance. This parameter is optional. If you do not specify this parameter, a random password is used.
    // 
    // The password must be 8 to 30 characters in length. The password must contain uppercase letters, lowercase letters, digits, and special characters.
    // 
    // Note that you cannot enter a password for scheduled execution.
    std::shared_ptr<string> password_ = nullptr;
    // The execution time of the reservation. The timestamp is measured in milliseconds. If the OpsType parameter is set to scheduled, this parameter is required.
    std::shared_ptr<int64_t> planTime_ = nullptr;
    // The ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
