// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ACS.hpp>
#include <alibabacloud/models/EniCacheConfig.hpp>
#include <alibabacloud/models/OversoldUsageConfig.hpp>
#include <vector>
#include <alibabacloud/models/WorkspaceSpecs.hpp>
#include <alibabacloud/models/SandboxCacheConfig.hpp>
#include <alibabacloud/models/SelfQuotaPreemptionConfig.hpp>
#include <alibabacloud/models/SubQuotaPreemptionConfig.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ACS, ACS_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ControlPlaneClusterId, controlPlaneClusterId_);
      DARABONBA_PTR_TO_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_TO_JSON(EnableGPUShare, enableGPUShare_);
      DARABONBA_PTR_TO_JSON(EnablePreemptSubquotaWorkloads, enablePreemptSubquotaWorkloads_);
      DARABONBA_PTR_TO_JSON(EnableSelfQuotaPreemption, enableSelfQuotaPreemption_);
      DARABONBA_PTR_TO_JSON(EnableSubQuotaPreemption, enableSubQuotaPreemption_);
      DARABONBA_PTR_TO_JSON(EniCacheConfig, eniCacheConfig_);
      DARABONBA_PTR_TO_JSON(OversoldUsageConfig, oversoldUsageConfig_);
      DARABONBA_PTR_TO_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_TO_JSON(SandboxCacheConfig, sandboxCacheConfig_);
      DARABONBA_PTR_TO_JSON(SelfQuotaPreemptionConfig, selfQuotaPreemptionConfig_);
      DARABONBA_PTR_TO_JSON(SubQuotaPreemptionConfig, subQuotaPreemptionConfig_);
      DARABONBA_PTR_TO_JSON(SupportGPUDrivers, supportGPUDrivers_);
      DARABONBA_PTR_TO_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_TO_JSON(UseCase, useCase_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ACS, ACS_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneClusterId, controlPlaneClusterId_);
      DARABONBA_PTR_FROM_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_FROM_JSON(EnableGPUShare, enableGPUShare_);
      DARABONBA_PTR_FROM_JSON(EnablePreemptSubquotaWorkloads, enablePreemptSubquotaWorkloads_);
      DARABONBA_PTR_FROM_JSON(EnableSelfQuotaPreemption, enableSelfQuotaPreemption_);
      DARABONBA_PTR_FROM_JSON(EnableSubQuotaPreemption, enableSubQuotaPreemption_);
      DARABONBA_PTR_FROM_JSON(EniCacheConfig, eniCacheConfig_);
      DARABONBA_PTR_FROM_JSON(OversoldUsageConfig, oversoldUsageConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_FROM_JSON(SandboxCacheConfig, sandboxCacheConfig_);
      DARABONBA_PTR_FROM_JSON(SelfQuotaPreemptionConfig, selfQuotaPreemptionConfig_);
      DARABONBA_PTR_FROM_JSON(SubQuotaPreemptionConfig, subQuotaPreemptionConfig_);
      DARABONBA_PTR_FROM_JSON(SupportGPUDrivers, supportGPUDrivers_);
      DARABONBA_PTR_FROM_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_FROM_JSON(UseCase, useCase_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
    };
    QuotaConfig() = default ;
    QuotaConfig(const QuotaConfig &) = default ;
    QuotaConfig(QuotaConfig &&) = default ;
    QuotaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaConfig() = default ;
    QuotaConfig& operator=(const QuotaConfig &) = default ;
    QuotaConfig& operator=(QuotaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ACS_ == nullptr
        && this->clusterId_ == nullptr && this->controlPlaneClusterId_ == nullptr && this->defaultGPUDriver_ == nullptr && this->enableGPUShare_ == nullptr && this->enablePreemptSubquotaWorkloads_ == nullptr
        && this->enableSelfQuotaPreemption_ == nullptr && this->enableSubQuotaPreemption_ == nullptr && this->eniCacheConfig_ == nullptr && this->oversoldUsageConfig_ == nullptr && this->resourceSpecs_ == nullptr
        && this->sandboxCacheConfig_ == nullptr && this->selfQuotaPreemptionConfig_ == nullptr && this->subQuotaPreemptionConfig_ == nullptr && this->supportGPUDrivers_ == nullptr && this->supportRDMA_ == nullptr
        && this->useCase_ == nullptr && this->userVpc_ == nullptr; };
    // ACS Field Functions 
    bool hasACS() const { return this->ACS_ != nullptr;};
    void deleteACS() { this->ACS_ = nullptr;};
    inline const ACS & getACS() const { DARABONBA_PTR_GET_CONST(ACS_, ACS) };
    inline ACS getACS() { DARABONBA_PTR_GET(ACS_, ACS) };
    inline QuotaConfig& setACS(const ACS & ACS) { DARABONBA_PTR_SET_VALUE(ACS_, ACS) };
    inline QuotaConfig& setACS(ACS && ACS) { DARABONBA_PTR_SET_RVALUE(ACS_, ACS) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QuotaConfig& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // controlPlaneClusterId Field Functions 
    bool hasControlPlaneClusterId() const { return this->controlPlaneClusterId_ != nullptr;};
    void deleteControlPlaneClusterId() { this->controlPlaneClusterId_ = nullptr;};
    inline string getControlPlaneClusterId() const { DARABONBA_PTR_GET_DEFAULT(controlPlaneClusterId_, "") };
    inline QuotaConfig& setControlPlaneClusterId(string controlPlaneClusterId) { DARABONBA_PTR_SET_VALUE(controlPlaneClusterId_, controlPlaneClusterId) };


    // defaultGPUDriver Field Functions 
    bool hasDefaultGPUDriver() const { return this->defaultGPUDriver_ != nullptr;};
    void deleteDefaultGPUDriver() { this->defaultGPUDriver_ = nullptr;};
    inline string getDefaultGPUDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultGPUDriver_, "") };
    inline QuotaConfig& setDefaultGPUDriver(string defaultGPUDriver) { DARABONBA_PTR_SET_VALUE(defaultGPUDriver_, defaultGPUDriver) };


    // enableGPUShare Field Functions 
    bool hasEnableGPUShare() const { return this->enableGPUShare_ != nullptr;};
    void deleteEnableGPUShare() { this->enableGPUShare_ = nullptr;};
    inline bool getEnableGPUShare() const { DARABONBA_PTR_GET_DEFAULT(enableGPUShare_, false) };
    inline QuotaConfig& setEnableGPUShare(bool enableGPUShare) { DARABONBA_PTR_SET_VALUE(enableGPUShare_, enableGPUShare) };


    // enablePreemptSubquotaWorkloads Field Functions 
    bool hasEnablePreemptSubquotaWorkloads() const { return this->enablePreemptSubquotaWorkloads_ != nullptr;};
    void deleteEnablePreemptSubquotaWorkloads() { this->enablePreemptSubquotaWorkloads_ = nullptr;};
    inline bool getEnablePreemptSubquotaWorkloads() const { DARABONBA_PTR_GET_DEFAULT(enablePreemptSubquotaWorkloads_, false) };
    inline QuotaConfig& setEnablePreemptSubquotaWorkloads(bool enablePreemptSubquotaWorkloads) { DARABONBA_PTR_SET_VALUE(enablePreemptSubquotaWorkloads_, enablePreemptSubquotaWorkloads) };


    // enableSelfQuotaPreemption Field Functions 
    bool hasEnableSelfQuotaPreemption() const { return this->enableSelfQuotaPreemption_ != nullptr;};
    void deleteEnableSelfQuotaPreemption() { this->enableSelfQuotaPreemption_ = nullptr;};
    inline bool getEnableSelfQuotaPreemption() const { DARABONBA_PTR_GET_DEFAULT(enableSelfQuotaPreemption_, false) };
    inline QuotaConfig& setEnableSelfQuotaPreemption(bool enableSelfQuotaPreemption) { DARABONBA_PTR_SET_VALUE(enableSelfQuotaPreemption_, enableSelfQuotaPreemption) };


    // enableSubQuotaPreemption Field Functions 
    bool hasEnableSubQuotaPreemption() const { return this->enableSubQuotaPreemption_ != nullptr;};
    void deleteEnableSubQuotaPreemption() { this->enableSubQuotaPreemption_ = nullptr;};
    inline bool getEnableSubQuotaPreemption() const { DARABONBA_PTR_GET_DEFAULT(enableSubQuotaPreemption_, false) };
    inline QuotaConfig& setEnableSubQuotaPreemption(bool enableSubQuotaPreemption) { DARABONBA_PTR_SET_VALUE(enableSubQuotaPreemption_, enableSubQuotaPreemption) };


    // eniCacheConfig Field Functions 
    bool hasEniCacheConfig() const { return this->eniCacheConfig_ != nullptr;};
    void deleteEniCacheConfig() { this->eniCacheConfig_ = nullptr;};
    inline const EniCacheConfig & getEniCacheConfig() const { DARABONBA_PTR_GET_CONST(eniCacheConfig_, EniCacheConfig) };
    inline EniCacheConfig getEniCacheConfig() { DARABONBA_PTR_GET(eniCacheConfig_, EniCacheConfig) };
    inline QuotaConfig& setEniCacheConfig(const EniCacheConfig & eniCacheConfig) { DARABONBA_PTR_SET_VALUE(eniCacheConfig_, eniCacheConfig) };
    inline QuotaConfig& setEniCacheConfig(EniCacheConfig && eniCacheConfig) { DARABONBA_PTR_SET_RVALUE(eniCacheConfig_, eniCacheConfig) };


    // oversoldUsageConfig Field Functions 
    bool hasOversoldUsageConfig() const { return this->oversoldUsageConfig_ != nullptr;};
    void deleteOversoldUsageConfig() { this->oversoldUsageConfig_ = nullptr;};
    inline const OversoldUsageConfig & getOversoldUsageConfig() const { DARABONBA_PTR_GET_CONST(oversoldUsageConfig_, OversoldUsageConfig) };
    inline OversoldUsageConfig getOversoldUsageConfig() { DARABONBA_PTR_GET(oversoldUsageConfig_, OversoldUsageConfig) };
    inline QuotaConfig& setOversoldUsageConfig(const OversoldUsageConfig & oversoldUsageConfig) { DARABONBA_PTR_SET_VALUE(oversoldUsageConfig_, oversoldUsageConfig) };
    inline QuotaConfig& setOversoldUsageConfig(OversoldUsageConfig && oversoldUsageConfig) { DARABONBA_PTR_SET_RVALUE(oversoldUsageConfig_, oversoldUsageConfig) };


    // resourceSpecs Field Functions 
    bool hasResourceSpecs() const { return this->resourceSpecs_ != nullptr;};
    void deleteResourceSpecs() { this->resourceSpecs_ = nullptr;};
    inline const vector<WorkspaceSpecs> & getResourceSpecs() const { DARABONBA_PTR_GET_CONST(resourceSpecs_, vector<WorkspaceSpecs>) };
    inline vector<WorkspaceSpecs> getResourceSpecs() { DARABONBA_PTR_GET(resourceSpecs_, vector<WorkspaceSpecs>) };
    inline QuotaConfig& setResourceSpecs(const vector<WorkspaceSpecs> & resourceSpecs) { DARABONBA_PTR_SET_VALUE(resourceSpecs_, resourceSpecs) };
    inline QuotaConfig& setResourceSpecs(vector<WorkspaceSpecs> && resourceSpecs) { DARABONBA_PTR_SET_RVALUE(resourceSpecs_, resourceSpecs) };


    // sandboxCacheConfig Field Functions 
    bool hasSandboxCacheConfig() const { return this->sandboxCacheConfig_ != nullptr;};
    void deleteSandboxCacheConfig() { this->sandboxCacheConfig_ = nullptr;};
    inline const SandboxCacheConfig & getSandboxCacheConfig() const { DARABONBA_PTR_GET_CONST(sandboxCacheConfig_, SandboxCacheConfig) };
    inline SandboxCacheConfig getSandboxCacheConfig() { DARABONBA_PTR_GET(sandboxCacheConfig_, SandboxCacheConfig) };
    inline QuotaConfig& setSandboxCacheConfig(const SandboxCacheConfig & sandboxCacheConfig) { DARABONBA_PTR_SET_VALUE(sandboxCacheConfig_, sandboxCacheConfig) };
    inline QuotaConfig& setSandboxCacheConfig(SandboxCacheConfig && sandboxCacheConfig) { DARABONBA_PTR_SET_RVALUE(sandboxCacheConfig_, sandboxCacheConfig) };


    // selfQuotaPreemptionConfig Field Functions 
    bool hasSelfQuotaPreemptionConfig() const { return this->selfQuotaPreemptionConfig_ != nullptr;};
    void deleteSelfQuotaPreemptionConfig() { this->selfQuotaPreemptionConfig_ = nullptr;};
    inline const SelfQuotaPreemptionConfig & getSelfQuotaPreemptionConfig() const { DARABONBA_PTR_GET_CONST(selfQuotaPreemptionConfig_, SelfQuotaPreemptionConfig) };
    inline SelfQuotaPreemptionConfig getSelfQuotaPreemptionConfig() { DARABONBA_PTR_GET(selfQuotaPreemptionConfig_, SelfQuotaPreemptionConfig) };
    inline QuotaConfig& setSelfQuotaPreemptionConfig(const SelfQuotaPreemptionConfig & selfQuotaPreemptionConfig) { DARABONBA_PTR_SET_VALUE(selfQuotaPreemptionConfig_, selfQuotaPreemptionConfig) };
    inline QuotaConfig& setSelfQuotaPreemptionConfig(SelfQuotaPreemptionConfig && selfQuotaPreemptionConfig) { DARABONBA_PTR_SET_RVALUE(selfQuotaPreemptionConfig_, selfQuotaPreemptionConfig) };


    // subQuotaPreemptionConfig Field Functions 
    bool hasSubQuotaPreemptionConfig() const { return this->subQuotaPreemptionConfig_ != nullptr;};
    void deleteSubQuotaPreemptionConfig() { this->subQuotaPreemptionConfig_ = nullptr;};
    inline const SubQuotaPreemptionConfig & getSubQuotaPreemptionConfig() const { DARABONBA_PTR_GET_CONST(subQuotaPreemptionConfig_, SubQuotaPreemptionConfig) };
    inline SubQuotaPreemptionConfig getSubQuotaPreemptionConfig() { DARABONBA_PTR_GET(subQuotaPreemptionConfig_, SubQuotaPreemptionConfig) };
    inline QuotaConfig& setSubQuotaPreemptionConfig(const SubQuotaPreemptionConfig & subQuotaPreemptionConfig) { DARABONBA_PTR_SET_VALUE(subQuotaPreemptionConfig_, subQuotaPreemptionConfig) };
    inline QuotaConfig& setSubQuotaPreemptionConfig(SubQuotaPreemptionConfig && subQuotaPreemptionConfig) { DARABONBA_PTR_SET_RVALUE(subQuotaPreemptionConfig_, subQuotaPreemptionConfig) };


    // supportGPUDrivers Field Functions 
    bool hasSupportGPUDrivers() const { return this->supportGPUDrivers_ != nullptr;};
    void deleteSupportGPUDrivers() { this->supportGPUDrivers_ = nullptr;};
    inline const vector<string> & getSupportGPUDrivers() const { DARABONBA_PTR_GET_CONST(supportGPUDrivers_, vector<string>) };
    inline vector<string> getSupportGPUDrivers() { DARABONBA_PTR_GET(supportGPUDrivers_, vector<string>) };
    inline QuotaConfig& setSupportGPUDrivers(const vector<string> & supportGPUDrivers) { DARABONBA_PTR_SET_VALUE(supportGPUDrivers_, supportGPUDrivers) };
    inline QuotaConfig& setSupportGPUDrivers(vector<string> && supportGPUDrivers) { DARABONBA_PTR_SET_RVALUE(supportGPUDrivers_, supportGPUDrivers) };


    // supportRDMA Field Functions 
    bool hasSupportRDMA() const { return this->supportRDMA_ != nullptr;};
    void deleteSupportRDMA() { this->supportRDMA_ = nullptr;};
    inline bool getSupportRDMA() const { DARABONBA_PTR_GET_DEFAULT(supportRDMA_, false) };
    inline QuotaConfig& setSupportRDMA(bool supportRDMA) { DARABONBA_PTR_SET_VALUE(supportRDMA_, supportRDMA) };


    // useCase Field Functions 
    bool hasUseCase() const { return this->useCase_ != nullptr;};
    void deleteUseCase() { this->useCase_ = nullptr;};
    inline string getUseCase() const { DARABONBA_PTR_GET_DEFAULT(useCase_, "") };
    inline QuotaConfig& setUseCase(string useCase) { DARABONBA_PTR_SET_VALUE(useCase_, useCase) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline QuotaConfig& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline QuotaConfig& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    shared_ptr<ACS> ACS_ {};
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> controlPlaneClusterId_ {};
    shared_ptr<string> defaultGPUDriver_ {};
    shared_ptr<bool> enableGPUShare_ {};
    shared_ptr<bool> enablePreemptSubquotaWorkloads_ {};
    shared_ptr<bool> enableSelfQuotaPreemption_ {};
    shared_ptr<bool> enableSubQuotaPreemption_ {};
    shared_ptr<EniCacheConfig> eniCacheConfig_ {};
    shared_ptr<OversoldUsageConfig> oversoldUsageConfig_ {};
    shared_ptr<vector<WorkspaceSpecs>> resourceSpecs_ {};
    shared_ptr<SandboxCacheConfig> sandboxCacheConfig_ {};
    shared_ptr<SelfQuotaPreemptionConfig> selfQuotaPreemptionConfig_ {};
    shared_ptr<SubQuotaPreemptionConfig> subQuotaPreemptionConfig_ {};
    shared_ptr<vector<string>> supportGPUDrivers_ {};
    shared_ptr<bool> supportRDMA_ {};
    shared_ptr<string> useCase_ {};
    shared_ptr<UserVpc> userVpc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
