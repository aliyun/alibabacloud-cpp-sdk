// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCloudResourceRequestListen.hpp>
#include <alibabacloud/models/ModifyCloudResourceRequestRedirect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyCloudResourceRequest() = default ;
    ModifyCloudResourceRequest(const ModifyCloudResourceRequest &) = default ;
    ModifyCloudResourceRequest(ModifyCloudResourceRequest &&) = default ;
    ModifyCloudResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceRequest() = default ;
    ModifyCloudResourceRequest& operator=(const ModifyCloudResourceRequest &) = default ;
    ModifyCloudResourceRequest& operator=(ModifyCloudResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->listen_ != nullptr && this->redirect_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCloudResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const ModifyCloudResourceRequestListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, ModifyCloudResourceRequestListen) };
    inline ModifyCloudResourceRequestListen listen() { DARABONBA_PTR_GET(listen_, ModifyCloudResourceRequestListen) };
    inline ModifyCloudResourceRequest& setListen(const ModifyCloudResourceRequestListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline ModifyCloudResourceRequest& setListen(ModifyCloudResourceRequestListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const ModifyCloudResourceRequestRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, ModifyCloudResourceRequestRedirect) };
    inline ModifyCloudResourceRequestRedirect redirect() { DARABONBA_PTR_GET(redirect_, ModifyCloudResourceRequestRedirect) };
    inline ModifyCloudResourceRequest& setRedirect(const ModifyCloudResourceRequestRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline ModifyCloudResourceRequest& setRedirect(ModifyCloudResourceRequestRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyCloudResourceRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The listener configurations.
    // 
    // This parameter is required.
    std::shared_ptr<ModifyCloudResourceRequestListen> listen_ = nullptr;
    // The forwarding configurations.
    std::shared_ptr<ModifyCloudResourceRequestRedirect> redirect_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
