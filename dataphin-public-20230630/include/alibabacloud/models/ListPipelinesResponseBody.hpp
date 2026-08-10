// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListPipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody(ListPipelinesResponseBody &&) = default ;
    ListPipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody& operator=(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody& operator=(ListPipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(NextCursor, nextCursor_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(NextCursor, nextCursor_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(DevelopOwners, developOwners_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(OpsOwners, opsOwners_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(DevelopOwners, developOwners_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(OpsOwners, opsOwners_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->developOwners_ == nullptr
        && this->directory_ == nullptr && this->fileId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->opsOwners_ == nullptr
        && this->pipelineId_ == nullptr && this->scheduleType_ == nullptr && this->tags_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
        // developOwners Field Functions 
        bool hasDevelopOwners() const { return this->developOwners_ != nullptr;};
        void deleteDevelopOwners() { this->developOwners_ = nullptr;};
        inline const vector<string> & getDevelopOwners() const { DARABONBA_PTR_GET_CONST(developOwners_, vector<string>) };
        inline vector<string> getDevelopOwners() { DARABONBA_PTR_GET(developOwners_, vector<string>) };
        inline List& setDevelopOwners(const vector<string> & developOwners) { DARABONBA_PTR_SET_VALUE(developOwners_, developOwners) };
        inline List& setDevelopOwners(vector<string> && developOwners) { DARABONBA_PTR_SET_RVALUE(developOwners_, developOwners) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline List& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline List& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline List& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline List& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // opsOwners Field Functions 
        bool hasOpsOwners() const { return this->opsOwners_ != nullptr;};
        void deleteOpsOwners() { this->opsOwners_ = nullptr;};
        inline const vector<string> & getOpsOwners() const { DARABONBA_PTR_GET_CONST(opsOwners_, vector<string>) };
        inline vector<string> getOpsOwners() { DARABONBA_PTR_GET(opsOwners_, vector<string>) };
        inline List& setOpsOwners(const vector<string> & opsOwners) { DARABONBA_PTR_SET_VALUE(opsOwners_, opsOwners) };
        inline List& setOpsOwners(vector<string> && opsOwners) { DARABONBA_PTR_SET_RVALUE(opsOwners_, opsOwners) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
        inline List& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // scheduleType Field Functions 
        bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
        void deleteScheduleType() { this->scheduleType_ = nullptr;};
        inline int32_t getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
        inline List& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline List& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline List& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline List& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
        inline List& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // The list of user IDs of development owners.
        shared_ptr<vector<string>> developOwners_ {};
        // The directory in which the task resides.
        shared_ptr<string> directory_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The scheduling node ID.
        shared_ptr<string> nodeId_ {};
        // The node name.
        shared_ptr<string> nodeName_ {};
        // The list of user IDs of O&M owners.
        shared_ptr<vector<string>> opsOwners_ {};
        // The pipeline ID.
        shared_ptr<int64_t> pipelineId_ {};
        // The schedule type. Valid values:
        // - 1: periodic scheduling.
        // - 3: manual scheduling.
        // - 5: real-time scheduling.
        shared_ptr<int32_t> scheduleType_ {};
        // The list of task tag names.
        shared_ptr<vector<string>> tags_ {};
        // The task status. Valid values:
        // - DRAFT: draft.
        // - SUBMITTING: being submitted.
        // - SUBMITTED: submitted.
        // - PUBLISHED: published.
        shared_ptr<string> taskStatus_ {};
        // The task type. Valid values:
        // - 0: offline integration.
        // - 1: real-time integration.
        // - 13: data aggregation.
        // - 14: offline unstructured workflow.
        // - 15: real-time unstructured workflow.
        shared_ptr<int32_t> taskType_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->nextCursor_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // nextCursor Field Functions 
      bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
      void deleteNextCursor() { this->nextCursor_ = nullptr;};
      inline int64_t getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
      inline Data& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of task information on the current page.
      shared_ptr<vector<Data::List>> list_ {};
      // The cursor for the next page (an opaque cursor that the caller does not need to interpret). A null value indicates that there are no more pages. Otherwise, pass this value as the nextCursor parameter in the next request to retrieve the next page.
      shared_ptr<int64_t> nextCursor_ {};
      // The current page number, starting from 1.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records that match the conditions. On the first page request, the actual total is returned. On subsequent page requests (when nextCursor is passed in), if totalCount is included in the request, the same value is returned. Otherwise, this field is not returned. The total value is a snapshot taken at the time of the first page query and is not updated in real time as data changes during pagination.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPipelinesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPipelinesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPipelinesResponseBody::Data) };
    inline ListPipelinesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPipelinesResponseBody::Data) };
    inline ListPipelinesResponseBody& setData(const ListPipelinesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPipelinesResponseBody& setData(ListPipelinesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPipelinesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPipelinesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPipelinesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. OK indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The paged query result.
    shared_ptr<ListPipelinesResponseBody::Data> data_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
