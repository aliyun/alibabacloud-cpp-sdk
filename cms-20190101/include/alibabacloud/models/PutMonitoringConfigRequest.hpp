// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMONITORINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMONITORINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMonitoringConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMonitoringConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableInstallAgentNewECS, enableInstallAgentNewECS_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutMonitoringConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableInstallAgentNewECS, enableInstallAgentNewECS_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutMonitoringConfigRequest() = default ;
    PutMonitoringConfigRequest(const PutMonitoringConfigRequest &) = default ;
    PutMonitoringConfigRequest(PutMonitoringConfigRequest &&) = default ;
    PutMonitoringConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMonitoringConfigRequest() = default ;
    PutMonitoringConfigRequest& operator=(const PutMonitoringConfigRequest &) = default ;
    PutMonitoringConfigRequest& operator=(PutMonitoringConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoInstall_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->enableInstallAgentNewECS_ == nullptr && this->regionId_ == nullptr; };
    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline PutMonitoringConfigRequest& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PutMonitoringConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PutMonitoringConfigRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableInstallAgentNewECS Field Functions 
    bool hasEnableInstallAgentNewECS() const { return this->enableInstallAgentNewECS_ != nullptr;};
    void deleteEnableInstallAgentNewECS() { this->enableInstallAgentNewECS_ = nullptr;};
    inline bool getEnableInstallAgentNewECS() const { DARABONBA_PTR_GET_DEFAULT(enableInstallAgentNewECS_, false) };
    inline PutMonitoringConfigRequest& setEnableInstallAgentNewECS(bool enableInstallAgentNewECS) { DARABONBA_PTR_SET_VALUE(enableInstallAgentNewECS_, enableInstallAgentNewECS) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutMonitoringConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Ignore this parameter.
    shared_ptr<bool> autoInstall_ {};
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // - **true**: Sends a dry run request without deleting the endpoint IPAM pool. The system checks whether all required parameters are specified, the request format is valid, and service limits are met. If the request fails the check, the corresponding error is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // - **false** (default): Sends a normal request and directly deletes the endpoint IPAM pool if the request passes the check.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to automatically install the CloudMonitor agent on newly purchased ECS instances. Valid values:
    // - true (default): Automatically installs the CloudMonitor agent on newly purchased ECS instances.
    // 
    // - false: Does not automatically install the CloudMonitor agent on newly purchased ECS instances.
    shared_ptr<bool> enableInstallAgentNewECS_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
