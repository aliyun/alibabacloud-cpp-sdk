// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ListTaskGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListTaskGroupResponseBody() = default ;
    ListTaskGroupResponseBody(const ListTaskGroupResponseBody &) = default ;
    ListTaskGroupResponseBody(ListTaskGroupResponseBody &&) = default ;
    ListTaskGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskGroupResponseBody() = default ;
    ListTaskGroupResponseBody& operator=(const ListTaskGroupResponseBody &) = default ;
    ListTaskGroupResponseBody& operator=(ListTaskGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_TO_JSON(GroupStatus, groupStatus_);
        DARABONBA_PTR_TO_JSON(SampleNames, sampleNames_);
        DARABONBA_PTR_TO_JSON(SubTaskCount, subTaskCount_);
        DARABONBA_PTR_TO_JSON(SubTaskList, subTaskList_);
        DARABONBA_PTR_TO_JSON(Tab, tab_);
        DARABONBA_PTR_TO_JSON(TaskGroupId, taskGroupId_);
        DARABONBA_PTR_TO_JSON(TaskGroupName, taskGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_FROM_JSON(GroupStatus, groupStatus_);
        DARABONBA_PTR_FROM_JSON(SampleNames, sampleNames_);
        DARABONBA_PTR_FROM_JSON(SubTaskCount, subTaskCount_);
        DARABONBA_PTR_FROM_JSON(SubTaskList, subTaskList_);
        DARABONBA_PTR_FROM_JSON(Tab, tab_);
        DARABONBA_PTR_FROM_JSON(TaskGroupId, taskGroupId_);
        DARABONBA_PTR_FROM_JSON(TaskGroupName, taskGroupName_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubTaskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubTaskList& obj) { 
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HideViewResultButton, hideViewResultButton_);
          DARABONBA_PTR_TO_JSON(IsCharge, isCharge_);
          DARABONBA_PTR_TO_JSON(ModelScene, modelScene_);
          DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
          DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
          DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
          DARABONBA_PTR_TO_JSON(SupportCancel, supportCancel_);
          DARABONBA_PTR_TO_JSON(SupportDownload, supportDownload_);
          DARABONBA_PTR_TO_JSON(SupportMergeSelect, supportMergeSelect_);
          DARABONBA_PTR_TO_JSON(SupportView, supportView_);
          DARABONBA_PTR_TO_JSON(Tab, tab_);
          DARABONBA_PTR_TO_JSON(TaskGroupId, taskGroupId_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        };
        friend void from_json(const Darabonba::Json& j, SubTaskList& obj) { 
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HideViewResultButton, hideViewResultButton_);
          DARABONBA_PTR_FROM_JSON(IsCharge, isCharge_);
          DARABONBA_PTR_FROM_JSON(ModelScene, modelScene_);
          DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
          DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
          DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
          DARABONBA_PTR_FROM_JSON(SupportCancel, supportCancel_);
          DARABONBA_PTR_FROM_JSON(SupportDownload, supportDownload_);
          DARABONBA_PTR_FROM_JSON(SupportMergeSelect, supportMergeSelect_);
          DARABONBA_PTR_FROM_JSON(SupportView, supportView_);
          DARABONBA_PTR_FROM_JSON(Tab, tab_);
          DARABONBA_PTR_FROM_JSON(TaskGroupId, taskGroupId_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        };
        SubTaskList() = default ;
        SubTaskList(const SubTaskList &) = default ;
        SubTaskList(SubTaskList &&) = default ;
        SubTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubTaskList() = default ;
        SubTaskList& operator=(const SubTaskList &) = default ;
        SubTaskList& operator=(SubTaskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->finishTime_ == nullptr
        && this->groupName_ == nullptr && this->hideViewResultButton_ == nullptr && this->isCharge_ == nullptr && this->modelScene_ == nullptr && this->sampleId_ == nullptr
        && this->sampleName_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr && this->subTaskId_ == nullptr && this->supportCancel_ == nullptr
        && this->supportDownload_ == nullptr && this->supportMergeSelect_ == nullptr && this->supportView_ == nullptr && this->tab_ == nullptr && this->taskGroupId_ == nullptr
        && this->taskStatus_ == nullptr; };
        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline SubTaskList& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline SubTaskList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // hideViewResultButton Field Functions 
        bool hasHideViewResultButton() const { return this->hideViewResultButton_ != nullptr;};
        void deleteHideViewResultButton() { this->hideViewResultButton_ = nullptr;};
        inline bool getHideViewResultButton() const { DARABONBA_PTR_GET_DEFAULT(hideViewResultButton_, false) };
        inline SubTaskList& setHideViewResultButton(bool hideViewResultButton) { DARABONBA_PTR_SET_VALUE(hideViewResultButton_, hideViewResultButton) };


        // isCharge Field Functions 
        bool hasIsCharge() const { return this->isCharge_ != nullptr;};
        void deleteIsCharge() { this->isCharge_ = nullptr;};
        inline bool getIsCharge() const { DARABONBA_PTR_GET_DEFAULT(isCharge_, false) };
        inline SubTaskList& setIsCharge(bool isCharge) { DARABONBA_PTR_SET_VALUE(isCharge_, isCharge) };


        // modelScene Field Functions 
        bool hasModelScene() const { return this->modelScene_ != nullptr;};
        void deleteModelScene() { this->modelScene_ = nullptr;};
        inline string getModelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
        inline SubTaskList& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


        // sampleId Field Functions 
        bool hasSampleId() const { return this->sampleId_ != nullptr;};
        void deleteSampleId() { this->sampleId_ = nullptr;};
        inline int32_t getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0) };
        inline SubTaskList& setSampleId(int32_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


        // sampleName Field Functions 
        bool hasSampleName() const { return this->sampleName_ != nullptr;};
        void deleteSampleName() { this->sampleName_ = nullptr;};
        inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
        inline SubTaskList& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline SubTaskList& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline SubTaskList& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // subTaskId Field Functions 
        bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
        void deleteSubTaskId() { this->subTaskId_ = nullptr;};
        inline int32_t getSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0) };
        inline SubTaskList& setSubTaskId(int32_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


        // supportCancel Field Functions 
        bool hasSupportCancel() const { return this->supportCancel_ != nullptr;};
        void deleteSupportCancel() { this->supportCancel_ = nullptr;};
        inline bool getSupportCancel() const { DARABONBA_PTR_GET_DEFAULT(supportCancel_, false) };
        inline SubTaskList& setSupportCancel(bool supportCancel) { DARABONBA_PTR_SET_VALUE(supportCancel_, supportCancel) };


        // supportDownload Field Functions 
        bool hasSupportDownload() const { return this->supportDownload_ != nullptr;};
        void deleteSupportDownload() { this->supportDownload_ = nullptr;};
        inline bool getSupportDownload() const { DARABONBA_PTR_GET_DEFAULT(supportDownload_, false) };
        inline SubTaskList& setSupportDownload(bool supportDownload) { DARABONBA_PTR_SET_VALUE(supportDownload_, supportDownload) };


        // supportMergeSelect Field Functions 
        bool hasSupportMergeSelect() const { return this->supportMergeSelect_ != nullptr;};
        void deleteSupportMergeSelect() { this->supportMergeSelect_ = nullptr;};
        inline bool getSupportMergeSelect() const { DARABONBA_PTR_GET_DEFAULT(supportMergeSelect_, false) };
        inline SubTaskList& setSupportMergeSelect(bool supportMergeSelect) { DARABONBA_PTR_SET_VALUE(supportMergeSelect_, supportMergeSelect) };


        // supportView Field Functions 
        bool hasSupportView() const { return this->supportView_ != nullptr;};
        void deleteSupportView() { this->supportView_ = nullptr;};
        inline bool getSupportView() const { DARABONBA_PTR_GET_DEFAULT(supportView_, false) };
        inline SubTaskList& setSupportView(bool supportView) { DARABONBA_PTR_SET_VALUE(supportView_, supportView) };


        // tab Field Functions 
        bool hasTab() const { return this->tab_ != nullptr;};
        void deleteTab() { this->tab_ = nullptr;};
        inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
        inline SubTaskList& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


        // taskGroupId Field Functions 
        bool hasTaskGroupId() const { return this->taskGroupId_ != nullptr;};
        void deleteTaskGroupId() { this->taskGroupId_ = nullptr;};
        inline int32_t getTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(taskGroupId_, 0) };
        inline SubTaskList& setTaskGroupId(int32_t taskGroupId) { DARABONBA_PTR_SET_VALUE(taskGroupId_, taskGroupId) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline SubTaskList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      protected:
        // Job end time.
        shared_ptr<int64_t> finishTime_ {};
        // Group name.
        shared_ptr<string> groupName_ {};
        // Indicates whether to hide.
        shared_ptr<bool> hideViewResultButton_ {};
        // Indicates whether the subtask is charged.
        shared_ptr<bool> isCharge_ {};
        // Model scenario.
        shared_ptr<string> modelScene_ {};
        // Sample ID.
        shared_ptr<int32_t> sampleId_ {};
        // Sample name.
        shared_ptr<string> sampleName_ {};
        // Service code.
        shared_ptr<string> serviceCode_ {};
        // Service name.
        shared_ptr<string> serviceName_ {};
        // Subtask ID.
        shared_ptr<int32_t> subTaskId_ {};
        // Indicates whether the job can be canceled. Valid values:  
        // - true: The job can be canceled.  
        // - false: The job cannot be canceled.
        shared_ptr<bool> supportCancel_ {};
        // Supports download.
        shared_ptr<bool> supportDownload_ {};
        // Indicates whether merge download is supported.
        shared_ptr<bool> supportMergeSelect_ {};
        // Indicates whether viewing is supported.
        shared_ptr<bool> supportView_ {};
        // Scenario.
        shared_ptr<string> tab_ {};
        // Task group ID.
        shared_ptr<int32_t> taskGroupId_ {};
        // The execution status of the import job:  
        // - DOING: running  
        // - FINISH: execution completed.
        shared_ptr<string> taskStatus_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorUserId_ == nullptr && this->groupStatus_ == nullptr && this->sampleNames_ == nullptr && this->subTaskCount_ == nullptr && this->subTaskList_ == nullptr
        && this->tab_ == nullptr && this->taskGroupId_ == nullptr && this->taskGroupName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ResultObject& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorUserId Field Functions 
      bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
      void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
      inline int64_t getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, 0L) };
      inline ResultObject& setCreatorUserId(int64_t creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


      // groupStatus Field Functions 
      bool hasGroupStatus() const { return this->groupStatus_ != nullptr;};
      void deleteGroupStatus() { this->groupStatus_ = nullptr;};
      inline string getGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(groupStatus_, "") };
      inline ResultObject& setGroupStatus(string groupStatus) { DARABONBA_PTR_SET_VALUE(groupStatus_, groupStatus) };


      // sampleNames Field Functions 
      bool hasSampleNames() const { return this->sampleNames_ != nullptr;};
      void deleteSampleNames() { this->sampleNames_ = nullptr;};
      inline const vector<string> & getSampleNames() const { DARABONBA_PTR_GET_CONST(sampleNames_, vector<string>) };
      inline vector<string> getSampleNames() { DARABONBA_PTR_GET(sampleNames_, vector<string>) };
      inline ResultObject& setSampleNames(const vector<string> & sampleNames) { DARABONBA_PTR_SET_VALUE(sampleNames_, sampleNames) };
      inline ResultObject& setSampleNames(vector<string> && sampleNames) { DARABONBA_PTR_SET_RVALUE(sampleNames_, sampleNames) };


      // subTaskCount Field Functions 
      bool hasSubTaskCount() const { return this->subTaskCount_ != nullptr;};
      void deleteSubTaskCount() { this->subTaskCount_ = nullptr;};
      inline int32_t getSubTaskCount() const { DARABONBA_PTR_GET_DEFAULT(subTaskCount_, 0) };
      inline ResultObject& setSubTaskCount(int32_t subTaskCount) { DARABONBA_PTR_SET_VALUE(subTaskCount_, subTaskCount) };


      // subTaskList Field Functions 
      bool hasSubTaskList() const { return this->subTaskList_ != nullptr;};
      void deleteSubTaskList() { this->subTaskList_ = nullptr;};
      inline const vector<ResultObject::SubTaskList> & getSubTaskList() const { DARABONBA_PTR_GET_CONST(subTaskList_, vector<ResultObject::SubTaskList>) };
      inline vector<ResultObject::SubTaskList> getSubTaskList() { DARABONBA_PTR_GET(subTaskList_, vector<ResultObject::SubTaskList>) };
      inline ResultObject& setSubTaskList(const vector<ResultObject::SubTaskList> & subTaskList) { DARABONBA_PTR_SET_VALUE(subTaskList_, subTaskList) };
      inline ResultObject& setSubTaskList(vector<ResultObject::SubTaskList> && subTaskList) { DARABONBA_PTR_SET_RVALUE(subTaskList_, subTaskList) };


      // tab Field Functions 
      bool hasTab() const { return this->tab_ != nullptr;};
      void deleteTab() { this->tab_ = nullptr;};
      inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
      inline ResultObject& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


      // taskGroupId Field Functions 
      bool hasTaskGroupId() const { return this->taskGroupId_ != nullptr;};
      void deleteTaskGroupId() { this->taskGroupId_ = nullptr;};
      inline int32_t getTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(taskGroupId_, 0) };
      inline ResultObject& setTaskGroupId(int32_t taskGroupId) { DARABONBA_PTR_SET_VALUE(taskGroupId_, taskGroupId) };


      // taskGroupName Field Functions 
      bool hasTaskGroupName() const { return this->taskGroupName_ != nullptr;};
      void deleteTaskGroupName() { this->taskGroupName_ = nullptr;};
      inline string getTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(taskGroupName_, "") };
      inline ResultObject& setTaskGroupName(string taskGroupName) { DARABONBA_PTR_SET_VALUE(taskGroupName_, taskGroupName) };


    protected:
      // Creation Time.
      shared_ptr<int64_t> createTime_ {};
      // Creator.
      shared_ptr<int64_t> creatorUserId_ {};
      // Audience group status.
      shared_ptr<string> groupStatus_ {};
      // Task group name.
      shared_ptr<vector<string>> sampleNames_ {};
      // Number of subtasks parsed and split from the task.
      shared_ptr<int32_t> subTaskCount_ {};
      // Subtask.
      shared_ptr<vector<ResultObject::SubTaskList>> subTaskList_ {};
      // Scenario.
      shared_ptr<string> tab_ {};
      // Task group ID.
      shared_ptr<int32_t> taskGroupId_ {};
      // Task group name.
      shared_ptr<string> taskGroupName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTaskGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListTaskGroupResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListTaskGroupResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTaskGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<ListTaskGroupResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<ListTaskGroupResponseBody::ResultObject>) };
    inline vector<ListTaskGroupResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<ListTaskGroupResponseBody::ResultObject>) };
    inline ListTaskGroupResponseBody& setResultObject(const vector<ListTaskGroupResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline ListTaskGroupResponseBody& setResultObject(vector<ListTaskGroupResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline ListTaskGroupResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListTaskGroupResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Status code.
    shared_ptr<string> code_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Request result.
    shared_ptr<vector<ListTaskGroupResponseBody::ResultObject>> resultObject_ {};
    // Total number of returned items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
