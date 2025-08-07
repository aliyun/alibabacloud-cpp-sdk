// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMAJORPROTECTIONBLACKIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMAJORPROTECTIONBLACKIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateMajorProtectionBlackIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMajorProtectionBlackIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMajorProtectionBlackIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateMajorProtectionBlackIpRequest() = default ;
    CreateMajorProtectionBlackIpRequest(const CreateMajorProtectionBlackIpRequest &) = default ;
    CreateMajorProtectionBlackIpRequest(CreateMajorProtectionBlackIpRequest &&) = default ;
    CreateMajorProtectionBlackIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMajorProtectionBlackIpRequest() = default ;
    CreateMajorProtectionBlackIpRequest& operator=(const CreateMajorProtectionBlackIpRequest &) = default ;
    CreateMajorProtectionBlackIpRequest& operator=(CreateMajorProtectionBlackIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->expiredTime_ != nullptr && this->instanceId_ != nullptr && this->ipList_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->ruleId_ != nullptr && this->templateId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMajorProtectionBlackIpRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline CreateMajorProtectionBlackIpRequest& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateMajorProtectionBlackIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string ipList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline CreateMajorProtectionBlackIpRequest& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMajorProtectionBlackIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateMajorProtectionBlackIpRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline CreateMajorProtectionBlackIpRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline CreateMajorProtectionBlackIpRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The description of the IP address blacklist.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp after which the IP address blacklist becomes invalid. Unit: seconds.
    // 
    // >  If you set the parameter to **0**, the IP address blacklist is always valid.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> expiredTime_ = nullptr;
    // The ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP addresses that you want to add to the IP address blacklist. CIDR blocks and IP addresses are supported. IPv4 and IPv6 addresses are supported. Separate the CIDR blocks or IP addresses with commas (,). For more information, see [Protection for major events](https://help.aliyun.com/document_detail/425591.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ipList_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The ID of the IP address blacklist rule for major event protection.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The ID of the IP address blacklist rule template for major event protection.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
