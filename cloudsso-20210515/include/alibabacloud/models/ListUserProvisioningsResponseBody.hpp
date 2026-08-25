// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPROVISIONINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPROVISIONINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListUserProvisioningsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserProvisioningsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
      DARABONBA_PTR_TO_JSON(UserProvisionings, userProvisionings_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserProvisioningsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
      DARABONBA_PTR_FROM_JSON(UserProvisionings, userProvisionings_);
    };
    ListUserProvisioningsResponseBody() = default ;
    ListUserProvisioningsResponseBody(const ListUserProvisioningsResponseBody &) = default ;
    ListUserProvisioningsResponseBody(ListUserProvisioningsResponseBody &&) = default ;
    ListUserProvisioningsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserProvisioningsResponseBody() = default ;
    ListUserProvisioningsResponseBody& operator=(const ListUserProvisioningsResponseBody &) = default ;
    ListUserProvisioningsResponseBody& operator=(ListUserProvisioningsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserProvisionings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserProvisionings& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeletionStrategy, deletionStrategy_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DuplicationStrategy, duplicationStrategy_);
        DARABONBA_PTR_TO_JSON(OwnerPk, ownerPk_);
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserProvisioningId, userProvisioningId_);
      };
      friend void from_json(const Darabonba::Json& j, UserProvisionings& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeletionStrategy, deletionStrategy_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DuplicationStrategy, duplicationStrategy_);
        DARABONBA_PTR_FROM_JSON(OwnerPk, ownerPk_);
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserProvisioningId, userProvisioningId_);
      };
      UserProvisionings() = default ;
      UserProvisionings(const UserProvisionings &) = default ;
      UserProvisionings(UserProvisionings &&) = default ;
      UserProvisionings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserProvisionings() = default ;
      UserProvisionings& operator=(const UserProvisionings &) = default ;
      UserProvisionings& operator=(UserProvisionings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->deletionStrategy_ == nullptr && this->description_ == nullptr && this->directoryId_ == nullptr && this->duplicationStrategy_ == nullptr && this->ownerPk_ == nullptr
        && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->status_ == nullptr && this->targetId_ == nullptr
        && this->targetName_ == nullptr && this->targetPath_ == nullptr && this->targetType_ == nullptr && this->updateTime_ == nullptr && this->userProvisioningId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserProvisionings& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionStrategy Field Functions 
      bool hasDeletionStrategy() const { return this->deletionStrategy_ != nullptr;};
      void deleteDeletionStrategy() { this->deletionStrategy_ = nullptr;};
      inline string getDeletionStrategy() const { DARABONBA_PTR_GET_DEFAULT(deletionStrategy_, "") };
      inline UserProvisionings& setDeletionStrategy(string deletionStrategy) { DARABONBA_PTR_SET_VALUE(deletionStrategy_, deletionStrategy) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserProvisionings& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline UserProvisionings& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // duplicationStrategy Field Functions 
      bool hasDuplicationStrategy() const { return this->duplicationStrategy_ != nullptr;};
      void deleteDuplicationStrategy() { this->duplicationStrategy_ = nullptr;};
      inline string getDuplicationStrategy() const { DARABONBA_PTR_GET_DEFAULT(duplicationStrategy_, "") };
      inline UserProvisionings& setDuplicationStrategy(string duplicationStrategy) { DARABONBA_PTR_SET_VALUE(duplicationStrategy_, duplicationStrategy) };


      // ownerPk Field Functions 
      bool hasOwnerPk() const { return this->ownerPk_ != nullptr;};
      void deleteOwnerPk() { this->ownerPk_ = nullptr;};
      inline string getOwnerPk() const { DARABONBA_PTR_GET_DEFAULT(ownerPk_, "") };
      inline UserProvisionings& setOwnerPk(string ownerPk) { DARABONBA_PTR_SET_VALUE(ownerPk_, ownerPk) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline UserProvisionings& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline UserProvisionings& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline UserProvisionings& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UserProvisionings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline UserProvisionings& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline UserProvisionings& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline UserProvisionings& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline UserProvisionings& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline UserProvisionings& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userProvisioningId Field Functions 
      bool hasUserProvisioningId() const { return this->userProvisioningId_ != nullptr;};
      void deleteUserProvisioningId() { this->userProvisioningId_ = nullptr;};
      inline string getUserProvisioningId() const { DARABONBA_PTR_GET_DEFAULT(userProvisioningId_, "") };
      inline UserProvisionings& setUserProvisioningId(string userProvisioningId) { DARABONBA_PTR_SET_VALUE(userProvisioningId_, userProvisioningId) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The deletion policy. The policy is used to manage synchronized users when you delete the RAM user provisioning. Valid values:
      // 
      // - Delete: When you delete the RAM user provisioning, the system deletes the synchronized users.
      // 
      // - Keep: When you delete the RAM user provisioning, the system retains the synchronized users.
      shared_ptr<string> deletionStrategy_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The ID of the resource directory.
      shared_ptr<string> directoryId_ {};
      // The conflict handling policy. The policy is used when a RAM user has the same username as the CloudSSO user who is synchronized to RAM. Valid values:
      // 
      // - KeepBoth: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system creates a RAM user whose username is the username of the CloudSSO user plus the suffix `_sso`.
      // 
      // - TakeOver: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system replaces the RAM user with the CloudSSO user.
      shared_ptr<string> duplicationStrategy_ {};
      // The ID of the Alibaba Cloud account to which the resource directory belongs.
      shared_ptr<string> ownerPk_ {};
      // The identity ID of the RAM user provisioning. Valid values:
      // 
      // - If `Group` is returned for the `PrincipalType` parameter, the value of this parameter is the ID of a CloudSSO user group (g-\\*\\*\\*\\*\\*\\*\\*\\*).
      // 
      // - If `User` is returned for the `PrincipalType` parameter, the value of this parameter is the ID of a CloudSSO user (u-\\*\\*\\*\\*\\*\\*\\*\\*).
      shared_ptr<string> principalId_ {};
      // The identity name of the RAM user provisioning. Valid values:
      // 
      // - If `Group` is returned for the `PrincipalType` parameter, the value of this parameter is the name of a CloudSSO user group.
      // 
      // - If `User` is returned for the `PrincipalType` parameter, the value of this parameter is the name of a CloudSSO user.
      shared_ptr<string> principalName_ {};
      // The identity type of the RAM user provisioning. Valid values:
      // 
      // - User: The identity of the RAM user provisioning is a CloudSSO user.
      // 
      // - Group: The identity of the RAM user provisioning is a CloudSSO user group.
      shared_ptr<string> principalType_ {};
      // The status of the RAM user provisioning. Valid values:
      // 
      // - Enabled
      // 
      // - Disabled
      shared_ptr<string> status_ {};
      // The ID of the object for which you create the RAM user provisioning. The value is fixed as the ID of the member in the resource directory.
      shared_ptr<string> targetId_ {};
      // The object for which you create the RAM user provisioning. The value is fixed as `RD-Account`.
      shared_ptr<string> targetName_ {};
      // The path of the resource directory in which you create the RAM user provisioning for the object.
      shared_ptr<string> targetPath_ {};
      // The object for which you create the RAM user provisioning. The value is fixed as `RD-Account`.
      shared_ptr<string> targetType_ {};
      // The modification time.
      shared_ptr<string> updateTime_ {};
      // The ID of the RAM user provisioning.
      shared_ptr<string> userProvisioningId_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr && this->userProvisionings_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListUserProvisioningsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserProvisioningsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserProvisioningsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserProvisioningsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListUserProvisioningsResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


    // userProvisionings Field Functions 
    bool hasUserProvisionings() const { return this->userProvisionings_ != nullptr;};
    void deleteUserProvisionings() { this->userProvisionings_ = nullptr;};
    inline const vector<ListUserProvisioningsResponseBody::UserProvisionings> & getUserProvisionings() const { DARABONBA_PTR_GET_CONST(userProvisionings_, vector<ListUserProvisioningsResponseBody::UserProvisionings>) };
    inline vector<ListUserProvisioningsResponseBody::UserProvisionings> getUserProvisionings() { DARABONBA_PTR_GET(userProvisionings_, vector<ListUserProvisioningsResponseBody::UserProvisionings>) };
    inline ListUserProvisioningsResponseBody& setUserProvisionings(const vector<ListUserProvisioningsResponseBody::UserProvisionings> & userProvisionings) { DARABONBA_PTR_SET_VALUE(userProvisionings_, userProvisionings) };
    inline ListUserProvisioningsResponseBody& setUserProvisionings(vector<ListUserProvisioningsResponseBody::UserProvisionings> && userProvisionings) { DARABONBA_PTR_SET_RVALUE(userProvisionings_, userProvisionings) };


  protected:
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<bool> isTruncated_ {};
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to initiate the next request.
    // 
    // > This parameter is returned only when the `IsTruncated` parameter is set to `true`.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCounts_ {};
    // The RAM user provisionings.
    shared_ptr<vector<ListUserProvisioningsResponseBody::UserProvisionings>> userProvisionings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
