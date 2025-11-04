// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECEVENTSREQUEST_HPP_
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
  class ModifyApisecEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EventIds, eventIds_);
      DARABONBA_PTR_TO_JSON(EventScope, eventScope_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EventIds, eventIds_);
      DARABONBA_PTR_FROM_JSON(EventScope, eventScope_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    ModifyApisecEventsRequest() = default ;
    ModifyApisecEventsRequest(const ModifyApisecEventsRequest &) = default ;
    ModifyApisecEventsRequest(ModifyApisecEventsRequest &&) = default ;
    ModifyApisecEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecEventsRequest() = default ;
    ModifyApisecEventsRequest& operator=(const ModifyApisecEventsRequest &) = default ;
    ModifyApisecEventsRequest& operator=(ModifyApisecEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->eventIds_ == nullptr && return this->eventScope_ == nullptr && return this->instanceId_ == nullptr && return this->note_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceManagerResourceGroupId_ == nullptr && return this->userStatus_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyApisecEventsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // eventIds Field Functions 
    bool hasEventIds() const { return this->eventIds_ != nullptr;};
    void deleteEventIds() { this->eventIds_ = nullptr;};
    inline const vector<string> & eventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
    inline vector<string> eventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
    inline ModifyApisecEventsRequest& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
    inline ModifyApisecEventsRequest& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


    // eventScope Field Functions 
    bool hasEventScope() const { return this->eventScope_ != nullptr;};
    void deleteEventScope() { this->eventScope_ = nullptr;};
    inline string eventScope() const { DARABONBA_PTR_GET_DEFAULT(eventScope_, "") };
    inline ModifyApisecEventsRequest& setEventScope(string eventScope) { DARABONBA_PTR_SET_VALUE(eventScope_, eventScope) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ModifyApisecEventsRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecEventsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline ModifyApisecEventsRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The IDs of the security events.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> eventIds_ = nullptr;
    std::shared_ptr<string> eventScope_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The description.
    std::shared_ptr<string> note_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // 阿里云资源组ID。
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **ignored**
    // 
    // This parameter is required.
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
