// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKCOPIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKCOPIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTaskCopiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskCopiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskCopiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetTaskCopiesResponseBody() = default ;
    GetTaskCopiesResponseBody(const GetTaskCopiesResponseBody &) = default ;
    GetTaskCopiesResponseBody(GetTaskCopiesResponseBody &&) = default ;
    GetTaskCopiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskCopiesResponseBody() = default ;
    GetTaskCopiesResponseBody& operator=(const GetTaskCopiesResponseBody &) = default ;
    GetTaskCopiesResponseBody& operator=(GetTaskCopiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActionExecutorId, actionExecutorId_);
        DARABONBA_PTR_TO_JSON(ActionExecutorName, actionExecutorName_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(CarbonActivityId, carbonActivityId_);
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
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionExecutorId, actionExecutorId_);
        DARABONBA_PTR_FROM_JSON(ActionExecutorName, actionExecutorName_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(CarbonActivityId, carbonActivityId_);
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
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CurrentActivityInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CurrentActivityInstances& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
          DARABONBA_PTR_TO_JSON(ActivityInstanceStatus, activityInstanceStatus_);
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(ActivityNameInEnglish, activityNameInEnglish_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, CurrentActivityInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
          DARABONBA_PTR_FROM_JSON(ActivityInstanceStatus, activityInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(ActivityNameInEnglish, activityNameInEnglish_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        CurrentActivityInstances() = default ;
        CurrentActivityInstances(const CurrentActivityInstances &) = default ;
        CurrentActivityInstances(CurrentActivityInstances &&) = default ;
        CurrentActivityInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CurrentActivityInstances() = default ;
        CurrentActivityInstances& operator=(const CurrentActivityInstances &) = default ;
        CurrentActivityInstances& operator=(CurrentActivityInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityInstanceStatus_ == nullptr && this->activityName_ == nullptr && this->activityNameInEnglish_ == nullptr && this->id_ == nullptr; };
        // activityId Field Functions 
        bool hasActivityId() const { return this->activityId_ != nullptr;};
        void deleteActivityId() { this->activityId_ = nullptr;};
        inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
        inline CurrentActivityInstances& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


        // activityInstanceStatus Field Functions 
        bool hasActivityInstanceStatus() const { return this->activityInstanceStatus_ != nullptr;};
        void deleteActivityInstanceStatus() { this->activityInstanceStatus_ = nullptr;};
        inline string getActivityInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(activityInstanceStatus_, "") };
        inline CurrentActivityInstances& setActivityInstanceStatus(string activityInstanceStatus) { DARABONBA_PTR_SET_VALUE(activityInstanceStatus_, activityInstanceStatus) };


        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline CurrentActivityInstances& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // activityNameInEnglish Field Functions 
        bool hasActivityNameInEnglish() const { return this->activityNameInEnglish_ != nullptr;};
        void deleteActivityNameInEnglish() { this->activityNameInEnglish_ = nullptr;};
        inline string getActivityNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(activityNameInEnglish_, "") };
        inline CurrentActivityInstances& setActivityNameInEnglish(string activityNameInEnglish) { DARABONBA_PTR_SET_VALUE(activityNameInEnglish_, activityNameInEnglish) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline CurrentActivityInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> activityId_ {};
        shared_ptr<string> activityInstanceStatus_ {};
        shared_ptr<string> activityName_ {};
        shared_ptr<string> activityNameInEnglish_ {};
        shared_ptr<int64_t> id_ {};
      };

      virtual bool empty() const override { return this->actionExecutorId_ == nullptr
        && this->actionExecutorName_ == nullptr && this->appType_ == nullptr && this->carbonActivityId_ == nullptr && this->createTimeGMT_ == nullptr && this->currentActivityInstances_ == nullptr
        && this->dataMap_ == nullptr && this->dataType_ == nullptr && this->finishTimeGMT_ == nullptr && this->formInstanceId_ == nullptr && this->formUuid_ == nullptr
        && this->instanceValue_ == nullptr && this->modifiedTimeGMT_ == nullptr && this->originatorAvatar_ == nullptr && this->originatorDisplayName_ == nullptr && this->originatorId_ == nullptr
        && this->processApprovedResult_ == nullptr && this->processApprovedResultText_ == nullptr && this->processCode_ == nullptr && this->processId_ == nullptr && this->processInstanceId_ == nullptr
        && this->processInstanceStatus_ == nullptr && this->processInstanceStatusText_ == nullptr && this->processName_ == nullptr && this->serialNumber_ == nullptr && this->title_ == nullptr
        && this->version_ == nullptr; };
      // actionExecutorId Field Functions 
      bool hasActionExecutorId() const { return this->actionExecutorId_ != nullptr;};
      void deleteActionExecutorId() { this->actionExecutorId_ = nullptr;};
      inline const vector<string> & getActionExecutorId() const { DARABONBA_PTR_GET_CONST(actionExecutorId_, vector<string>) };
      inline vector<string> getActionExecutorId() { DARABONBA_PTR_GET(actionExecutorId_, vector<string>) };
      inline Data& setActionExecutorId(const vector<string> & actionExecutorId) { DARABONBA_PTR_SET_VALUE(actionExecutorId_, actionExecutorId) };
      inline Data& setActionExecutorId(vector<string> && actionExecutorId) { DARABONBA_PTR_SET_RVALUE(actionExecutorId_, actionExecutorId) };


      // actionExecutorName Field Functions 
      bool hasActionExecutorName() const { return this->actionExecutorName_ != nullptr;};
      void deleteActionExecutorName() { this->actionExecutorName_ = nullptr;};
      inline const vector<string> & getActionExecutorName() const { DARABONBA_PTR_GET_CONST(actionExecutorName_, vector<string>) };
      inline vector<string> getActionExecutorName() { DARABONBA_PTR_GET(actionExecutorName_, vector<string>) };
      inline Data& setActionExecutorName(const vector<string> & actionExecutorName) { DARABONBA_PTR_SET_VALUE(actionExecutorName_, actionExecutorName) };
      inline Data& setActionExecutorName(vector<string> && actionExecutorName) { DARABONBA_PTR_SET_RVALUE(actionExecutorName_, actionExecutorName) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Data& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // carbonActivityId Field Functions 
      bool hasCarbonActivityId() const { return this->carbonActivityId_ != nullptr;};
      void deleteCarbonActivityId() { this->carbonActivityId_ = nullptr;};
      inline string getCarbonActivityId() const { DARABONBA_PTR_GET_DEFAULT(carbonActivityId_, "") };
      inline Data& setCarbonActivityId(string carbonActivityId) { DARABONBA_PTR_SET_VALUE(carbonActivityId_, carbonActivityId) };


      // createTimeGMT Field Functions 
      bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
      void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
      inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
      inline Data& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


      // currentActivityInstances Field Functions 
      bool hasCurrentActivityInstances() const { return this->currentActivityInstances_ != nullptr;};
      void deleteCurrentActivityInstances() { this->currentActivityInstances_ = nullptr;};
      inline const vector<Data::CurrentActivityInstances> & getCurrentActivityInstances() const { DARABONBA_PTR_GET_CONST(currentActivityInstances_, vector<Data::CurrentActivityInstances>) };
      inline vector<Data::CurrentActivityInstances> getCurrentActivityInstances() { DARABONBA_PTR_GET(currentActivityInstances_, vector<Data::CurrentActivityInstances>) };
      inline Data& setCurrentActivityInstances(const vector<Data::CurrentActivityInstances> & currentActivityInstances) { DARABONBA_PTR_SET_VALUE(currentActivityInstances_, currentActivityInstances) };
      inline Data& setCurrentActivityInstances(vector<Data::CurrentActivityInstances> && currentActivityInstances) { DARABONBA_PTR_SET_RVALUE(currentActivityInstances_, currentActivityInstances) };


      // dataMap Field Functions 
      bool hasDataMap() const { return this->dataMap_ != nullptr;};
      void deleteDataMap() { this->dataMap_ = nullptr;};
      inline       const Darabonba::Json & getDataMap() const { DARABONBA_GET(dataMap_) };
      Darabonba::Json & getDataMap() { DARABONBA_GET(dataMap_) };
      inline Data& setDataMap(const Darabonba::Json & dataMap) { DARABONBA_SET_VALUE(dataMap_, dataMap) };
      inline Data& setDataMap(Darabonba::Json && dataMap) { DARABONBA_SET_RVALUE(dataMap_, dataMap) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Data& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // finishTimeGMT Field Functions 
      bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
      void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
      inline string getFinishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
      inline Data& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


      // formInstanceId Field Functions 
      bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
      void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
      inline string getFormInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
      inline Data& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Data& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // instanceValue Field Functions 
      bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
      void deleteInstanceValue() { this->instanceValue_ = nullptr;};
      inline string getInstanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
      inline Data& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


      // modifiedTimeGMT Field Functions 
      bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
      void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
      inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
      inline Data& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


      // originatorAvatar Field Functions 
      bool hasOriginatorAvatar() const { return this->originatorAvatar_ != nullptr;};
      void deleteOriginatorAvatar() { this->originatorAvatar_ = nullptr;};
      inline string getOriginatorAvatar() const { DARABONBA_PTR_GET_DEFAULT(originatorAvatar_, "") };
      inline Data& setOriginatorAvatar(string originatorAvatar) { DARABONBA_PTR_SET_VALUE(originatorAvatar_, originatorAvatar) };


      // originatorDisplayName Field Functions 
      bool hasOriginatorDisplayName() const { return this->originatorDisplayName_ != nullptr;};
      void deleteOriginatorDisplayName() { this->originatorDisplayName_ = nullptr;};
      inline string getOriginatorDisplayName() const { DARABONBA_PTR_GET_DEFAULT(originatorDisplayName_, "") };
      inline Data& setOriginatorDisplayName(string originatorDisplayName) { DARABONBA_PTR_SET_VALUE(originatorDisplayName_, originatorDisplayName) };


      // originatorId Field Functions 
      bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
      void deleteOriginatorId() { this->originatorId_ = nullptr;};
      inline string getOriginatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
      inline Data& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


      // processApprovedResult Field Functions 
      bool hasProcessApprovedResult() const { return this->processApprovedResult_ != nullptr;};
      void deleteProcessApprovedResult() { this->processApprovedResult_ = nullptr;};
      inline string getProcessApprovedResult() const { DARABONBA_PTR_GET_DEFAULT(processApprovedResult_, "") };
      inline Data& setProcessApprovedResult(string processApprovedResult) { DARABONBA_PTR_SET_VALUE(processApprovedResult_, processApprovedResult) };


      // processApprovedResultText Field Functions 
      bool hasProcessApprovedResultText() const { return this->processApprovedResultText_ != nullptr;};
      void deleteProcessApprovedResultText() { this->processApprovedResultText_ = nullptr;};
      inline string getProcessApprovedResultText() const { DARABONBA_PTR_GET_DEFAULT(processApprovedResultText_, "") };
      inline Data& setProcessApprovedResultText(string processApprovedResultText) { DARABONBA_PTR_SET_VALUE(processApprovedResultText_, processApprovedResultText) };


      // processCode Field Functions 
      bool hasProcessCode() const { return this->processCode_ != nullptr;};
      void deleteProcessCode() { this->processCode_ = nullptr;};
      inline string getProcessCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
      inline Data& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline int64_t getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
      inline Data& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Data& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // processInstanceStatus Field Functions 
      bool hasProcessInstanceStatus() const { return this->processInstanceStatus_ != nullptr;};
      void deleteProcessInstanceStatus() { this->processInstanceStatus_ = nullptr;};
      inline string getProcessInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(processInstanceStatus_, "") };
      inline Data& setProcessInstanceStatus(string processInstanceStatus) { DARABONBA_PTR_SET_VALUE(processInstanceStatus_, processInstanceStatus) };


      // processInstanceStatusText Field Functions 
      bool hasProcessInstanceStatusText() const { return this->processInstanceStatusText_ != nullptr;};
      void deleteProcessInstanceStatusText() { this->processInstanceStatusText_ = nullptr;};
      inline string getProcessInstanceStatusText() const { DARABONBA_PTR_GET_DEFAULT(processInstanceStatusText_, "") };
      inline Data& setProcessInstanceStatusText(string processInstanceStatusText) { DARABONBA_PTR_SET_VALUE(processInstanceStatusText_, processInstanceStatusText) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Data& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Data& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<string>> actionExecutorId_ {};
      shared_ptr<vector<string>> actionExecutorName_ {};
      shared_ptr<string> appType_ {};
      shared_ptr<string> carbonActivityId_ {};
      shared_ptr<string> createTimeGMT_ {};
      shared_ptr<vector<Data::CurrentActivityInstances>> currentActivityInstances_ {};
      Darabonba::Json dataMap_ {};
      shared_ptr<string> dataType_ {};
      shared_ptr<string> finishTimeGMT_ {};
      shared_ptr<string> formInstanceId_ {};
      shared_ptr<string> formUuid_ {};
      shared_ptr<string> instanceValue_ {};
      shared_ptr<string> modifiedTimeGMT_ {};
      shared_ptr<string> originatorAvatar_ {};
      shared_ptr<string> originatorDisplayName_ {};
      shared_ptr<string> originatorId_ {};
      shared_ptr<string> processApprovedResult_ {};
      shared_ptr<string> processApprovedResultText_ {};
      shared_ptr<string> processCode_ {};
      shared_ptr<int64_t> processId_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> processInstanceStatus_ {};
      shared_ptr<string> processInstanceStatusText_ {};
      shared_ptr<string> processName_ {};
      shared_ptr<string> serialNumber_ {};
      shared_ptr<string> title_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetTaskCopiesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetTaskCopiesResponseBody::Data>) };
    inline vector<GetTaskCopiesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetTaskCopiesResponseBody::Data>) };
    inline GetTaskCopiesResponseBody& setData(const vector<GetTaskCopiesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskCopiesResponseBody& setData(vector<GetTaskCopiesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetTaskCopiesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskCopiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetTaskCopiesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetTaskCopiesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetTaskCopiesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetTaskCopiesResponseBody::Data>> data_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
