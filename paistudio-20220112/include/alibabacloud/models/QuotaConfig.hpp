// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
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
      DARABONBA_PTR_TO_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_TO_JSON(EnableGPUShare, enableGPUShare_);
      DARABONBA_PTR_TO_JSON(EnablePreemptSubquotaWorkloads, enablePreemptSubquotaWorkloads_);
      DARABONBA_PTR_TO_JSON(EnableSubQuotaPreemption, enableSubQuotaPreemption_);
      DARABONBA_PTR_TO_JSON(EniCacheConfig, eniCacheConfig_);
      DARABONBA_PTR_TO_JSON(OversoldUsageInfo, oversoldUsageInfo_);
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
      DARABONBA_PTR_FROM_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_FROM_JSON(EnableGPUShare, enableGPUShare_);
      DARABONBA_PTR_FROM_JSON(EnablePreemptSubquotaWorkloads, enablePreemptSubquotaWorkloads_);
      DARABONBA_PTR_FROM_JSON(EnableSubQuotaPreemption, enableSubQuotaPreemption_);
      DARABONBA_PTR_FROM_JSON(EniCacheConfig, eniCacheConfig_);
      DARABONBA_PTR_FROM_JSON(OversoldUsageInfo, oversoldUsageInfo_);
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
    virtual bool empty() const override { this->ACS_ != nullptr
        && this->clusterId_ != nullptr && this->defaultGPUDriver_ != nullptr && this->enableGPUShare_ != nullptr && this->enablePreemptSubquotaWorkloads_ != nullptr && this->enableSubQuotaPreemption_ != nullptr
        && this->eniCacheConfig_ != nullptr && this->oversoldUsageInfo_ != nullptr && this->resourceSpecs_ != nullptr && this->sandboxCacheConfig_ != nullptr && this->selfQuotaPreemptionConfig_ != nullptr
        && this->subQuotaPreemptionConfig_ != nullptr && this->supportGPUDrivers_ != nullptr && this->supportRDMA_ != nullptr && this->useCase_ != nullptr && this->userVpc_ != nullptr; };
    // ACS Field Functions 
    bool hasACS() const { return this->ACS_ != nullptr;};
    void deleteACS() { this->ACS_ = nullptr;};
    inline const ACS & ACS() const { DARABONBA_PTR_GET_CONST(ACS_, ACS) };
    inline ACS ACS() { DARABONBA_PTR_GET(ACS_, ACS) };
    inline QuotaConfig& setACS(const ACS & ACS) { DARABONBA_PTR_SET_VALUE(ACS_, ACS) };
    inline QuotaConfig& setACS(ACS && ACS) { DARABONBA_PTR_SET_RVALUE(ACS_, ACS) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline QuotaConfig& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // defaultGPUDriver Field Functions 
    bool hasDefaultGPUDriver() const { return this->defaultGPUDriver_ != nullptr;};
    void deleteDefaultGPUDriver() { this->defaultGPUDriver_ = nullptr;};
    inline string defaultGPUDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultGPUDriver_, "") };
    inline QuotaConfig& setDefaultGPUDriver(string defaultGPUDriver) { DARABONBA_PTR_SET_VALUE(defaultGPUDriver_, defaultGPUDriver) };


    // enableGPUShare Field Functions 
    bool hasEnableGPUShare() const { return this->enableGPUShare_ != nullptr;};
    void deleteEnableGPUShare() { this->enableGPUShare_ = nullptr;};
    inline bool enableGPUShare() const { DARABONBA_PTR_GET_DEFAULT(enableGPUShare_, false) };
    inline QuotaConfig& setEnableGPUShare(bool enableGPUShare) { DARABONBA_PTR_SET_VALUE(enableGPUShare_, enableGPUShare) };


    // enablePreemptSubquotaWorkloads Field Functions 
    bool hasEnablePreemptSubquotaWorkloads() const { return this->enablePreemptSubquotaWorkloads_ != nullptr;};
    void deleteEnablePreemptSubquotaWorkloads() { this->enablePreemptSubquotaWorkloads_ = nullptr;};
    inline bool enablePreemptSubquotaWorkloads() const { DARABONBA_PTR_GET_DEFAULT(enablePreemptSubquotaWorkloads_, false) };
    inline QuotaConfig& setEnablePreemptSubquotaWorkloads(bool enablePreemptSubquotaWorkloads) { DARABONBA_PTR_SET_VALUE(enablePreemptSubquotaWorkloads_, enablePreemptSubquotaWorkloads) };


    // enableSubQuotaPreemption Field Functions 
    bool hasEnableSubQuotaPreemption() const { return this->enableSubQuotaPreemption_ != nullptr;};
    void deleteEnableSubQuotaPreemption() { this->enableSubQuotaPreemption_ = nullptr;};
    inline bool enableSubQuotaPreemption() const { DARABONBA_PTR_GET_DEFAULT(enableSubQuotaPreemption_, false) };
    inline QuotaConfig& setEnableSubQuotaPreemption(bool enableSubQuotaPreemption) { DARABONBA_PTR_SET_VALUE(enableSubQuotaPreemption_, enableSubQuotaPreemption) };


    // eniCacheConfig Field Functions 
    bool hasEniCacheConfig() const { return this->eniCacheConfig_ != nullptr;};
    void deleteEniCacheConfig() { this->eniCacheConfig_ = nullptr;};
    inline const EniCacheConfig & eniCacheConfig() const { DARABONBA_PTR_GET_CONST(eniCacheConfig_, EniCacheConfig) };
    inline EniCacheConfig eniCacheConfig() { DARABONBA_PTR_GET(eniCacheConfig_, EniCacheConfig) };
    inline QuotaConfig& setEniCacheConfig(const EniCacheConfig & eniCacheConfig) { DARABONBA_PTR_SET_VALUE(eniCacheConfig_, eniCacheConfig) };
    inline QuotaConfig& setEniCacheConfig(EniCacheConfig && eniCacheConfig) { DARABONBA_PTR_SET_RVALUE(eniCacheConfig_, eniCacheConfig) };


    // oversoldUsageInfo Field Functions 
    bool hasOversoldUsageInfo() const { return this->oversoldUsageInfo_ != nullptr;};
    void deleteOversoldUsageInfo() { this->oversoldUsageInfo_ = nullptr;};
    inline const OversoldUsageConfig & oversoldUsageInfo() const { DARABONBA_PTR_GET_CONST(oversoldUsageInfo_, OversoldUsageConfig) };
    inline OversoldUsageConfig oversoldUsageInfo() { DARABONBA_PTR_GET(oversoldUsageInfo_, OversoldUsageConfig) };
    inline QuotaConfig& setOversoldUsageInfo(const OversoldUsageConfig & oversoldUsageInfo) { DARABONBA_PTR_SET_VALUE(oversoldUsageInfo_, oversoldUsageInfo) };
    inline QuotaConfig& setOversoldUsageInfo(OversoldUsageConfig && oversoldUsageInfo) { DARABONBA_PTR_SET_RVALUE(oversoldUsageInfo_, oversoldUsageInfo) };


    // resourceSpecs Field Functions 
    bool hasResourceSpecs() const { return this->resourceSpecs_ != nullptr;};
    void deleteResourceSpecs() { this->resourceSpecs_ = nullptr;};
    inline const vector<WorkspaceSpecs> & resourceSpecs() const { DARABONBA_PTR_GET_CONST(resourceSpecs_, vector<WorkspaceSpecs>) };
    inline vector<WorkspaceSpecs> resourceSpecs() { DARABONBA_PTR_GET(resourceSpecs_, vector<WorkspaceSpecs>) };
    inline QuotaConfig& setResourceSpecs(const vector<WorkspaceSpecs> & resourceSpecs) { DARABONBA_PTR_SET_VALUE(resourceSpecs_, resourceSpecs) };
    inline QuotaConfig& setResourceSpecs(vector<WorkspaceSpecs> && resourceSpecs) { DARABONBA_PTR_SET_RVALUE(resourceSpecs_, resourceSpecs) };


    // sandboxCacheConfig Field Functions 
    bool hasSandboxCacheConfig() const { return this->sandboxCacheConfig_ != nullptr;};
    void deleteSandboxCacheConfig() { this->sandboxCacheConfig_ = nullptr;};
    inline const SandboxCacheConfig & sandboxCacheConfig() const { DARABONBA_PTR_GET_CONST(sandboxCacheConfig_, SandboxCacheConfig) };
    inline SandboxCacheConfig sandboxCacheConfig() { DARABONBA_PTR_GET(sandboxCacheConfig_, SandboxCacheConfig) };
    inline QuotaConfig& setSandboxCacheConfig(const SandboxCacheConfig & sandboxCacheConfig) { DARABONBA_PTR_SET_VALUE(sandboxCacheConfig_, sandboxCacheConfig) };
    inline QuotaConfig& setSandboxCacheConfig(SandboxCacheConfig && sandboxCacheConfig) { DARABONBA_PTR_SET_RVALUE(sandboxCacheConfig_, sandboxCacheConfig) };


    // selfQuotaPreemptionConfig Field Functions 
    bool hasSelfQuotaPreemptionConfig() const { return this->selfQuotaPreemptionConfig_ != nullptr;};
    void deleteSelfQuotaPreemptionConfig() { this->selfQuotaPreemptionConfig_ = nullptr;};
    inline const SelfQuotaPreemptionConfig & selfQuotaPreemptionConfig() const { DARABONBA_PTR_GET_CONST(selfQuotaPreemptionConfig_, SelfQuotaPreemptionConfig) };
    inline SelfQuotaPreemptionConfig selfQuotaPreemptionConfig() { DARABONBA_PTR_GET(selfQuotaPreemptionConfig_, SelfQuotaPreemptionConfig) };
    inline QuotaConfig& setSelfQuotaPreemptionConfig(const SelfQuotaPreemptionConfig & selfQuotaPreemptionConfig) { DARABONBA_PTR_SET_VALUE(selfQuotaPreemptionConfig_, selfQuotaPreemptionConfig) };
    inline QuotaConfig& setSelfQuotaPreemptionConfig(SelfQuotaPreemptionConfig && selfQuotaPreemptionConfig) { DARABONBA_PTR_SET_RVALUE(selfQuotaPreemptionConfig_, selfQuotaPreemptionConfig) };


    // subQuotaPreemptionConfig Field Functions 
    bool hasSubQuotaPreemptionConfig() const { return this->subQuotaPreemptionConfig_ != nullptr;};
    void deleteSubQuotaPreemptionConfig() { this->subQuotaPreemptionConfig_ = nullptr;};
    inline const SubQuotaPreemptionConfig & subQuotaPreemptionConfig() const { DARABONBA_PTR_GET_CONST(subQuotaPreemptionConfig_, SubQuotaPreemptionConfig) };
    inline SubQuotaPreemptionConfig subQuotaPreemptionConfig() { DARABONBA_PTR_GET(subQuotaPreemptionConfig_, SubQuotaPreemptionConfig) };
    inline QuotaConfig& setSubQuotaPreemptionConfig(const SubQuotaPreemptionConfig & subQuotaPreemptionConfig) { DARABONBA_PTR_SET_VALUE(subQuotaPreemptionConfig_, subQuotaPreemptionConfig) };
    inline QuotaConfig& setSubQuotaPreemptionConfig(SubQuotaPreemptionConfig && subQuotaPreemptionConfig) { DARABONBA_PTR_SET_RVALUE(subQuotaPreemptionConfig_, subQuotaPreemptionConfig) };


    // supportGPUDrivers Field Functions 
    bool hasSupportGPUDrivers() const { return this->supportGPUDrivers_ != nullptr;};
    void deleteSupportGPUDrivers() { this->supportGPUDrivers_ = nullptr;};
    inline const vector<string> & supportGPUDrivers() const { DARABONBA_PTR_GET_CONST(supportGPUDrivers_, vector<string>) };
    inline vector<string> supportGPUDrivers() { DARABONBA_PTR_GET(supportGPUDrivers_, vector<string>) };
    inline QuotaConfig& setSupportGPUDrivers(const vector<string> & supportGPUDrivers) { DARABONBA_PTR_SET_VALUE(supportGPUDrivers_, supportGPUDrivers) };
    inline QuotaConfig& setSupportGPUDrivers(vector<string> && supportGPUDrivers) { DARABONBA_PTR_SET_RVALUE(supportGPUDrivers_, supportGPUDrivers) };


    // supportRDMA Field Functions 
    bool hasSupportRDMA() const { return this->supportRDMA_ != nullptr;};
    void deleteSupportRDMA() { this->supportRDMA_ = nullptr;};
    inline bool supportRDMA() const { DARABONBA_PTR_GET_DEFAULT(supportRDMA_, false) };
    inline QuotaConfig& setSupportRDMA(bool supportRDMA) { DARABONBA_PTR_SET_VALUE(supportRDMA_, supportRDMA) };


    // useCase Field Functions 
    bool hasUseCase() const { return this->useCase_ != nullptr;};
    void deleteUseCase() { this->useCase_ = nullptr;};
    inline string useCase() const { DARABONBA_PTR_GET_DEFAULT(useCase_, "") };
    inline QuotaConfig& setUseCase(string useCase) { DARABONBA_PTR_SET_VALUE(useCase_, useCase) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline QuotaConfig& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline QuotaConfig& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    std::shared_ptr<ACS> ACS_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> defaultGPUDriver_ = nullptr;
    std::shared_ptr<bool> enableGPUShare_ = nullptr;
    std::shared_ptr<bool> enablePreemptSubquotaWorkloads_ = nullptr;
    std::shared_ptr<bool> enableSubQuotaPreemption_ = nullptr;
    std::shared_ptr<EniCacheConfig> eniCacheConfig_ = nullptr;
    std::shared_ptr<OversoldUsageConfig> oversoldUsageInfo_ = nullptr;
    std::shared_ptr<vector<WorkspaceSpecs>> resourceSpecs_ = nullptr;
    std::shared_ptr<SandboxCacheConfig> sandboxCacheConfig_ = nullptr;
    std::shared_ptr<SelfQuotaPreemptionConfig> selfQuotaPreemptionConfig_ = nullptr;
    std::shared_ptr<SubQuotaPreemptionConfig> subQuotaPreemptionConfig_ = nullptr;
    std::shared_ptr<vector<string>> supportGPUDrivers_ = nullptr;
    std::shared_ptr<bool> supportRDMA_ = nullptr;
    std::shared_ptr<string> useCase_ = nullptr;
    std::shared_ptr<UserVpc> userVpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
