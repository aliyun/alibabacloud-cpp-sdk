// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FourthKey, fourthKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryKey, secondaryKey_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(ThirdKey, thirdKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FourthKey, fourthKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryKey, secondaryKey_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(ThirdKey, thirdKey_);
    };
    DescribeDefenseRuleStatisticsRequest() = default ;
    DescribeDefenseRuleStatisticsRequest(const DescribeDefenseRuleStatisticsRequest &) = default ;
    DescribeDefenseRuleStatisticsRequest(DescribeDefenseRuleStatisticsRequest &&) = default ;
    DescribeDefenseRuleStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleStatisticsRequest() = default ;
    DescribeDefenseRuleStatisticsRequest& operator=(const DescribeDefenseRuleStatisticsRequest &) = default ;
    DescribeDefenseRuleStatisticsRequest& operator=(DescribeDefenseRuleStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fourthKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->primaryKey_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr && return this->secondaryKey_ == nullptr
        && return this->templateId_ == nullptr && return this->thirdKey_ == nullptr; };
    // fourthKey Field Functions 
    bool hasFourthKey() const { return this->fourthKey_ != nullptr;};
    void deleteFourthKey() { this->fourthKey_ = nullptr;};
    inline string fourthKey() const { DARABONBA_PTR_GET_DEFAULT(fourthKey_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setFourthKey(string fourthKey) { DARABONBA_PTR_SET_VALUE(fourthKey_, fourthKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // secondaryKey Field Functions 
    bool hasSecondaryKey() const { return this->secondaryKey_ != nullptr;};
    void deleteSecondaryKey() { this->secondaryKey_ = nullptr;};
    inline string secondaryKey() const { DARABONBA_PTR_GET_DEFAULT(secondaryKey_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setSecondaryKey(string secondaryKey) { DARABONBA_PTR_SET_VALUE(secondaryKey_, secondaryKey) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDefenseRuleStatisticsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // thirdKey Field Functions 
    bool hasThirdKey() const { return this->thirdKey_ != nullptr;};
    void deleteThirdKey() { this->thirdKey_ = nullptr;};
    inline string thirdKey() const { DARABONBA_PTR_GET_DEFAULT(thirdKey_, "") };
    inline DescribeDefenseRuleStatisticsRequest& setThirdKey(string thirdKey) { DARABONBA_PTR_SET_VALUE(thirdKey_, thirdKey) };


  protected:
    std::shared_ptr<string> fourthKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> primaryKey_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    std::shared_ptr<string> secondaryKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    std::shared_ptr<string> thirdKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
