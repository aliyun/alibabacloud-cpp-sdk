// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInterceptionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionHistoryList, interceptionHistoryList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionHistoryList, interceptionHistoryList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInterceptionHistoryResponseBody() = default ;
    ListInterceptionHistoryResponseBody(const ListInterceptionHistoryResponseBody &) = default ;
    ListInterceptionHistoryResponseBody(ListInterceptionHistoryResponseBody &&) = default ;
    ListInterceptionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionHistoryResponseBody() = default ;
    ListInterceptionHistoryResponseBody& operator=(const ListInterceptionHistoryResponseBody &) = default ;
    ListInterceptionHistoryResponseBody& operator=(ListInterceptionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class InterceptionHistoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterceptionHistoryList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, InterceptionHistoryList& obj) { 
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
      InterceptionHistoryList() = default ;
      InterceptionHistoryList(const InterceptionHistoryList &) = default ;
      InterceptionHistoryList(InterceptionHistoryList &&) = default ;
      InterceptionHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterceptionHistoryList() = default ;
      InterceptionHistoryList& operator=(const InterceptionHistoryList &) = default ;
      InterceptionHistoryList& operator=(InterceptionHistoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->dstAppName_ == nullptr && this->dstNamespace_ == nullptr && this->dstPort_ == nullptr && this->dstRuleTargetName_ == nullptr
        && this->firstTime_ == nullptr && this->id_ == nullptr && this->interceptionName_ == nullptr && this->interceptionType_ == nullptr && this->lastTime_ == nullptr
        && this->realDstAppName_ == nullptr && this->realDstImageName_ == nullptr && this->realDstNamespace_ == nullptr && this->realDstPodName_ == nullptr && this->realInterceptionType_ == nullptr
        && this->realSrcAppName_ == nullptr && this->realSrcImageName_ == nullptr && this->realSrcNamespace_ == nullptr && this->realSrcPodName_ == nullptr && this->riskLevel_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->srcAppName_ == nullptr && this->srcNamespace_ == nullptr && this->srcRuleTargetName_ == nullptr
        && this->status_ == nullptr && this->tryCount_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline InterceptionHistoryList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline InterceptionHistoryList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // dstAppName Field Functions 
      bool hasDstAppName() const { return this->dstAppName_ != nullptr;};
      void deleteDstAppName() { this->dstAppName_ = nullptr;};
      inline string getDstAppName() const { DARABONBA_PTR_GET_DEFAULT(dstAppName_, "") };
      inline InterceptionHistoryList& setDstAppName(string dstAppName) { DARABONBA_PTR_SET_VALUE(dstAppName_, dstAppName) };


      // dstNamespace Field Functions 
      bool hasDstNamespace() const { return this->dstNamespace_ != nullptr;};
      void deleteDstNamespace() { this->dstNamespace_ = nullptr;};
      inline string getDstNamespace() const { DARABONBA_PTR_GET_DEFAULT(dstNamespace_, "") };
      inline InterceptionHistoryList& setDstNamespace(string dstNamespace) { DARABONBA_PTR_SET_VALUE(dstNamespace_, dstNamespace) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline int64_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0L) };
      inline InterceptionHistoryList& setDstPort(int64_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // dstRuleTargetName Field Functions 
      bool hasDstRuleTargetName() const { return this->dstRuleTargetName_ != nullptr;};
      void deleteDstRuleTargetName() { this->dstRuleTargetName_ = nullptr;};
      inline string getDstRuleTargetName() const { DARABONBA_PTR_GET_DEFAULT(dstRuleTargetName_, "") };
      inline InterceptionHistoryList& setDstRuleTargetName(string dstRuleTargetName) { DARABONBA_PTR_SET_VALUE(dstRuleTargetName_, dstRuleTargetName) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline InterceptionHistoryList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline InterceptionHistoryList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interceptionName Field Functions 
      bool hasInterceptionName() const { return this->interceptionName_ != nullptr;};
      void deleteInterceptionName() { this->interceptionName_ = nullptr;};
      inline int64_t getInterceptionName() const { DARABONBA_PTR_GET_DEFAULT(interceptionName_, 0L) };
      inline InterceptionHistoryList& setInterceptionName(int64_t interceptionName) { DARABONBA_PTR_SET_VALUE(interceptionName_, interceptionName) };


      // interceptionType Field Functions 
      bool hasInterceptionType() const { return this->interceptionType_ != nullptr;};
      void deleteInterceptionType() { this->interceptionType_ = nullptr;};
      inline int32_t getInterceptionType() const { DARABONBA_PTR_GET_DEFAULT(interceptionType_, 0) };
      inline InterceptionHistoryList& setInterceptionType(int32_t interceptionType) { DARABONBA_PTR_SET_VALUE(interceptionType_, interceptionType) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline InterceptionHistoryList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // realDstAppName Field Functions 
      bool hasRealDstAppName() const { return this->realDstAppName_ != nullptr;};
      void deleteRealDstAppName() { this->realDstAppName_ = nullptr;};
      inline string getRealDstAppName() const { DARABONBA_PTR_GET_DEFAULT(realDstAppName_, "") };
      inline InterceptionHistoryList& setRealDstAppName(string realDstAppName) { DARABONBA_PTR_SET_VALUE(realDstAppName_, realDstAppName) };


      // realDstImageName Field Functions 
      bool hasRealDstImageName() const { return this->realDstImageName_ != nullptr;};
      void deleteRealDstImageName() { this->realDstImageName_ = nullptr;};
      inline string getRealDstImageName() const { DARABONBA_PTR_GET_DEFAULT(realDstImageName_, "") };
      inline InterceptionHistoryList& setRealDstImageName(string realDstImageName) { DARABONBA_PTR_SET_VALUE(realDstImageName_, realDstImageName) };


      // realDstNamespace Field Functions 
      bool hasRealDstNamespace() const { return this->realDstNamespace_ != nullptr;};
      void deleteRealDstNamespace() { this->realDstNamespace_ = nullptr;};
      inline string getRealDstNamespace() const { DARABONBA_PTR_GET_DEFAULT(realDstNamespace_, "") };
      inline InterceptionHistoryList& setRealDstNamespace(string realDstNamespace) { DARABONBA_PTR_SET_VALUE(realDstNamespace_, realDstNamespace) };


      // realDstPodName Field Functions 
      bool hasRealDstPodName() const { return this->realDstPodName_ != nullptr;};
      void deleteRealDstPodName() { this->realDstPodName_ = nullptr;};
      inline string getRealDstPodName() const { DARABONBA_PTR_GET_DEFAULT(realDstPodName_, "") };
      inline InterceptionHistoryList& setRealDstPodName(string realDstPodName) { DARABONBA_PTR_SET_VALUE(realDstPodName_, realDstPodName) };


      // realInterceptionType Field Functions 
      bool hasRealInterceptionType() const { return this->realInterceptionType_ != nullptr;};
      void deleteRealInterceptionType() { this->realInterceptionType_ = nullptr;};
      inline int32_t getRealInterceptionType() const { DARABONBA_PTR_GET_DEFAULT(realInterceptionType_, 0) };
      inline InterceptionHistoryList& setRealInterceptionType(int32_t realInterceptionType) { DARABONBA_PTR_SET_VALUE(realInterceptionType_, realInterceptionType) };


      // realSrcAppName Field Functions 
      bool hasRealSrcAppName() const { return this->realSrcAppName_ != nullptr;};
      void deleteRealSrcAppName() { this->realSrcAppName_ = nullptr;};
      inline string getRealSrcAppName() const { DARABONBA_PTR_GET_DEFAULT(realSrcAppName_, "") };
      inline InterceptionHistoryList& setRealSrcAppName(string realSrcAppName) { DARABONBA_PTR_SET_VALUE(realSrcAppName_, realSrcAppName) };


      // realSrcImageName Field Functions 
      bool hasRealSrcImageName() const { return this->realSrcImageName_ != nullptr;};
      void deleteRealSrcImageName() { this->realSrcImageName_ = nullptr;};
      inline string getRealSrcImageName() const { DARABONBA_PTR_GET_DEFAULT(realSrcImageName_, "") };
      inline InterceptionHistoryList& setRealSrcImageName(string realSrcImageName) { DARABONBA_PTR_SET_VALUE(realSrcImageName_, realSrcImageName) };


      // realSrcNamespace Field Functions 
      bool hasRealSrcNamespace() const { return this->realSrcNamespace_ != nullptr;};
      void deleteRealSrcNamespace() { this->realSrcNamespace_ = nullptr;};
      inline string getRealSrcNamespace() const { DARABONBA_PTR_GET_DEFAULT(realSrcNamespace_, "") };
      inline InterceptionHistoryList& setRealSrcNamespace(string realSrcNamespace) { DARABONBA_PTR_SET_VALUE(realSrcNamespace_, realSrcNamespace) };


      // realSrcPodName Field Functions 
      bool hasRealSrcPodName() const { return this->realSrcPodName_ != nullptr;};
      void deleteRealSrcPodName() { this->realSrcPodName_ = nullptr;};
      inline string getRealSrcPodName() const { DARABONBA_PTR_GET_DEFAULT(realSrcPodName_, "") };
      inline InterceptionHistoryList& setRealSrcPodName(string realSrcPodName) { DARABONBA_PTR_SET_VALUE(realSrcPodName_, realSrcPodName) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int64_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0L) };
      inline InterceptionHistoryList& setRiskLevel(int64_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline InterceptionHistoryList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline InterceptionHistoryList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // srcAppName Field Functions 
      bool hasSrcAppName() const { return this->srcAppName_ != nullptr;};
      void deleteSrcAppName() { this->srcAppName_ = nullptr;};
      inline string getSrcAppName() const { DARABONBA_PTR_GET_DEFAULT(srcAppName_, "") };
      inline InterceptionHistoryList& setSrcAppName(string srcAppName) { DARABONBA_PTR_SET_VALUE(srcAppName_, srcAppName) };


      // srcNamespace Field Functions 
      bool hasSrcNamespace() const { return this->srcNamespace_ != nullptr;};
      void deleteSrcNamespace() { this->srcNamespace_ = nullptr;};
      inline string getSrcNamespace() const { DARABONBA_PTR_GET_DEFAULT(srcNamespace_, "") };
      inline InterceptionHistoryList& setSrcNamespace(string srcNamespace) { DARABONBA_PTR_SET_VALUE(srcNamespace_, srcNamespace) };


      // srcRuleTargetName Field Functions 
      bool hasSrcRuleTargetName() const { return this->srcRuleTargetName_ != nullptr;};
      void deleteSrcRuleTargetName() { this->srcRuleTargetName_ = nullptr;};
      inline string getSrcRuleTargetName() const { DARABONBA_PTR_GET_DEFAULT(srcRuleTargetName_, "") };
      inline InterceptionHistoryList& setSrcRuleTargetName(string srcRuleTargetName) { DARABONBA_PTR_SET_VALUE(srcRuleTargetName_, srcRuleTargetName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline InterceptionHistoryList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tryCount Field Functions 
      bool hasTryCount() const { return this->tryCount_ != nullptr;};
      void deleteTryCount() { this->tryCount_ = nullptr;};
      inline int32_t getTryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
      inline InterceptionHistoryList& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


    protected:
      // The ID of the container cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The name of the destination application.
      shared_ptr<string> dstAppName_ {};
      // The destination namespace.
      shared_ptr<string> dstNamespace_ {};
      // The destination port range configured for the defense rule.
      shared_ptr<int64_t> dstPort_ {};
      // The name of the destination network object.
      shared_ptr<string> dstRuleTargetName_ {};
      // The timestamp when the alert was first generated on the current day.
      shared_ptr<int64_t> firstTime_ {};
      // The ID of the alert.
      shared_ptr<int64_t> id_ {};
      // The name of the alert.
      shared_ptr<int64_t> interceptionName_ {};
      // The handling type. Valid values:
      // 
      // *   **0**: monitor
      // *   **1**: intercept
      // *   **2**: generate alert
      // *   **3**: allow
      shared_ptr<int32_t> interceptionType_ {};
      // The timestamp when the alert was last generated on the current day.
      shared_ptr<int64_t> lastTime_ {};
      // The name of the destination application.
      shared_ptr<string> realDstAppName_ {};
      // The name of the destination image.
      shared_ptr<string> realDstImageName_ {};
      // The destination namespace.
      shared_ptr<string> realDstNamespace_ {};
      // The destination pod.
      shared_ptr<string> realDstPodName_ {};
      // The handling type of actual hits. Valid values:
      // 
      // *   **0**: monitor
      // *   **1**: intercept
      // *   **2**: generate alert
      // *   **3**: allow
      shared_ptr<int32_t> realInterceptionType_ {};
      // The name of the source application.
      shared_ptr<string> realSrcAppName_ {};
      // The name of the source image.
      shared_ptr<string> realSrcImageName_ {};
      // The source namespace.
      shared_ptr<string> realSrcNamespace_ {};
      // The source pod.
      shared_ptr<string> realSrcPodName_ {};
      // The risk level. Valid values:
      // 
      // *   **-1**: unknown
      // *   **0**: none
      // *   **1**: low
      // *   **2**: medium
      // *   **3**: high
      shared_ptr<int64_t> riskLevel_ {};
      // The ID of the defense rule based on which the alert was generated.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the defense rule.
      shared_ptr<string> ruleName_ {};
      // The name of the source application.
      shared_ptr<string> srcAppName_ {};
      // The source namespace.
      shared_ptr<string> srcNamespace_ {};
      // The name of the source network object.
      shared_ptr<string> srcRuleTargetName_ {};
      // The handling status. Valid values:
      // 
      // *   **0**: unhandled
      // *   **1**: handled
      // *   **2**: manually handled
      // *   **3**: ignored
      shared_ptr<int64_t> status_ {};
      // The number of attempts.
      shared_ptr<int32_t> tryCount_ {};
    };

    virtual bool empty() const override { return this->interceptionHistoryList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // interceptionHistoryList Field Functions 
    bool hasInterceptionHistoryList() const { return this->interceptionHistoryList_ != nullptr;};
    void deleteInterceptionHistoryList() { this->interceptionHistoryList_ = nullptr;};
    inline const vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList> & getInterceptionHistoryList() const { DARABONBA_PTR_GET_CONST(interceptionHistoryList_, vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList>) };
    inline vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList> getInterceptionHistoryList() { DARABONBA_PTR_GET(interceptionHistoryList_, vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList>) };
    inline ListInterceptionHistoryResponseBody& setInterceptionHistoryList(const vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList> & interceptionHistoryList) { DARABONBA_PTR_SET_VALUE(interceptionHistoryList_, interceptionHistoryList) };
    inline ListInterceptionHistoryResponseBody& setInterceptionHistoryList(vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList> && interceptionHistoryList) { DARABONBA_PTR_SET_RVALUE(interceptionHistoryList_, interceptionHistoryList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListInterceptionHistoryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListInterceptionHistoryResponseBody::PageInfo) };
    inline ListInterceptionHistoryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListInterceptionHistoryResponseBody::PageInfo) };
    inline ListInterceptionHistoryResponseBody& setPageInfo(const ListInterceptionHistoryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListInterceptionHistoryResponseBody& setPageInfo(ListInterceptionHistoryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInterceptionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the alerts generated by defense rules.
    shared_ptr<vector<ListInterceptionHistoryResponseBody::InterceptionHistoryList>> interceptionHistoryList_ {};
    // The pagination information.
    shared_ptr<ListInterceptionHistoryResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
