// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPDISCOVERRULESPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPDISCOVERRULESPREVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ObserveGroupEntitySummary.hpp>
#include <alibabacloud/models/ObserveGroupInstance.hpp>
#include <alibabacloud/models/ObserveGroupRuleCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupDiscoverRulesPreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupDiscoverRulesPreview& obj) { 
      DARABONBA_PTR_TO_JSON(catalogRevision, catalogRevision_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(entitySummaries, entitySummaries_);
      DARABONBA_PTR_TO_JSON(filteredCount, filteredCount_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(mainCount, mainCount_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(relatedCount, relatedCount_);
      DARABONBA_PTR_TO_JSON(ruleCounts, ruleCounts_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupDiscoverRulesPreview& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogRevision, catalogRevision_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(entitySummaries, entitySummaries_);
      DARABONBA_PTR_FROM_JSON(filteredCount, filteredCount_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(mainCount, mainCount_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(relatedCount, relatedCount_);
      DARABONBA_PTR_FROM_JSON(ruleCounts, ruleCounts_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ObserveGroupDiscoverRulesPreview() = default ;
    ObserveGroupDiscoverRulesPreview(const ObserveGroupDiscoverRulesPreview &) = default ;
    ObserveGroupDiscoverRulesPreview(ObserveGroupDiscoverRulesPreview &&) = default ;
    ObserveGroupDiscoverRulesPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupDiscoverRulesPreview() = default ;
    ObserveGroupDiscoverRulesPreview& operator=(const ObserveGroupDiscoverRulesPreview &) = default ;
    ObserveGroupDiscoverRulesPreview& operator=(ObserveGroupDiscoverRulesPreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogRevision_ == nullptr
        && this->count_ == nullptr && this->entitySummaries_ == nullptr && this->filteredCount_ == nullptr && this->instances_ == nullptr && this->mainCount_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->relatedCount_ == nullptr && this->ruleCounts_ == nullptr && this->totalCount_ == nullptr; };
    // catalogRevision Field Functions 
    bool hasCatalogRevision() const { return this->catalogRevision_ != nullptr;};
    void deleteCatalogRevision() { this->catalogRevision_ = nullptr;};
    inline string getCatalogRevision() const { DARABONBA_PTR_GET_DEFAULT(catalogRevision_, "") };
    inline ObserveGroupDiscoverRulesPreview& setCatalogRevision(string catalogRevision) { DARABONBA_PTR_SET_VALUE(catalogRevision_, catalogRevision) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ObserveGroupDiscoverRulesPreview& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // entitySummaries Field Functions 
    bool hasEntitySummaries() const { return this->entitySummaries_ != nullptr;};
    void deleteEntitySummaries() { this->entitySummaries_ = nullptr;};
    inline const vector<ObserveGroupEntitySummary> & getEntitySummaries() const { DARABONBA_PTR_GET_CONST(entitySummaries_, vector<ObserveGroupEntitySummary>) };
    inline vector<ObserveGroupEntitySummary> getEntitySummaries() { DARABONBA_PTR_GET(entitySummaries_, vector<ObserveGroupEntitySummary>) };
    inline ObserveGroupDiscoverRulesPreview& setEntitySummaries(const vector<ObserveGroupEntitySummary> & entitySummaries) { DARABONBA_PTR_SET_VALUE(entitySummaries_, entitySummaries) };
    inline ObserveGroupDiscoverRulesPreview& setEntitySummaries(vector<ObserveGroupEntitySummary> && entitySummaries) { DARABONBA_PTR_SET_RVALUE(entitySummaries_, entitySummaries) };


    // filteredCount Field Functions 
    bool hasFilteredCount() const { return this->filteredCount_ != nullptr;};
    void deleteFilteredCount() { this->filteredCount_ = nullptr;};
    inline int32_t getFilteredCount() const { DARABONBA_PTR_GET_DEFAULT(filteredCount_, 0) };
    inline ObserveGroupDiscoverRulesPreview& setFilteredCount(int32_t filteredCount) { DARABONBA_PTR_SET_VALUE(filteredCount_, filteredCount) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ObserveGroupInstance> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ObserveGroupInstance>) };
    inline vector<ObserveGroupInstance> getInstances() { DARABONBA_PTR_GET(instances_, vector<ObserveGroupInstance>) };
    inline ObserveGroupDiscoverRulesPreview& setInstances(const vector<ObserveGroupInstance> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ObserveGroupDiscoverRulesPreview& setInstances(vector<ObserveGroupInstance> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // mainCount Field Functions 
    bool hasMainCount() const { return this->mainCount_ != nullptr;};
    void deleteMainCount() { this->mainCount_ = nullptr;};
    inline int64_t getMainCount() const { DARABONBA_PTR_GET_DEFAULT(mainCount_, 0L) };
    inline ObserveGroupDiscoverRulesPreview& setMainCount(int64_t mainCount) { DARABONBA_PTR_SET_VALUE(mainCount_, mainCount) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ObserveGroupDiscoverRulesPreview& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ObserveGroupDiscoverRulesPreview& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // relatedCount Field Functions 
    bool hasRelatedCount() const { return this->relatedCount_ != nullptr;};
    void deleteRelatedCount() { this->relatedCount_ = nullptr;};
    inline int64_t getRelatedCount() const { DARABONBA_PTR_GET_DEFAULT(relatedCount_, 0L) };
    inline ObserveGroupDiscoverRulesPreview& setRelatedCount(int64_t relatedCount) { DARABONBA_PTR_SET_VALUE(relatedCount_, relatedCount) };


    // ruleCounts Field Functions 
    bool hasRuleCounts() const { return this->ruleCounts_ != nullptr;};
    void deleteRuleCounts() { this->ruleCounts_ = nullptr;};
    inline const vector<ObserveGroupRuleCount> & getRuleCounts() const { DARABONBA_PTR_GET_CONST(ruleCounts_, vector<ObserveGroupRuleCount>) };
    inline vector<ObserveGroupRuleCount> getRuleCounts() { DARABONBA_PTR_GET(ruleCounts_, vector<ObserveGroupRuleCount>) };
    inline ObserveGroupDiscoverRulesPreview& setRuleCounts(const vector<ObserveGroupRuleCount> & ruleCounts) { DARABONBA_PTR_SET_VALUE(ruleCounts_, ruleCounts) };
    inline ObserveGroupDiscoverRulesPreview& setRuleCounts(vector<ObserveGroupRuleCount> && ruleCounts) { DARABONBA_PTR_SET_RVALUE(ruleCounts_, ruleCounts) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ObserveGroupDiscoverRulesPreview& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The global association catalog version used for this preview.
    shared_ptr<string> catalogRevision_ {};
    // The number of entities returned on this page.
    shared_ptr<int32_t> count_ {};
    // The primary entities, associated sub-entities, and total count by entity type.
    shared_ptr<vector<ObserveGroupEntitySummary>> entitySummaries_ {};
    // The total count after filtering by entity role, type, and keyword.
    shared_ptr<int32_t> filteredCount_ {};
    // The list of matched entities on this page.
    shared_ptr<vector<ObserveGroupInstance>> instances_ {};
    // The deduplicated count of primary entities.
    shared_ptr<int64_t> mainCount_ {};
    // The maximum number of entities returned on this page.
    shared_ptr<int32_t> maxResults_ {};
    // The next page token, which is empty if there is no next page.
    shared_ptr<string> nextToken_ {};
    // The deduplicated count of associated sub-entities.
    shared_ptr<int64_t> relatedCount_ {};
    // The primary entities, associated sub-entities, and total count by rule.
    shared_ptr<vector<ObserveGroupRuleCount>> ruleCounts_ {};
    // The deduplicated total count of entities.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
