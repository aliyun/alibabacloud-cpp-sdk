// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDACCOUNTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDACCOUNTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCloudAccountRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAccountRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountRole, cloudAccountRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAccountRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountRole, cloudAccountRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAccountRoleResponseBody() = default ;
    GetCloudAccountRoleResponseBody(const GetCloudAccountRoleResponseBody &) = default ;
    GetCloudAccountRoleResponseBody(GetCloudAccountRoleResponseBody &&) = default ;
    GetCloudAccountRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAccountRoleResponseBody() = default ;
    GetCloudAccountRoleResponseBody& operator=(const GetCloudAccountRoleResponseBody &) = default ;
    GetCloudAccountRoleResponseBody& operator=(GetCloudAccountRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccountRole : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccountRole& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CloudAccountRole& obj) { 
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
      CloudAccountRole() = default ;
      CloudAccountRole(const CloudAccountRole &) = default ;
      CloudAccountRole(CloudAccountRole &&) = default ;
      CloudAccountRole(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccountRole() = default ;
      CloudAccountRole& operator=(const CloudAccountRole &) = default ;
      CloudAccountRole& operator=(CloudAccountRole &&) = default ;
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
          // 错误码
          shared_ptr<string> errorCode_ {};
          // 错误信息
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
        // 错误原因
        shared_ptr<CloudAccountRoleHealthCheckResult::ErrorReason> errorReason_ {};
        // 检测时间
        shared_ptr<int64_t> lastCheckTime_ {};
        // 结果
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
      inline CloudAccountRole& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudAccountRoleExternalId Field Functions 
      bool hasCloudAccountRoleExternalId() const { return this->cloudAccountRoleExternalId_ != nullptr;};
      void deleteCloudAccountRoleExternalId() { this->cloudAccountRoleExternalId_ = nullptr;};
      inline string getCloudAccountRoleExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleExternalId_, "") };
      inline CloudAccountRole& setCloudAccountRoleExternalId(string cloudAccountRoleExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleExternalId_, cloudAccountRoleExternalId) };


      // cloudAccountRoleHealth Field Functions 
      bool hasCloudAccountRoleHealth() const { return this->cloudAccountRoleHealth_ != nullptr;};
      void deleteCloudAccountRoleHealth() { this->cloudAccountRoleHealth_ = nullptr;};
      inline string getCloudAccountRoleHealth() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleHealth_, "") };
      inline CloudAccountRole& setCloudAccountRoleHealth(string cloudAccountRoleHealth) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleHealth_, cloudAccountRoleHealth) };


      // cloudAccountRoleHealthCheckResult Field Functions 
      bool hasCloudAccountRoleHealthCheckResult() const { return this->cloudAccountRoleHealthCheckResult_ != nullptr;};
      void deleteCloudAccountRoleHealthCheckResult() { this->cloudAccountRoleHealthCheckResult_ = nullptr;};
      inline const CloudAccountRole::CloudAccountRoleHealthCheckResult & getCloudAccountRoleHealthCheckResult() const { DARABONBA_PTR_GET_CONST(cloudAccountRoleHealthCheckResult_, CloudAccountRole::CloudAccountRoleHealthCheckResult) };
      inline CloudAccountRole::CloudAccountRoleHealthCheckResult getCloudAccountRoleHealthCheckResult() { DARABONBA_PTR_GET(cloudAccountRoleHealthCheckResult_, CloudAccountRole::CloudAccountRoleHealthCheckResult) };
      inline CloudAccountRole& setCloudAccountRoleHealthCheckResult(const CloudAccountRole::CloudAccountRoleHealthCheckResult & cloudAccountRoleHealthCheckResult) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleHealthCheckResult_, cloudAccountRoleHealthCheckResult) };
      inline CloudAccountRole& setCloudAccountRoleHealthCheckResult(CloudAccountRole::CloudAccountRoleHealthCheckResult && cloudAccountRoleHealthCheckResult) { DARABONBA_PTR_SET_RVALUE(cloudAccountRoleHealthCheckResult_, cloudAccountRoleHealthCheckResult) };


      // cloudAccountRoleId Field Functions 
      bool hasCloudAccountRoleId() const { return this->cloudAccountRoleId_ != nullptr;};
      void deleteCloudAccountRoleId() { this->cloudAccountRoleId_ = nullptr;};
      inline string getCloudAccountRoleId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleId_, "") };
      inline CloudAccountRole& setCloudAccountRoleId(string cloudAccountRoleId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleId_, cloudAccountRoleId) };


      // cloudAccountRoleName Field Functions 
      bool hasCloudAccountRoleName() const { return this->cloudAccountRoleName_ != nullptr;};
      void deleteCloudAccountRoleName() { this->cloudAccountRoleName_ = nullptr;};
      inline string getCloudAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleName_, "") };
      inline CloudAccountRole& setCloudAccountRoleName(string cloudAccountRoleName) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleName_, cloudAccountRoleName) };


      // cloudAccountRoleType Field Functions 
      bool hasCloudAccountRoleType() const { return this->cloudAccountRoleType_ != nullptr;};
      void deleteCloudAccountRoleType() { this->cloudAccountRoleType_ = nullptr;};
      inline string getCloudAccountRoleType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleType_, "") };
      inline CloudAccountRole& setCloudAccountRoleType(string cloudAccountRoleType) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleType_, cloudAccountRoleType) };


      // cloudAccountRoleUsageType Field Functions 
      bool hasCloudAccountRoleUsageType() const { return this->cloudAccountRoleUsageType_ != nullptr;};
      void deleteCloudAccountRoleUsageType() { this->cloudAccountRoleUsageType_ = nullptr;};
      inline string getCloudAccountRoleUsageType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleUsageType_, "") };
      inline CloudAccountRole& setCloudAccountRoleUsageType(string cloudAccountRoleUsageType) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleUsageType_, cloudAccountRoleUsageType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudAccountRole& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudAccountRole& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudAccountRole& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudAccountRole& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudAccountRole& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 云账号ID
      shared_ptr<string> cloudAccountId_ {};
      // 云账号角色外部唯一ID
      shared_ptr<string> cloudAccountRoleExternalId_ {};
      // 云账号角色可用性
      shared_ptr<string> cloudAccountRoleHealth_ {};
      // 云账号角色验证结果
      shared_ptr<CloudAccountRole::CloudAccountRoleHealthCheckResult> cloudAccountRoleHealthCheckResult_ {};
      // 云账号角色ID
      shared_ptr<string> cloudAccountRoleId_ {};
      // 云账号名称
      shared_ptr<string> cloudAccountRoleName_ {};
      // 云账号角色用途
      shared_ptr<string> cloudAccountRoleType_ {};
      // 云账号角色类型
      shared_ptr<string> cloudAccountRoleUsageType_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> description_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // 云账号角色状态
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudAccountRole_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudAccountRole Field Functions 
    bool hasCloudAccountRole() const { return this->cloudAccountRole_ != nullptr;};
    void deleteCloudAccountRole() { this->cloudAccountRole_ = nullptr;};
    inline const GetCloudAccountRoleResponseBody::CloudAccountRole & getCloudAccountRole() const { DARABONBA_PTR_GET_CONST(cloudAccountRole_, GetCloudAccountRoleResponseBody::CloudAccountRole) };
    inline GetCloudAccountRoleResponseBody::CloudAccountRole getCloudAccountRole() { DARABONBA_PTR_GET(cloudAccountRole_, GetCloudAccountRoleResponseBody::CloudAccountRole) };
    inline GetCloudAccountRoleResponseBody& setCloudAccountRole(const GetCloudAccountRoleResponseBody::CloudAccountRole & cloudAccountRole) { DARABONBA_PTR_SET_VALUE(cloudAccountRole_, cloudAccountRole) };
    inline GetCloudAccountRoleResponseBody& setCloudAccountRole(GetCloudAccountRoleResponseBody::CloudAccountRole && cloudAccountRole) { DARABONBA_PTR_SET_RVALUE(cloudAccountRole_, cloudAccountRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAccountRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetCloudAccountRoleResponseBody::CloudAccountRole> cloudAccountRole_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
