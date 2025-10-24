// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPISECABNORMALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPISECABNORMALSREQUEST_HPP_
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
  class DeleteApisecAbnormalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApisecAbnormalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalIds, abnormalIds_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApisecAbnormalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalIds, abnormalIds_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DeleteApisecAbnormalsRequest() = default ;
    DeleteApisecAbnormalsRequest(const DeleteApisecAbnormalsRequest &) = default ;
    DeleteApisecAbnormalsRequest(DeleteApisecAbnormalsRequest &&) = default ;
    DeleteApisecAbnormalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApisecAbnormalsRequest() = default ;
    DeleteApisecAbnormalsRequest& operator=(const DeleteApisecAbnormalsRequest &) = default ;
    DeleteApisecAbnormalsRequest& operator=(DeleteApisecAbnormalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalIds_ == nullptr
        && return this->clusterId_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // abnormalIds Field Functions 
    bool hasAbnormalIds() const { return this->abnormalIds_ != nullptr;};
    void deleteAbnormalIds() { this->abnormalIds_ = nullptr;};
    inline const vector<string> & abnormalIds() const { DARABONBA_PTR_GET_CONST(abnormalIds_, vector<string>) };
    inline vector<string> abnormalIds() { DARABONBA_PTR_GET(abnormalIds_, vector<string>) };
    inline DeleteApisecAbnormalsRequest& setAbnormalIds(const vector<string> & abnormalIds) { DARABONBA_PTR_SET_VALUE(abnormalIds_, abnormalIds) };
    inline DeleteApisecAbnormalsRequest& setAbnormalIds(vector<string> && abnormalIds) { DARABONBA_PTR_SET_RVALUE(abnormalIds_, abnormalIds) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteApisecAbnormalsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteApisecAbnormalsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteApisecAbnormalsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteApisecAbnormalsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The risk IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> abnormalIds_ = nullptr;
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // 阿里云资源组ID。
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
