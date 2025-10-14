// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetExpressionFieldsRequestExpressions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchGetExpressionFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetExpressionFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(PlanNameEn, planNameEn_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetExpressionFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(PlanNameEn, planNameEn_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    BatchGetExpressionFieldsRequest() = default ;
    BatchGetExpressionFieldsRequest(const BatchGetExpressionFieldsRequest &) = default ;
    BatchGetExpressionFieldsRequest(BatchGetExpressionFieldsRequest &&) = default ;
    BatchGetExpressionFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetExpressionFieldsRequest() = default ;
    BatchGetExpressionFieldsRequest& operator=(const BatchGetExpressionFieldsRequest &) = default ;
    BatchGetExpressionFieldsRequest& operator=(BatchGetExpressionFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressions_ == nullptr
        && return this->instanceId_ == nullptr && return this->kind_ == nullptr && return this->phase_ == nullptr && return this->planNameEn_ == nullptr && return this->siteId_ == nullptr; };
    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<BatchGetExpressionFieldsRequestExpressions> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<BatchGetExpressionFieldsRequestExpressions>) };
    inline vector<BatchGetExpressionFieldsRequestExpressions> expressions() { DARABONBA_PTR_GET(expressions_, vector<BatchGetExpressionFieldsRequestExpressions>) };
    inline BatchGetExpressionFieldsRequest& setExpressions(const vector<BatchGetExpressionFieldsRequestExpressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline BatchGetExpressionFieldsRequest& setExpressions(vector<BatchGetExpressionFieldsRequestExpressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchGetExpressionFieldsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline BatchGetExpressionFieldsRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchGetExpressionFieldsRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // planNameEn Field Functions 
    bool hasPlanNameEn() const { return this->planNameEn_ != nullptr;};
    void deletePlanNameEn() { this->planNameEn_ = nullptr;};
    inline string planNameEn() const { DARABONBA_PTR_GET_DEFAULT(planNameEn_, "") };
    inline BatchGetExpressionFieldsRequest& setPlanNameEn(string planNameEn) { DARABONBA_PTR_SET_VALUE(planNameEn_, planNameEn) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchGetExpressionFieldsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // List of expressions.
    std::shared_ptr<vector<BatchGetExpressionFieldsRequestExpressions>> expressions_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    // WAF Phase
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> planNameEn_ = nullptr;
    // Site ID
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
