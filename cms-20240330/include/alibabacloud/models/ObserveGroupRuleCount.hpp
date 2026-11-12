// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPRULECOUNT_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPRULECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupRuleCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupRuleCount& obj) { 
      DARABONBA_PTR_TO_JSON(mainCount, mainCount_);
      DARABONBA_PTR_TO_JSON(relatedCount, relatedCount_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupRuleCount& obj) { 
      DARABONBA_PTR_FROM_JSON(mainCount, mainCount_);
      DARABONBA_PTR_FROM_JSON(relatedCount, relatedCount_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ObserveGroupRuleCount() = default ;
    ObserveGroupRuleCount(const ObserveGroupRuleCount &) = default ;
    ObserveGroupRuleCount(ObserveGroupRuleCount &&) = default ;
    ObserveGroupRuleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupRuleCount() = default ;
    ObserveGroupRuleCount& operator=(const ObserveGroupRuleCount &) = default ;
    ObserveGroupRuleCount& operator=(ObserveGroupRuleCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mainCount_ == nullptr
        && this->relatedCount_ == nullptr && this->ruleId_ == nullptr && this->totalCount_ == nullptr; };
    // mainCount Field Functions 
    bool hasMainCount() const { return this->mainCount_ != nullptr;};
    void deleteMainCount() { this->mainCount_ = nullptr;};
    inline int64_t getMainCount() const { DARABONBA_PTR_GET_DEFAULT(mainCount_, 0L) };
    inline ObserveGroupRuleCount& setMainCount(int64_t mainCount) { DARABONBA_PTR_SET_VALUE(mainCount_, mainCount) };


    // relatedCount Field Functions 
    bool hasRelatedCount() const { return this->relatedCount_ != nullptr;};
    void deleteRelatedCount() { this->relatedCount_ = nullptr;};
    inline int64_t getRelatedCount() const { DARABONBA_PTR_GET_DEFAULT(relatedCount_, 0L) };
    inline ObserveGroupRuleCount& setRelatedCount(int64_t relatedCount) { DARABONBA_PTR_SET_VALUE(relatedCount_, relatedCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ObserveGroupRuleCount& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ObserveGroupRuleCount& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of deduplicated primary entities.
    shared_ptr<int64_t> mainCount_ {};
    // The number of deduplicated associated child entities.
    shared_ptr<int64_t> relatedCount_ {};
    // The stable ID of the managed rule.
    shared_ptr<string> ruleId_ {};
    // The total number of deduplicated entities.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
