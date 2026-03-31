// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERECOMMENDMANAGEDRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERECOMMENDMANAGEDRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRecommendManagedRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRecommendManagedRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(SelectedManagedRuleIdentifiers, selectedManagedRuleIdentifiers_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRecommendManagedRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(SelectedManagedRuleIdentifiers, selectedManagedRuleIdentifiers_);
    };
    ListAggregateRecommendManagedRulesRequest() = default ;
    ListAggregateRecommendManagedRulesRequest(const ListAggregateRecommendManagedRulesRequest &) = default ;
    ListAggregateRecommendManagedRulesRequest(ListAggregateRecommendManagedRulesRequest &&) = default ;
    ListAggregateRecommendManagedRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRecommendManagedRulesRequest() = default ;
    ListAggregateRecommendManagedRulesRequest& operator=(const ListAggregateRecommendManagedRulesRequest &) = default ;
    ListAggregateRecommendManagedRulesRequest& operator=(ListAggregateRecommendManagedRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->excludeRegionIdsScope_ == nullptr && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->regionIdsScope_ == nullptr && this->resourceGroupIdsScope_ == nullptr && this->resourceIdsScope_ == nullptr && this->selectedManagedRuleIdentifiers_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateRecommendManagedRulesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // selectedManagedRuleIdentifiers Field Functions 
    bool hasSelectedManagedRuleIdentifiers() const { return this->selectedManagedRuleIdentifiers_ != nullptr;};
    void deleteSelectedManagedRuleIdentifiers() { this->selectedManagedRuleIdentifiers_ = nullptr;};
    inline string getSelectedManagedRuleIdentifiers() const { DARABONBA_PTR_GET_DEFAULT(selectedManagedRuleIdentifiers_, "") };
    inline ListAggregateRecommendManagedRulesRequest& setSelectedManagedRuleIdentifiers(string selectedManagedRuleIdentifiers) { DARABONBA_PTR_SET_VALUE(selectedManagedRuleIdentifiers_, selectedManagedRuleIdentifiers) };


  protected:
    shared_ptr<string> aggregatorId_ {};
    shared_ptr<string> excludeRegionIdsScope_ {};
    shared_ptr<string> excludeResourceGroupIdsScope_ {};
    shared_ptr<string> excludeResourceIdsScope_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionIdsScope_ {};
    shared_ptr<string> resourceGroupIdsScope_ {};
    shared_ptr<string> resourceIdsScope_ {};
    shared_ptr<string> selectedManagedRuleIdentifiers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
