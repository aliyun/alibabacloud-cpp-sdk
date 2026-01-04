// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSFORPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSFORPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationFederatedCredentialsForProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationFederatedCredentialsForProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentials, applicationFederatedCredentials_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationFederatedCredentialsForProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentials, applicationFederatedCredentials_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationFederatedCredentialsForProviderResponseBody() = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(const ListApplicationFederatedCredentialsForProviderResponseBody &) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(ListApplicationFederatedCredentialsForProviderResponseBody &&) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationFederatedCredentialsForProviderResponseBody() = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody& operator=(const ListApplicationFederatedCredentialsForProviderResponseBody &) = default ;
    ListApplicationFederatedCredentialsForProviderResponseBody& operator=(ListApplicationFederatedCredentialsForProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationFederatedCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationFederatedCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
        DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
        DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationFederatedCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
        DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
        DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ApplicationFederatedCredentials() = default ;
      ApplicationFederatedCredentials(const ApplicationFederatedCredentials &) = default ;
      ApplicationFederatedCredentials(ApplicationFederatedCredentials &&) = default ;
      ApplicationFederatedCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationFederatedCredentials() = default ;
      ApplicationFederatedCredentials& operator=(const ApplicationFederatedCredentials &) = default ;
      ApplicationFederatedCredentials& operator=(ApplicationFederatedCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationFederatedCredentialId_ == nullptr
        && this->applicationFederatedCredentialName_ == nullptr && this->applicationFederatedCredentialType_ == nullptr && this->applicationId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->federatedCredentialProviderId_ == nullptr && this->instanceId_ == nullptr && this->lastUsedTime_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // applicationFederatedCredentialId Field Functions 
      bool hasApplicationFederatedCredentialId() const { return this->applicationFederatedCredentialId_ != nullptr;};
      void deleteApplicationFederatedCredentialId() { this->applicationFederatedCredentialId_ = nullptr;};
      inline string getApplicationFederatedCredentialId() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialId_, "") };
      inline ApplicationFederatedCredentials& setApplicationFederatedCredentialId(string applicationFederatedCredentialId) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialId_, applicationFederatedCredentialId) };


      // applicationFederatedCredentialName Field Functions 
      bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
      void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
      inline string getApplicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
      inline ApplicationFederatedCredentials& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


      // applicationFederatedCredentialType Field Functions 
      bool hasApplicationFederatedCredentialType() const { return this->applicationFederatedCredentialType_ != nullptr;};
      void deleteApplicationFederatedCredentialType() { this->applicationFederatedCredentialType_ = nullptr;};
      inline string getApplicationFederatedCredentialType() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialType_, "") };
      inline ApplicationFederatedCredentials& setApplicationFederatedCredentialType(string applicationFederatedCredentialType) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialType_, applicationFederatedCredentialType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationFederatedCredentials& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationFederatedCredentials& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationFederatedCredentials& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // federatedCredentialProviderId Field Functions 
      bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
      void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
      inline string getFederatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
      inline ApplicationFederatedCredentials& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationFederatedCredentials& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastUsedTime Field Functions 
      bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
      void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
      inline int64_t getLastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
      inline ApplicationFederatedCredentials& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationFederatedCredentials& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ApplicationFederatedCredentials& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 应用联邦凭证ID
      shared_ptr<string> applicationFederatedCredentialId_ {};
      // 应用联邦凭证名称
      shared_ptr<string> applicationFederatedCredentialName_ {};
      // 应用联邦凭证类型
      shared_ptr<string> applicationFederatedCredentialType_ {};
      // 应用ID
      shared_ptr<string> applicationId_ {};
      // 创建时间
      shared_ptr<int64_t> createTime_ {};
      // 应用联邦凭证描述
      shared_ptr<string> description_ {};
      // 应用联邦凭证提供者ID
      shared_ptr<string> federatedCredentialProviderId_ {};
      // EAIM 实例ID
      shared_ptr<string> instanceId_ {};
      // 最近使用时间
      shared_ptr<int64_t> lastUsedTime_ {};
      // 应用联邦凭证状态
      shared_ptr<string> status_ {};
      // 更新时间
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->applicationFederatedCredentials_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationFederatedCredentials Field Functions 
    bool hasApplicationFederatedCredentials() const { return this->applicationFederatedCredentials_ != nullptr;};
    void deleteApplicationFederatedCredentials() { this->applicationFederatedCredentials_ = nullptr;};
    inline const vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> & getApplicationFederatedCredentials() const { DARABONBA_PTR_GET_CONST(applicationFederatedCredentials_, vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials>) };
    inline vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> getApplicationFederatedCredentials() { DARABONBA_PTR_GET(applicationFederatedCredentials_, vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials>) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setApplicationFederatedCredentials(const vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> & applicationFederatedCredentials) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentials_, applicationFederatedCredentials) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setApplicationFederatedCredentials(vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials> && applicationFederatedCredentials) { DARABONBA_PTR_SET_RVALUE(applicationFederatedCredentials_, applicationFederatedCredentials) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationFederatedCredentialsForProviderResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationFederatedCredentialsForProviderResponseBody::ApplicationFederatedCredentials>> applicationFederatedCredentials_ {};
    // 分页查询时每页行数。
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    shared_ptr<string> previousToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
