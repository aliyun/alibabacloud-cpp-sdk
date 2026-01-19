// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDACCOUNTSRESPONSEBODY_HPP_
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
  class ListCloudAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccounts, cloudAccounts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccounts, cloudAccounts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAccountsResponseBody() = default ;
    ListCloudAccountsResponseBody(const ListCloudAccountsResponseBody &) = default ;
    ListCloudAccountsResponseBody(ListCloudAccountsResponseBody &&) = default ;
    ListCloudAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAccountsResponseBody() = default ;
    ListCloudAccountsResponseBody& operator=(const ListCloudAccountsResponseBody &) = default ;
    ListCloudAccountsResponseBody& operator=(ListCloudAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(CloudAccountExternalId, cloudAccountExternalId_);
        DARABONBA_PTR_TO_JSON(CloudAccountHealth, cloudAccountHealth_);
        DARABONBA_PTR_TO_JSON(CloudAccountHealthCheckResult, cloudAccountHealthCheckResult_);
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(CloudAccountName, cloudAccountName_);
        DARABONBA_PTR_TO_JSON(CloudAccountProviderName, cloudAccountProviderName_);
        DARABONBA_PTR_TO_JSON(CloudAccountVendorType, cloudAccountVendorType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAccountExternalId, cloudAccountExternalId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountHealth, cloudAccountHealth_);
        DARABONBA_PTR_FROM_JSON(CloudAccountHealthCheckResult, cloudAccountHealthCheckResult_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountName, cloudAccountName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountProviderName, cloudAccountProviderName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountVendorType, cloudAccountVendorType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CloudAccounts() = default ;
      CloudAccounts(const CloudAccounts &) = default ;
      CloudAccounts(CloudAccounts &&) = default ;
      CloudAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccounts() = default ;
      CloudAccounts& operator=(const CloudAccounts &) = default ;
      CloudAccounts& operator=(CloudAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudAccountHealthCheckResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAccountHealthCheckResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAccountHealthCheckResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorReason, errorReason_);
          DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        CloudAccountHealthCheckResult() = default ;
        CloudAccountHealthCheckResult(const CloudAccountHealthCheckResult &) = default ;
        CloudAccountHealthCheckResult(CloudAccountHealthCheckResult &&) = default ;
        CloudAccountHealthCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAccountHealthCheckResult() = default ;
        CloudAccountHealthCheckResult& operator=(const CloudAccountHealthCheckResult &) = default ;
        CloudAccountHealthCheckResult& operator=(CloudAccountHealthCheckResult &&) = default ;
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
        inline const CloudAccountHealthCheckResult::ErrorReason & getErrorReason() const { DARABONBA_PTR_GET_CONST(errorReason_, CloudAccountHealthCheckResult::ErrorReason) };
        inline CloudAccountHealthCheckResult::ErrorReason getErrorReason() { DARABONBA_PTR_GET(errorReason_, CloudAccountHealthCheckResult::ErrorReason) };
        inline CloudAccountHealthCheckResult& setErrorReason(const CloudAccountHealthCheckResult::ErrorReason & errorReason) { DARABONBA_PTR_SET_VALUE(errorReason_, errorReason) };
        inline CloudAccountHealthCheckResult& setErrorReason(CloudAccountHealthCheckResult::ErrorReason && errorReason) { DARABONBA_PTR_SET_RVALUE(errorReason_, errorReason) };


        // lastCheckTime Field Functions 
        bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
        void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
        inline int64_t getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
        inline CloudAccountHealthCheckResult& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline CloudAccountHealthCheckResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        shared_ptr<CloudAccountHealthCheckResult::ErrorReason> errorReason_ {};
        shared_ptr<int64_t> lastCheckTime_ {};
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->cloudAccountExternalId_ == nullptr
        && this->cloudAccountHealth_ == nullptr && this->cloudAccountHealthCheckResult_ == nullptr && this->cloudAccountId_ == nullptr && this->cloudAccountName_ == nullptr && this->cloudAccountProviderName_ == nullptr
        && this->cloudAccountVendorType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->updateTime_ == nullptr; };
      // cloudAccountExternalId Field Functions 
      bool hasCloudAccountExternalId() const { return this->cloudAccountExternalId_ != nullptr;};
      void deleteCloudAccountExternalId() { this->cloudAccountExternalId_ = nullptr;};
      inline string getCloudAccountExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountExternalId_, "") };
      inline CloudAccounts& setCloudAccountExternalId(string cloudAccountExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountExternalId_, cloudAccountExternalId) };


      // cloudAccountHealth Field Functions 
      bool hasCloudAccountHealth() const { return this->cloudAccountHealth_ != nullptr;};
      void deleteCloudAccountHealth() { this->cloudAccountHealth_ = nullptr;};
      inline string getCloudAccountHealth() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountHealth_, "") };
      inline CloudAccounts& setCloudAccountHealth(string cloudAccountHealth) { DARABONBA_PTR_SET_VALUE(cloudAccountHealth_, cloudAccountHealth) };


      // cloudAccountHealthCheckResult Field Functions 
      bool hasCloudAccountHealthCheckResult() const { return this->cloudAccountHealthCheckResult_ != nullptr;};
      void deleteCloudAccountHealthCheckResult() { this->cloudAccountHealthCheckResult_ = nullptr;};
      inline const CloudAccounts::CloudAccountHealthCheckResult & getCloudAccountHealthCheckResult() const { DARABONBA_PTR_GET_CONST(cloudAccountHealthCheckResult_, CloudAccounts::CloudAccountHealthCheckResult) };
      inline CloudAccounts::CloudAccountHealthCheckResult getCloudAccountHealthCheckResult() { DARABONBA_PTR_GET(cloudAccountHealthCheckResult_, CloudAccounts::CloudAccountHealthCheckResult) };
      inline CloudAccounts& setCloudAccountHealthCheckResult(const CloudAccounts::CloudAccountHealthCheckResult & cloudAccountHealthCheckResult) { DARABONBA_PTR_SET_VALUE(cloudAccountHealthCheckResult_, cloudAccountHealthCheckResult) };
      inline CloudAccounts& setCloudAccountHealthCheckResult(CloudAccounts::CloudAccountHealthCheckResult && cloudAccountHealthCheckResult) { DARABONBA_PTR_SET_RVALUE(cloudAccountHealthCheckResult_, cloudAccountHealthCheckResult) };


      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline CloudAccounts& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudAccountName Field Functions 
      bool hasCloudAccountName() const { return this->cloudAccountName_ != nullptr;};
      void deleteCloudAccountName() { this->cloudAccountName_ = nullptr;};
      inline string getCloudAccountName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountName_, "") };
      inline CloudAccounts& setCloudAccountName(string cloudAccountName) { DARABONBA_PTR_SET_VALUE(cloudAccountName_, cloudAccountName) };


      // cloudAccountProviderName Field Functions 
      bool hasCloudAccountProviderName() const { return this->cloudAccountProviderName_ != nullptr;};
      void deleteCloudAccountProviderName() { this->cloudAccountProviderName_ = nullptr;};
      inline string getCloudAccountProviderName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountProviderName_, "") };
      inline CloudAccounts& setCloudAccountProviderName(string cloudAccountProviderName) { DARABONBA_PTR_SET_VALUE(cloudAccountProviderName_, cloudAccountProviderName) };


      // cloudAccountVendorType Field Functions 
      bool hasCloudAccountVendorType() const { return this->cloudAccountVendorType_ != nullptr;};
      void deleteCloudAccountVendorType() { this->cloudAccountVendorType_ = nullptr;};
      inline string getCloudAccountVendorType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountVendorType_, "") };
      inline CloudAccounts& setCloudAccountVendorType(string cloudAccountVendorType) { DARABONBA_PTR_SET_VALUE(cloudAccountVendorType_, cloudAccountVendorType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudAccounts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudAccounts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudAccounts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccounts& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 云账号外部唯一ID
      shared_ptr<string> cloudAccountExternalId_ {};
      // 云账号可用性
      shared_ptr<string> cloudAccountHealth_ {};
      shared_ptr<CloudAccounts::CloudAccountHealthCheckResult> cloudAccountHealthCheckResult_ {};
      // 云账号ID
      shared_ptr<string> cloudAccountId_ {};
      // 云账号名称
      shared_ptr<string> cloudAccountName_ {};
      // 云账号提供商名称
      shared_ptr<string> cloudAccountProviderName_ {};
      // 云账号类别
      shared_ptr<string> cloudAccountVendorType_ {};
      shared_ptr<int64_t> createTime_ {};
      // 云账号描述
      shared_ptr<string> description_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudAccounts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudAccounts Field Functions 
    bool hasCloudAccounts() const { return this->cloudAccounts_ != nullptr;};
    void deleteCloudAccounts() { this->cloudAccounts_ = nullptr;};
    inline const vector<ListCloudAccountsResponseBody::CloudAccounts> & getCloudAccounts() const { DARABONBA_PTR_GET_CONST(cloudAccounts_, vector<ListCloudAccountsResponseBody::CloudAccounts>) };
    inline vector<ListCloudAccountsResponseBody::CloudAccounts> getCloudAccounts() { DARABONBA_PTR_GET(cloudAccounts_, vector<ListCloudAccountsResponseBody::CloudAccounts>) };
    inline ListCloudAccountsResponseBody& setCloudAccounts(const vector<ListCloudAccountsResponseBody::CloudAccounts> & cloudAccounts) { DARABONBA_PTR_SET_VALUE(cloudAccounts_, cloudAccounts) };
    inline ListCloudAccountsResponseBody& setCloudAccounts(vector<ListCloudAccountsResponseBody::CloudAccounts> && cloudAccounts) { DARABONBA_PTR_SET_RVALUE(cloudAccounts_, cloudAccounts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCloudAccountsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCloudAccountsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCloudAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCloudAccountsResponseBody::CloudAccounts>> cloudAccounts_ {};
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
