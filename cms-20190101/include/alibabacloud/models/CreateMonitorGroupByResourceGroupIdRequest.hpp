// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORGROUPBYRESOURCEGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORGROUPBYRESOURCEGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMonitorGroupByResourceGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorGroupByResourceGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_TO_JSON(EnableInstallAgent, enableInstallAgent_);
      DARABONBA_PTR_TO_JSON(EnableSubscribeEvent, enableSubscribeEvent_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorGroupByResourceGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_FROM_JSON(EnableInstallAgent, enableInstallAgent_);
      DARABONBA_PTR_FROM_JSON(EnableSubscribeEvent, enableSubscribeEvent_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    CreateMonitorGroupByResourceGroupIdRequest() = default ;
    CreateMonitorGroupByResourceGroupIdRequest(const CreateMonitorGroupByResourceGroupIdRequest &) = default ;
    CreateMonitorGroupByResourceGroupIdRequest(CreateMonitorGroupByResourceGroupIdRequest &&) = default ;
    CreateMonitorGroupByResourceGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorGroupByResourceGroupIdRequest() = default ;
    CreateMonitorGroupByResourceGroupIdRequest& operator=(const CreateMonitorGroupByResourceGroupIdRequest &) = default ;
    CreateMonitorGroupByResourceGroupIdRequest& operator=(CreateMonitorGroupByResourceGroupIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupList_ == nullptr
        && return this->enableInstallAgent_ == nullptr && return this->enableSubscribeEvent_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceGroupName_ == nullptr; };
    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const vector<string> & contactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, vector<string>) };
    inline vector<string> contactGroupList() { DARABONBA_PTR_GET(contactGroupList_, vector<string>) };
    inline CreateMonitorGroupByResourceGroupIdRequest& setContactGroupList(const vector<string> & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline CreateMonitorGroupByResourceGroupIdRequest& setContactGroupList(vector<string> && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


    // enableInstallAgent Field Functions 
    bool hasEnableInstallAgent() const { return this->enableInstallAgent_ != nullptr;};
    void deleteEnableInstallAgent() { this->enableInstallAgent_ = nullptr;};
    inline bool enableInstallAgent() const { DARABONBA_PTR_GET_DEFAULT(enableInstallAgent_, false) };
    inline CreateMonitorGroupByResourceGroupIdRequest& setEnableInstallAgent(bool enableInstallAgent) { DARABONBA_PTR_SET_VALUE(enableInstallAgent_, enableInstallAgent) };


    // enableSubscribeEvent Field Functions 
    bool hasEnableSubscribeEvent() const { return this->enableSubscribeEvent_ != nullptr;};
    void deleteEnableSubscribeEvent() { this->enableSubscribeEvent_ = nullptr;};
    inline bool enableSubscribeEvent() const { DARABONBA_PTR_GET_DEFAULT(enableSubscribeEvent_, false) };
    inline CreateMonitorGroupByResourceGroupIdRequest& setEnableSubscribeEvent(bool enableSubscribeEvent) { DARABONBA_PTR_SET_VALUE(enableSubscribeEvent_, enableSubscribeEvent) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMonitorGroupByResourceGroupIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateMonitorGroupByResourceGroupIdRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline CreateMonitorGroupByResourceGroupIdRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The alert contact groups. The alert notifications of the application group are sent to the alert contacts that belong to the specified alert contact groups.
    // 
    // An alert contact group can contain one or more alert contacts. For information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html). For information about how to obtain alert contact groups, see [DescribeContactGroupList](https://help.aliyun.com/document_detail/114922.html).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> contactGroupList_ = nullptr;
    // Specifies whether the CloudMonitor agent is automatically installed for the application group. CloudMonitor determines whether to automatically install the CloudMonitor agent for the hosts in an application group based on the value of this parameter. Valid values:
    // 
    // *   true: The CloudMonitor agent is automatically installed.
    // *   false (default): The CloudMonitor agent is not automatically installed.
    std::shared_ptr<bool> enableInstallAgent_ = nullptr;
    // Specifies whether the application group automatically subscribes to event notifications. If events whose severity level is critical or warning occur on resources in an application group, CloudMonitor sends alert notifications. Valid values:
    // 
    // *   true: The application group automatically subscribes to event notifications.
    // *   false (default): The application group does not automatically subscribe to event notifications.
    std::shared_ptr<bool> enableSubscribeEvent_ = nullptr;
    // The ID of the region where the resource group resides.
    // 
    // For information about how to obtain the ID of the region where a resource group resides, see [GetResourceGroup](https://help.aliyun.com/document_detail/158866.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    // 
    // For information about how to obtain the ID of a resource group, see [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the resource group.
    // 
    // For information about how to obtain the name of a resource group, see [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
