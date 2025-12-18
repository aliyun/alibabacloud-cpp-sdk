// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RISKCHECKRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RISKCHECKRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RiskCheckResultsMetadata.hpp>
#include <vector>
#include <alibabacloud/models/RiskCheckResultsRiskDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RiskCheckResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RiskCheckResults& obj) { 
      DARABONBA_PTR_TO_JSON(checkTime, checkTime_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(riskDetails, riskDetails_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(snapshotTime, snapshotTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalRisk, totalRisk_);
    };
    friend void from_json(const Darabonba::Json& j, RiskCheckResults& obj) { 
      DARABONBA_PTR_FROM_JSON(checkTime, checkTime_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(riskDetails, riskDetails_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(snapshotTime, snapshotTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalRisk, totalRisk_);
    };
    RiskCheckResults() = default ;
    RiskCheckResults(const RiskCheckResults &) = default ;
    RiskCheckResults(RiskCheckResults &&) = default ;
    RiskCheckResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RiskCheckResults() = default ;
    RiskCheckResults& operator=(const RiskCheckResults &) = default ;
    RiskCheckResults& operator=(RiskCheckResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkTime_ == nullptr
        && return this->gatewayId_ == nullptr && return this->metadata_ == nullptr && return this->riskDetails_ == nullptr && return this->riskLevel_ == nullptr && return this->score_ == nullptr
        && return this->snapshotTime_ == nullptr && return this->status_ == nullptr && return this->totalRisk_ == nullptr; };
    // checkTime Field Functions 
    bool hasCheckTime() const { return this->checkTime_ != nullptr;};
    void deleteCheckTime() { this->checkTime_ = nullptr;};
    inline int64_t checkTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, 0L) };
    inline RiskCheckResults& setCheckTime(int64_t checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline RiskCheckResults& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const RiskCheckResultsMetadata & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, RiskCheckResultsMetadata) };
    inline RiskCheckResultsMetadata metadata() { DARABONBA_PTR_GET(metadata_, RiskCheckResultsMetadata) };
    inline RiskCheckResults& setMetadata(const RiskCheckResultsMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline RiskCheckResults& setMetadata(RiskCheckResultsMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // riskDetails Field Functions 
    bool hasRiskDetails() const { return this->riskDetails_ != nullptr;};
    void deleteRiskDetails() { this->riskDetails_ = nullptr;};
    inline const vector<RiskCheckResultsRiskDetails> & riskDetails() const { DARABONBA_PTR_GET_CONST(riskDetails_, vector<RiskCheckResultsRiskDetails>) };
    inline vector<RiskCheckResultsRiskDetails> riskDetails() { DARABONBA_PTR_GET(riskDetails_, vector<RiskCheckResultsRiskDetails>) };
    inline RiskCheckResults& setRiskDetails(const vector<RiskCheckResultsRiskDetails> & riskDetails) { DARABONBA_PTR_SET_VALUE(riskDetails_, riskDetails) };
    inline RiskCheckResults& setRiskDetails(vector<RiskCheckResultsRiskDetails> && riskDetails) { DARABONBA_PTR_SET_RVALUE(riskDetails_, riskDetails) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline RiskCheckResults& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline RiskCheckResults& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // snapshotTime Field Functions 
    bool hasSnapshotTime() const { return this->snapshotTime_ != nullptr;};
    void deleteSnapshotTime() { this->snapshotTime_ = nullptr;};
    inline int64_t snapshotTime() const { DARABONBA_PTR_GET_DEFAULT(snapshotTime_, 0L) };
    inline RiskCheckResults& setSnapshotTime(int64_t snapshotTime) { DARABONBA_PTR_SET_VALUE(snapshotTime_, snapshotTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RiskCheckResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalRisk Field Functions 
    bool hasTotalRisk() const { return this->totalRisk_ != nullptr;};
    void deleteTotalRisk() { this->totalRisk_ = nullptr;};
    inline int32_t totalRisk() const { DARABONBA_PTR_GET_DEFAULT(totalRisk_, 0) };
    inline RiskCheckResults& setTotalRisk(int32_t totalRisk) { DARABONBA_PTR_SET_VALUE(totalRisk_, totalRisk) };


  protected:
    std::shared_ptr<int64_t> checkTime_ = nullptr;
    // 网关实例的唯一标识符
    std::shared_ptr<string> gatewayId_ = nullptr;
    // 实例的基本信息
    std::shared_ptr<RiskCheckResultsMetadata> metadata_ = nullptr;
    // 详细的风险项信息列表
    std::shared_ptr<vector<RiskCheckResultsRiskDetails>> riskDetails_ = nullptr;
    // 整体风险等级，可选值：LOW（低风险）、MEDIUM（中风险）、HIGH（高风险）、CRITICAL（严重风险）
    std::shared_ptr<string> riskLevel_ = nullptr;
    // 风险综合评分，取值范围0-100分，分数越高表示风险越低
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<int64_t> snapshotTime_ = nullptr;
    // 风险检测状态，可选值：SUCCESS（成功）、FAIL（失败）、RUNNING（运行中）
    std::shared_ptr<string> status_ = nullptr;
    // 检测到的风险项总数量
    std::shared_ptr<int32_t> totalRisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
