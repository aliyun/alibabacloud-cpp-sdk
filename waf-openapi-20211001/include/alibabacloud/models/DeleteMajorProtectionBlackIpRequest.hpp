// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMAJORPROTECTIONBLACKIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMAJORPROTECTIONBLACKIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteMajorProtectionBlackIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMajorProtectionBlackIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMajorProtectionBlackIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteMajorProtectionBlackIpRequest() = default ;
    DeleteMajorProtectionBlackIpRequest(const DeleteMajorProtectionBlackIpRequest &) = default ;
    DeleteMajorProtectionBlackIpRequest(DeleteMajorProtectionBlackIpRequest &&) = default ;
    DeleteMajorProtectionBlackIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMajorProtectionBlackIpRequest() = default ;
    DeleteMajorProtectionBlackIpRequest& operator=(const DeleteMajorProtectionBlackIpRequest &) = default ;
    DeleteMajorProtectionBlackIpRequest& operator=(DeleteMajorProtectionBlackIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ipList_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->ruleId_ == nullptr && this->templateId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteMajorProtectionBlackIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline DeleteMajorProtectionBlackIpRequest& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMajorProtectionBlackIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteMajorProtectionBlackIpRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DeleteMajorProtectionBlackIpRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DeleteMajorProtectionBlackIpRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to obtain the ID of the current WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IP address blacklist to be deleted. Supports custom IP addresses or IP address segments in the blacklist, and supports both IPv4 and IPv6. Multiple IP addresses are separated by commas (,). For more information, see [Critical event protection](https://help.aliyun.com/document_detail/425591.html).
    // 
    // This parameter is required.
    shared_ptr<string> ipList_ {};
    // The region ID of the WAF instance. Valid values:
    // 
    // - **cn-hangzhou**: The Chinese mainland.
    // 
    // - **ap-southeast-1**: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The ID of the IP address blacklist rule for critical event protection.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
    // The ID of the critical event protection template.
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
