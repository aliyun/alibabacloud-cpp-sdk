// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKLOADIDENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKLOADIDENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListWorkloadIdentitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkloadIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentities, workloadIdentities_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkloadIdentitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentities, workloadIdentities_);
    };
    ListWorkloadIdentitiesResponseBody() = default ;
    ListWorkloadIdentitiesResponseBody(const ListWorkloadIdentitiesResponseBody &) = default ;
    ListWorkloadIdentitiesResponseBody(ListWorkloadIdentitiesResponseBody &&) = default ;
    ListWorkloadIdentitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkloadIdentitiesResponseBody() = default ;
    ListWorkloadIdentitiesResponseBody& operator=(const ListWorkloadIdentitiesResponseBody &) = default ;
    ListWorkloadIdentitiesResponseBody& operator=(ListWorkloadIdentitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkloadIdentities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkloadIdentities& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(SessionBindingEnabled, sessionBindingEnabled_);
        DARABONBA_PTR_TO_JSON(SourceAgentArn, sourceAgentArn_);
        DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
        DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
      };
      friend void from_json(const Darabonba::Json& j, WorkloadIdentities& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(SessionBindingEnabled, sessionBindingEnabled_);
        DARABONBA_PTR_FROM_JSON(SourceAgentArn, sourceAgentArn_);
        DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
        DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
      };
      WorkloadIdentities() = default ;
      WorkloadIdentities(const WorkloadIdentities &) = default ;
      WorkloadIdentities(WorkloadIdentities &&) = default ;
      WorkloadIdentities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkloadIdentities() = default ;
      WorkloadIdentities& operator=(const WorkloadIdentities &) = default ;
      WorkloadIdentities& operator=(WorkloadIdentities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedResourceOAuth2ReturnURLs_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->identityProviderName_ == nullptr && this->roleArn_ == nullptr && this->sessionBindingEnabled_ == nullptr
        && this->sourceAgentArn_ == nullptr && this->sourcePlatform_ == nullptr && this->updateTime_ == nullptr && this->workloadIdentityArn_ == nullptr && this->workloadIdentityName_ == nullptr; };
      // allowedResourceOAuth2ReturnURLs Field Functions 
      bool hasAllowedResourceOAuth2ReturnURLs() const { return this->allowedResourceOAuth2ReturnURLs_ != nullptr;};
      void deleteAllowedResourceOAuth2ReturnURLs() { this->allowedResourceOAuth2ReturnURLs_ = nullptr;};
      inline const vector<string> & getAllowedResourceOAuth2ReturnURLs() const { DARABONBA_PTR_GET_CONST(allowedResourceOAuth2ReturnURLs_, vector<string>) };
      inline vector<string> getAllowedResourceOAuth2ReturnURLs() { DARABONBA_PTR_GET(allowedResourceOAuth2ReturnURLs_, vector<string>) };
      inline WorkloadIdentities& setAllowedResourceOAuth2ReturnURLs(const vector<string> & allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_VALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };
      inline WorkloadIdentities& setAllowedResourceOAuth2ReturnURLs(vector<string> && allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_RVALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline WorkloadIdentities& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline WorkloadIdentities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline WorkloadIdentities& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline WorkloadIdentities& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // sessionBindingEnabled Field Functions 
      bool hasSessionBindingEnabled() const { return this->sessionBindingEnabled_ != nullptr;};
      void deleteSessionBindingEnabled() { this->sessionBindingEnabled_ = nullptr;};
      inline bool getSessionBindingEnabled() const { DARABONBA_PTR_GET_DEFAULT(sessionBindingEnabled_, false) };
      inline WorkloadIdentities& setSessionBindingEnabled(bool sessionBindingEnabled) { DARABONBA_PTR_SET_VALUE(sessionBindingEnabled_, sessionBindingEnabled) };


      // sourceAgentArn Field Functions 
      bool hasSourceAgentArn() const { return this->sourceAgentArn_ != nullptr;};
      void deleteSourceAgentArn() { this->sourceAgentArn_ = nullptr;};
      inline string getSourceAgentArn() const { DARABONBA_PTR_GET_DEFAULT(sourceAgentArn_, "") };
      inline WorkloadIdentities& setSourceAgentArn(string sourceAgentArn) { DARABONBA_PTR_SET_VALUE(sourceAgentArn_, sourceAgentArn) };


      // sourcePlatform Field Functions 
      bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
      void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
      inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
      inline WorkloadIdentities& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline WorkloadIdentities& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workloadIdentityArn Field Functions 
      bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
      void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
      inline string getWorkloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
      inline WorkloadIdentities& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


      // workloadIdentityName Field Functions 
      bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
      void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
      inline string getWorkloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
      inline WorkloadIdentities& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


    protected:
      shared_ptr<vector<string>> allowedResourceOAuth2ReturnURLs_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> identityProviderName_ {};
      shared_ptr<string> roleArn_ {};
      shared_ptr<bool> sessionBindingEnabled_ {};
      shared_ptr<string> sourceAgentArn_ {};
      shared_ptr<string> sourcePlatform_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> workloadIdentityArn_ {};
      shared_ptr<string> workloadIdentityName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->workloadIdentities_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkloadIdentitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkloadIdentitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkloadIdentitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkloadIdentitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workloadIdentities Field Functions 
    bool hasWorkloadIdentities() const { return this->workloadIdentities_ != nullptr;};
    void deleteWorkloadIdentities() { this->workloadIdentities_ = nullptr;};
    inline const vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities> & getWorkloadIdentities() const { DARABONBA_PTR_GET_CONST(workloadIdentities_, vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities>) };
    inline vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities> getWorkloadIdentities() { DARABONBA_PTR_GET(workloadIdentities_, vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities>) };
    inline ListWorkloadIdentitiesResponseBody& setWorkloadIdentities(const vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities> & workloadIdentities) { DARABONBA_PTR_SET_VALUE(workloadIdentities_, workloadIdentities) };
    inline ListWorkloadIdentitiesResponseBody& setWorkloadIdentities(vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities> && workloadIdentities) { DARABONBA_PTR_SET_RVALUE(workloadIdentities_, workloadIdentities) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListWorkloadIdentitiesResponseBody::WorkloadIdentities>> workloadIdentities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
