// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleContent, ruleContent_);
      DARABONBA_PTR_TO_JSON(RuleMatchType, ruleMatchType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleContent, ruleContent_);
      DARABONBA_PTR_FROM_JSON(RuleMatchType, ruleMatchType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribeHybridCloudClusterRulesRequest() = default ;
    DescribeHybridCloudClusterRulesRequest(const DescribeHybridCloudClusterRulesRequest &) = default ;
    DescribeHybridCloudClusterRulesRequest(DescribeHybridCloudClusterRulesRequest &&) = default ;
    DescribeHybridCloudClusterRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterRulesRequest() = default ;
    DescribeHybridCloudClusterRulesRequest& operator=(const DescribeHybridCloudClusterRulesRequest &) = default ;
    DescribeHybridCloudClusterRulesRequest& operator=(DescribeHybridCloudClusterRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->ruleContent_ == nullptr && this->ruleMatchType_ == nullptr && this->ruleType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline DescribeHybridCloudClusterRulesRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHybridCloudClusterRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHybridCloudClusterRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridCloudClusterRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHybridCloudClusterRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeHybridCloudClusterRulesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleContent Field Functions 
    bool hasRuleContent() const { return this->ruleContent_ != nullptr;};
    void deleteRuleContent() { this->ruleContent_ = nullptr;};
    inline string getRuleContent() const { DARABONBA_PTR_GET_DEFAULT(ruleContent_, "") };
    inline DescribeHybridCloudClusterRulesRequest& setRuleContent(string ruleContent) { DARABONBA_PTR_SET_VALUE(ruleContent_, ruleContent) };


    // ruleMatchType Field Functions 
    bool hasRuleMatchType() const { return this->ruleMatchType_ != nullptr;};
    void deleteRuleMatchType() { this->ruleMatchType_ = nullptr;};
    inline string getRuleMatchType() const { DARABONBA_PTR_GET_DEFAULT(ruleMatchType_, "") };
    inline DescribeHybridCloudClusterRulesRequest& setRuleMatchType(string ruleMatchType) { DARABONBA_PTR_SET_VALUE(ruleMatchType_, ruleMatchType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeHybridCloudClusterRulesRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    shared_ptr<string> ruleContent_ {};
    shared_ptr<string> ruleMatchType_ {};
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
