// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECTRECOMMENDRULEDTOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODYRESULTOBJECTRECOMMENDRULEDTOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& obj) { 
      DARABONBA_PTR_TO_JSON(computeExpression, computeExpression_);
      DARABONBA_PTR_TO_JSON(hitSample, hitSample_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(notHitSample, notHitSample_);
      DARABONBA_PTR_TO_JSON(recommendRules, recommendRules_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(velocities, velocities_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& obj) { 
      DARABONBA_PTR_FROM_JSON(computeExpression, computeExpression_);
      DARABONBA_PTR_FROM_JSON(hitSample, hitSample_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(notHitSample, notHitSample_);
      DARABONBA_PTR_FROM_JSON(recommendRules, recommendRules_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(velocities, velocities_);
    };
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs(const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs(DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs &&) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs() = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& operator=(const DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs &) = default ;
    DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& operator=(DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeExpression_ != nullptr
        && this->hitSample_ != nullptr && this->id_ != nullptr && this->notHitSample_ != nullptr && this->recommendRules_ != nullptr && this->ruleId_ != nullptr
        && this->ruleName_ != nullptr && this->status_ != nullptr && this->velocities_ != nullptr; };
    // computeExpression Field Functions 
    bool hasComputeExpression() const { return this->computeExpression_ != nullptr;};
    void deleteComputeExpression() { this->computeExpression_ = nullptr;};
    inline string computeExpression() const { DARABONBA_PTR_GET_DEFAULT(computeExpression_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setComputeExpression(string computeExpression) { DARABONBA_PTR_SET_VALUE(computeExpression_, computeExpression) };


    // hitSample Field Functions 
    bool hasHitSample() const { return this->hitSample_ != nullptr;};
    void deleteHitSample() { this->hitSample_ = nullptr;};
    inline int64_t hitSample() const { DARABONBA_PTR_GET_DEFAULT(hitSample_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setHitSample(int64_t hitSample) { DARABONBA_PTR_SET_VALUE(hitSample_, hitSample) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // notHitSample Field Functions 
    bool hasNotHitSample() const { return this->notHitSample_ != nullptr;};
    void deleteNotHitSample() { this->notHitSample_ = nullptr;};
    inline int64_t notHitSample() const { DARABONBA_PTR_GET_DEFAULT(notHitSample_, 0L) };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setNotHitSample(int64_t notHitSample) { DARABONBA_PTR_SET_VALUE(notHitSample_, notHitSample) };


    // recommendRules Field Functions 
    bool hasRecommendRules() const { return this->recommendRules_ != nullptr;};
    void deleteRecommendRules() { this->recommendRules_ = nullptr;};
    inline const vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules> & recommendRules() const { DARABONBA_PTR_GET_CONST(recommendRules_, vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules>) };
    inline vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules> recommendRules() { DARABONBA_PTR_GET(recommendRules_, vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules>) };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setRecommendRules(const vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules> & recommendRules) { DARABONBA_PTR_SET_VALUE(recommendRules_, recommendRules) };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setRecommendRules(vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules> && recommendRules) { DARABONBA_PTR_SET_RVALUE(recommendRules_, recommendRules) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // velocities Field Functions 
    bool hasVelocities() const { return this->velocities_ != nullptr;};
    void deleteVelocities() { this->velocities_ = nullptr;};
    inline string velocities() const { DARABONBA_PTR_GET_DEFAULT(velocities_, "") };
    inline DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOs& setVelocities(string velocities) { DARABONBA_PTR_SET_VALUE(velocities_, velocities) };


  protected:
    // Calculation path
    std::shared_ptr<string> computeExpression_ = nullptr;
    // Number of hit samples
    std::shared_ptr<int64_t> hitSample_ = nullptr;
    // Primary key ID of the rule
    std::shared_ptr<int64_t> id_ = nullptr;
    // Number of unhit samples
    std::shared_ptr<int64_t> notHitSample_ = nullptr;
    // List of candidate rules
    std::shared_ptr<vector<Models::DescribeRecommendTaskDetailResponseBodyResultObjectRecommendRuleDTOsRecommendRules>> recommendRules_ = nullptr;
    // Strategy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Rule name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Status
    std::shared_ptr<string> status_ = nullptr;
    // List of indicators in JSON string format
    std::shared_ptr<string> velocities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
