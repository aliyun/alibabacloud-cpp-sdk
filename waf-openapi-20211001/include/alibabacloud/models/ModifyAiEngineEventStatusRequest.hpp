// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAIENGINEEVENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAIENGINEEVENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyAiEngineEventStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAiEngineEventStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TargetStatus, targetStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAiEngineEventStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetStatus, targetStatus_);
    };
    ModifyAiEngineEventStatusRequest() = default ;
    ModifyAiEngineEventStatusRequest(const ModifyAiEngineEventStatusRequest &) = default ;
    ModifyAiEngineEventStatusRequest(ModifyAiEngineEventStatusRequest &&) = default ;
    ModifyAiEngineEventStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAiEngineEventStatusRequest() = default ;
    ModifyAiEngineEventStatusRequest& operator=(const ModifyAiEngineEventStatusRequest &) = default ;
    ModifyAiEngineEventStatusRequest& operator=(ModifyAiEngineEventStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->eventId_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->targetStatus_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyAiEngineEventStatusRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ModifyAiEngineEventStatusRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAiEngineEventStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAiEngineEventStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyAiEngineEventStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // targetStatus Field Functions 
    bool hasTargetStatus() const { return this->targetStatus_ != nullptr;};
    void deleteTargetStatus() { this->targetStatus_ = nullptr;};
    inline string getTargetStatus() const { DARABONBA_PTR_GET_DEFAULT(targetStatus_, "") };
    inline ModifyAiEngineEventStatusRequest& setTargetStatus(string targetStatus) { DARABONBA_PTR_SET_VALUE(targetStatus_, targetStatus) };


  protected:
    // The comment. The value can be up to 512 characters in length.
    shared_ptr<string> comment_ {};
    // The ID of the event.
    // 
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    // The ID of the WAF instance.
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the WAF instance.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The target status of the event.
    // 
    // This parameter is required.
    shared_ptr<string> targetStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
