// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECABNORMALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECABNORMALSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecAbnormalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecAbnormalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalIds, abnormalIds_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecAbnormalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalIds, abnormalIds_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    ModifyApisecAbnormalsRequest() = default ;
    ModifyApisecAbnormalsRequest(const ModifyApisecAbnormalsRequest &) = default ;
    ModifyApisecAbnormalsRequest(ModifyApisecAbnormalsRequest &&) = default ;
    ModifyApisecAbnormalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecAbnormalsRequest() = default ;
    ModifyApisecAbnormalsRequest& operator=(const ModifyApisecAbnormalsRequest &) = default ;
    ModifyApisecAbnormalsRequest& operator=(ModifyApisecAbnormalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalIds_ == nullptr
        && this->clusterId_ == nullptr && this->instanceId_ == nullptr && this->note_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->userStatus_ == nullptr; };
    // abnormalIds Field Functions 
    bool hasAbnormalIds() const { return this->abnormalIds_ != nullptr;};
    void deleteAbnormalIds() { this->abnormalIds_ = nullptr;};
    inline const vector<string> & getAbnormalIds() const { DARABONBA_PTR_GET_CONST(abnormalIds_, vector<string>) };
    inline vector<string> getAbnormalIds() { DARABONBA_PTR_GET(abnormalIds_, vector<string>) };
    inline ModifyApisecAbnormalsRequest& setAbnormalIds(const vector<string> & abnormalIds) { DARABONBA_PTR_SET_VALUE(abnormalIds_, abnormalIds) };
    inline ModifyApisecAbnormalsRequest& setAbnormalIds(vector<string> && abnormalIds) { DARABONBA_PTR_SET_RVALUE(abnormalIds_, abnormalIds) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyApisecAbnormalsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecAbnormalsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ModifyApisecAbnormalsRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecAbnormalsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecAbnormalsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline ModifyApisecAbnormalsRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The risk IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> abnormalIds_ {};
    // The ID of the hybrid cloud cluster.
    // 
    // >  This parameter is available only in hybrid cloud scenarios. You can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query hybrid cloud clusters.
    shared_ptr<string> clusterId_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The description.
    shared_ptr<string> note_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The risk status. Valid values:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **toBeFixed**
    // *   **fixed**
    // *   **ignored**
    // 
    // This parameter is required.
    shared_ptr<string> userStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
