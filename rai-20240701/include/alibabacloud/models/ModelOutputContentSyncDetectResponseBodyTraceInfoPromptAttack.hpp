// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOPROMPTATTACK_HPP_
#define ALIBABACLOUD_MODELS_MODELOUTPUTCONTENTSYNCDETECTRESPONSEBODYTRACEINFOPROMPTATTACK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack(const ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack(ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack &&) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack() = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& operator=(const ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack &) = default ;
    ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& operator=(ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidenceScore_ == nullptr
        && return this->promptAttackInfo_ == nullptr && return this->promptAttackInfoList_ == nullptr && return this->riskResult_ == nullptr && return this->securityLevel_ == nullptr; };
    // confidenceScore Field Functions 
    bool hasConfidenceScore() const { return this->confidenceScore_ != nullptr;};
    void deleteConfidenceScore() { this->confidenceScore_ = nullptr;};
    inline double confidenceScore() const { DARABONBA_PTR_GET_DEFAULT(confidenceScore_, 0.0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& setConfidenceScore(double confidenceScore) { DARABONBA_PTR_SET_VALUE(confidenceScore_, confidenceScore) };


    // promptAttackInfo Field Functions 
    bool hasPromptAttackInfo() const { return this->promptAttackInfo_ != nullptr;};
    void deletePromptAttackInfo() { this->promptAttackInfo_ = nullptr;};
    inline string promptAttackInfo() const { DARABONBA_PTR_GET_DEFAULT(promptAttackInfo_, "") };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& setPromptAttackInfo(string promptAttackInfo) { DARABONBA_PTR_SET_VALUE(promptAttackInfo_, promptAttackInfo) };


    // promptAttackInfoList Field Functions 
    bool hasPromptAttackInfoList() const { return this->promptAttackInfoList_ != nullptr;};
    void deletePromptAttackInfoList() { this->promptAttackInfoList_ = nullptr;};
    inline const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList> & promptAttackInfoList() const { DARABONBA_PTR_GET_CONST(promptAttackInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList>) };
    inline vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList> promptAttackInfoList() { DARABONBA_PTR_GET(promptAttackInfoList_, vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList>) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& setPromptAttackInfoList(const vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList> & promptAttackInfoList) { DARABONBA_PTR_SET_VALUE(promptAttackInfoList_, promptAttackInfoList) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& setPromptAttackInfoList(vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList> && promptAttackInfoList) { DARABONBA_PTR_SET_RVALUE(promptAttackInfoList_, promptAttackInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Confidence score
    std::shared_ptr<double> confidenceScore_ = nullptr;
    // Prompt attack detection result object
    std::shared_ptr<string> promptAttackInfo_ = nullptr;
    // List of prompt attacks
    std::shared_ptr<vector<Models::ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttackPromptAttackInfoList>> promptAttackInfoList_ = nullptr;
    // 0: No risk
    // 1: Risk exists
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    // Security level
    // 0: Low
    // 1: Medium
    // 2: High
    std::shared_ptr<int32_t> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
