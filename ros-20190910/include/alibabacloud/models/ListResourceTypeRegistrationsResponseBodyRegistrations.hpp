// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEREGISTRATIONSRESPONSEBODYREGISTRATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEREGISTRATIONSRESPONSEBODYREGISTRATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeRegistrationsResponseBodyRegistrations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeRegistrationsResponseBodyRegistrations& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeRegistrationsResponseBodyRegistrations& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    ListResourceTypeRegistrationsResponseBodyRegistrations() = default ;
    ListResourceTypeRegistrationsResponseBodyRegistrations(const ListResourceTypeRegistrationsResponseBodyRegistrations &) = default ;
    ListResourceTypeRegistrationsResponseBodyRegistrations(ListResourceTypeRegistrationsResponseBodyRegistrations &&) = default ;
    ListResourceTypeRegistrationsResponseBodyRegistrations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeRegistrationsResponseBodyRegistrations() = default ;
    ListResourceTypeRegistrationsResponseBodyRegistrations& operator=(const ListResourceTypeRegistrationsResponseBodyRegistrations &) = default ;
    ListResourceTypeRegistrationsResponseBodyRegistrations& operator=(ListResourceTypeRegistrationsResponseBodyRegistrations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->entityType_ != nullptr && this->registrationId_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr
        && this->versionId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string registrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ListResourceTypeRegistrationsResponseBodyRegistrations& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The creation time. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The entity type. Only Module may be returned.
    std::shared_ptr<string> entityType_ = nullptr;
    // The ID of the registration record.
    std::shared_ptr<string> registrationId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The registration state. Valid values:
    // 
    // *   IN_PROGRESS: The registration is in progress.
    // *   COMPLETE: The registration is successful.
    // *   FAILED: The registration failed.
    std::shared_ptr<string> status_ = nullptr;
    // The reason for the state.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The version ID.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
