// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTROLESRESPONSEBODY_HPP_
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
  class ListCloudAccountRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccountRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountRoles, cloudAccountRoles_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccountRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountRoles, cloudAccountRoles_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAccountRolesResponseBody() = default ;
    ListCloudAccountRolesResponseBody(const ListCloudAccountRolesResponseBody &) = default ;
    ListCloudAccountRolesResponseBody(ListCloudAccountRolesResponseBody &&) = default ;
    ListCloudAccountRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccountRolesResponseBody() = default ;
    ListCloudAccountRolesResponseBody& operator=(const ListCloudAccountRolesResponseBody &) = default ;
    ListCloudAccountRolesResponseBody& operator=(ListCloudAccountRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccountRoles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccountRoles& obj) { 
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleExternalId, cloudAccountRoleExternalId_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleHealth, cloudAccountRoleHealth_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleHealthCheckResult, cloudAccountRoleHealthCheckResult_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleId, cloudAccountRoleId_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleName, cloudAccountRoleName_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleType, cloudAccountRoleType_);
        DARABONBA_PTR_TO_JSON(CloudAccountRoleUsageType, cloudAccountRoleUsageType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccountRoles& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleExternalId, cloudAccountRoleExternalId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleHealth, cloudAccountRoleHealth_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleHealthCheckResult, cloudAccountRoleHealthCheckResult_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleId, cloudAccountRoleId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleName, cloudAccountRoleName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleType, cloudAccountRoleType_);
        DARABONBA_PTR_FROM_JSON(CloudAccountRoleUsageType, cloudAccountRoleUsageType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CloudAccountRoles() = default ;
      CloudAccountRoles(const CloudAccountRoles &) = default ;
      CloudAccountRoles(CloudAccountRoles &&) = default ;
      CloudAccountRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccountRoles() = default ;
      CloudAccountRoles& operator=(const CloudAccountRoles &) = default ;
      CloudAccountRoles& operator=(CloudAccountRoles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudAccountRoleHealthCheckResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAccountRoleHealthCheckResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAccountRoleHealthCheckResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        CloudAccountRoleHealthCheckResult() = default ;
        CloudAccountRoleHealthCheckResult(const CloudAccountRoleHealthCheckResult &) = default ;
        CloudAccountRoleHealthCheckResult(CloudAccountRoleHealthCheckResult &&) = default ;
        CloudAccountRoleHealthCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAccountRoleHealthCheckResult() = default ;
        CloudAccountRoleHealthCheckResult& operator=(const CloudAccountRoleHealthCheckResult &) = default ;
        CloudAccountRoleHealthCheckResult& operator=(CloudAccountRoleHealthCheckResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ErrorReason : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorReason& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorReason& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          };
          ErrorReason() = default ;
          ErrorReason(const ErrorReason &) = default ;
          ErrorReason(ErrorReason &&) = default ;
          ErrorReason(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorReason() = default ;
          ErrorReason& operator=(const ErrorReason &) = default ;
          ErrorReason& operator=(ErrorReason &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline ErrorReason& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline ErrorReason& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
        };

        virtual bool empty() const override { return this->errorReason_ == nullptr
        && this->lastCheckTime_ == nullptr && this->result_ == nullptr; };
        // errorReason Field Functions 
        bool hasErrorReason() const { return this->errorReason_ != nullptr;};
        void deleteErrorReason() { this->errorReason_ = nullptr;};
        inline const CloudAccountRoleHealthCheckResult::ErrorReason & getErrorReason() const { DARABONBA_PTR_GET_CONST(errorReason_, CloudAccountRoleHealthCheckResult::ErrorReason) };
        inline CloudAccountRoleHealthCheckResult::ErrorReason getErrorReason() { DARABONBA_PTR_GET(errorReason_, CloudAccountRoleHealthCheckResult::ErrorReason) };
        inline CloudAccountRoleHealthCheckResult& setErrorReason(const CloudAccountRoleHealthCheckResult::ErrorReason & errorReason) { DARABONBA_PTR_SET_VALUE(errorReason_, errorReason) };
        inline CloudAccountRoleHealthCheckResult& setErrorReason(CloudAccountRoleHealthCheckResult::ErrorReason && errorReason) { DARABONBA_PTR_SET_RVALUE(errorReason_, errorReason) };


        // lastCheckTime Field Functions 
        bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
        void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
        inline int64_t getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
        inline CloudAccountRoleHealthCheckResult& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline CloudAccountRoleHealthCheckResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        shared_ptr<CloudAccountRoleHealthCheckResult::ErrorReason> errorReason_ {};
        shared_ptr<int64_t> lastCheckTime_ {};
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountRoleExternalId_ == nullptr && this->cloudAccountRoleHealth_ == nullptr && this->cloudAccountRoleHealthCheckResult_ == nullptr && this->cloudAccountRoleId_ == nullptr && this->cloudAccountRoleName_ == nullptr
        && this->cloudAccountRoleType_ == nullptr && this->cloudAccountRoleUsageType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline CloudAccountRoles& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudAccountRoleExternalId Field Functions 
      bool hasCloudAccountRoleExternalId() const { return this->cloudAccountRoleExternalId_ != nullptr;};
      void deleteCloudAccountRoleExternalId() { this->cloudAccountRoleExternalId_ = nullptr;};
      inline string getCloudAccountRoleExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleExternalId_, "") };
      inline CloudAccountRoles& setCloudAccountRoleExternalId(string cloudAccountRoleExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleExternalId_, cloudAccountRoleExternalId) };


      // cloudAccountRoleHealth Field Functions 
      bool hasCloudAccountRoleHealth() const { return this->cloudAccountRoleHealth_ != nullptr;};
      void deleteCloudAccountRoleHealth() { this->cloudAccountRoleHealth_ = nullptr;};
      inline string getCloudAccountRoleHealth() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleHealth_, "") };
      inline CloudAccountRoles& setCloudAccountRoleHealth(string cloudAccountRoleHealth) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleHealth_, cloudAccountRoleHealth) };


      // cloudAccountRoleHealthCheckResult Field Functions 
      bool hasCloudAccountRoleHealthCheckResult() const { return this->cloudAccountRoleHealthCheckResult_ != nullptr;};
      void deleteCloudAccountRoleHealthCheckResult() { this->cloudAccountRoleHealthCheckResult_ = nullptr;};
      inline const CloudAccountRoles::CloudAccountRoleHealthCheckResult & getCloudAccountRoleHealthCheckResult() const { DARABONBA_PTR_GET_CONST(cloudAccountRoleHealthCheckResult_, CloudAccountRoles::CloudAccountRoleHealthCheckResult) };
      inline CloudAccountRoles::CloudAccountRoleHealthCheckResult getCloudAccountRoleHealthCheckResult() { DARABONBA_PTR_GET(cloudAccountRoleHealthCheckResult_, CloudAccountRoles::CloudAccountRoleHealthCheckResult) };
      inline CloudAccountRoles& setCloudAccountRoleHealthCheckResult(const CloudAccountRoles::CloudAccountRoleHealthCheckResult & cloudAccountRoleHealthCheckResult) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleHealthCheckResult_, cloudAccountRoleHealthCheckResult) };
      inline CloudAccountRoles& setCloudAccountRoleHealthCheckResult(CloudAccountRoles::CloudAccountRoleHealthCheckResult && cloudAccountRoleHealthCheckResult) { DARABONBA_PTR_SET_RVALUE(cloudAccountRoleHealthCheckResult_, cloudAccountRoleHealthCheckResult) };


      // cloudAccountRoleId Field Functions 
      bool hasCloudAccountRoleId() const { return this->cloudAccountRoleId_ != nullptr;};
      void deleteCloudAccountRoleId() { this->cloudAccountRoleId_ = nullptr;};
      inline string getCloudAccountRoleId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleId_, "") };
      inline CloudAccountRoles& setCloudAccountRoleId(string cloudAccountRoleId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleId_, cloudAccountRoleId) };


      // cloudAccountRoleName Field Functions 
      bool hasCloudAccountRoleName() const { return this->cloudAccountRoleName_ != nullptr;};
      void deleteCloudAccountRoleName() { this->cloudAccountRoleName_ = nullptr;};
      inline string getCloudAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleName_, "") };
      inline CloudAccountRoles& setCloudAccountRoleName(string cloudAccountRoleName) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleName_, cloudAccountRoleName) };


      // cloudAccountRoleType Field Functions 
      bool hasCloudAccountRoleType() const { return this->cloudAccountRoleType_ != nullptr;};
      void deleteCloudAccountRoleType() { this->cloudAccountRoleType_ = nullptr;};
      inline string getCloudAccountRoleType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleType_, "") };
      inline CloudAccountRoles& setCloudAccountRoleType(string cloudAccountRoleType) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleType_, cloudAccountRoleType) };


      // cloudAccountRoleUsageType Field Functions 
      bool hasCloudAccountRoleUsageType() const { return this->cloudAccountRoleUsageType_ != nullptr;};
      void deleteCloudAccountRoleUsageType() { this->cloudAccountRoleUsageType_ = nullptr;};
      inline string getCloudAccountRoleUsageType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleUsageType_, "") };
      inline CloudAccountRoles& setCloudAccountRoleUsageType(string cloudAccountRoleUsageType) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleUsageType_, cloudAccountRoleUsageType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudAccountRoles& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudAccountRoles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudAccountRoles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudAccountRoles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccountRoles& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 云账号ID
      shared_ptr<string> cloudAccountId_ {};
      // 云账号角色外部唯一ID
      shared_ptr<string> cloudAccountRoleExternalId_ {};
      // 云账号角色可用性
      shared_ptr<string> cloudAccountRoleHealth_ {};
      shared_ptr<CloudAccountRoles::CloudAccountRoleHealthCheckResult> cloudAccountRoleHealthCheckResult_ {};
      // 云账号角色ID
      shared_ptr<string> cloudAccountRoleId_ {};
      // 云账号名称
      shared_ptr<string> cloudAccountRoleName_ {};
      // 云账号角色用途
      shared_ptr<string> cloudAccountRoleType_ {};
      // 云账号角色类别
      shared_ptr<string> cloudAccountRoleUsageType_ {};
      shared_ptr<int64_t> createTime_ {};
      // 云账号描述
      shared_ptr<string> description_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // 云账号角色状态
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudAccountRoles_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudAccountRoles Field Functions 
    bool hasCloudAccountRoles() const { return this->cloudAccountRoles_ != nullptr;};
    void deleteCloudAccountRoles() { this->cloudAccountRoles_ = nullptr;};
    inline const vector<ListCloudAccountRolesResponseBody::CloudAccountRoles> & getCloudAccountRoles() const { DARABONBA_PTR_GET_CONST(cloudAccountRoles_, vector<ListCloudAccountRolesResponseBody::CloudAccountRoles>) };
    inline vector<ListCloudAccountRolesResponseBody::CloudAccountRoles> getCloudAccountRoles() { DARABONBA_PTR_GET(cloudAccountRoles_, vector<ListCloudAccountRolesResponseBody::CloudAccountRoles>) };
    inline ListCloudAccountRolesResponseBody& setCloudAccountRoles(const vector<ListCloudAccountRolesResponseBody::CloudAccountRoles> & cloudAccountRoles) { DARABONBA_PTR_SET_VALUE(cloudAccountRoles_, cloudAccountRoles) };
    inline ListCloudAccountRolesResponseBody& setCloudAccountRoles(vector<ListCloudAccountRolesResponseBody::CloudAccountRoles> && cloudAccountRoles) { DARABONBA_PTR_SET_RVALUE(cloudAccountRoles_, cloudAccountRoles) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCloudAccountRolesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCloudAccountRolesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAccountRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCloudAccountRolesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCloudAccountRolesResponseBody::CloudAccountRoles>> cloudAccountRoles_ {};
    // 分页查询时每页行数。
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
