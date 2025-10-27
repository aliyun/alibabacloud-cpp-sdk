// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONHISTORYRESPONSEBODYINTERCEPTIONHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONHISTORYRESPONSEBODYINTERCEPTIONHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInterceptionHistoryResponseBodyInterceptionHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionHistoryResponseBodyInterceptionHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DstAppName, dstAppName_);
      DARABONBA_PTR_TO_JSON(DstNamespace, dstNamespace_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(DstRuleTargetName, dstRuleTargetName_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InterceptionName, interceptionName_);
      DARABONBA_PTR_TO_JSON(InterceptionType, interceptionType_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(RealDstAppName, realDstAppName_);
      DARABONBA_PTR_TO_JSON(RealDstImageName, realDstImageName_);
      DARABONBA_PTR_TO_JSON(RealDstNamespace, realDstNamespace_);
      DARABONBA_PTR_TO_JSON(RealDstPodName, realDstPodName_);
      DARABONBA_PTR_TO_JSON(RealInterceptionType, realInterceptionType_);
      DARABONBA_PTR_TO_JSON(RealSrcAppName, realSrcAppName_);
      DARABONBA_PTR_TO_JSON(RealSrcImageName, realSrcImageName_);
      DARABONBA_PTR_TO_JSON(RealSrcNamespace, realSrcNamespace_);
      DARABONBA_PTR_TO_JSON(RealSrcPodName, realSrcPodName_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SrcAppName, srcAppName_);
      DARABONBA_PTR_TO_JSON(SrcNamespace, srcNamespace_);
      DARABONBA_PTR_TO_JSON(SrcRuleTargetName, srcRuleTargetName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionHistoryResponseBodyInterceptionHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DstAppName, dstAppName_);
      DARABONBA_PTR_FROM_JSON(DstNamespace, dstNamespace_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(DstRuleTargetName, dstRuleTargetName_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InterceptionName, interceptionName_);
      DARABONBA_PTR_FROM_JSON(InterceptionType, interceptionType_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(RealDstAppName, realDstAppName_);
      DARABONBA_PTR_FROM_JSON(RealDstImageName, realDstImageName_);
      DARABONBA_PTR_FROM_JSON(RealDstNamespace, realDstNamespace_);
      DARABONBA_PTR_FROM_JSON(RealDstPodName, realDstPodName_);
      DARABONBA_PTR_FROM_JSON(RealInterceptionType, realInterceptionType_);
      DARABONBA_PTR_FROM_JSON(RealSrcAppName, realSrcAppName_);
      DARABONBA_PTR_FROM_JSON(RealSrcImageName, realSrcImageName_);
      DARABONBA_PTR_FROM_JSON(RealSrcNamespace, realSrcNamespace_);
      DARABONBA_PTR_FROM_JSON(RealSrcPodName, realSrcPodName_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SrcAppName, srcAppName_);
      DARABONBA_PTR_FROM_JSON(SrcNamespace, srcNamespace_);
      DARABONBA_PTR_FROM_JSON(SrcRuleTargetName, srcRuleTargetName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
    };
    ListInterceptionHistoryResponseBodyInterceptionHistoryList() = default ;
    ListInterceptionHistoryResponseBodyInterceptionHistoryList(const ListInterceptionHistoryResponseBodyInterceptionHistoryList &) = default ;
    ListInterceptionHistoryResponseBodyInterceptionHistoryList(ListInterceptionHistoryResponseBodyInterceptionHistoryList &&) = default ;
    ListInterceptionHistoryResponseBodyInterceptionHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionHistoryResponseBodyInterceptionHistoryList() = default ;
    ListInterceptionHistoryResponseBodyInterceptionHistoryList& operator=(const ListInterceptionHistoryResponseBodyInterceptionHistoryList &) = default ;
    ListInterceptionHistoryResponseBodyInterceptionHistoryList& operator=(ListInterceptionHistoryResponseBodyInterceptionHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->dstAppName_ == nullptr && return this->dstNamespace_ == nullptr && return this->dstPort_ == nullptr && return this->dstRuleTargetName_ == nullptr
        && return this->firstTime_ == nullptr && return this->id_ == nullptr && return this->interceptionName_ == nullptr && return this->interceptionType_ == nullptr && return this->lastTime_ == nullptr
        && return this->realDstAppName_ == nullptr && return this->realDstImageName_ == nullptr && return this->realDstNamespace_ == nullptr && return this->realDstPodName_ == nullptr && return this->realInterceptionType_ == nullptr
        && return this->realSrcAppName_ == nullptr && return this->realSrcImageName_ == nullptr && return this->realSrcNamespace_ == nullptr && return this->realSrcPodName_ == nullptr && return this->riskLevel_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->srcAppName_ == nullptr && return this->srcNamespace_ == nullptr && return this->srcRuleTargetName_ == nullptr
        && return this->status_ == nullptr && return this->tryCount_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // dstAppName Field Functions 
    bool hasDstAppName() const { return this->dstAppName_ != nullptr;};
    void deleteDstAppName() { this->dstAppName_ = nullptr;};
    inline string dstAppName() const { DARABONBA_PTR_GET_DEFAULT(dstAppName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setDstAppName(string dstAppName) { DARABONBA_PTR_SET_VALUE(dstAppName_, dstAppName) };


    // dstNamespace Field Functions 
    bool hasDstNamespace() const { return this->dstNamespace_ != nullptr;};
    void deleteDstNamespace() { this->dstNamespace_ = nullptr;};
    inline string dstNamespace() const { DARABONBA_PTR_GET_DEFAULT(dstNamespace_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setDstNamespace(string dstNamespace) { DARABONBA_PTR_SET_VALUE(dstNamespace_, dstNamespace) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int64_t dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setDstPort(int64_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstRuleTargetName Field Functions 
    bool hasDstRuleTargetName() const { return this->dstRuleTargetName_ != nullptr;};
    void deleteDstRuleTargetName() { this->dstRuleTargetName_ = nullptr;};
    inline string dstRuleTargetName() const { DARABONBA_PTR_GET_DEFAULT(dstRuleTargetName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setDstRuleTargetName(string dstRuleTargetName) { DARABONBA_PTR_SET_VALUE(dstRuleTargetName_, dstRuleTargetName) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interceptionName Field Functions 
    bool hasInterceptionName() const { return this->interceptionName_ != nullptr;};
    void deleteInterceptionName() { this->interceptionName_ = nullptr;};
    inline int64_t interceptionName() const { DARABONBA_PTR_GET_DEFAULT(interceptionName_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setInterceptionName(int64_t interceptionName) { DARABONBA_PTR_SET_VALUE(interceptionName_, interceptionName) };


    // interceptionType Field Functions 
    bool hasInterceptionType() const { return this->interceptionType_ != nullptr;};
    void deleteInterceptionType() { this->interceptionType_ = nullptr;};
    inline int32_t interceptionType() const { DARABONBA_PTR_GET_DEFAULT(interceptionType_, 0) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setInterceptionType(int32_t interceptionType) { DARABONBA_PTR_SET_VALUE(interceptionType_, interceptionType) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // realDstAppName Field Functions 
    bool hasRealDstAppName() const { return this->realDstAppName_ != nullptr;};
    void deleteRealDstAppName() { this->realDstAppName_ = nullptr;};
    inline string realDstAppName() const { DARABONBA_PTR_GET_DEFAULT(realDstAppName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealDstAppName(string realDstAppName) { DARABONBA_PTR_SET_VALUE(realDstAppName_, realDstAppName) };


    // realDstImageName Field Functions 
    bool hasRealDstImageName() const { return this->realDstImageName_ != nullptr;};
    void deleteRealDstImageName() { this->realDstImageName_ = nullptr;};
    inline string realDstImageName() const { DARABONBA_PTR_GET_DEFAULT(realDstImageName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealDstImageName(string realDstImageName) { DARABONBA_PTR_SET_VALUE(realDstImageName_, realDstImageName) };


    // realDstNamespace Field Functions 
    bool hasRealDstNamespace() const { return this->realDstNamespace_ != nullptr;};
    void deleteRealDstNamespace() { this->realDstNamespace_ = nullptr;};
    inline string realDstNamespace() const { DARABONBA_PTR_GET_DEFAULT(realDstNamespace_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealDstNamespace(string realDstNamespace) { DARABONBA_PTR_SET_VALUE(realDstNamespace_, realDstNamespace) };


    // realDstPodName Field Functions 
    bool hasRealDstPodName() const { return this->realDstPodName_ != nullptr;};
    void deleteRealDstPodName() { this->realDstPodName_ = nullptr;};
    inline string realDstPodName() const { DARABONBA_PTR_GET_DEFAULT(realDstPodName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealDstPodName(string realDstPodName) { DARABONBA_PTR_SET_VALUE(realDstPodName_, realDstPodName) };


    // realInterceptionType Field Functions 
    bool hasRealInterceptionType() const { return this->realInterceptionType_ != nullptr;};
    void deleteRealInterceptionType() { this->realInterceptionType_ = nullptr;};
    inline int32_t realInterceptionType() const { DARABONBA_PTR_GET_DEFAULT(realInterceptionType_, 0) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealInterceptionType(int32_t realInterceptionType) { DARABONBA_PTR_SET_VALUE(realInterceptionType_, realInterceptionType) };


    // realSrcAppName Field Functions 
    bool hasRealSrcAppName() const { return this->realSrcAppName_ != nullptr;};
    void deleteRealSrcAppName() { this->realSrcAppName_ = nullptr;};
    inline string realSrcAppName() const { DARABONBA_PTR_GET_DEFAULT(realSrcAppName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealSrcAppName(string realSrcAppName) { DARABONBA_PTR_SET_VALUE(realSrcAppName_, realSrcAppName) };


    // realSrcImageName Field Functions 
    bool hasRealSrcImageName() const { return this->realSrcImageName_ != nullptr;};
    void deleteRealSrcImageName() { this->realSrcImageName_ = nullptr;};
    inline string realSrcImageName() const { DARABONBA_PTR_GET_DEFAULT(realSrcImageName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealSrcImageName(string realSrcImageName) { DARABONBA_PTR_SET_VALUE(realSrcImageName_, realSrcImageName) };


    // realSrcNamespace Field Functions 
    bool hasRealSrcNamespace() const { return this->realSrcNamespace_ != nullptr;};
    void deleteRealSrcNamespace() { this->realSrcNamespace_ = nullptr;};
    inline string realSrcNamespace() const { DARABONBA_PTR_GET_DEFAULT(realSrcNamespace_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealSrcNamespace(string realSrcNamespace) { DARABONBA_PTR_SET_VALUE(realSrcNamespace_, realSrcNamespace) };


    // realSrcPodName Field Functions 
    bool hasRealSrcPodName() const { return this->realSrcPodName_ != nullptr;};
    void deleteRealSrcPodName() { this->realSrcPodName_ = nullptr;};
    inline string realSrcPodName() const { DARABONBA_PTR_GET_DEFAULT(realSrcPodName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRealSrcPodName(string realSrcPodName) { DARABONBA_PTR_SET_VALUE(realSrcPodName_, realSrcPodName) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int64_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRiskLevel(int64_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // srcAppName Field Functions 
    bool hasSrcAppName() const { return this->srcAppName_ != nullptr;};
    void deleteSrcAppName() { this->srcAppName_ = nullptr;};
    inline string srcAppName() const { DARABONBA_PTR_GET_DEFAULT(srcAppName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setSrcAppName(string srcAppName) { DARABONBA_PTR_SET_VALUE(srcAppName_, srcAppName) };


    // srcNamespace Field Functions 
    bool hasSrcNamespace() const { return this->srcNamespace_ != nullptr;};
    void deleteSrcNamespace() { this->srcNamespace_ = nullptr;};
    inline string srcNamespace() const { DARABONBA_PTR_GET_DEFAULT(srcNamespace_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setSrcNamespace(string srcNamespace) { DARABONBA_PTR_SET_VALUE(srcNamespace_, srcNamespace) };


    // srcRuleTargetName Field Functions 
    bool hasSrcRuleTargetName() const { return this->srcRuleTargetName_ != nullptr;};
    void deleteSrcRuleTargetName() { this->srcRuleTargetName_ = nullptr;};
    inline string srcRuleTargetName() const { DARABONBA_PTR_GET_DEFAULT(srcRuleTargetName_, "") };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setSrcRuleTargetName(string srcRuleTargetName) { DARABONBA_PTR_SET_VALUE(srcRuleTargetName_, srcRuleTargetName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tryCount Field Functions 
    bool hasTryCount() const { return this->tryCount_ != nullptr;};
    void deleteTryCount() { this->tryCount_ = nullptr;};
    inline int32_t tryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
    inline ListInterceptionHistoryResponseBodyInterceptionHistoryList& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


  protected:
    // The ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The name of the destination application.
    std::shared_ptr<string> dstAppName_ = nullptr;
    // The destination namespace.
    std::shared_ptr<string> dstNamespace_ = nullptr;
    // The destination port range configured for the defense rule.
    std::shared_ptr<int64_t> dstPort_ = nullptr;
    // The name of the destination network object.
    std::shared_ptr<string> dstRuleTargetName_ = nullptr;
    // The timestamp when the alert was first generated on the current day.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // The ID of the alert.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the alert.
    std::shared_ptr<int64_t> interceptionName_ = nullptr;
    // The handling type. Valid values:
    // 
    // *   **0**: monitor
    // *   **1**: intercept
    // *   **2**: generate alert
    // *   **3**: allow
    std::shared_ptr<int32_t> interceptionType_ = nullptr;
    // The timestamp when the alert was last generated on the current day.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The name of the destination application.
    std::shared_ptr<string> realDstAppName_ = nullptr;
    // The name of the destination image.
    std::shared_ptr<string> realDstImageName_ = nullptr;
    // The destination namespace.
    std::shared_ptr<string> realDstNamespace_ = nullptr;
    // The destination pod.
    std::shared_ptr<string> realDstPodName_ = nullptr;
    // The handling type of actual hits. Valid values:
    // 
    // *   **0**: monitor
    // *   **1**: intercept
    // *   **2**: generate alert
    // *   **3**: allow
    std::shared_ptr<int32_t> realInterceptionType_ = nullptr;
    // The name of the source application.
    std::shared_ptr<string> realSrcAppName_ = nullptr;
    // The name of the source image.
    std::shared_ptr<string> realSrcImageName_ = nullptr;
    // The source namespace.
    std::shared_ptr<string> realSrcNamespace_ = nullptr;
    // The source pod.
    std::shared_ptr<string> realSrcPodName_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **-1**: unknown
    // *   **0**: none
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    std::shared_ptr<int64_t> riskLevel_ = nullptr;
    // The ID of the defense rule based on which the alert was generated.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the defense rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The name of the source application.
    std::shared_ptr<string> srcAppName_ = nullptr;
    // The source namespace.
    std::shared_ptr<string> srcNamespace_ = nullptr;
    // The name of the source network object.
    std::shared_ptr<string> srcRuleTargetName_ = nullptr;
    // The handling status. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: handled
    // *   **2**: manually handled
    // *   **3**: ignored
    std::shared_ptr<int64_t> status_ = nullptr;
    // The number of attempts.
    std::shared_ptr<int32_t> tryCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
