// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOPROMPTATTACK_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOPROMPTATTACK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidenceScore, confidenceScore_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack &&) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack() = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& operator=(const GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack &) = default ;
    GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& operator=(GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack &&) = default ;
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
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& setConfidenceScore(double confidenceScore) { DARABONBA_PTR_SET_VALUE(confidenceScore_, confidenceScore) };


    // promptAttackInfo Field Functions 
    bool hasPromptAttackInfo() const { return this->promptAttackInfo_ != nullptr;};
    void deletePromptAttackInfo() { this->promptAttackInfo_ = nullptr;};
    inline string promptAttackInfo() const { DARABONBA_PTR_GET_DEFAULT(promptAttackInfo_, "") };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& setPromptAttackInfo(string promptAttackInfo) { DARABONBA_PTR_SET_VALUE(promptAttackInfo_, promptAttackInfo) };


    // promptAttackInfoList Field Functions 
    bool hasPromptAttackInfoList() const { return this->promptAttackInfoList_ != nullptr;};
    void deletePromptAttackInfoList() { this->promptAttackInfoList_ = nullptr;};
    inline const vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList> & promptAttackInfoList() const { DARABONBA_PTR_GET_CONST(promptAttackInfoList_, vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList>) };
    inline vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList> promptAttackInfoList() { DARABONBA_PTR_GET(promptAttackInfoList_, vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList>) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& setPromptAttackInfoList(const vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList> & promptAttackInfoList) { DARABONBA_PTR_SET_VALUE(promptAttackInfoList_, promptAttackInfoList) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& setPromptAttackInfoList(vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList> && promptAttackInfoList) { DARABONBA_PTR_SET_RVALUE(promptAttackInfoList_, promptAttackInfoList) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Confidence score
    std::shared_ptr<double> confidenceScore_ = nullptr;
    // Prompt attack detection result object
    std::shared_ptr<string> promptAttackInfo_ = nullptr;
    // Prompt attack list
    std::shared_ptr<vector<Models::GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttackPromptAttackInfoList>> promptAttackInfoList_ = nullptr;
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
