// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMeCorpSubmissionResponseBodyDataActioner.hpp>
#include <alibabacloud/models/GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeCorpSubmissionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeCorpSubmissionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Actioner, actioner_);
      DARABONBA_PTR_TO_JSON(ActionerId, actionerId_);
      DARABONBA_PTR_TO_JSON(ActionerName, actionerName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_TO_JSON(CurrentActivityInstances, currentActivityInstances_);
      DARABONBA_ANY_TO_JSON(DataMap, dataMap_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(FinishTimeGMT, finishTimeGMT_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(InstanceValue, instanceValue_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(OriginatorAvatar, originatorAvatar_);
      DARABONBA_PTR_TO_JSON(OriginatorDisplayName, originatorDisplayName_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(ProcessApprovedResult, processApprovedResult_);
      DARABONBA_PTR_TO_JSON(ProcessApprovedResultText, processApprovedResultText_);
      DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceStatus, processInstanceStatus_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceStatusText, processInstanceStatusText_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeCorpSubmissionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Actioner, actioner_);
      DARABONBA_PTR_FROM_JSON(ActionerId, actionerId_);
      DARABONBA_PTR_FROM_JSON(ActionerName, actionerName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CurrentActivityInstances, currentActivityInstances_);
      DARABONBA_ANY_FROM_JSON(DataMap, dataMap_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(FinishTimeGMT, finishTimeGMT_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceValue, instanceValue_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OriginatorAvatar, originatorAvatar_);
      DARABONBA_PTR_FROM_JSON(OriginatorDisplayName, originatorDisplayName_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(ProcessApprovedResult, processApprovedResult_);
      DARABONBA_PTR_FROM_JSON(ProcessApprovedResultText, processApprovedResultText_);
      DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceStatus, processInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceStatusText, processInstanceStatusText_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetMeCorpSubmissionResponseBodyData() = default ;
    GetMeCorpSubmissionResponseBodyData(const GetMeCorpSubmissionResponseBodyData &) = default ;
    GetMeCorpSubmissionResponseBodyData(GetMeCorpSubmissionResponseBodyData &&) = default ;
    GetMeCorpSubmissionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeCorpSubmissionResponseBodyData() = default ;
    GetMeCorpSubmissionResponseBodyData& operator=(const GetMeCorpSubmissionResponseBodyData &) = default ;
    GetMeCorpSubmissionResponseBodyData& operator=(GetMeCorpSubmissionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actioner_ != nullptr
        && this->actionerId_ != nullptr && this->actionerName_ != nullptr && this->appType_ != nullptr && this->createTimeGMT_ != nullptr && this->currentActivityInstances_ != nullptr
        && this->dataMap_ != nullptr && this->dataType_ != nullptr && this->finishTimeGMT_ != nullptr && this->formInstanceId_ != nullptr && this->formUuid_ != nullptr
        && this->instanceValue_ != nullptr && this->modifiedTimeGMT_ != nullptr && this->originatorAvatar_ != nullptr && this->originatorDisplayName_ != nullptr && this->originatorId_ != nullptr
        && this->processApprovedResult_ != nullptr && this->processApprovedResultText_ != nullptr && this->processCode_ != nullptr && this->processId_ != nullptr && this->processInstanceId_ != nullptr
        && this->processInstanceStatus_ != nullptr && this->processInstanceStatusText_ != nullptr && this->processName_ != nullptr && this->title_ != nullptr && this->version_ != nullptr; };
    // actioner Field Functions 
    bool hasActioner() const { return this->actioner_ != nullptr;};
    void deleteActioner() { this->actioner_ = nullptr;};
    inline const vector<Models::GetMeCorpSubmissionResponseBodyDataActioner> & actioner() const { DARABONBA_PTR_GET_CONST(actioner_, vector<Models::GetMeCorpSubmissionResponseBodyDataActioner>) };
    inline vector<Models::GetMeCorpSubmissionResponseBodyDataActioner> actioner() { DARABONBA_PTR_GET(actioner_, vector<Models::GetMeCorpSubmissionResponseBodyDataActioner>) };
    inline GetMeCorpSubmissionResponseBodyData& setActioner(const vector<Models::GetMeCorpSubmissionResponseBodyDataActioner> & actioner) { DARABONBA_PTR_SET_VALUE(actioner_, actioner) };
    inline GetMeCorpSubmissionResponseBodyData& setActioner(vector<Models::GetMeCorpSubmissionResponseBodyDataActioner> && actioner) { DARABONBA_PTR_SET_RVALUE(actioner_, actioner) };


    // actionerId Field Functions 
    bool hasActionerId() const { return this->actionerId_ != nullptr;};
    void deleteActionerId() { this->actionerId_ = nullptr;};
    inline const vector<string> & actionerId() const { DARABONBA_PTR_GET_CONST(actionerId_, vector<string>) };
    inline vector<string> actionerId() { DARABONBA_PTR_GET(actionerId_, vector<string>) };
    inline GetMeCorpSubmissionResponseBodyData& setActionerId(const vector<string> & actionerId) { DARABONBA_PTR_SET_VALUE(actionerId_, actionerId) };
    inline GetMeCorpSubmissionResponseBodyData& setActionerId(vector<string> && actionerId) { DARABONBA_PTR_SET_RVALUE(actionerId_, actionerId) };


    // actionerName Field Functions 
    bool hasActionerName() const { return this->actionerName_ != nullptr;};
    void deleteActionerName() { this->actionerName_ = nullptr;};
    inline const vector<string> & actionerName() const { DARABONBA_PTR_GET_CONST(actionerName_, vector<string>) };
    inline vector<string> actionerName() { DARABONBA_PTR_GET(actionerName_, vector<string>) };
    inline GetMeCorpSubmissionResponseBodyData& setActionerName(const vector<string> & actionerName) { DARABONBA_PTR_SET_VALUE(actionerName_, actionerName) };
    inline GetMeCorpSubmissionResponseBodyData& setActionerName(vector<string> && actionerName) { DARABONBA_PTR_SET_RVALUE(actionerName_, actionerName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // currentActivityInstances Field Functions 
    bool hasCurrentActivityInstances() const { return this->currentActivityInstances_ != nullptr;};
    void deleteCurrentActivityInstances() { this->currentActivityInstances_ = nullptr;};
    inline const vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances> & currentActivityInstances() const { DARABONBA_PTR_GET_CONST(currentActivityInstances_, vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances>) };
    inline vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances> currentActivityInstances() { DARABONBA_PTR_GET(currentActivityInstances_, vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances>) };
    inline GetMeCorpSubmissionResponseBodyData& setCurrentActivityInstances(const vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances> & currentActivityInstances) { DARABONBA_PTR_SET_VALUE(currentActivityInstances_, currentActivityInstances) };
    inline GetMeCorpSubmissionResponseBodyData& setCurrentActivityInstances(vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances> && currentActivityInstances) { DARABONBA_PTR_SET_RVALUE(currentActivityInstances_, currentActivityInstances) };


    // dataMap Field Functions 
    bool hasDataMap() const { return this->dataMap_ != nullptr;};
    void deleteDataMap() { this->dataMap_ = nullptr;};
    inline     const Darabonba::Json & dataMap() const { DARABONBA_GET(dataMap_) };
    Darabonba::Json & dataMap() { DARABONBA_GET(dataMap_) };
    inline GetMeCorpSubmissionResponseBodyData& setDataMap(const Darabonba::Json & dataMap) { DARABONBA_SET_VALUE(dataMap_, dataMap) };
    inline GetMeCorpSubmissionResponseBodyData& setDataMap(Darabonba::Json & dataMap) { DARABONBA_SET_RVALUE(dataMap_, dataMap) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // finishTimeGMT Field Functions 
    bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
    void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
    inline string finishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string formInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // instanceValue Field Functions 
    bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
    void deleteInstanceValue() { this->instanceValue_ = nullptr;};
    inline string instanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // originatorAvatar Field Functions 
    bool hasOriginatorAvatar() const { return this->originatorAvatar_ != nullptr;};
    void deleteOriginatorAvatar() { this->originatorAvatar_ = nullptr;};
    inline string originatorAvatar() const { DARABONBA_PTR_GET_DEFAULT(originatorAvatar_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setOriginatorAvatar(string originatorAvatar) { DARABONBA_PTR_SET_VALUE(originatorAvatar_, originatorAvatar) };


    // originatorDisplayName Field Functions 
    bool hasOriginatorDisplayName() const { return this->originatorDisplayName_ != nullptr;};
    void deleteOriginatorDisplayName() { this->originatorDisplayName_ = nullptr;};
    inline string originatorDisplayName() const { DARABONBA_PTR_GET_DEFAULT(originatorDisplayName_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setOriginatorDisplayName(string originatorDisplayName) { DARABONBA_PTR_SET_VALUE(originatorDisplayName_, originatorDisplayName) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // processApprovedResult Field Functions 
    bool hasProcessApprovedResult() const { return this->processApprovedResult_ != nullptr;};
    void deleteProcessApprovedResult() { this->processApprovedResult_ = nullptr;};
    inline string processApprovedResult() const { DARABONBA_PTR_GET_DEFAULT(processApprovedResult_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessApprovedResult(string processApprovedResult) { DARABONBA_PTR_SET_VALUE(processApprovedResult_, processApprovedResult) };


    // processApprovedResultText Field Functions 
    bool hasProcessApprovedResultText() const { return this->processApprovedResultText_ != nullptr;};
    void deleteProcessApprovedResultText() { this->processApprovedResultText_ = nullptr;};
    inline string processApprovedResultText() const { DARABONBA_PTR_GET_DEFAULT(processApprovedResultText_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessApprovedResultText(string processApprovedResultText) { DARABONBA_PTR_SET_VALUE(processApprovedResultText_, processApprovedResultText) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string processCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline int64_t processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
    inline GetMeCorpSubmissionResponseBodyData& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // processInstanceStatus Field Functions 
    bool hasProcessInstanceStatus() const { return this->processInstanceStatus_ != nullptr;};
    void deleteProcessInstanceStatus() { this->processInstanceStatus_ = nullptr;};
    inline string processInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(processInstanceStatus_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessInstanceStatus(string processInstanceStatus) { DARABONBA_PTR_SET_VALUE(processInstanceStatus_, processInstanceStatus) };


    // processInstanceStatusText Field Functions 
    bool hasProcessInstanceStatusText() const { return this->processInstanceStatusText_ != nullptr;};
    void deleteProcessInstanceStatusText() { this->processInstanceStatusText_ = nullptr;};
    inline string processInstanceStatusText() const { DARABONBA_PTR_GET_DEFAULT(processInstanceStatusText_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessInstanceStatusText(string processInstanceStatusText) { DARABONBA_PTR_SET_VALUE(processInstanceStatusText_, processInstanceStatusText) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetMeCorpSubmissionResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetMeCorpSubmissionResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<vector<Models::GetMeCorpSubmissionResponseBodyDataActioner>> actioner_ = nullptr;
    std::shared_ptr<vector<string>> actionerId_ = nullptr;
    std::shared_ptr<vector<string>> actionerName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    std::shared_ptr<vector<Models::GetMeCorpSubmissionResponseBodyDataCurrentActivityInstances>> currentActivityInstances_ = nullptr;
    Darabonba::Json dataMap_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> finishTimeGMT_ = nullptr;
    std::shared_ptr<string> formInstanceId_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> instanceValue_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
    std::shared_ptr<string> originatorAvatar_ = nullptr;
    std::shared_ptr<string> originatorDisplayName_ = nullptr;
    std::shared_ptr<string> originatorId_ = nullptr;
    std::shared_ptr<string> processApprovedResult_ = nullptr;
    std::shared_ptr<string> processApprovedResultText_ = nullptr;
    std::shared_ptr<string> processCode_ = nullptr;
    std::shared_ptr<int64_t> processId_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> processInstanceStatus_ = nullptr;
    std::shared_ptr<string> processInstanceStatusText_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
