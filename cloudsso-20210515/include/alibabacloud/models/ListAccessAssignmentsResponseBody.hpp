// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSASSIGNMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSASSIGNMENTSRESPONSEBODY_HPP_
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
  class ListAccessAssignmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessAssignmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessAssignments, accessAssignments_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessAssignmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessAssignments, accessAssignments_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListAccessAssignmentsResponseBody() = default ;
    ListAccessAssignmentsResponseBody(const ListAccessAssignmentsResponseBody &) = default ;
    ListAccessAssignmentsResponseBody(ListAccessAssignmentsResponseBody &&) = default ;
    ListAccessAssignmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessAssignmentsResponseBody() = default ;
    ListAccessAssignmentsResponseBody& operator=(const ListAccessAssignmentsResponseBody &) = default ;
    ListAccessAssignmentsResponseBody& operator=(ListAccessAssignmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessAssignments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessAssignments& obj) { 
        DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessAssignments& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      AccessAssignments() = default ;
      AccessAssignments(const AccessAssignments &) = default ;
      AccessAssignments(AccessAssignments &&) = default ;
      AccessAssignments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessAssignments() = default ;
      AccessAssignments& operator=(const AccessAssignments &) = default ;
      AccessAssignments& operator=(AccessAssignments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->accessConfigurationName_ == nullptr && this->createTime_ == nullptr && this->originTargetId_ == nullptr && this->principalId_ == nullptr && this->principalName_ == nullptr
        && this->principalType_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetPath_ == nullptr && this->targetPathName_ == nullptr
        && this->targetType_ == nullptr; };
      // accessConfigurationId Field Functions 
      bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
      void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
      inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
      inline AccessAssignments& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


      // accessConfigurationName Field Functions 
      bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
      void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
      inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
      inline AccessAssignments& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessAssignments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // originTargetId Field Functions 
      bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
      void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
      inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
      inline AccessAssignments& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline AccessAssignments& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline AccessAssignments& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline AccessAssignments& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline AccessAssignments& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline AccessAssignments& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline AccessAssignments& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetPathName Field Functions 
      bool hasTargetPathName() const { return this->targetPathName_ != nullptr;};
      void deleteTargetPathName() { this->targetPathName_ = nullptr;};
      inline string getTargetPathName() const { DARABONBA_PTR_GET_DEFAULT(targetPathName_, "") };
      inline AccessAssignments& setTargetPathName(string targetPathName) { DARABONBA_PTR_SET_VALUE(targetPathName_, targetPathName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline AccessAssignments& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The ID of the access configuration.
      shared_ptr<string> accessConfigurationId_ {};
      // The name of the access configuration.
      shared_ptr<string> accessConfigurationName_ {};
      // The time when the access permissions were assigned.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> originTargetId_ {};
      // The ID of the CloudSSO identity.
      shared_ptr<string> principalId_ {};
      // The name of the CloudSSO identity.
      shared_ptr<string> principalName_ {};
      // The type of the CloudSSO identity. Valid values:
      // 
      // - User
      // 
      // - Group
      shared_ptr<string> principalType_ {};
      // The ID of the task object.
      shared_ptr<string> targetId_ {};
      // The name of the task object.
      shared_ptr<string> targetName_ {};
      // The path ID of the task object in the resource directory.
      shared_ptr<string> targetPath_ {};
      // The path name of the task object in the resource directory.
      shared_ptr<string> targetPathName_ {};
      // The type of the task object.
      // 
      // The value is fixed as RD-Account, which indicates the accounts in the resource directory.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->accessAssignments_ == nullptr
        && this->isTruncated_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // accessAssignments Field Functions 
    bool hasAccessAssignments() const { return this->accessAssignments_ != nullptr;};
    void deleteAccessAssignments() { this->accessAssignments_ = nullptr;};
    inline const vector<ListAccessAssignmentsResponseBody::AccessAssignments> & getAccessAssignments() const { DARABONBA_PTR_GET_CONST(accessAssignments_, vector<ListAccessAssignmentsResponseBody::AccessAssignments>) };
    inline vector<ListAccessAssignmentsResponseBody::AccessAssignments> getAccessAssignments() { DARABONBA_PTR_GET(accessAssignments_, vector<ListAccessAssignmentsResponseBody::AccessAssignments>) };
    inline ListAccessAssignmentsResponseBody& setAccessAssignments(const vector<ListAccessAssignmentsResponseBody::AccessAssignments> & accessAssignments) { DARABONBA_PTR_SET_VALUE(accessAssignments_, accessAssignments) };
    inline ListAccessAssignmentsResponseBody& setAccessAssignments(vector<ListAccessAssignmentsResponseBody::AccessAssignments> && accessAssignments) { DARABONBA_PTR_SET_RVALUE(accessAssignments_, accessAssignments) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListAccessAssignmentsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessAssignmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessAssignmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessAssignmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListAccessAssignmentsResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The access permissions that are assigned.
    shared_ptr<vector<ListAccessAssignmentsResponseBody::AccessAssignments>> accessAssignments_ {};
    // Indicates whether the queried entries are truncated. Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<bool> isTruncated_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    // 
    // > This parameter is returned only when the value of IsTruncated is `true`.\\`\\`
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
