// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBOTRULELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBOTRULELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeBotRuleLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBotRuleLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LabelType, labelType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubScene, subScene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBotRuleLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubScene, subScene_);
    };
    DescribeBotRuleLabelsRequest() = default ;
    DescribeBotRuleLabelsRequest(const DescribeBotRuleLabelsRequest &) = default ;
    DescribeBotRuleLabelsRequest(DescribeBotRuleLabelsRequest &&) = default ;
    DescribeBotRuleLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBotRuleLabelsRequest() = default ;
    DescribeBotRuleLabelsRequest& operator=(const DescribeBotRuleLabelsRequest &) = default ;
    DescribeBotRuleLabelsRequest& operator=(DescribeBotRuleLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->labelType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->subScene_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBotRuleLabelsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline DescribeBotRuleLabelsRequest& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeBotRuleLabelsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBotRuleLabelsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBotRuleLabelsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeBotRuleLabelsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // subScene Field Functions 
    bool hasSubScene() const { return this->subScene_ != nullptr;};
    void deleteSubScene() { this->subScene_ = nullptr;};
    inline string getSubScene() const { DARABONBA_PTR_GET_DEFAULT(subScene_, "") };
    inline DescribeBotRuleLabelsRequest& setSubScene(string subScene) { DARABONBA_PTR_SET_VALUE(subScene_, subScene) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> labelType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    shared_ptr<string> subScene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
