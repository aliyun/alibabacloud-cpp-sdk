// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVERIGHTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVERIGHTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcdBiz20240929
{
namespace Models
{
  class ActiveRightsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveRightsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(CustomImageId, customImageId_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RightsAssignedUser, rightsAssignedUser_);
      DARABONBA_PTR_TO_JSON(RightsGpuSpec, rightsGpuSpec_);
      DARABONBA_PTR_TO_JSON(RightsIds, rightsIds_);
      DARABONBA_PTR_TO_JSON(RightsResourceArea, rightsResourceArea_);
      DARABONBA_PTR_TO_JSON(RightsResourceImageOs, rightsResourceImageOs_);
      DARABONBA_PTR_TO_JSON(RightsResourceRegion, rightsResourceRegion_);
      DARABONBA_PTR_TO_JSON(RightsResourceType, rightsResourceType_);
      DARABONBA_PTR_TO_JSON(RightsSpec, rightsSpec_);
      DARABONBA_PTR_TO_JSON(RootDiskSize, rootDiskSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
      DARABONBA_PTR_TO_JSON(WyidList, wyidList_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveRightsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(CustomImageId, customImageId_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Hibernate, hibernate_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RightsAssignedUser, rightsAssignedUser_);
      DARABONBA_PTR_FROM_JSON(RightsGpuSpec, rightsGpuSpec_);
      DARABONBA_PTR_FROM_JSON(RightsIds, rightsIds_);
      DARABONBA_PTR_FROM_JSON(RightsResourceArea, rightsResourceArea_);
      DARABONBA_PTR_FROM_JSON(RightsResourceImageOs, rightsResourceImageOs_);
      DARABONBA_PTR_FROM_JSON(RightsResourceRegion, rightsResourceRegion_);
      DARABONBA_PTR_FROM_JSON(RightsResourceType, rightsResourceType_);
      DARABONBA_PTR_FROM_JSON(RightsSpec, rightsSpec_);
      DARABONBA_PTR_FROM_JSON(RootDiskSize, rootDiskSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
      DARABONBA_PTR_FROM_JSON(WyidList, wyidList_);
    };
    ActiveRightsRequest() = default ;
    ActiveRightsRequest(const ActiveRightsRequest &) = default ;
    ActiveRightsRequest(ActiveRightsRequest &&) = default ;
    ActiveRightsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveRightsRequest() = default ;
    ActiveRightsRequest& operator=(const ActiveRightsRequest &) = default ;
    ActiveRightsRequest& operator=(ActiveRightsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->customImageId_ == nullptr && this->dataDiskSize_ == nullptr && this->desktopType_ == nullptr && this->endTime_ == nullptr && this->hibernate_ == nullptr
        && this->language_ == nullptr && this->officeSiteId_ == nullptr && this->policyGroupId_ == nullptr && this->resourceGroupId_ == nullptr && this->rightsAssignedUser_ == nullptr
        && this->rightsGpuSpec_ == nullptr && this->rightsIds_ == nullptr && this->rightsResourceArea_ == nullptr && this->rightsResourceImageOs_ == nullptr && this->rightsResourceRegion_ == nullptr
        && this->rightsResourceType_ == nullptr && this->rightsSpec_ == nullptr && this->rootDiskSize_ == nullptr && this->startTime_ == nullptr && this->vSwitchId_ == nullptr
        && this->workspaceIds_ == nullptr && this->wyidList_ == nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ActiveRightsRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // customImageId Field Functions 
    bool hasCustomImageId() const { return this->customImageId_ != nullptr;};
    void deleteCustomImageId() { this->customImageId_ = nullptr;};
    inline string getCustomImageId() const { DARABONBA_PTR_GET_DEFAULT(customImageId_, "") };
    inline ActiveRightsRequest& setCustomImageId(string customImageId) { DARABONBA_PTR_SET_VALUE(customImageId_, customImageId) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline ActiveRightsRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline ActiveRightsRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ActiveRightsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hibernate Field Functions 
    bool hasHibernate() const { return this->hibernate_ != nullptr;};
    void deleteHibernate() { this->hibernate_ = nullptr;};
    inline int32_t getHibernate() const { DARABONBA_PTR_GET_DEFAULT(hibernate_, 0) };
    inline ActiveRightsRequest& setHibernate(int32_t hibernate) { DARABONBA_PTR_SET_VALUE(hibernate_, hibernate) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ActiveRightsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ActiveRightsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ActiveRightsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ActiveRightsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rightsAssignedUser Field Functions 
    bool hasRightsAssignedUser() const { return this->rightsAssignedUser_ != nullptr;};
    void deleteRightsAssignedUser() { this->rightsAssignedUser_ = nullptr;};
    inline const vector<string> & getRightsAssignedUser() const { DARABONBA_PTR_GET_CONST(rightsAssignedUser_, vector<string>) };
    inline vector<string> getRightsAssignedUser() { DARABONBA_PTR_GET(rightsAssignedUser_, vector<string>) };
    inline ActiveRightsRequest& setRightsAssignedUser(const vector<string> & rightsAssignedUser) { DARABONBA_PTR_SET_VALUE(rightsAssignedUser_, rightsAssignedUser) };
    inline ActiveRightsRequest& setRightsAssignedUser(vector<string> && rightsAssignedUser) { DARABONBA_PTR_SET_RVALUE(rightsAssignedUser_, rightsAssignedUser) };


    // rightsGpuSpec Field Functions 
    bool hasRightsGpuSpec() const { return this->rightsGpuSpec_ != nullptr;};
    void deleteRightsGpuSpec() { this->rightsGpuSpec_ = nullptr;};
    inline string getRightsGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(rightsGpuSpec_, "") };
    inline ActiveRightsRequest& setRightsGpuSpec(string rightsGpuSpec) { DARABONBA_PTR_SET_VALUE(rightsGpuSpec_, rightsGpuSpec) };


    // rightsIds Field Functions 
    bool hasRightsIds() const { return this->rightsIds_ != nullptr;};
    void deleteRightsIds() { this->rightsIds_ = nullptr;};
    inline const vector<string> & getRightsIds() const { DARABONBA_PTR_GET_CONST(rightsIds_, vector<string>) };
    inline vector<string> getRightsIds() { DARABONBA_PTR_GET(rightsIds_, vector<string>) };
    inline ActiveRightsRequest& setRightsIds(const vector<string> & rightsIds) { DARABONBA_PTR_SET_VALUE(rightsIds_, rightsIds) };
    inline ActiveRightsRequest& setRightsIds(vector<string> && rightsIds) { DARABONBA_PTR_SET_RVALUE(rightsIds_, rightsIds) };


    // rightsResourceArea Field Functions 
    bool hasRightsResourceArea() const { return this->rightsResourceArea_ != nullptr;};
    void deleteRightsResourceArea() { this->rightsResourceArea_ = nullptr;};
    inline string getRightsResourceArea() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceArea_, "") };
    inline ActiveRightsRequest& setRightsResourceArea(string rightsResourceArea) { DARABONBA_PTR_SET_VALUE(rightsResourceArea_, rightsResourceArea) };


    // rightsResourceImageOs Field Functions 
    bool hasRightsResourceImageOs() const { return this->rightsResourceImageOs_ != nullptr;};
    void deleteRightsResourceImageOs() { this->rightsResourceImageOs_ = nullptr;};
    inline string getRightsResourceImageOs() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceImageOs_, "") };
    inline ActiveRightsRequest& setRightsResourceImageOs(string rightsResourceImageOs) { DARABONBA_PTR_SET_VALUE(rightsResourceImageOs_, rightsResourceImageOs) };


    // rightsResourceRegion Field Functions 
    bool hasRightsResourceRegion() const { return this->rightsResourceRegion_ != nullptr;};
    void deleteRightsResourceRegion() { this->rightsResourceRegion_ = nullptr;};
    inline string getRightsResourceRegion() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceRegion_, "") };
    inline ActiveRightsRequest& setRightsResourceRegion(string rightsResourceRegion) { DARABONBA_PTR_SET_VALUE(rightsResourceRegion_, rightsResourceRegion) };


    // rightsResourceType Field Functions 
    bool hasRightsResourceType() const { return this->rightsResourceType_ != nullptr;};
    void deleteRightsResourceType() { this->rightsResourceType_ = nullptr;};
    inline string getRightsResourceType() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceType_, "") };
    inline ActiveRightsRequest& setRightsResourceType(string rightsResourceType) { DARABONBA_PTR_SET_VALUE(rightsResourceType_, rightsResourceType) };


    // rightsSpec Field Functions 
    bool hasRightsSpec() const { return this->rightsSpec_ != nullptr;};
    void deleteRightsSpec() { this->rightsSpec_ = nullptr;};
    inline string getRightsSpec() const { DARABONBA_PTR_GET_DEFAULT(rightsSpec_, "") };
    inline ActiveRightsRequest& setRightsSpec(string rightsSpec) { DARABONBA_PTR_SET_VALUE(rightsSpec_, rightsSpec) };


    // rootDiskSize Field Functions 
    bool hasRootDiskSize() const { return this->rootDiskSize_ != nullptr;};
    void deleteRootDiskSize() { this->rootDiskSize_ = nullptr;};
    inline int32_t getRootDiskSize() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSize_, 0) };
    inline ActiveRightsRequest& setRootDiskSize(int32_t rootDiskSize) { DARABONBA_PTR_SET_VALUE(rootDiskSize_, rootDiskSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ActiveRightsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ActiveRightsRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline const vector<string> & getWorkspaceIds() const { DARABONBA_PTR_GET_CONST(workspaceIds_, vector<string>) };
    inline vector<string> getWorkspaceIds() { DARABONBA_PTR_GET(workspaceIds_, vector<string>) };
    inline ActiveRightsRequest& setWorkspaceIds(const vector<string> & workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };
    inline ActiveRightsRequest& setWorkspaceIds(vector<string> && workspaceIds) { DARABONBA_PTR_SET_RVALUE(workspaceIds_, workspaceIds) };


    // wyidList Field Functions 
    bool hasWyidList() const { return this->wyidList_ != nullptr;};
    void deleteWyidList() { this->wyidList_ = nullptr;};
    inline const vector<string> & getWyidList() const { DARABONBA_PTR_GET_CONST(wyidList_, vector<string>) };
    inline vector<string> getWyidList() { DARABONBA_PTR_GET(wyidList_, vector<string>) };
    inline ActiveRightsRequest& setWyidList(const vector<string> & wyidList) { DARABONBA_PTR_SET_VALUE(wyidList_, wyidList) };
    inline ActiveRightsRequest& setWyidList(vector<string> && wyidList) { DARABONBA_PTR_SET_RVALUE(wyidList_, wyidList) };


  protected:
    // The IP address of the client.
    shared_ptr<string> clientIp_ {};
    // The ID of the image that is available for the specification in the target region.
    shared_ptr<string> customImageId_ {};
    // The size of the data cloud disk, in GiB. Pass this parameter only when the commodity supports this activation parameter.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The desktop type. Specify the value based on the types supported by the selected commodity. Omit this parameter if regular cloud desktops do not have this configuration.
    shared_ptr<string> desktopType_ {};
    // The end time of the non-hibernation period, in the HH:mm:ss format. This parameter is used together with StartTime.
    shared_ptr<string> endTime_ {};
    // The hibernation-related options. The compute plan and existing activation rules corresponding to the right are used.
    shared_ptr<int32_t> hibernate_ {};
    // The display language of the cloud desktop. Valid values: en-US, ja-JP, zh-CN, and zh-HK.
    shared_ptr<string> language_ {};
    // The ID of the office network in the target region. This parameter is required when you activate a cloud desktop.
    shared_ptr<string> officeSiteId_ {};
    // The ID of the policy group. This parameter is optional. If you do not specify this parameter, the default policy of the workspace is used.
    shared_ptr<string> policyGroupId_ {};
    // The ID of the resource group. This parameter is optional. The ID is specified by the caller and passed through to the activation request.
    shared_ptr<string> resourceGroupId_ {};
    // The list of IDs of the assigned end users. The IDs correspond to the rights in this batch by position. For convenience accounts, pass the EndUserId. The number of IDs must be the same as the number of rights.
    shared_ptr<vector<string>> rightsAssignedUser_ {};
    // The GPU specification. The value is subject to the return value of the rights details.
    shared_ptr<string> rightsGpuSpec_ {};
    // The list of IDs of the rights to be activated. Select the rights accessible to the current identity from ListRights. The parameters in the same batch apply to these rights.
    shared_ptr<vector<string>> rightsIds_ {};
    // The area to which the right belongs. This parameter cannot replace the resource region for a new activation request.
    shared_ptr<string> rightsResourceArea_ {};
    // The operating system type of the image used for rights activation.
    shared_ptr<string> rightsResourceImageOs_ {};
    // The ID of the region where the resource resides. This parameter is configured separately from the routing region of the POP request.
    shared_ptr<string> rightsResourceRegion_ {};
    // The resource type of the right. For regular cloud desktops, use Desktop. For other commodities, pass the actual type of the right.
    shared_ptr<string> rightsResourceType_ {};
    // The specification code of the right. The value is subject to the rights query result.
    shared_ptr<string> rightsSpec_ {};
    // The size of the system cloud disk, in GiB. Pass this parameter only when the commodity supports this activation parameter.
    shared_ptr<int32_t> rootDiskSize_ {};
    // The start time of the non-hibernation period, in the HH:mm:ss format. This parameter applies only to the corresponding compute plan.
    shared_ptr<string> startTime_ {};
    // The ID of the vSwitch in the target office network. Pass the value based on the network type.
    shared_ptr<string> vSwitchId_ {};
    // The list of AD workspace IDs used for BusinessJvsCopilotAgent activation.
    shared_ptr<vector<string>> workspaceIds_ {};
    // The list of WAIDs used for BusinessJvsCopilotAgent activation. Do not pass this parameter for regular cloud desktop activation.
    shared_ptr<vector<string>> wyidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcdBiz20240929
#endif
