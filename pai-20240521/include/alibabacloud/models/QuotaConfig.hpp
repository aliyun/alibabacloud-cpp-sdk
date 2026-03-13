// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ACS.hpp>
#include <vector>
#include <alibabacloud/models/WorkspaceSpecs.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class QuotaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ACS, ACS_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_TO_JSON(EnablePreemptSubquotaWorkloads, enablePreemptSubquotaWorkloads_);
      DARABONBA_PTR_TO_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_TO_JSON(SupportGPUDrivers, supportGPUDrivers_);
      DARABONBA_PTR_TO_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ACS, ACS_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DefaultGPUDriver, defaultGPUDriver_);
      DARABONBA_PTR_FROM_JSON(EnablePreemptSubquotaWorkloads, enablePreemptSubquotaWorkloads_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_FROM_JSON(SupportGPUDrivers, supportGPUDrivers_);
      DARABONBA_PTR_FROM_JSON(SupportRDMA, supportRDMA_);
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
        && this->clusterId_ == nullptr && this->defaultGPUDriver_ == nullptr && this->enablePreemptSubquotaWorkloads_ == nullptr && this->resourceSpecs_ == nullptr && this->supportGPUDrivers_ == nullptr
        && this->supportRDMA_ == nullptr && this->userVpc_ == nullptr; };
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


    // defaultGPUDriver Field Functions 
    bool hasDefaultGPUDriver() const { return this->defaultGPUDriver_ != nullptr;};
    void deleteDefaultGPUDriver() { this->defaultGPUDriver_ = nullptr;};
    inline string getDefaultGPUDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultGPUDriver_, "") };
    inline QuotaConfig& setDefaultGPUDriver(string defaultGPUDriver) { DARABONBA_PTR_SET_VALUE(defaultGPUDriver_, defaultGPUDriver) };


    // enablePreemptSubquotaWorkloads Field Functions 
    bool hasEnablePreemptSubquotaWorkloads() const { return this->enablePreemptSubquotaWorkloads_ != nullptr;};
    void deleteEnablePreemptSubquotaWorkloads() { this->enablePreemptSubquotaWorkloads_ = nullptr;};
    inline bool getEnablePreemptSubquotaWorkloads() const { DARABONBA_PTR_GET_DEFAULT(enablePreemptSubquotaWorkloads_, false) };
    inline QuotaConfig& setEnablePreemptSubquotaWorkloads(bool enablePreemptSubquotaWorkloads) { DARABONBA_PTR_SET_VALUE(enablePreemptSubquotaWorkloads_, enablePreemptSubquotaWorkloads) };


    // resourceSpecs Field Functions 
    bool hasResourceSpecs() const { return this->resourceSpecs_ != nullptr;};
    void deleteResourceSpecs() { this->resourceSpecs_ = nullptr;};
    inline const vector<WorkspaceSpecs> & getResourceSpecs() const { DARABONBA_PTR_GET_CONST(resourceSpecs_, vector<WorkspaceSpecs>) };
    inline vector<WorkspaceSpecs> getResourceSpecs() { DARABONBA_PTR_GET(resourceSpecs_, vector<WorkspaceSpecs>) };
    inline QuotaConfig& setResourceSpecs(const vector<WorkspaceSpecs> & resourceSpecs) { DARABONBA_PTR_SET_VALUE(resourceSpecs_, resourceSpecs) };
    inline QuotaConfig& setResourceSpecs(vector<WorkspaceSpecs> && resourceSpecs) { DARABONBA_PTR_SET_RVALUE(resourceSpecs_, resourceSpecs) };


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
    shared_ptr<string> defaultGPUDriver_ {};
    shared_ptr<bool> enablePreemptSubquotaWorkloads_ {};
    shared_ptr<vector<WorkspaceSpecs>> resourceSpecs_ {};
    shared_ptr<vector<string>> supportGPUDrivers_ {};
    shared_ptr<bool> supportRDMA_ {};
    shared_ptr<UserVpc> userVpc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
