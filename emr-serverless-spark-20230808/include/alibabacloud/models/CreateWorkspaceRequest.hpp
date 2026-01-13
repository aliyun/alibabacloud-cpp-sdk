// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
      DARABONBA_PTR_TO_JSON(autoStartSessionCluster, autoStartSessionCluster_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dlfCatalogId, dlfCatalogId_);
      DARABONBA_PTR_TO_JSON(dlfType, dlfType_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(ossBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ramRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(releaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(autoStartSessionCluster, autoStartSessionCluster_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dlfCatalogId, dlfCatalogId_);
      DARABONBA_PTR_FROM_JSON(dlfType, dlfType_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(ossBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ramRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(releaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest(CreateWorkspaceRequest &&) = default ;
    CreateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest& operator=(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest& operator=(CreateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class ResourceSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
      };
      ResourceSpec() = default ;
      ResourceSpec(const ResourceSpec &) = default ;
      ResourceSpec(ResourceSpec &&) = default ;
      ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSpec() = default ;
      ResourceSpec& operator=(const ResourceSpec &) = default ;
      ResourceSpec& operator=(ResourceSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
      inline ResourceSpec& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    protected:
      // The maximum resource quota for a workspace.
      shared_ptr<string> cu_ {};
    };

    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->autoRenewPeriodUnit_ == nullptr && this->autoStartSessionCluster_ == nullptr && this->clientToken_ == nullptr && this->dlfCatalogId_ == nullptr
        && this->dlfType_ == nullptr && this->duration_ == nullptr && this->ossBucket_ == nullptr && this->paymentDurationUnit_ == nullptr && this->paymentType_ == nullptr
        && this->ramRoleName_ == nullptr && this->releaseType_ == nullptr && this->resourceSpec_ == nullptr && this->tag_ == nullptr && this->workspaceName_ == nullptr
        && this->regionId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateWorkspaceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateWorkspaceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // autoRenewPeriodUnit Field Functions 
    bool hasAutoRenewPeriodUnit() const { return this->autoRenewPeriodUnit_ != nullptr;};
    void deleteAutoRenewPeriodUnit() { this->autoRenewPeriodUnit_ = nullptr;};
    inline string getAutoRenewPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriodUnit_, "") };
    inline CreateWorkspaceRequest& setAutoRenewPeriodUnit(string autoRenewPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewPeriodUnit_, autoRenewPeriodUnit) };


    // autoStartSessionCluster Field Functions 
    bool hasAutoStartSessionCluster() const { return this->autoStartSessionCluster_ != nullptr;};
    void deleteAutoStartSessionCluster() { this->autoStartSessionCluster_ = nullptr;};
    inline bool getAutoStartSessionCluster() const { DARABONBA_PTR_GET_DEFAULT(autoStartSessionCluster_, false) };
    inline CreateWorkspaceRequest& setAutoStartSessionCluster(bool autoStartSessionCluster) { DARABONBA_PTR_SET_VALUE(autoStartSessionCluster_, autoStartSessionCluster) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWorkspaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dlfCatalogId Field Functions 
    bool hasDlfCatalogId() const { return this->dlfCatalogId_ != nullptr;};
    void deleteDlfCatalogId() { this->dlfCatalogId_ = nullptr;};
    inline string getDlfCatalogId() const { DARABONBA_PTR_GET_DEFAULT(dlfCatalogId_, "") };
    inline CreateWorkspaceRequest& setDlfCatalogId(string dlfCatalogId) { DARABONBA_PTR_SET_VALUE(dlfCatalogId_, dlfCatalogId) };


    // dlfType Field Functions 
    bool hasDlfType() const { return this->dlfType_ != nullptr;};
    void deleteDlfType() { this->dlfType_ = nullptr;};
    inline string getDlfType() const { DARABONBA_PTR_GET_DEFAULT(dlfType_, "") };
    inline CreateWorkspaceRequest& setDlfType(string dlfType) { DARABONBA_PTR_SET_VALUE(dlfType_, dlfType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateWorkspaceRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline CreateWorkspaceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateWorkspaceRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateWorkspaceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateWorkspaceRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline CreateWorkspaceRequest& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const CreateWorkspaceRequest::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, CreateWorkspaceRequest::ResourceSpec) };
    inline CreateWorkspaceRequest::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, CreateWorkspaceRequest::ResourceSpec) };
    inline CreateWorkspaceRequest& setResourceSpec(const CreateWorkspaceRequest::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline CreateWorkspaceRequest& setResourceSpec(CreateWorkspaceRequest::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateWorkspaceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateWorkspaceRequest::Tag>) };
    inline vector<CreateWorkspaceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateWorkspaceRequest::Tag>) };
    inline CreateWorkspaceRequest& setTag(const vector<CreateWorkspaceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateWorkspaceRequest& setTag(vector<CreateWorkspaceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWorkspaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable auto-renewal. This parameter is required only if the paymentType parameter is set to Pre.
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
    shared_ptr<string> autoRenewPeriod_ {};
    // The unit of the auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
    shared_ptr<string> autoRenewPeriodUnit_ {};
    // Specifies whether to automatically start a session.
    shared_ptr<bool> autoStartSessionCluster_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The information of the Data Lake Formation (DLF) catalog.
    shared_ptr<string> dlfCatalogId_ {};
    // The version of DLF.
    shared_ptr<string> dlfType_ {};
    // The subscription period. This parameter is required only if the paymentType parameter is set to Pre.
    shared_ptr<string> duration_ {};
    // The name of the Object Storage Service (OSS) bucket.
    shared_ptr<string> ossBucket_ {};
    // The unit of the subscription duration.
    shared_ptr<string> paymentDurationUnit_ {};
    // The billing method. Valid values:
    // 
    // *   PayAsYouGo
    // *   Pre
    shared_ptr<string> paymentType_ {};
    // The name of the role used to run Spark jobs.
    shared_ptr<string> ramRoleName_ {};
    // The type of the version.
    shared_ptr<string> releaseType_ {};
    // The resource specifications.
    shared_ptr<CreateWorkspaceRequest::ResourceSpec> resourceSpec_ {};
    shared_ptr<vector<CreateWorkspaceRequest::Tag>> tag_ {};
    // The name of the workspace.
    shared_ptr<string> workspaceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
