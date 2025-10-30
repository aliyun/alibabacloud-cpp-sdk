// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYRESPONSEBODYDEVOBJECTDEPENDENCYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYRESPONSEBODYDEVOBJECTDEPENDENCYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod.hpp>
#include <alibabacloud/models/GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList.hpp>
#include <alibabacloud/models/GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDevObjectDependencyResponseBodyDevObjectDependencyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDevObjectDependencyResponseBodyDevObjectDependencyList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoParse, autoParse_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(CustomCronExpression, customCronExpression_);
      DARABONBA_PTR_TO_JSON(DependFieldList, dependFieldList_);
      DARABONBA_PTR_TO_JSON(DependencyPeriod, dependencyPeriod_);
      DARABONBA_PTR_TO_JSON(DependencyStrategy, dependencyStrategy_);
      DARABONBA_PTR_TO_JSON(DimMidNode, dimMidNode_);
      DARABONBA_PTR_TO_JSON(EffectFieldList, effectFieldList_);
      DARABONBA_PTR_TO_JSON(ExternalBizInfo, externalBizInfo_);
      DARABONBA_PTR_TO_JSON(ManuallyAdd, manuallyAdd_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeOutputName, nodeOutputName_);
      DARABONBA_PTR_TO_JSON(NodeOutputTableName, nodeOutputTableName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OutputContextParamList, outputContextParamList_);
      DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_TO_JSON(PeriodDiff, periodDiff_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(SelfDepend, selfDepend_);
      DARABONBA_PTR_TO_JSON(SubBizType, subBizType_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDevObjectDependencyResponseBodyDevObjectDependencyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoParse, autoParse_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(CustomCronExpression, customCronExpression_);
      DARABONBA_PTR_FROM_JSON(DependFieldList, dependFieldList_);
      DARABONBA_PTR_FROM_JSON(DependencyPeriod, dependencyPeriod_);
      DARABONBA_PTR_FROM_JSON(DependencyStrategy, dependencyStrategy_);
      DARABONBA_PTR_FROM_JSON(DimMidNode, dimMidNode_);
      DARABONBA_PTR_FROM_JSON(EffectFieldList, effectFieldList_);
      DARABONBA_PTR_FROM_JSON(ExternalBizInfo, externalBizInfo_);
      DARABONBA_PTR_FROM_JSON(ManuallyAdd, manuallyAdd_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeOutputName, nodeOutputName_);
      DARABONBA_PTR_FROM_JSON(NodeOutputTableName, nodeOutputTableName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OutputContextParamList, outputContextParamList_);
      DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_FROM_JSON(PeriodDiff, periodDiff_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(SelfDepend, selfDepend_);
      DARABONBA_PTR_FROM_JSON(SubBizType, subBizType_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    GetDevObjectDependencyResponseBodyDevObjectDependencyList() = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyList(const GetDevObjectDependencyResponseBodyDevObjectDependencyList &) = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyList(GetDevObjectDependencyResponseBodyDevObjectDependencyList &&) = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDevObjectDependencyResponseBodyDevObjectDependencyList() = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyList& operator=(const GetDevObjectDependencyResponseBodyDevObjectDependencyList &) = default ;
    GetDevObjectDependencyResponseBodyDevObjectDependencyList& operator=(GetDevObjectDependencyResponseBodyDevObjectDependencyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoParse_ == nullptr
        && return this->bizType_ == nullptr && return this->bizUnitId_ == nullptr && return this->bizUnitName_ == nullptr && return this->cronExpression_ == nullptr && return this->customCronExpression_ == nullptr
        && return this->dependFieldList_ == nullptr && return this->dependencyPeriod_ == nullptr && return this->dependencyStrategy_ == nullptr && return this->dimMidNode_ == nullptr && return this->effectFieldList_ == nullptr
        && return this->externalBizInfo_ == nullptr && return this->manuallyAdd_ == nullptr && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr && return this->nodeOutputName_ == nullptr
        && return this->nodeOutputTableName_ == nullptr && return this->nodeType_ == nullptr && return this->outputContextParamList_ == nullptr && return this->ownerList_ == nullptr && return this->periodDiff_ == nullptr
        && return this->projectId_ == nullptr && return this->projectName_ == nullptr && return this->scheduleType_ == nullptr && return this->selfDepend_ == nullptr && return this->subBizType_ == nullptr
        && return this->valid_ == nullptr; };
    // autoParse Field Functions 
    bool hasAutoParse() const { return this->autoParse_ != nullptr;};
    void deleteAutoParse() { this->autoParse_ = nullptr;};
    inline bool autoParse() const { DARABONBA_PTR_GET_DEFAULT(autoParse_, false) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setAutoParse(bool autoParse) { DARABONBA_PTR_SET_VALUE(autoParse_, autoParse) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline string bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // bizUnitName Field Functions 
    bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
    void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
    inline string bizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // customCronExpression Field Functions 
    bool hasCustomCronExpression() const { return this->customCronExpression_ != nullptr;};
    void deleteCustomCronExpression() { this->customCronExpression_ = nullptr;};
    inline bool customCronExpression() const { DARABONBA_PTR_GET_DEFAULT(customCronExpression_, false) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setCustomCronExpression(bool customCronExpression) { DARABONBA_PTR_SET_VALUE(customCronExpression_, customCronExpression) };


    // dependFieldList Field Functions 
    bool hasDependFieldList() const { return this->dependFieldList_ != nullptr;};
    void deleteDependFieldList() { this->dependFieldList_ = nullptr;};
    inline const vector<string> & dependFieldList() const { DARABONBA_PTR_GET_CONST(dependFieldList_, vector<string>) };
    inline vector<string> dependFieldList() { DARABONBA_PTR_GET(dependFieldList_, vector<string>) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setDependFieldList(const vector<string> & dependFieldList) { DARABONBA_PTR_SET_VALUE(dependFieldList_, dependFieldList) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setDependFieldList(vector<string> && dependFieldList) { DARABONBA_PTR_SET_RVALUE(dependFieldList_, dependFieldList) };


    // dependencyPeriod Field Functions 
    bool hasDependencyPeriod() const { return this->dependencyPeriod_ != nullptr;};
    void deleteDependencyPeriod() { this->dependencyPeriod_ = nullptr;};
    inline const Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod & dependencyPeriod() const { DARABONBA_PTR_GET_CONST(dependencyPeriod_, Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod) };
    inline Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod dependencyPeriod() { DARABONBA_PTR_GET(dependencyPeriod_, Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setDependencyPeriod(const Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod & dependencyPeriod) { DARABONBA_PTR_SET_VALUE(dependencyPeriod_, dependencyPeriod) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setDependencyPeriod(Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod && dependencyPeriod) { DARABONBA_PTR_SET_RVALUE(dependencyPeriod_, dependencyPeriod) };


    // dependencyStrategy Field Functions 
    bool hasDependencyStrategy() const { return this->dependencyStrategy_ != nullptr;};
    void deleteDependencyStrategy() { this->dependencyStrategy_ = nullptr;};
    inline string dependencyStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependencyStrategy_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setDependencyStrategy(string dependencyStrategy) { DARABONBA_PTR_SET_VALUE(dependencyStrategy_, dependencyStrategy) };


    // dimMidNode Field Functions 
    bool hasDimMidNode() const { return this->dimMidNode_ != nullptr;};
    void deleteDimMidNode() { this->dimMidNode_ = nullptr;};
    inline bool dimMidNode() const { DARABONBA_PTR_GET_DEFAULT(dimMidNode_, false) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setDimMidNode(bool dimMidNode) { DARABONBA_PTR_SET_VALUE(dimMidNode_, dimMidNode) };


    // effectFieldList Field Functions 
    bool hasEffectFieldList() const { return this->effectFieldList_ != nullptr;};
    void deleteEffectFieldList() { this->effectFieldList_ = nullptr;};
    inline const vector<string> & effectFieldList() const { DARABONBA_PTR_GET_CONST(effectFieldList_, vector<string>) };
    inline vector<string> effectFieldList() { DARABONBA_PTR_GET(effectFieldList_, vector<string>) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setEffectFieldList(const vector<string> & effectFieldList) { DARABONBA_PTR_SET_VALUE(effectFieldList_, effectFieldList) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setEffectFieldList(vector<string> && effectFieldList) { DARABONBA_PTR_SET_RVALUE(effectFieldList_, effectFieldList) };


    // externalBizInfo Field Functions 
    bool hasExternalBizInfo() const { return this->externalBizInfo_ != nullptr;};
    void deleteExternalBizInfo() { this->externalBizInfo_ = nullptr;};
    inline string externalBizInfo() const { DARABONBA_PTR_GET_DEFAULT(externalBizInfo_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setExternalBizInfo(string externalBizInfo) { DARABONBA_PTR_SET_VALUE(externalBizInfo_, externalBizInfo) };


    // manuallyAdd Field Functions 
    bool hasManuallyAdd() const { return this->manuallyAdd_ != nullptr;};
    void deleteManuallyAdd() { this->manuallyAdd_ = nullptr;};
    inline bool manuallyAdd() const { DARABONBA_PTR_GET_DEFAULT(manuallyAdd_, false) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setManuallyAdd(bool manuallyAdd) { DARABONBA_PTR_SET_VALUE(manuallyAdd_, manuallyAdd) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeOutputName Field Functions 
    bool hasNodeOutputName() const { return this->nodeOutputName_ != nullptr;};
    void deleteNodeOutputName() { this->nodeOutputName_ = nullptr;};
    inline string nodeOutputName() const { DARABONBA_PTR_GET_DEFAULT(nodeOutputName_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setNodeOutputName(string nodeOutputName) { DARABONBA_PTR_SET_VALUE(nodeOutputName_, nodeOutputName) };


    // nodeOutputTableName Field Functions 
    bool hasNodeOutputTableName() const { return this->nodeOutputTableName_ != nullptr;};
    void deleteNodeOutputTableName() { this->nodeOutputTableName_ = nullptr;};
    inline string nodeOutputTableName() const { DARABONBA_PTR_GET_DEFAULT(nodeOutputTableName_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setNodeOutputTableName(string nodeOutputTableName) { DARABONBA_PTR_SET_VALUE(nodeOutputTableName_, nodeOutputTableName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // outputContextParamList Field Functions 
    bool hasOutputContextParamList() const { return this->outputContextParamList_ != nullptr;};
    void deleteOutputContextParamList() { this->outputContextParamList_ = nullptr;};
    inline const vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList> & outputContextParamList() const { DARABONBA_PTR_GET_CONST(outputContextParamList_, vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList>) };
    inline vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList> outputContextParamList() { DARABONBA_PTR_GET(outputContextParamList_, vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList>) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setOutputContextParamList(const vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList> & outputContextParamList) { DARABONBA_PTR_SET_VALUE(outputContextParamList_, outputContextParamList) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setOutputContextParamList(vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList> && outputContextParamList) { DARABONBA_PTR_SET_RVALUE(outputContextParamList_, outputContextParamList) };


    // ownerList Field Functions 
    bool hasOwnerList() const { return this->ownerList_ != nullptr;};
    void deleteOwnerList() { this->ownerList_ = nullptr;};
    inline const vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList> & ownerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList>) };
    inline vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList> ownerList() { DARABONBA_PTR_GET(ownerList_, vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList>) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setOwnerList(const vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setOwnerList(vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


    // periodDiff Field Functions 
    bool hasPeriodDiff() const { return this->periodDiff_ != nullptr;};
    void deletePeriodDiff() { this->periodDiff_ = nullptr;};
    inline int32_t periodDiff() const { DARABONBA_PTR_GET_DEFAULT(periodDiff_, 0) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setPeriodDiff(int32_t periodDiff) { DARABONBA_PTR_SET_VALUE(periodDiff_, periodDiff) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // selfDepend Field Functions 
    bool hasSelfDepend() const { return this->selfDepend_ != nullptr;};
    void deleteSelfDepend() { this->selfDepend_ = nullptr;};
    inline bool selfDepend() const { DARABONBA_PTR_GET_DEFAULT(selfDepend_, false) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setSelfDepend(bool selfDepend) { DARABONBA_PTR_SET_VALUE(selfDepend_, selfDepend) };


    // subBizType Field Functions 
    bool hasSubBizType() const { return this->subBizType_ != nullptr;};
    void deleteSubBizType() { this->subBizType_ = nullptr;};
    inline string subBizType() const { DARABONBA_PTR_GET_DEFAULT(subBizType_, "") };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setSubBizType(string subBizType) { DARABONBA_PTR_SET_VALUE(subBizType_, subBizType) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline bool valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
    inline GetDevObjectDependencyResponseBodyDevObjectDependencyList& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    std::shared_ptr<bool> autoParse_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> bizUnitId_ = nullptr;
    std::shared_ptr<string> bizUnitName_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<bool> customCronExpression_ = nullptr;
    std::shared_ptr<vector<string>> dependFieldList_ = nullptr;
    std::shared_ptr<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod> dependencyPeriod_ = nullptr;
    std::shared_ptr<string> dependencyStrategy_ = nullptr;
    std::shared_ptr<bool> dimMidNode_ = nullptr;
    std::shared_ptr<vector<string>> effectFieldList_ = nullptr;
    std::shared_ptr<string> externalBizInfo_ = nullptr;
    std::shared_ptr<bool> manuallyAdd_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> nodeOutputName_ = nullptr;
    std::shared_ptr<string> nodeOutputTableName_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList>> outputContextParamList_ = nullptr;
    std::shared_ptr<vector<Models::GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList>> ownerList_ = nullptr;
    std::shared_ptr<int32_t> periodDiff_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<bool> selfDepend_ = nullptr;
    std::shared_ptr<string> subBizType_ = nullptr;
    std::shared_ptr<bool> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
