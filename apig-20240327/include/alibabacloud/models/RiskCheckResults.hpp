// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RISKCHECKRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RISKCHECKRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
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
    class RiskDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskDetails& obj) { 
        DARABONBA_PTR_TO_JSON(checkModule, checkModule_);
        DARABONBA_PTR_TO_JSON(data, data_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(isNoticeMute, isNoticeMute_);
        DARABONBA_PTR_TO_JSON(riskCode, riskCode_);
        DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(riskName, riskName_);
        DARABONBA_PTR_TO_JSON(riskType, riskType_);
        DARABONBA_PTR_TO_JSON(situation, situation_);
        DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
      };
      friend void from_json(const Darabonba::Json& j, RiskDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(checkModule, checkModule_);
        DARABONBA_PTR_FROM_JSON(data, data_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(isNoticeMute, isNoticeMute_);
        DARABONBA_PTR_FROM_JSON(riskCode, riskCode_);
        DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(riskName, riskName_);
        DARABONBA_PTR_FROM_JSON(riskType, riskType_);
        DARABONBA_PTR_FROM_JSON(situation, situation_);
        DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
      };
      RiskDetails() = default ;
      RiskDetails(const RiskDetails &) = default ;
      RiskDetails(RiskDetails &&) = default ;
      RiskDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskDetails() = default ;
      RiskDetails& operator=(const RiskDetails &) = default ;
      RiskDetails& operator=(RiskDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkModule_ == nullptr
        && this->data_ == nullptr && this->description_ == nullptr && this->isNoticeMute_ == nullptr && this->riskCode_ == nullptr && this->riskLevel_ == nullptr
        && this->riskName_ == nullptr && this->riskType_ == nullptr && this->situation_ == nullptr && this->suggestion_ == nullptr; };
      // checkModule Field Functions 
      bool hasCheckModule() const { return this->checkModule_ != nullptr;};
      void deleteCheckModule() { this->checkModule_ = nullptr;};
      inline string getCheckModule() const { DARABONBA_PTR_GET_DEFAULT(checkModule_, "") };
      inline RiskDetails& setCheckModule(string checkModule) { DARABONBA_PTR_SET_VALUE(checkModule_, checkModule) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const map<string, string> & getData() const { DARABONBA_PTR_GET_CONST(data_, map<string, string>) };
      inline map<string, string> getData() { DARABONBA_PTR_GET(data_, map<string, string>) };
      inline RiskDetails& setData(const map<string, string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline RiskDetails& setData(map<string, string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RiskDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isNoticeMute Field Functions 
      bool hasIsNoticeMute() const { return this->isNoticeMute_ != nullptr;};
      void deleteIsNoticeMute() { this->isNoticeMute_ = nullptr;};
      inline bool getIsNoticeMute() const { DARABONBA_PTR_GET_DEFAULT(isNoticeMute_, false) };
      inline RiskDetails& setIsNoticeMute(bool isNoticeMute) { DARABONBA_PTR_SET_VALUE(isNoticeMute_, isNoticeMute) };


      // riskCode Field Functions 
      bool hasRiskCode() const { return this->riskCode_ != nullptr;};
      void deleteRiskCode() { this->riskCode_ = nullptr;};
      inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
      inline RiskDetails& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline RiskDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskName Field Functions 
      bool hasRiskName() const { return this->riskName_ != nullptr;};
      void deleteRiskName() { this->riskName_ = nullptr;};
      inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
      inline RiskDetails& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline RiskDetails& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      // situation Field Functions 
      bool hasSituation() const { return this->situation_ != nullptr;};
      void deleteSituation() { this->situation_ = nullptr;};
      inline string getSituation() const { DARABONBA_PTR_GET_DEFAULT(situation_, "") };
      inline RiskDetails& setSituation(string situation) { DARABONBA_PTR_SET_VALUE(situation_, situation) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline RiskDetails& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    protected:
      // 执行检测的模块名称
      shared_ptr<string> checkModule_ {};
      // 风险相关的详细数据，不同风险类型数据结构不同
      shared_ptr<map<string, string>> data_ {};
      // 风险的详细描述，JSON字符串格式
      shared_ptr<string> description_ {};
      // 该风险项的告警通知是否已被屏蔽
      shared_ptr<bool> isNoticeMute_ {};
      // 风险项的唯一标识码
      shared_ptr<string> riskCode_ {};
      // 该风险项的等级，可选值：LOW、MEDIUM、HIGH、CRITICAL
      shared_ptr<string> riskLevel_ {};
      // 风险项的名称
      shared_ptr<string> riskName_ {};
      // 风险分类，可选值：SYSTEM（系统风险）、VERSION（版本风险）、SAFE（安全风险）、CAPACITY（容量风险）
      shared_ptr<string> riskType_ {};
      // 当前实例的风险现状，JSON字符串格式
      shared_ptr<string> situation_ {};
      // 针对该风险的优化建议，JSON字符串格式，包含描述和操作链接
      shared_ptr<string> suggestion_ {};
    };

    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->replica_ == nullptr && this->spec_ == nullptr && this->version_ == nullptr; };
      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Metadata& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Metadata& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Metadata& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Metadata& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> clusterType_ {};
      shared_ptr<int32_t> replica_ {};
      shared_ptr<string> spec_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->checkTime_ == nullptr
        && this->gatewayId_ == nullptr && this->metadata_ == nullptr && this->riskDetails_ == nullptr && this->riskLevel_ == nullptr && this->score_ == nullptr
        && this->snapshotTime_ == nullptr && this->status_ == nullptr && this->totalRisk_ == nullptr; };
    // checkTime Field Functions 
    bool hasCheckTime() const { return this->checkTime_ != nullptr;};
    void deleteCheckTime() { this->checkTime_ = nullptr;};
    inline int64_t getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, 0L) };
    inline RiskCheckResults& setCheckTime(int64_t checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline RiskCheckResults& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const RiskCheckResults::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, RiskCheckResults::Metadata) };
    inline RiskCheckResults::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, RiskCheckResults::Metadata) };
    inline RiskCheckResults& setMetadata(const RiskCheckResults::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline RiskCheckResults& setMetadata(RiskCheckResults::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // riskDetails Field Functions 
    bool hasRiskDetails() const { return this->riskDetails_ != nullptr;};
    void deleteRiskDetails() { this->riskDetails_ = nullptr;};
    inline const vector<RiskCheckResults::RiskDetails> & getRiskDetails() const { DARABONBA_PTR_GET_CONST(riskDetails_, vector<RiskCheckResults::RiskDetails>) };
    inline vector<RiskCheckResults::RiskDetails> getRiskDetails() { DARABONBA_PTR_GET(riskDetails_, vector<RiskCheckResults::RiskDetails>) };
    inline RiskCheckResults& setRiskDetails(const vector<RiskCheckResults::RiskDetails> & riskDetails) { DARABONBA_PTR_SET_VALUE(riskDetails_, riskDetails) };
    inline RiskCheckResults& setRiskDetails(vector<RiskCheckResults::RiskDetails> && riskDetails) { DARABONBA_PTR_SET_RVALUE(riskDetails_, riskDetails) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline RiskCheckResults& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline RiskCheckResults& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // snapshotTime Field Functions 
    bool hasSnapshotTime() const { return this->snapshotTime_ != nullptr;};
    void deleteSnapshotTime() { this->snapshotTime_ = nullptr;};
    inline int64_t getSnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(snapshotTime_, 0L) };
    inline RiskCheckResults& setSnapshotTime(int64_t snapshotTime) { DARABONBA_PTR_SET_VALUE(snapshotTime_, snapshotTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RiskCheckResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalRisk Field Functions 
    bool hasTotalRisk() const { return this->totalRisk_ != nullptr;};
    void deleteTotalRisk() { this->totalRisk_ = nullptr;};
    inline int32_t getTotalRisk() const { DARABONBA_PTR_GET_DEFAULT(totalRisk_, 0) };
    inline RiskCheckResults& setTotalRisk(int32_t totalRisk) { DARABONBA_PTR_SET_VALUE(totalRisk_, totalRisk) };


  protected:
    shared_ptr<int64_t> checkTime_ {};
    // 网关实例的唯一标识符
    shared_ptr<string> gatewayId_ {};
    // 实例的基本信息
    shared_ptr<RiskCheckResults::Metadata> metadata_ {};
    // 详细的风险项信息列表
    shared_ptr<vector<RiskCheckResults::RiskDetails>> riskDetails_ {};
    // 整体风险等级，可选值：LOW（低风险）、MEDIUM（中风险）、HIGH（高风险）、CRITICAL（严重风险）
    shared_ptr<string> riskLevel_ {};
    // 风险综合评分，取值范围0-100分，分数越高表示风险越低
    shared_ptr<int32_t> score_ {};
    shared_ptr<int64_t> snapshotTime_ {};
    // 风险检测状态，可选值：SUCCESS（成功）、FAIL（失败）、RUNNING（运行中）
    shared_ptr<string> status_ {};
    // 检测到的风险项总数量
    shared_ptr<int32_t> totalRisk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
