// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERPROVISIONINGEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERPROVISIONINGEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserProvisioningEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserProvisioningEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserProvisioningEvent, userProvisioningEvent_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserProvisioningEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserProvisioningEvent, userProvisioningEvent_);
    };
    GetUserProvisioningEventResponseBody() = default ;
    GetUserProvisioningEventResponseBody(const GetUserProvisioningEventResponseBody &) = default ;
    GetUserProvisioningEventResponseBody(GetUserProvisioningEventResponseBody &&) = default ;
    GetUserProvisioningEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserProvisioningEventResponseBody() = default ;
    GetUserProvisioningEventResponseBody& operator=(const GetUserProvisioningEventResponseBody &) = default ;
    GetUserProvisioningEventResponseBody& operator=(GetUserProvisioningEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProvisioningEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProvisioningEvent& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeletionStrategy, deletionStrategy_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DuplicationStrategy, duplicationStrategy_);
        DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
        DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(LatestAsyncTime, latestAsyncTime_);
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserProvisioningId, userProvisioningId_);
      };
      friend void from_json(const Darabonba::Json& j, UserProvisioningEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeletionStrategy, deletionStrategy_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DuplicationStrategy, duplicationStrategy_);
        DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
        DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(LatestAsyncTime, latestAsyncTime_);
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserProvisioningId, userProvisioningId_);
      };
      UserProvisioningEvent() = default ;
      UserProvisioningEvent(const UserProvisioningEvent &) = default ;
      UserProvisioningEvent(UserProvisioningEvent &&) = default ;
      UserProvisioningEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserProvisioningEvent() = default ;
      UserProvisioningEvent& operator=(const UserProvisioningEvent &) = default ;
      UserProvisioningEvent& operator=(UserProvisioningEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deletionStrategy_ == nullptr && this->directoryId_ == nullptr && this->duplicationStrategy_ == nullptr && this->errorCount_ == nullptr && this->errorInfo_ == nullptr
        && this->eventId_ == nullptr && this->latestAsyncTime_ == nullptr && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr
        && this->sourceType_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetPath_ == nullptr && this->targetType_ == nullptr
        && this->updateTime_ == nullptr && this->userProvisioningId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserProvisioningEvent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionStrategy Field Functions 
      bool hasDeletionStrategy() const { return this->deletionStrategy_ != nullptr;};
      void deleteDeletionStrategy() { this->deletionStrategy_ = nullptr;};
      inline string getDeletionStrategy() const { DARABONBA_PTR_GET_DEFAULT(deletionStrategy_, "") };
      inline UserProvisioningEvent& setDeletionStrategy(string deletionStrategy) { DARABONBA_PTR_SET_VALUE(deletionStrategy_, deletionStrategy) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline UserProvisioningEvent& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // duplicationStrategy Field Functions 
      bool hasDuplicationStrategy() const { return this->duplicationStrategy_ != nullptr;};
      void deleteDuplicationStrategy() { this->duplicationStrategy_ = nullptr;};
      inline string getDuplicationStrategy() const { DARABONBA_PTR_GET_DEFAULT(duplicationStrategy_, "") };
      inline UserProvisioningEvent& setDuplicationStrategy(string duplicationStrategy) { DARABONBA_PTR_SET_VALUE(duplicationStrategy_, duplicationStrategy) };


      // errorCount Field Functions 
      bool hasErrorCount() const { return this->errorCount_ != nullptr;};
      void deleteErrorCount() { this->errorCount_ = nullptr;};
      inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
      inline UserProvisioningEvent& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline UserProvisioningEvent& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline UserProvisioningEvent& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // latestAsyncTime Field Functions 
      bool hasLatestAsyncTime() const { return this->latestAsyncTime_ != nullptr;};
      void deleteLatestAsyncTime() { this->latestAsyncTime_ = nullptr;};
      inline string getLatestAsyncTime() const { DARABONBA_PTR_GET_DEFAULT(latestAsyncTime_, "") };
      inline UserProvisioningEvent& setLatestAsyncTime(string latestAsyncTime) { DARABONBA_PTR_SET_VALUE(latestAsyncTime_, latestAsyncTime) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline UserProvisioningEvent& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline UserProvisioningEvent& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline UserProvisioningEvent& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline UserProvisioningEvent& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline UserProvisioningEvent& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline UserProvisioningEvent& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline UserProvisioningEvent& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline UserProvisioningEvent& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline UserProvisioningEvent& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userProvisioningId Field Functions 
      bool hasUserProvisioningId() const { return this->userProvisioningId_ != nullptr;};
      void deleteUserProvisioningId() { this->userProvisioningId_ = nullptr;};
      inline string getUserProvisioningId() const { DARABONBA_PTR_GET_DEFAULT(userProvisioningId_, "") };
      inline UserProvisioningEvent& setUserProvisioningId(string userProvisioningId) { DARABONBA_PTR_SET_VALUE(userProvisioningId_, userProvisioningId) };


    protected:
      // The creation time. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The deletion policy. The policy is used to manage synchronized users when you delete the RAM user provisioning. Valid values:
      // 
      // *   Delete: When you delete the RAM user provisioning, the system deletes the synchronized users.
      // *   Keep: When you delete the RAM user provisioning, the system retains the synchronized users.
      shared_ptr<string> deletionStrategy_ {};
      // The ID of the resource directory.
      shared_ptr<string> directoryId_ {};
      // The conflict handling policy. The policy is used when a RAM user has the same username as the CloudSSO user who is synchronized to RAM. Valid values:
      // 
      // *   KeepBoth: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system creates a RAM user whose username is the username of the CloudSSO user plus the suffix `_sso`.
      // *   TakeOver: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system replaces the RAM user with the CloudSSO user.
      shared_ptr<string> duplicationStrategy_ {};
      // The number of execution failures.
      shared_ptr<int64_t> errorCount_ {};
      // The error message that is displayed when the last execution of the RAM user provisioning event failed.
      shared_ptr<string> errorInfo_ {};
      // The ID of the RAM user provisioning event.
      shared_ptr<string> eventId_ {};
      // The time at which the RAM user provisioning event was last executed. The time is displayed in UTC.
      shared_ptr<string> latestAsyncTime_ {};
      // The identity ID of the RAM user provisioning. Valid values:
      // 
      // *   If `Group` is returned for the `PrincipalType` parameter, the value of this parameter is the ID of a CloudSSO user group (g-\\*\\*\\*\\*\\*\\*\\*\\*).
      // *   If `User` is returned for the `PrincipalType` parameter, the value of this parameter is the ID of a CloudSSO user (u-\\*\\*\\*\\*\\*\\*\\*\\*).
      shared_ptr<string> principalId_ {};
      // The identity name of the RAM user provisioning. Valid values:
      // 
      // *   If `Group` is returned for the `PrincipalType` parameter, the value of this parameter is the name of a CloudSSO user group.
      // *   If `User` is returned for the `PrincipalType` parameter, the value of this parameter is the name of a CloudSSO user.
      shared_ptr<string> principalName_ {};
      // The identity type of the RAM user provisioning. Valid values:
      // 
      // *   User: The identity of the RAM user provisioning is a CloudSSO user.
      // *   Group: The identity of the RAM user provisioning is a CloudSSO user group.
      shared_ptr<string> principalType_ {};
      // The type of the source operation. Valid values:
      // 
      // *   StartProvisioning: enables the RAM user provisioning.
      // *   DeleteProvisioning: deletes the RAM user provisioning.
      // *   AddUserToGroup: adds a user to a user group.
      // *   RemoveUserFromGroup: removes a user from a user group.
      // *   UserProvisioningDeletionClearing: deletes the RAM user provisioning and clears resources in the background.
      shared_ptr<string> sourceType_ {};
      // The ID of the object for which you create the RAM user provisioning.
      // 
      // The value is fixed as the ID of the member in the resource directory.````
      shared_ptr<string> targetId_ {};
      // The name of the object for which you create the RAM user provisioning.
      // 
      // The value is fixed as the name of the member in the resource directory.````
      shared_ptr<string> targetName_ {};
      // The path of the resource directory in which you create the RAM user provisioning for the object.
      shared_ptr<string> targetPath_ {};
      // The object for which you create the RAM user provisioning. The value is fixed as `RD-Account`.
      shared_ptr<string> targetType_ {};
      // The modification time. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The ID of the RAM user provisioning event.
      shared_ptr<string> userProvisioningId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userProvisioningEvent_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserProvisioningEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userProvisioningEvent Field Functions 
    bool hasUserProvisioningEvent() const { return this->userProvisioningEvent_ != nullptr;};
    void deleteUserProvisioningEvent() { this->userProvisioningEvent_ = nullptr;};
    inline const GetUserProvisioningEventResponseBody::UserProvisioningEvent & getUserProvisioningEvent() const { DARABONBA_PTR_GET_CONST(userProvisioningEvent_, GetUserProvisioningEventResponseBody::UserProvisioningEvent) };
    inline GetUserProvisioningEventResponseBody::UserProvisioningEvent getUserProvisioningEvent() { DARABONBA_PTR_GET(userProvisioningEvent_, GetUserProvisioningEventResponseBody::UserProvisioningEvent) };
    inline GetUserProvisioningEventResponseBody& setUserProvisioningEvent(const GetUserProvisioningEventResponseBody::UserProvisioningEvent & userProvisioningEvent) { DARABONBA_PTR_SET_VALUE(userProvisioningEvent_, userProvisioningEvent) };
    inline GetUserProvisioningEventResponseBody& setUserProvisioningEvent(GetUserProvisioningEventResponseBody::UserProvisioningEvent && userProvisioningEvent) { DARABONBA_PTR_SET_RVALUE(userProvisioningEvent_, userProvisioningEvent) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The RAM user provisioning event.
    shared_ptr<GetUserProvisioningEventResponseBody::UserProvisioningEvent> userProvisioningEvent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
