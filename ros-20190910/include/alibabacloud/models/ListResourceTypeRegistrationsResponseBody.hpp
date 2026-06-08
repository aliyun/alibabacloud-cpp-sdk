// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEREGISTRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEREGISTRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeRegistrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(Registrations, registrations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(Registrations, registrations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceTypeRegistrationsResponseBody() = default ;
    ListResourceTypeRegistrationsResponseBody(const ListResourceTypeRegistrationsResponseBody &) = default ;
    ListResourceTypeRegistrationsResponseBody(ListResourceTypeRegistrationsResponseBody &&) = default ;
    ListResourceTypeRegistrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeRegistrationsResponseBody() = default ;
    ListResourceTypeRegistrationsResponseBody& operator=(const ListResourceTypeRegistrationsResponseBody &) = default ;
    ListResourceTypeRegistrationsResponseBody& operator=(ListResourceTypeRegistrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Registrations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Registrations& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, Registrations& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      Registrations() = default ;
      Registrations(const Registrations &) = default ;
      Registrations(Registrations &&) = default ;
      Registrations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Registrations() = default ;
      Registrations& operator=(const Registrations &) = default ;
      Registrations& operator=(Registrations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->entityType_ == nullptr && this->registrationId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->versionId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Registrations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Registrations& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // registrationId Field Functions 
      bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
      void deleteRegistrationId() { this->registrationId_ = nullptr;};
      inline string getRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
      inline Registrations& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Registrations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Registrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Registrations& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline Registrations& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The creation time. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The entity type. Only Module may be returned.
      shared_ptr<string> entityType_ {};
      // The ID of the registration record.
      shared_ptr<string> registrationId_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The registration state. Valid values:
      // 
      // *   IN_PROGRESS: The registration is in progress.
      // *   COMPLETE: The registration is successful.
      // *   FAILED: The registration failed.
      shared_ptr<string> status_ {};
      // The reason for the state.
      shared_ptr<string> statusReason_ {};
      // The version ID.
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->registrations_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceTypeRegistrationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // registrations Field Functions 
    bool hasRegistrations() const { return this->registrations_ != nullptr;};
    void deleteRegistrations() { this->registrations_ = nullptr;};
    inline const vector<ListResourceTypeRegistrationsResponseBody::Registrations> & getRegistrations() const { DARABONBA_PTR_GET_CONST(registrations_, vector<ListResourceTypeRegistrationsResponseBody::Registrations>) };
    inline vector<ListResourceTypeRegistrationsResponseBody::Registrations> getRegistrations() { DARABONBA_PTR_GET(registrations_, vector<ListResourceTypeRegistrationsResponseBody::Registrations>) };
    inline ListResourceTypeRegistrationsResponseBody& setRegistrations(const vector<ListResourceTypeRegistrationsResponseBody::Registrations> & registrations) { DARABONBA_PTR_SET_VALUE(registrations_, registrations) };
    inline ListResourceTypeRegistrationsResponseBody& setRegistrations(vector<ListResourceTypeRegistrationsResponseBody::Registrations> && registrations) { DARABONBA_PTR_SET_RVALUE(registrations_, registrations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypeRegistrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceTypeRegistrationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The registration records of the resource.
    shared_ptr<vector<ListResourceTypeRegistrationsResponseBody::Registrations>> registrations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of registration records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
