// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEVPCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEVPCCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceVpcConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceVpcConfig& obj) { 
      DARABONBA_PTR_TO_JSON(fcConfig, fcConfig_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(installMsg, installMsg_);
      DARABONBA_PTR_TO_JSON(installStatus, installStatus_);
      DARABONBA_PTR_TO_JSON(ipSections, ipSections_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceVpcConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(fcConfig, fcConfig_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(installMsg, installMsg_);
      DARABONBA_PTR_FROM_JSON(installStatus, installStatus_);
      DARABONBA_PTR_FROM_JSON(ipSections, ipSections_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    GrafanaWorkspaceVpcConfig() = default ;
    GrafanaWorkspaceVpcConfig(const GrafanaWorkspaceVpcConfig &) = default ;
    GrafanaWorkspaceVpcConfig(GrafanaWorkspaceVpcConfig &&) = default ;
    GrafanaWorkspaceVpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceVpcConfig() = default ;
    GrafanaWorkspaceVpcConfig& operator=(const GrafanaWorkspaceVpcConfig &) = default ;
    GrafanaWorkspaceVpcConfig& operator=(GrafanaWorkspaceVpcConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fcConfig_ != nullptr
        && this->id_ != nullptr && this->installMsg_ != nullptr && this->installStatus_ != nullptr && this->ipSections_ != nullptr && this->name_ != nullptr
        && this->regionId_ != nullptr && this->securityGroupId_ != nullptr && this->userId_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // fcConfig Field Functions 
    bool hasFcConfig() const { return this->fcConfig_ != nullptr;};
    void deleteFcConfig() { this->fcConfig_ = nullptr;};
    inline string fcConfig() const { DARABONBA_PTR_GET_DEFAULT(fcConfig_, "") };
    inline GrafanaWorkspaceVpcConfig& setFcConfig(string fcConfig) { DARABONBA_PTR_SET_VALUE(fcConfig_, fcConfig) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceVpcConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installMsg Field Functions 
    bool hasInstallMsg() const { return this->installMsg_ != nullptr;};
    void deleteInstallMsg() { this->installMsg_ = nullptr;};
    inline string installMsg() const { DARABONBA_PTR_GET_DEFAULT(installMsg_, "") };
    inline GrafanaWorkspaceVpcConfig& setInstallMsg(string installMsg) { DARABONBA_PTR_SET_VALUE(installMsg_, installMsg) };


    // installStatus Field Functions 
    bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
    void deleteInstallStatus() { this->installStatus_ = nullptr;};
    inline string installStatus() const { DARABONBA_PTR_GET_DEFAULT(installStatus_, "") };
    inline GrafanaWorkspaceVpcConfig& setInstallStatus(string installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };


    // ipSections Field Functions 
    bool hasIpSections() const { return this->ipSections_ != nullptr;};
    void deleteIpSections() { this->ipSections_ = nullptr;};
    inline string ipSections() const { DARABONBA_PTR_GET_DEFAULT(ipSections_, "") };
    inline GrafanaWorkspaceVpcConfig& setIpSections(string ipSections) { DARABONBA_PTR_SET_VALUE(ipSections_, ipSections) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrafanaWorkspaceVpcConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrafanaWorkspaceVpcConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GrafanaWorkspaceVpcConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrafanaWorkspaceVpcConfig& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GrafanaWorkspaceVpcConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GrafanaWorkspaceVpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> fcConfig_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> installMsg_ = nullptr;
    std::shared_ptr<string> installStatus_ = nullptr;
    std::shared_ptr<string> ipSections_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
