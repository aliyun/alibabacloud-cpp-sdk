// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateWorkspaceResponseBody() = default ;
    CreateWorkspaceResponseBody(const CreateWorkspaceResponseBody &) = default ;
    CreateWorkspaceResponseBody(CreateWorkspaceResponseBody &&) = default ;
    CreateWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceResponseBody() = default ;
    CreateWorkspaceResponseBody& operator=(const CreateWorkspaceResponseBody &) = default ;
    CreateWorkspaceResponseBody& operator=(CreateWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(aiRegistryNamespaceId, aiRegistryNamespaceId_);
        DARABONBA_PTR_TO_JSON(authorizationStatus, authorizationStatus_);
        DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(cmsWorkspaceId, cmsWorkspaceId_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(storageType, storageType_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(aiRegistryNamespaceId, aiRegistryNamespaceId_);
        DARABONBA_PTR_FROM_JSON(authorizationStatus, authorizationStatus_);
        DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(cmsWorkspaceId, cmsWorkspaceId_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(storageType, storageType_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The tag value.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      class NetworkConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(vpc, vpc_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(vpc, vpc_);
        };
        NetworkConfiguration() = default ;
        NetworkConfiguration(const NetworkConfiguration &) = default ;
        NetworkConfiguration(NetworkConfiguration &&) = default ;
        NetworkConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkConfiguration() = default ;
        NetworkConfiguration& operator=(const NetworkConfiguration &) = default ;
        NetworkConfiguration& operator=(NetworkConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Vpc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          };
          Vpc() = default ;
          Vpc(const Vpc &) = default ;
          Vpc(Vpc &&) = default ;
          Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Vpc() = default ;
          Vpc& operator=(const Vpc &) = default ;
          Vpc& operator=(Vpc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Vpc& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // vSwitchIds Field Functions 
          bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
          void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
          inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
          inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
          inline Vpc& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
          inline Vpc& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // Specifies whether to enable VPC networking.
          shared_ptr<bool> enabled_ {};
          // The list of vSwitch IDs.
          shared_ptr<vector<string>> vSwitchIds_ {};
          // The ID of the user VPC.
          shared_ptr<string> vpcId_ {};
        };

        virtual bool empty() const override { return this->vpc_ == nullptr; };
        // vpc Field Functions 
        bool hasVpc() const { return this->vpc_ != nullptr;};
        void deleteVpc() { this->vpc_ = nullptr;};
        inline const NetworkConfiguration::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, NetworkConfiguration::Vpc) };
        inline NetworkConfiguration::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, NetworkConfiguration::Vpc) };
        inline NetworkConfiguration& setVpc(const NetworkConfiguration::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
        inline NetworkConfiguration& setVpc(NetworkConfiguration::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


      protected:
        // The VPC network configuration of the user.
        shared_ptr<NetworkConfiguration::Vpc> vpc_ {};
      };

      virtual bool empty() const override { return this->aiRegistryNamespaceId_ == nullptr
        && this->authorizationStatus_ == nullptr && this->bucketName_ == nullptr && this->cmsWorkspaceId_ == nullptr && this->createTime_ == nullptr && this->name_ == nullptr
        && this->networkConfiguration_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->storageType_ == nullptr && this->tags_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
      // aiRegistryNamespaceId Field Functions 
      bool hasAiRegistryNamespaceId() const { return this->aiRegistryNamespaceId_ != nullptr;};
      void deleteAiRegistryNamespaceId() { this->aiRegistryNamespaceId_ = nullptr;};
      inline string getAiRegistryNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(aiRegistryNamespaceId_, "") };
      inline Data& setAiRegistryNamespaceId(string aiRegistryNamespaceId) { DARABONBA_PTR_SET_VALUE(aiRegistryNamespaceId_, aiRegistryNamespaceId) };


      // authorizationStatus Field Functions 
      bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
      void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
      inline string getAuthorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, "") };
      inline Data& setAuthorizationStatus(string authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // cmsWorkspaceId Field Functions 
      bool hasCmsWorkspaceId() const { return this->cmsWorkspaceId_ != nullptr;};
      void deleteCmsWorkspaceId() { this->cmsWorkspaceId_ = nullptr;};
      inline string getCmsWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspaceId_, "") };
      inline Data& setCmsWorkspaceId(string cmsWorkspaceId) { DARABONBA_PTR_SET_VALUE(cmsWorkspaceId_, cmsWorkspaceId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkConfiguration Field Functions 
      bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
      void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
      inline const Data::NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, Data::NetworkConfiguration) };
      inline Data::NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, Data::NetworkConfiguration) };
      inline Data& setNetworkConfiguration(const Data::NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
      inline Data& setNetworkConfiguration(Data::NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline Data& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Data& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The AI Registry namespace ID. This value is returned after the related resources are bound. It may be empty during initialization.
      shared_ptr<string> aiRegistryNamespaceId_ {};
      // The OSS storage authorization status.
      shared_ptr<string> authorizationStatus_ {};
      // The name of the private OSS bucket.
      shared_ptr<string> bucketName_ {};
      // The CloudMonitor workspace ID. This value is returned after the related resources are bound. It may be empty during initialization.
      shared_ptr<string> cmsWorkspaceId_ {};
      // The time when the workspace was created, in ISO 8601 format.
      // 
      // This parameter is required.
      shared_ptr<string> createTime_ {};
      // The workspace name.
      shared_ptr<string> name_ {};
      // The network configuration of the workspace.
      shared_ptr<Data::NetworkConfiguration> networkConfiguration_ {};
      // The region ID of the workspace.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the workspace belongs. This value may be empty if no resource group is specified.
      shared_ptr<string> resourceGroupId_ {};
      // The workspace status.
      shared_ptr<string> status_ {};
      // The supplementary reason for the current workspace status. This value is used to display the specific reason when initialization fails or authorization is pending. It may be empty under normal conditions.
      shared_ptr<string> statusReason_ {};
      // The storage type of the workspace.
      shared_ptr<string> storageType_ {};
      // The list of workspace tags. An empty array is returned if no tags are set.
      // 
      // This parameter is required.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The ID of the tenant to which the workspace belongs.
      shared_ptr<string> tenantId_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateWorkspaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWorkspaceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateWorkspaceResponseBody::Data) };
    inline CreateWorkspaceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateWorkspaceResponseBody::Data) };
    inline CreateWorkspaceResponseBody& setData(const CreateWorkspaceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWorkspaceResponseBody& setData(CreateWorkspaceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateWorkspaceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateWorkspaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The workspace details.
    shared_ptr<CreateWorkspaceResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
