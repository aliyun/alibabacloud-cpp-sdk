// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACE_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspaceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspace& obj) { 
      DARABONBA_PTR_TO_JSON(commercial, commercial_);
      DARABONBA_PTR_TO_JSON(deployType, deployType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(grafanaVersion, grafanaVersion_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceDomain, grafanaWorkspaceDomain_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceDomainStatus, grafanaWorkspaceDomainStatus_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceEdition, grafanaWorkspaceEdition_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceIp, grafanaWorkspaceIp_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceName, grafanaWorkspaceName_);
      DARABONBA_PTR_TO_JSON(maxAccount, maxAccount_);
      DARABONBA_PTR_TO_JSON(ntmId, ntmId_);
      DARABONBA_PTR_TO_JSON(personalDomain, personalDomain_);
      DARABONBA_PTR_TO_JSON(personalDomainPrefix, personalDomainPrefix_);
      DARABONBA_PTR_TO_JSON(privateDomain, privateDomain_);
      DARABONBA_PTR_TO_JSON(privateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(shareSynced, shareSynced_);
      DARABONBA_PTR_TO_JSON(snatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(upgradeVersion, upgradeVersion_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspace& obj) { 
      DARABONBA_PTR_FROM_JSON(commercial, commercial_);
      DARABONBA_PTR_FROM_JSON(deployType, deployType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(grafanaVersion, grafanaVersion_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceDomain, grafanaWorkspaceDomain_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceDomainStatus, grafanaWorkspaceDomainStatus_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceEdition, grafanaWorkspaceEdition_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceIp, grafanaWorkspaceIp_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceName, grafanaWorkspaceName_);
      DARABONBA_PTR_FROM_JSON(maxAccount, maxAccount_);
      DARABONBA_PTR_FROM_JSON(ntmId, ntmId_);
      DARABONBA_PTR_FROM_JSON(personalDomain, personalDomain_);
      DARABONBA_PTR_FROM_JSON(personalDomainPrefix, personalDomainPrefix_);
      DARABONBA_PTR_FROM_JSON(privateDomain, privateDomain_);
      DARABONBA_PTR_FROM_JSON(privateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(shareSynced, shareSynced_);
      DARABONBA_PTR_FROM_JSON(snatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(upgradeVersion, upgradeVersion_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GrafanaWorkspace() = default ;
    GrafanaWorkspace(const GrafanaWorkspace &) = default ;
    GrafanaWorkspace(GrafanaWorkspace &&) = default ;
    GrafanaWorkspace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspace() = default ;
    GrafanaWorkspace& operator=(const GrafanaWorkspace &) = default ;
    GrafanaWorkspace& operator=(GrafanaWorkspace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commercial_ != nullptr
        && this->deployType_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->gmtCreate_ != nullptr && this->grafanaVersion_ != nullptr
        && this->grafanaWorkspaceDomain_ != nullptr && this->grafanaWorkspaceDomainStatus_ != nullptr && this->grafanaWorkspaceEdition_ != nullptr && this->grafanaWorkspaceId_ != nullptr && this->grafanaWorkspaceIp_ != nullptr
        && this->grafanaWorkspaceName_ != nullptr && this->maxAccount_ != nullptr && this->ntmId_ != nullptr && this->personalDomain_ != nullptr && this->personalDomainPrefix_ != nullptr
        && this->privateDomain_ != nullptr && this->privateIp_ != nullptr && this->protocol_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->shareSynced_ != nullptr && this->snatIp_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->upgradeVersion_ != nullptr
        && this->userId_ != nullptr; };
    // commercial Field Functions 
    bool hasCommercial() const { return this->commercial_ != nullptr;};
    void deleteCommercial() { this->commercial_ = nullptr;};
    inline bool commercial() const { DARABONBA_PTR_GET_DEFAULT(commercial_, false) };
    inline GrafanaWorkspace& setCommercial(bool commercial) { DARABONBA_PTR_SET_VALUE(commercial_, commercial) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline string deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
    inline GrafanaWorkspace& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GrafanaWorkspace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline GrafanaWorkspace& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline float gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0.0) };
    inline GrafanaWorkspace& setGmtCreate(float gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // grafanaVersion Field Functions 
    bool hasGrafanaVersion() const { return this->grafanaVersion_ != nullptr;};
    void deleteGrafanaVersion() { this->grafanaVersion_ = nullptr;};
    inline string grafanaVersion() const { DARABONBA_PTR_GET_DEFAULT(grafanaVersion_, "") };
    inline GrafanaWorkspace& setGrafanaVersion(string grafanaVersion) { DARABONBA_PTR_SET_VALUE(grafanaVersion_, grafanaVersion) };


    // grafanaWorkspaceDomain Field Functions 
    bool hasGrafanaWorkspaceDomain() const { return this->grafanaWorkspaceDomain_ != nullptr;};
    void deleteGrafanaWorkspaceDomain() { this->grafanaWorkspaceDomain_ = nullptr;};
    inline string grafanaWorkspaceDomain() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceDomain_, "") };
    inline GrafanaWorkspace& setGrafanaWorkspaceDomain(string grafanaWorkspaceDomain) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceDomain_, grafanaWorkspaceDomain) };


    // grafanaWorkspaceDomainStatus Field Functions 
    bool hasGrafanaWorkspaceDomainStatus() const { return this->grafanaWorkspaceDomainStatus_ != nullptr;};
    void deleteGrafanaWorkspaceDomainStatus() { this->grafanaWorkspaceDomainStatus_ = nullptr;};
    inline string grafanaWorkspaceDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceDomainStatus_, "") };
    inline GrafanaWorkspace& setGrafanaWorkspaceDomainStatus(string grafanaWorkspaceDomainStatus) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceDomainStatus_, grafanaWorkspaceDomainStatus) };


    // grafanaWorkspaceEdition Field Functions 
    bool hasGrafanaWorkspaceEdition() const { return this->grafanaWorkspaceEdition_ != nullptr;};
    void deleteGrafanaWorkspaceEdition() { this->grafanaWorkspaceEdition_ = nullptr;};
    inline string grafanaWorkspaceEdition() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceEdition_, "") };
    inline GrafanaWorkspace& setGrafanaWorkspaceEdition(string grafanaWorkspaceEdition) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceEdition_, grafanaWorkspaceEdition) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspace& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // grafanaWorkspaceIp Field Functions 
    bool hasGrafanaWorkspaceIp() const { return this->grafanaWorkspaceIp_ != nullptr;};
    void deleteGrafanaWorkspaceIp() { this->grafanaWorkspaceIp_ = nullptr;};
    inline string grafanaWorkspaceIp() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceIp_, "") };
    inline GrafanaWorkspace& setGrafanaWorkspaceIp(string grafanaWorkspaceIp) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceIp_, grafanaWorkspaceIp) };


    // grafanaWorkspaceName Field Functions 
    bool hasGrafanaWorkspaceName() const { return this->grafanaWorkspaceName_ != nullptr;};
    void deleteGrafanaWorkspaceName() { this->grafanaWorkspaceName_ = nullptr;};
    inline string grafanaWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceName_, "") };
    inline GrafanaWorkspace& setGrafanaWorkspaceName(string grafanaWorkspaceName) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceName_, grafanaWorkspaceName) };


    // maxAccount Field Functions 
    bool hasMaxAccount() const { return this->maxAccount_ != nullptr;};
    void deleteMaxAccount() { this->maxAccount_ = nullptr;};
    inline string maxAccount() const { DARABONBA_PTR_GET_DEFAULT(maxAccount_, "") };
    inline GrafanaWorkspace& setMaxAccount(string maxAccount) { DARABONBA_PTR_SET_VALUE(maxAccount_, maxAccount) };


    // ntmId Field Functions 
    bool hasNtmId() const { return this->ntmId_ != nullptr;};
    void deleteNtmId() { this->ntmId_ = nullptr;};
    inline string ntmId() const { DARABONBA_PTR_GET_DEFAULT(ntmId_, "") };
    inline GrafanaWorkspace& setNtmId(string ntmId) { DARABONBA_PTR_SET_VALUE(ntmId_, ntmId) };


    // personalDomain Field Functions 
    bool hasPersonalDomain() const { return this->personalDomain_ != nullptr;};
    void deletePersonalDomain() { this->personalDomain_ = nullptr;};
    inline string personalDomain() const { DARABONBA_PTR_GET_DEFAULT(personalDomain_, "") };
    inline GrafanaWorkspace& setPersonalDomain(string personalDomain) { DARABONBA_PTR_SET_VALUE(personalDomain_, personalDomain) };


    // personalDomainPrefix Field Functions 
    bool hasPersonalDomainPrefix() const { return this->personalDomainPrefix_ != nullptr;};
    void deletePersonalDomainPrefix() { this->personalDomainPrefix_ = nullptr;};
    inline string personalDomainPrefix() const { DARABONBA_PTR_GET_DEFAULT(personalDomainPrefix_, "") };
    inline GrafanaWorkspace& setPersonalDomainPrefix(string personalDomainPrefix) { DARABONBA_PTR_SET_VALUE(personalDomainPrefix_, personalDomainPrefix) };


    // privateDomain Field Functions 
    bool hasPrivateDomain() const { return this->privateDomain_ != nullptr;};
    void deletePrivateDomain() { this->privateDomain_ = nullptr;};
    inline string privateDomain() const { DARABONBA_PTR_GET_DEFAULT(privateDomain_, "") };
    inline GrafanaWorkspace& setPrivateDomain(string privateDomain) { DARABONBA_PTR_SET_VALUE(privateDomain_, privateDomain) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline GrafanaWorkspace& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GrafanaWorkspace& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrafanaWorkspace& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GrafanaWorkspace& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareSynced Field Functions 
    bool hasShareSynced() const { return this->shareSynced_ != nullptr;};
    void deleteShareSynced() { this->shareSynced_ = nullptr;};
    inline bool shareSynced() const { DARABONBA_PTR_GET_DEFAULT(shareSynced_, false) };
    inline GrafanaWorkspace& setShareSynced(bool shareSynced) { DARABONBA_PTR_SET_VALUE(shareSynced_, shareSynced) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline GrafanaWorkspace& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GrafanaWorkspace& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GrafanaWorkspaceTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GrafanaWorkspaceTags>) };
    inline vector<GrafanaWorkspaceTags> tags() { DARABONBA_PTR_GET(tags_, vector<GrafanaWorkspaceTags>) };
    inline GrafanaWorkspace& setTags(const vector<GrafanaWorkspaceTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GrafanaWorkspace& setTags(vector<GrafanaWorkspaceTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // upgradeVersion Field Functions 
    bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
    void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
    inline const vector<string> & upgradeVersion() const { DARABONBA_PTR_GET_CONST(upgradeVersion_, vector<string>) };
    inline vector<string> upgradeVersion() { DARABONBA_PTR_GET(upgradeVersion_, vector<string>) };
    inline GrafanaWorkspace& setUpgradeVersion(const vector<string> & upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };
    inline GrafanaWorkspace& setUpgradeVersion(vector<string> && upgradeVersion) { DARABONBA_PTR_SET_RVALUE(upgradeVersion_, upgradeVersion) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrafanaWorkspace& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> commercial_ = nullptr;
    std::shared_ptr<string> deployType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<float> gmtCreate_ = nullptr;
    std::shared_ptr<string> grafanaVersion_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceDomain_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceDomainStatus_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceEdition_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceIp_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceName_ = nullptr;
    std::shared_ptr<string> maxAccount_ = nullptr;
    std::shared_ptr<string> ntmId_ = nullptr;
    std::shared_ptr<string> personalDomain_ = nullptr;
    std::shared_ptr<string> personalDomainPrefix_ = nullptr;
    std::shared_ptr<string> privateDomain_ = nullptr;
    std::shared_ptr<string> privateIp_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<bool> shareSynced_ = nullptr;
    std::shared_ptr<string> snatIp_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<GrafanaWorkspaceTags>> tags_ = nullptr;
    std::shared_ptr<vector<string>> upgradeVersion_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
