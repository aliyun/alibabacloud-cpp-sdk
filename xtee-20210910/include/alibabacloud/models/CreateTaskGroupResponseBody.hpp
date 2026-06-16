// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKGROUPRESPONSEBODY_HPP_
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
  class CreateTaskGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CreateTaskGroupResponseBody() = default ;
    CreateTaskGroupResponseBody(const CreateTaskGroupResponseBody &) = default ;
    CreateTaskGroupResponseBody(CreateTaskGroupResponseBody &&) = default ;
    CreateTaskGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskGroupResponseBody() = default ;
    CreateTaskGroupResponseBody& operator=(const CreateTaskGroupResponseBody &) = default ;
    CreateTaskGroupResponseBody& operator=(CreateTaskGroupResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Checker, checker_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileRows, fileRows_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(IsCharge, isCharge_);
          DARABONBA_PTR_TO_JSON(ModelScene, modelScene_);
          DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
          DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
          DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
          DARABONBA_PTR_TO_JSON(Tab, tab_);
          DARABONBA_PTR_TO_JSON(TaskGroupId, taskGroupId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        };
        friend void from_json(const Darabonba::Json& j, SubTaskList& obj) { 
          DARABONBA_PTR_FROM_JSON(Checker, checker_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileRows, fileRows_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(IsCharge, isCharge_);
          DARABONBA_PTR_FROM_JSON(ModelScene, modelScene_);
          DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
          DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
          DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
          DARABONBA_PTR_FROM_JSON(Tab, tab_);
          DARABONBA_PTR_FROM_JSON(TaskGroupId, taskGroupId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
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
        virtual bool empty() const override { return this->checker_ == nullptr
        && this->fileName_ == nullptr && this->fileRows_ == nullptr && this->finishTime_ == nullptr && this->groupName_ == nullptr && this->isCharge_ == nullptr
        && this->modelScene_ == nullptr && this->sampleId_ == nullptr && this->sampleName_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr
        && this->subTaskId_ == nullptr && this->tab_ == nullptr && this->taskGroupId_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr; };
        // checker Field Functions 
        bool hasChecker() const { return this->checker_ != nullptr;};
        void deleteChecker() { this->checker_ = nullptr;};
        inline string getChecker() const { DARABONBA_PTR_GET_DEFAULT(checker_, "") };
        inline SubTaskList& setChecker(string checker) { DARABONBA_PTR_SET_VALUE(checker_, checker) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline SubTaskList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileRows Field Functions 
        bool hasFileRows() const { return this->fileRows_ != nullptr;};
        void deleteFileRows() { this->fileRows_ = nullptr;};
        inline string getFileRows() const { DARABONBA_PTR_GET_DEFAULT(fileRows_, "") };
        inline SubTaskList& setFileRows(string fileRows) { DARABONBA_PTR_SET_VALUE(fileRows_, fileRows) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline SubTaskList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline SubTaskList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // isCharge Field Functions 
        bool hasIsCharge() const { return this->isCharge_ != nullptr;};
        void deleteIsCharge() { this->isCharge_ = nullptr;};
        inline string getIsCharge() const { DARABONBA_PTR_GET_DEFAULT(isCharge_, "") };
        inline SubTaskList& setIsCharge(string isCharge) { DARABONBA_PTR_SET_VALUE(isCharge_, isCharge) };


        // modelScene Field Functions 
        bool hasModelScene() const { return this->modelScene_ != nullptr;};
        void deleteModelScene() { this->modelScene_ = nullptr;};
        inline string getModelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
        inline SubTaskList& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


        // sampleId Field Functions 
        bool hasSampleId() const { return this->sampleId_ != nullptr;};
        void deleteSampleId() { this->sampleId_ = nullptr;};
        inline string getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, "") };
        inline SubTaskList& setSampleId(string sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


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
        inline int64_t getSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0L) };
        inline SubTaskList& setSubTaskId(int64_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


        // tab Field Functions 
        bool hasTab() const { return this->tab_ != nullptr;};
        void deleteTab() { this->tab_ = nullptr;};
        inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
        inline SubTaskList& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


        // taskGroupId Field Functions 
        bool hasTaskGroupId() const { return this->taskGroupId_ != nullptr;};
        void deleteTaskGroupId() { this->taskGroupId_ = nullptr;};
        inline string getTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(taskGroupId_, "") };
        inline SubTaskList& setTaskGroupId(string taskGroupId) { DARABONBA_PTR_SET_VALUE(taskGroupId_, taskGroupId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline SubTaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline SubTaskList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      protected:
        // The reviewer.
        shared_ptr<string> checker_ {};
        // The file name.
        shared_ptr<string> fileName_ {};
        // The number of rows in the file.
        shared_ptr<string> fileRows_ {};
        // The task end time.
        shared_ptr<string> finishTime_ {};
        // The user group name.
        shared_ptr<string> groupName_ {};
        // Indicates whether the task is billed.
        shared_ptr<string> isCharge_ {};
        // The model scenario.
        shared_ptr<string> modelScene_ {};
        // The sample IDs.
        shared_ptr<string> sampleId_ {};
        // The sample name.
        shared_ptr<string> sampleName_ {};
        // The service code.
        shared_ptr<string> serviceCode_ {};
        // The service name.
        shared_ptr<string> serviceName_ {};
        // The subtask ID.
        shared_ptr<int64_t> subTaskId_ {};
        // The scenario.
        shared_ptr<string> tab_ {};
        // The task group ID.
        shared_ptr<string> taskGroupId_ {};
        // The task name.
        shared_ptr<string> taskName_ {};
        // The execution status of the import task. Valid values:
        // - DOING: Running.
        // - FINISH: Completed.
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
      inline int32_t getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, 0) };
      inline ResultObject& setCreatorUserId(int32_t creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


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
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The creator user ID.
      shared_ptr<int32_t> creatorUserId_ {};
      // The group status.
      shared_ptr<string> groupStatus_ {};
      // The task group name.
      shared_ptr<vector<string>> sampleNames_ {};
      // The number of subtasks generated from task parsing and splitting.
      shared_ptr<int32_t> subTaskCount_ {};
      // The subtask list.
      shared_ptr<vector<ResultObject::SubTaskList>> subTaskList_ {};
      // The scenario.
      shared_ptr<string> tab_ {};
      // The task group ID.
      // 
      // > This parameter is in invitational preview. When this parameter is used, other query conditions become invalid.
      shared_ptr<int32_t> taskGroupId_ {};
      // The task group name.
      shared_ptr<string> taskGroupName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTaskGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline CreateTaskGroupResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTaskGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTaskGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CreateTaskGroupResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CreateTaskGroupResponseBody::ResultObject) };
    inline CreateTaskGroupResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CreateTaskGroupResponseBody::ResultObject) };
    inline CreateTaskGroupResponseBody& setResultObject(const CreateTaskGroupResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CreateTaskGroupResponseBody& setResultObject(CreateTaskGroupResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<CreateTaskGroupResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
