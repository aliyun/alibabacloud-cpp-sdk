// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSASSIGNMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSASSIGNMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListAccessAssignmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessAssignmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessAssignmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListAccessAssignmentsRequest() = default ;
    ListAccessAssignmentsRequest(const ListAccessAssignmentsRequest &) = default ;
    ListAccessAssignmentsRequest(ListAccessAssignmentsRequest &&) = default ;
    ListAccessAssignmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessAssignmentsRequest() = default ;
    ListAccessAssignmentsRequest& operator=(const ListAccessAssignmentsRequest &) = default ;
    ListAccessAssignmentsRequest& operator=(ListAccessAssignmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->originTargetId_ == nullptr && this->principalId_ == nullptr
        && this->principalType_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline ListAccessAssignmentsRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListAccessAssignmentsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessAssignmentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessAssignmentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // originTargetId Field Functions 
    bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
    void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
    inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
    inline ListAccessAssignmentsRequest& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline ListAccessAssignmentsRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline ListAccessAssignmentsRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListAccessAssignmentsRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListAccessAssignmentsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the access configuration. This parameter is used as a filter condition for the query.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 20.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of query results. You do not need to specify `NextToken` when you call this operation for the first time.
    // 
    // When you call this operation for the first time, if the total number of returned entries exceeds the value of `MaxResults`, the returned entries are truncated. Only the number of entries specified by `MaxResults` is returned, the `IsTruncated` parameter is set to `true`, and a `NextToken` value is returned. You can use the returned `NextToken` value to call this operation again to query the truncated entries while keeping other request parameters unchanged. You can repeat this process until `IsTruncated` is set to `false`, which indicates that all entries are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the Alibaba Cloud account to which the authorization target belongs.
    shared_ptr<string> originTargetId_ {};
    // The ID of the CloudSSO identity, which is used as a filter condition for the query. Details:
    // 
    // - If `PrincipalType` is set to User, `PrincipalId` is the ID of the CloudSSO user.
    // - If `PrincipalType` is set to Group, `PrincipalId` is the ID of the CloudSSO group.
    // 
    // > You must specify both `PrincipalId` and `PrincipalType` for the filter condition to take effect.
    shared_ptr<string> principalId_ {};
    // The type of the CloudSSO identity, which is used as a filter condition for the query. Valid values:
    // 
    // - User: user.
    // - Group: group.
    // 
    // > You must specify both `PrincipalId` and `PrincipalType` for the filter condition to take effect.
    shared_ptr<string> principalType_ {};
    // The ID of the task target, which is used as a filter condition for the query.
    // 
    // > You must specify both `TargetId` and `TargetType` for the filter condition to take effect.
    shared_ptr<string> targetId_ {};
    // The type of the task target, which is used as a filter condition for the query.
    // 
    // Valid values:
    // - RD-Account: The task target is an account in a resource directory.
    // 
    // > You must specify both `TargetId` and `TargetType` for the filter condition to take effect.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
