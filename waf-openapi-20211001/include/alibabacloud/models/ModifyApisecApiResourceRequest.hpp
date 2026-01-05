// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECAPIRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECAPIRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecApiResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecApiResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Follow, follow_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecApiResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Follow, follow_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyApisecApiResourceRequest() = default ;
    ModifyApisecApiResourceRequest(const ModifyApisecApiResourceRequest &) = default ;
    ModifyApisecApiResourceRequest(ModifyApisecApiResourceRequest &&) = default ;
    ModifyApisecApiResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecApiResourceRequest() = default ;
    ModifyApisecApiResourceRequest& operator=(const ModifyApisecApiResourceRequest &) = default ;
    ModifyApisecApiResourceRequest& operator=(ModifyApisecApiResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->clusterId_ == nullptr && this->follow_ == nullptr && this->instanceId_ == nullptr && this->note_ == nullptr && this->regionId_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ModifyApisecApiResourceRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyApisecApiResourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // follow Field Functions 
    bool hasFollow() const { return this->follow_ != nullptr;};
    void deleteFollow() { this->follow_ = nullptr;};
    inline int64_t getFollow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0L) };
    inline ModifyApisecApiResourceRequest& setFollow(int64_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecApiResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ModifyApisecApiResourceRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecApiResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecApiResourceRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the API.
    // 
    // This parameter is required.
    shared_ptr<string> apiId_ {};
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to follow the API. Valid values:
    // 
    // *   **1**: yes
    // *   **0** (default): no
    shared_ptr<int64_t> follow_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The remarks.
    shared_ptr<string> note_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
