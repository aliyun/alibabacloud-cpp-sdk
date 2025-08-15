// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkspaceRequestResourceSpec.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkspaceRequestTag.hpp>
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
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->autoRenewPeriodUnit_ != nullptr && this->autoStartSessionCluster_ != nullptr && this->clientToken_ != nullptr && this->dlfCatalogId_ != nullptr
        && this->dlfType_ != nullptr && this->duration_ != nullptr && this->ossBucket_ != nullptr && this->paymentDurationUnit_ != nullptr && this->paymentType_ != nullptr
        && this->ramRoleName_ != nullptr && this->releaseType_ != nullptr && this->resourceSpec_ != nullptr && this->tag_ != nullptr && this->workspaceName_ != nullptr
        && this->regionId_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateWorkspaceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateWorkspaceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // autoRenewPeriodUnit Field Functions 
    bool hasAutoRenewPeriodUnit() const { return this->autoRenewPeriodUnit_ != nullptr;};
    void deleteAutoRenewPeriodUnit() { this->autoRenewPeriodUnit_ = nullptr;};
    inline string autoRenewPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriodUnit_, "") };
    inline CreateWorkspaceRequest& setAutoRenewPeriodUnit(string autoRenewPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewPeriodUnit_, autoRenewPeriodUnit) };


    // autoStartSessionCluster Field Functions 
    bool hasAutoStartSessionCluster() const { return this->autoStartSessionCluster_ != nullptr;};
    void deleteAutoStartSessionCluster() { this->autoStartSessionCluster_ = nullptr;};
    inline bool autoStartSessionCluster() const { DARABONBA_PTR_GET_DEFAULT(autoStartSessionCluster_, false) };
    inline CreateWorkspaceRequest& setAutoStartSessionCluster(bool autoStartSessionCluster) { DARABONBA_PTR_SET_VALUE(autoStartSessionCluster_, autoStartSessionCluster) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWorkspaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dlfCatalogId Field Functions 
    bool hasDlfCatalogId() const { return this->dlfCatalogId_ != nullptr;};
    void deleteDlfCatalogId() { this->dlfCatalogId_ = nullptr;};
    inline string dlfCatalogId() const { DARABONBA_PTR_GET_DEFAULT(dlfCatalogId_, "") };
    inline CreateWorkspaceRequest& setDlfCatalogId(string dlfCatalogId) { DARABONBA_PTR_SET_VALUE(dlfCatalogId_, dlfCatalogId) };


    // dlfType Field Functions 
    bool hasDlfType() const { return this->dlfType_ != nullptr;};
    void deleteDlfType() { this->dlfType_ = nullptr;};
    inline string dlfType() const { DARABONBA_PTR_GET_DEFAULT(dlfType_, "") };
    inline CreateWorkspaceRequest& setDlfType(string dlfType) { DARABONBA_PTR_SET_VALUE(dlfType_, dlfType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateWorkspaceRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline CreateWorkspaceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateWorkspaceRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateWorkspaceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateWorkspaceRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline CreateWorkspaceRequest& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const CreateWorkspaceRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, CreateWorkspaceRequestResourceSpec) };
    inline CreateWorkspaceRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, CreateWorkspaceRequestResourceSpec) };
    inline CreateWorkspaceRequest& setResourceSpec(const CreateWorkspaceRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline CreateWorkspaceRequest& setResourceSpec(CreateWorkspaceRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateWorkspaceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateWorkspaceRequestTag>) };
    inline vector<CreateWorkspaceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateWorkspaceRequestTag>) };
    inline CreateWorkspaceRequest& setTag(const vector<CreateWorkspaceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateWorkspaceRequest& setTag(vector<CreateWorkspaceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWorkspaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable auto-renewal. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<string> autoRenew_ = nullptr;
    // The auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<string> autoRenewPeriod_ = nullptr;
    // The unit of the auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<string> autoRenewPeriodUnit_ = nullptr;
    // Specifies whether to automatically start a session.
    std::shared_ptr<bool> autoStartSessionCluster_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The information of the Data Lake Formation (DLF) catalog.
    std::shared_ptr<string> dlfCatalogId_ = nullptr;
    // The version of DLF.
    std::shared_ptr<string> dlfType_ = nullptr;
    // The subscription period. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<string> duration_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The unit of the subscription duration.
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PayAsYouGo
    // *   Pre
    std::shared_ptr<string> paymentType_ = nullptr;
    // The name of the role used to run Spark jobs.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The type of the version.
    std::shared_ptr<string> releaseType_ = nullptr;
    // The resource specifications.
    std::shared_ptr<CreateWorkspaceRequestResourceSpec> resourceSpec_ = nullptr;
    std::shared_ptr<vector<CreateWorkspaceRequestTag>> tag_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
