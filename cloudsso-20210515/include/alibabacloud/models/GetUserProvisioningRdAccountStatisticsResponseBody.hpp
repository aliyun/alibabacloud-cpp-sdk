// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERPROVISIONINGRDACCOUNTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERPROVISIONINGRDACCOUNTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserProvisioningRdAccountStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserProvisioningRdAccountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserProvisioningStatistics, userProvisioningStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserProvisioningRdAccountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserProvisioningStatistics, userProvisioningStatistics_);
    };
    GetUserProvisioningRdAccountStatisticsResponseBody() = default ;
    GetUserProvisioningRdAccountStatisticsResponseBody(const GetUserProvisioningRdAccountStatisticsResponseBody &) = default ;
    GetUserProvisioningRdAccountStatisticsResponseBody(GetUserProvisioningRdAccountStatisticsResponseBody &&) = default ;
    GetUserProvisioningRdAccountStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserProvisioningRdAccountStatisticsResponseBody() = default ;
    GetUserProvisioningRdAccountStatisticsResponseBody& operator=(const GetUserProvisioningRdAccountStatisticsResponseBody &) = default ;
    GetUserProvisioningRdAccountStatisticsResponseBody& operator=(GetUserProvisioningRdAccountStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProvisioningStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProvisioningStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(FailedEventCount, failedEventCount_);
        DARABONBA_PTR_TO_JSON(LatestAsyncTime, latestAsyncTime_);
        DARABONBA_PTR_TO_JSON(OwnerPk, ownerPk_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UserProvisioningStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(FailedEventCount, failedEventCount_);
        DARABONBA_PTR_FROM_JSON(LatestAsyncTime, latestAsyncTime_);
        DARABONBA_PTR_FROM_JSON(OwnerPk, ownerPk_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UserProvisioningStatistics() = default ;
      UserProvisioningStatistics(const UserProvisioningStatistics &) = default ;
      UserProvisioningStatistics(UserProvisioningStatistics &&) = default ;
      UserProvisioningStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserProvisioningStatistics() = default ;
      UserProvisioningStatistics& operator=(const UserProvisioningStatistics &) = default ;
      UserProvisioningStatistics& operator=(UserProvisioningStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->entityId_ == nullptr && this->failedEventCount_ == nullptr && this->latestAsyncTime_ == nullptr && this->ownerPk_ == nullptr && this->type_ == nullptr; };
      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline UserProvisioningStatistics& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline UserProvisioningStatistics& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // failedEventCount Field Functions 
      bool hasFailedEventCount() const { return this->failedEventCount_ != nullptr;};
      void deleteFailedEventCount() { this->failedEventCount_ = nullptr;};
      inline int64_t getFailedEventCount() const { DARABONBA_PTR_GET_DEFAULT(failedEventCount_, 0L) };
      inline UserProvisioningStatistics& setFailedEventCount(int64_t failedEventCount) { DARABONBA_PTR_SET_VALUE(failedEventCount_, failedEventCount) };


      // latestAsyncTime Field Functions 
      bool hasLatestAsyncTime() const { return this->latestAsyncTime_ != nullptr;};
      void deleteLatestAsyncTime() { this->latestAsyncTime_ = nullptr;};
      inline string getLatestAsyncTime() const { DARABONBA_PTR_GET_DEFAULT(latestAsyncTime_, "") };
      inline UserProvisioningStatistics& setLatestAsyncTime(string latestAsyncTime) { DARABONBA_PTR_SET_VALUE(latestAsyncTime_, latestAsyncTime) };


      // ownerPk Field Functions 
      bool hasOwnerPk() const { return this->ownerPk_ != nullptr;};
      void deleteOwnerPk() { this->ownerPk_ = nullptr;};
      inline string getOwnerPk() const { DARABONBA_PTR_GET_DEFAULT(ownerPk_, "") };
      inline UserProvisioningStatistics& setOwnerPk(string ownerPk) { DARABONBA_PTR_SET_VALUE(ownerPk_, ownerPk) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UserProvisioningStatistics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the resource directory.
      shared_ptr<string> directoryId_ {};
      // The entity ID, which is the ID of the member in the resource directory.
      shared_ptr<string> entityId_ {};
      // The number of failed RAM user provisioning events.
      shared_ptr<int64_t> failedEventCount_ {};
      // The time when the RAM user provisioning was last performed.
      shared_ptr<string> latestAsyncTime_ {};
      // The ID of the Alibaba Cloud account to which the resource directory belongs.
      shared_ptr<string> ownerPk_ {};
      // The entity type. The value is fixed as `RD Account`.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userProvisioningStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserProvisioningRdAccountStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userProvisioningStatistics Field Functions 
    bool hasUserProvisioningStatistics() const { return this->userProvisioningStatistics_ != nullptr;};
    void deleteUserProvisioningStatistics() { this->userProvisioningStatistics_ = nullptr;};
    inline const GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics & getUserProvisioningStatistics() const { DARABONBA_PTR_GET_CONST(userProvisioningStatistics_, GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics) };
    inline GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics getUserProvisioningStatistics() { DARABONBA_PTR_GET(userProvisioningStatistics_, GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics) };
    inline GetUserProvisioningRdAccountStatisticsResponseBody& setUserProvisioningStatistics(const GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics & userProvisioningStatistics) { DARABONBA_PTR_SET_VALUE(userProvisioningStatistics_, userProvisioningStatistics) };
    inline GetUserProvisioningRdAccountStatisticsResponseBody& setUserProvisioningStatistics(GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics && userProvisioningStatistics) { DARABONBA_PTR_SET_RVALUE(userProvisioningStatistics_, userProvisioningStatistics) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics of the RAM user provisioning.
    shared_ptr<GetUserProvisioningRdAccountStatisticsResponseBody::UserProvisioningStatistics> userProvisioningStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
