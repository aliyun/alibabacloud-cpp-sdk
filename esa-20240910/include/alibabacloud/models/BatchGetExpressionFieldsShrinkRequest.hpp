// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchGetExpressionFieldsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetExpressionFieldsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expressions, expressionsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(PlanNameEn, planNameEn_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetExpressionFieldsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expressions, expressionsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(PlanNameEn, planNameEn_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    BatchGetExpressionFieldsShrinkRequest() = default ;
    BatchGetExpressionFieldsShrinkRequest(const BatchGetExpressionFieldsShrinkRequest &) = default ;
    BatchGetExpressionFieldsShrinkRequest(BatchGetExpressionFieldsShrinkRequest &&) = default ;
    BatchGetExpressionFieldsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetExpressionFieldsShrinkRequest() = default ;
    BatchGetExpressionFieldsShrinkRequest& operator=(const BatchGetExpressionFieldsShrinkRequest &) = default ;
    BatchGetExpressionFieldsShrinkRequest& operator=(BatchGetExpressionFieldsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressionsShrink_ == nullptr
        && this->instanceId_ == nullptr && this->kind_ == nullptr && this->phase_ == nullptr && this->planNameEn_ == nullptr && this->siteId_ == nullptr; };
    // expressionsShrink Field Functions 
    bool hasExpressionsShrink() const { return this->expressionsShrink_ != nullptr;};
    void deleteExpressionsShrink() { this->expressionsShrink_ = nullptr;};
    inline string getExpressionsShrink() const { DARABONBA_PTR_GET_DEFAULT(expressionsShrink_, "") };
    inline BatchGetExpressionFieldsShrinkRequest& setExpressionsShrink(string expressionsShrink) { DARABONBA_PTR_SET_VALUE(expressionsShrink_, expressionsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchGetExpressionFieldsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline BatchGetExpressionFieldsShrinkRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchGetExpressionFieldsShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // planNameEn Field Functions 
    bool hasPlanNameEn() const { return this->planNameEn_ != nullptr;};
    void deletePlanNameEn() { this->planNameEn_ = nullptr;};
    inline string getPlanNameEn() const { DARABONBA_PTR_GET_DEFAULT(planNameEn_, "") };
    inline BatchGetExpressionFieldsShrinkRequest& setPlanNameEn(string planNameEn) { DARABONBA_PTR_SET_VALUE(planNameEn_, planNameEn) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchGetExpressionFieldsShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // List of expressions.
    shared_ptr<string> expressionsShrink_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> kind_ {};
    // WAF Phase
    shared_ptr<string> phase_ {};
    shared_ptr<string> planNameEn_ {};
    // Site ID
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
