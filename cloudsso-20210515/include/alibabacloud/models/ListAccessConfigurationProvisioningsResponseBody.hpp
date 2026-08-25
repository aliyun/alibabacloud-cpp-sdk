// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONPROVISIONINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONPROVISIONINGSRESPONSEBODY_HPP_
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
  class ListAccessConfigurationProvisioningsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessConfigurationProvisioningsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationProvisionings, accessConfigurationProvisionings_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessConfigurationProvisioningsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationProvisionings, accessConfigurationProvisionings_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListAccessConfigurationProvisioningsResponseBody() = default ;
    ListAccessConfigurationProvisioningsResponseBody(const ListAccessConfigurationProvisioningsResponseBody &) = default ;
    ListAccessConfigurationProvisioningsResponseBody(ListAccessConfigurationProvisioningsResponseBody &&) = default ;
    ListAccessConfigurationProvisioningsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessConfigurationProvisioningsResponseBody() = default ;
    ListAccessConfigurationProvisioningsResponseBody& operator=(const ListAccessConfigurationProvisioningsResponseBody &) = default ;
    ListAccessConfigurationProvisioningsResponseBody& operator=(ListAccessConfigurationProvisioningsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessConfigurationProvisionings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessConfigurationProvisionings& obj) { 
        DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_TO_JSON(RAMPolicyNames, RAMPolicyNames_);
        DARABONBA_PTR_TO_JSON(RAMRoleName, RAMRoleName_);
        DARABONBA_PTR_TO_JSON(SAMLProviderName, SAMLProviderName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AccessConfigurationProvisionings& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_FROM_JSON(RAMPolicyNames, RAMPolicyNames_);
        DARABONBA_PTR_FROM_JSON(RAMRoleName, RAMRoleName_);
        DARABONBA_PTR_FROM_JSON(SAMLProviderName, SAMLProviderName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AccessConfigurationProvisionings() = default ;
      AccessConfigurationProvisionings(const AccessConfigurationProvisionings &) = default ;
      AccessConfigurationProvisionings(AccessConfigurationProvisionings &&) = default ;
      AccessConfigurationProvisionings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessConfigurationProvisionings() = default ;
      AccessConfigurationProvisionings& operator=(const AccessConfigurationProvisionings &) = default ;
      AccessConfigurationProvisionings& operator=(AccessConfigurationProvisionings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->accessConfigurationName_ == nullptr && this->createTime_ == nullptr && this->originTargetId_ == nullptr && this->RAMPolicyNames_ == nullptr && this->RAMRoleName_ == nullptr
        && this->SAMLProviderName_ == nullptr && this->status_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetPath_ == nullptr
        && this->targetPathName_ == nullptr && this->targetType_ == nullptr && this->updateTime_ == nullptr; };
      // accessConfigurationId Field Functions 
      bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
      void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
      inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
      inline AccessConfigurationProvisionings& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


      // accessConfigurationName Field Functions 
      bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
      void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
      inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
      inline AccessConfigurationProvisionings& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AccessConfigurationProvisionings& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // originTargetId Field Functions 
      bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
      void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
      inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
      inline AccessConfigurationProvisionings& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


      // RAMPolicyNames Field Functions 
      bool hasRAMPolicyNames() const { return this->RAMPolicyNames_ != nullptr;};
      void deleteRAMPolicyNames() { this->RAMPolicyNames_ = nullptr;};
      inline const vector<string> & getRAMPolicyNames() const { DARABONBA_PTR_GET_CONST(RAMPolicyNames_, vector<string>) };
      inline vector<string> getRAMPolicyNames() { DARABONBA_PTR_GET(RAMPolicyNames_, vector<string>) };
      inline AccessConfigurationProvisionings& setRAMPolicyNames(const vector<string> & RAMPolicyNames) { DARABONBA_PTR_SET_VALUE(RAMPolicyNames_, RAMPolicyNames) };
      inline AccessConfigurationProvisionings& setRAMPolicyNames(vector<string> && RAMPolicyNames) { DARABONBA_PTR_SET_RVALUE(RAMPolicyNames_, RAMPolicyNames) };


      // RAMRoleName Field Functions 
      bool hasRAMRoleName() const { return this->RAMRoleName_ != nullptr;};
      void deleteRAMRoleName() { this->RAMRoleName_ = nullptr;};
      inline string getRAMRoleName() const { DARABONBA_PTR_GET_DEFAULT(RAMRoleName_, "") };
      inline AccessConfigurationProvisionings& setRAMRoleName(string RAMRoleName) { DARABONBA_PTR_SET_VALUE(RAMRoleName_, RAMRoleName) };


      // SAMLProviderName Field Functions 
      bool hasSAMLProviderName() const { return this->SAMLProviderName_ != nullptr;};
      void deleteSAMLProviderName() { this->SAMLProviderName_ = nullptr;};
      inline string getSAMLProviderName() const { DARABONBA_PTR_GET_DEFAULT(SAMLProviderName_, "") };
      inline AccessConfigurationProvisionings& setSAMLProviderName(string SAMLProviderName) { DARABONBA_PTR_SET_VALUE(SAMLProviderName_, SAMLProviderName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AccessConfigurationProvisionings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline AccessConfigurationProvisionings& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline AccessConfigurationProvisionings& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline AccessConfigurationProvisionings& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetPathName Field Functions 
      bool hasTargetPathName() const { return this->targetPathName_ != nullptr;};
      void deleteTargetPathName() { this->targetPathName_ = nullptr;};
      inline string getTargetPathName() const { DARABONBA_PTR_GET_DEFAULT(targetPathName_, "") };
      inline AccessConfigurationProvisionings& setTargetPathName(string targetPathName) { DARABONBA_PTR_SET_VALUE(targetPathName_, targetPathName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline AccessConfigurationProvisionings& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AccessConfigurationProvisionings& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the access configuration.
      shared_ptr<string> accessConfigurationId_ {};
      // The name of the access configuration.
      shared_ptr<string> accessConfigurationName_ {};
      // The first time when the access configuration was provisioned.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> originTargetId_ {};
      // The name of the custom policy that is created for an account in the resource directory.
      shared_ptr<vector<string>> RAMPolicyNames_ {};
      // The name of the RAM role that is created for an account in the resource directory.
      shared_ptr<string> RAMRoleName_ {};
      // The name of the Security Assertion Markup Language (SAML) identity provider (IdP) that is created within an account in the resource directory.
      shared_ptr<string> SAMLProviderName_ {};
      // The status of the access configuration. Valid values:
      // 
      // - Provisioned: The access configuration is provisioned.
      // 
      // - ReprovisionRequired: The access configuration needs to be re-provisioned.
      // 
      // - DeprovisionFailed: The access configuration failed to be provisioned.
      shared_ptr<string> status_ {};
      // The ID of the task object.
      // 
      // If the value of TargetType is `RD-Account`, the value of this parameter is the UID of an account in the resource directory.
      shared_ptr<string> targetId_ {};
      // The name of the task object.
      shared_ptr<string> targetName_ {};
      // The path ID of the task object in the resource directory.
      shared_ptr<string> targetPath_ {};
      // The path name of the task object in the resource directory.
      shared_ptr<string> targetPathName_ {};
      // The type of the task object.
      // 
      // Set the value to RD-Account, which specifies the accounts in the resource directory.
      shared_ptr<string> targetType_ {};
      // The last time when the access configuration was provisioned.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->accessConfigurationProvisionings_ == nullptr
        && this->isTruncated_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // accessConfigurationProvisionings Field Functions 
    bool hasAccessConfigurationProvisionings() const { return this->accessConfigurationProvisionings_ != nullptr;};
    void deleteAccessConfigurationProvisionings() { this->accessConfigurationProvisionings_ = nullptr;};
    inline const vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings> & getAccessConfigurationProvisionings() const { DARABONBA_PTR_GET_CONST(accessConfigurationProvisionings_, vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings>) };
    inline vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings> getAccessConfigurationProvisionings() { DARABONBA_PTR_GET(accessConfigurationProvisionings_, vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings>) };
    inline ListAccessConfigurationProvisioningsResponseBody& setAccessConfigurationProvisionings(const vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings> & accessConfigurationProvisionings) { DARABONBA_PTR_SET_VALUE(accessConfigurationProvisionings_, accessConfigurationProvisionings) };
    inline ListAccessConfigurationProvisioningsResponseBody& setAccessConfigurationProvisionings(vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings> && accessConfigurationProvisionings) { DARABONBA_PTR_SET_RVALUE(accessConfigurationProvisionings_, accessConfigurationProvisionings) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListAccessConfigurationProvisioningsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessConfigurationProvisioningsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessConfigurationProvisioningsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessConfigurationProvisioningsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListAccessConfigurationProvisioningsResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The accounts for which the access configuration is provisioned.
    shared_ptr<vector<ListAccessConfigurationProvisioningsResponseBody::AccessConfigurationProvisionings>> accessConfigurationProvisionings_ {};
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
    // > This parameter is returned only when the value of `IsTruncated` is `true`.
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
