// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEVPCREGIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEVPCREGIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceVpcRegionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceVpcRegionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(fcConfig, fcConfig_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(installStatus, installStatus_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceVpcRegionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(fcConfig, fcConfig_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(installStatus, installStatus_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(securityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    GrafanaWorkspaceVpcRegionDetail() = default ;
    GrafanaWorkspaceVpcRegionDetail(const GrafanaWorkspaceVpcRegionDetail &) = default ;
    GrafanaWorkspaceVpcRegionDetail(GrafanaWorkspaceVpcRegionDetail &&) = default ;
    GrafanaWorkspaceVpcRegionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceVpcRegionDetail() = default ;
    GrafanaWorkspaceVpcRegionDetail& operator=(const GrafanaWorkspaceVpcRegionDetail &) = default ;
    GrafanaWorkspaceVpcRegionDetail& operator=(GrafanaWorkspaceVpcRegionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fcConfig_ != nullptr
        && this->id_ != nullptr && this->installStatus_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->securityGroupId_ != nullptr
        && this->securityGroupIds_ != nullptr && this->userId_ != nullptr && this->vSwitchId_ != nullptr && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // fcConfig Field Functions 
    bool hasFcConfig() const { return this->fcConfig_ != nullptr;};
    void deleteFcConfig() { this->fcConfig_ = nullptr;};
    inline string fcConfig() const { DARABONBA_PTR_GET_DEFAULT(fcConfig_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setFcConfig(string fcConfig) { DARABONBA_PTR_SET_VALUE(fcConfig_, fcConfig) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceVpcRegionDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installStatus Field Functions 
    bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
    void deleteInstallStatus() { this->installStatus_ = nullptr;};
    inline string installStatus() const { DARABONBA_PTR_GET_DEFAULT(installStatus_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setInstallStatus(string installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline GrafanaWorkspaceVpcRegionDetail& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline GrafanaWorkspaceVpcRegionDetail& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline GrafanaWorkspaceVpcRegionDetail& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GrafanaWorkspaceVpcRegionDetail& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GrafanaWorkspaceVpcRegionDetail& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> fcConfig_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> installStatus_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
