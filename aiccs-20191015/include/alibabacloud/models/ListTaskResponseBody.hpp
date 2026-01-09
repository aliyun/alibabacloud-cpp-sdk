// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskResponseBody() = default ;
    ListTaskResponseBody(const ListTaskResponseBody &) = default ;
    ListTaskResponseBody(ListTaskResponseBody &&) = default ;
    ListTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskResponseBody() = default ;
    ListTaskResponseBody& operator=(const ListTaskResponseBody &) = default ;
    ListTaskResponseBody& operator=(ListTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Record, record_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Record, record_);
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
      class Record : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Record& obj) { 
          DARABONBA_PTR_TO_JSON(CompleteCount, completeCount_);
          DARABONBA_PTR_TO_JSON(FireTime, fireTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RobotId, robotId_);
          DARABONBA_PTR_TO_JSON(RobotName, robotName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Record& obj) { 
          DARABONBA_PTR_FROM_JSON(CompleteCount, completeCount_);
          DARABONBA_PTR_FROM_JSON(FireTime, fireTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
          DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        Record() = default ;
        Record(const Record &) = default ;
        Record(Record &&) = default ;
        Record(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Record() = default ;
        Record& operator=(const Record &) = default ;
        Record& operator=(Record &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completeCount_ == nullptr
        && this->fireTime_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->robotId_ == nullptr && this->robotName_ == nullptr
        && this->status_ == nullptr && this->taskName_ == nullptr && this->totalCount_ == nullptr; };
        // completeCount Field Functions 
        bool hasCompleteCount() const { return this->completeCount_ != nullptr;};
        void deleteCompleteCount() { this->completeCount_ = nullptr;};
        inline int32_t getCompleteCount() const { DARABONBA_PTR_GET_DEFAULT(completeCount_, 0) };
        inline Record& setCompleteCount(int32_t completeCount) { DARABONBA_PTR_SET_VALUE(completeCount_, completeCount) };


        // fireTime Field Functions 
        bool hasFireTime() const { return this->fireTime_ != nullptr;};
        void deleteFireTime() { this->fireTime_ = nullptr;};
        inline string getFireTime() const { DARABONBA_PTR_GET_DEFAULT(fireTime_, "") };
        inline Record& setFireTime(string fireTime) { DARABONBA_PTR_SET_VALUE(fireTime_, fireTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Record& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Record& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // robotId Field Functions 
        bool hasRobotId() const { return this->robotId_ != nullptr;};
        void deleteRobotId() { this->robotId_ = nullptr;};
        inline int64_t getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0L) };
        inline Record& setRobotId(int64_t robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


        // robotName Field Functions 
        bool hasRobotName() const { return this->robotName_ != nullptr;};
        void deleteRobotName() { this->robotName_ = nullptr;};
        inline string getRobotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
        inline Record& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Record& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline Record& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Record& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<int32_t> completeCount_ {};
        shared_ptr<string> fireTime_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> robotId_ {};
        shared_ptr<string> robotName_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> taskName_ {};
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->record_ == nullptr && this->total_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // record Field Functions 
      bool hasRecord() const { return this->record_ != nullptr;};
      void deleteRecord() { this->record_ = nullptr;};
      inline const vector<Data::Record> & getRecord() const { DARABONBA_PTR_GET_CONST(record_, vector<Data::Record>) };
      inline vector<Data::Record> getRecord() { DARABONBA_PTR_GET(record_, vector<Data::Record>) };
      inline Data& setRecord(const vector<Data::Record> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
      inline Data& setRecord(vector<Data::Record> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::Record>> record_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTaskResponseBody::Data) };
    inline ListTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTaskResponseBody::Data) };
    inline ListTaskResponseBody& setData(const ListTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTaskResponseBody& setData(ListTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
