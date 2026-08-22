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
        DARABONBA_PTR_TO_JSON(CloudAccountSite, cloudAccountSite_);
        DARABONBA_PTR_TO_JSON(CloudAccountVendorType, cloudAccountVendorType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PrivilegeApplicationIds, privilegeApplicationIds_);
        DARABONBA_PTR_TO_JSON(PrivilegeHostingError, privilegeHostingError_);
        DARABONBA_PTR_TO_JSON(PrivilegeHostingState, privilegeHostingState_);
        DARABONBA_PTR_TO_JSON(PrivilegeStatus, privilegeStatus_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAccountExternalId, cloudAccountExternalId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountHealth, cloudAccountHealth_);
        DARABONBA_PTR_FROM_JSON(CloudAccountHealthCheckResult, cloudAccountHealthCheckResult_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountName, cloudAccountName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountProviderName, cloudAccountProviderName_);
        DARABONBA_PTR_FROM_JSON(CloudAccountSite, cloudAccountSite_);
        DARABONBA_PTR_FROM_JSON(CloudAccountVendorType, cloudAccountVendorType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PrivilegeApplicationIds, privilegeApplicationIds_);
        DARABONBA_PTR_FROM_JSON(PrivilegeHostingError, privilegeHostingError_);
        DARABONBA_PTR_FROM_JSON(PrivilegeHostingState, privilegeHostingState_);
        DARABONBA_PTR_FROM_JSON(PrivilegeStatus, privilegeStatus_);
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
      class PrivilegeHostingError : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivilegeHostingError& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        };
        friend void from_json(const Darabonba::Json& j, PrivilegeHostingError& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        };
        PrivilegeHostingError() = default ;
        PrivilegeHostingError(const PrivilegeHostingError &) = default ;
        PrivilegeHostingError(PrivilegeHostingError &&) = default ;
        PrivilegeHostingError(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivilegeHostingError() = default ;
        PrivilegeHostingError& operator=(const PrivilegeHostingError &) = default ;
        PrivilegeHostingError& operator=(PrivilegeHostingError &&) = default ;
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
        inline PrivilegeHostingError& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PrivilegeHostingError& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      protected:
        // The failure error code.
        shared_ptr<string> errorCode_ {};
        // The failure message.
        shared_ptr<string> errorMessage_ {};
      };

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
          // The error code.
          shared_ptr<string> errorCode_ {};
          // The error description.
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
        // The error reason. This field is returned when the health check status is unhealthy.
        shared_ptr<CloudAccountHealthCheckResult::ErrorReason> errorReason_ {};
        // The last check time, in UNIX timestamp format. Unit: milliseconds.
        shared_ptr<int64_t> lastCheckTime_ {};
        // The health check result of the cloud account. Valid values:
        // - success: Succeeded.
        // - failed: Failed.
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->cloudAccountExternalId_ == nullptr
        && this->cloudAccountHealth_ == nullptr && this->cloudAccountHealthCheckResult_ == nullptr && this->cloudAccountId_ == nullptr && this->cloudAccountName_ == nullptr && this->cloudAccountProviderName_ == nullptr
        && this->cloudAccountSite_ == nullptr && this->cloudAccountVendorType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->privilegeApplicationIds_ == nullptr && this->privilegeHostingError_ == nullptr && this->privilegeHostingState_ == nullptr && this->privilegeStatus_ == nullptr && this->updateTime_ == nullptr; };
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


      // cloudAccountSite Field Functions 
      bool hasCloudAccountSite() const { return this->cloudAccountSite_ != nullptr;};
      void deleteCloudAccountSite() { this->cloudAccountSite_ = nullptr;};
      inline string getCloudAccountSite() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountSite_, "") };
      inline CloudAccounts& setCloudAccountSite(string cloudAccountSite) { DARABONBA_PTR_SET_VALUE(cloudAccountSite_, cloudAccountSite) };


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


      // privilegeApplicationIds Field Functions 
      bool hasPrivilegeApplicationIds() const { return this->privilegeApplicationIds_ != nullptr;};
      void deletePrivilegeApplicationIds() { this->privilegeApplicationIds_ = nullptr;};
      inline const vector<string> & getPrivilegeApplicationIds() const { DARABONBA_PTR_GET_CONST(privilegeApplicationIds_, vector<string>) };
      inline vector<string> getPrivilegeApplicationIds() { DARABONBA_PTR_GET(privilegeApplicationIds_, vector<string>) };
      inline CloudAccounts& setPrivilegeApplicationIds(const vector<string> & privilegeApplicationIds) { DARABONBA_PTR_SET_VALUE(privilegeApplicationIds_, privilegeApplicationIds) };
      inline CloudAccounts& setPrivilegeApplicationIds(vector<string> && privilegeApplicationIds) { DARABONBA_PTR_SET_RVALUE(privilegeApplicationIds_, privilegeApplicationIds) };


      // privilegeHostingError Field Functions 
      bool hasPrivilegeHostingError() const { return this->privilegeHostingError_ != nullptr;};
      void deletePrivilegeHostingError() { this->privilegeHostingError_ = nullptr;};
      inline const CloudAccounts::PrivilegeHostingError & getPrivilegeHostingError() const { DARABONBA_PTR_GET_CONST(privilegeHostingError_, CloudAccounts::PrivilegeHostingError) };
      inline CloudAccounts::PrivilegeHostingError getPrivilegeHostingError() { DARABONBA_PTR_GET(privilegeHostingError_, CloudAccounts::PrivilegeHostingError) };
      inline CloudAccounts& setPrivilegeHostingError(const CloudAccounts::PrivilegeHostingError & privilegeHostingError) { DARABONBA_PTR_SET_VALUE(privilegeHostingError_, privilegeHostingError) };
      inline CloudAccounts& setPrivilegeHostingError(CloudAccounts::PrivilegeHostingError && privilegeHostingError) { DARABONBA_PTR_SET_RVALUE(privilegeHostingError_, privilegeHostingError) };


      // privilegeHostingState Field Functions 
      bool hasPrivilegeHostingState() const { return this->privilegeHostingState_ != nullptr;};
      void deletePrivilegeHostingState() { this->privilegeHostingState_ = nullptr;};
      inline string getPrivilegeHostingState() const { DARABONBA_PTR_GET_DEFAULT(privilegeHostingState_, "") };
      inline CloudAccounts& setPrivilegeHostingState(string privilegeHostingState) { DARABONBA_PTR_SET_VALUE(privilegeHostingState_, privilegeHostingState) };


      // privilegeStatus Field Functions 
      bool hasPrivilegeStatus() const { return this->privilegeStatus_ != nullptr;};
      void deletePrivilegeStatus() { this->privilegeStatus_ = nullptr;};
      inline string getPrivilegeStatus() const { DARABONBA_PTR_GET_DEFAULT(privilegeStatus_, "") };
      inline CloudAccounts& setPrivilegeStatus(string privilegeStatus) { DARABONBA_PTR_SET_VALUE(privilegeStatus_, privilegeStatus) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccounts& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The external unique identifier of the cloud account.
      shared_ptr<string> cloudAccountExternalId_ {};
      // The health status of the cloud account. Valid values:
      // - healthy: Healthy.
      // - unhealthy: Unhealthy.
      // - unknown: Unknown.
      shared_ptr<string> cloudAccountHealth_ {};
      // The health check result of the cloud account.
      shared_ptr<CloudAccounts::CloudAccountHealthCheckResult> cloudAccountHealthCheckResult_ {};
      // The cloud account ID.
      shared_ptr<string> cloudAccountId_ {};
      // The cloud account name.
      shared_ptr<string> cloudAccountName_ {};
      // The identity provider name.
      shared_ptr<string> cloudAccountProviderName_ {};
      // The cloud account site.
      shared_ptr<string> cloudAccountSite_ {};
      // The cloud account type. Valid values:
      // 
      // - alibaba_cloud: Alibaba Cloud.
      shared_ptr<string> cloudAccountVendorType_ {};
      // The creation time, in UNIX timestamp format. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The cloud account description.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The list of associated privileged access application IDs.
      shared_ptr<vector<string>> privilegeApplicationIds_ {};
      // The reason for the privilege hosting or removal failure.
      shared_ptr<CloudAccounts::PrivilegeHostingError> privilegeHostingError_ {};
      // The privilege hosting state, which indicates whether the account has privileged access capabilities.
      shared_ptr<string> privilegeHostingState_ {};
      // The privilege switch status, which indicates whether the privileged access capability is available.
      shared_ptr<string> privilegeStatus_ {};
      // The last update time, in UNIX timestamp format. Unit: milliseconds.
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
    // The list of cloud accounts.
    shared_ptr<vector<ListCloudAccountsResponseBody::CloudAccounts>> cloudAccounts_ {};
    // The maximum number of entries per page for paging.
    shared_ptr<int32_t> maxResults_ {};
    // The token returned for the current call.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
