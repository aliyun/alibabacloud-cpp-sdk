// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDataImportTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataImportTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataImportTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDataImportTaskInfoResponseBody() = default ;
    DescribeDataImportTaskInfoResponseBody(const DescribeDataImportTaskInfoResponseBody &) = default ;
    DescribeDataImportTaskInfoResponseBody(DescribeDataImportTaskInfoResponseBody &&) = default ;
    DescribeDataImportTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataImportTaskInfoResponseBody() = default ;
    DescribeDataImportTaskInfoResponseBody& operator=(const DescribeDataImportTaskInfoResponseBody &) = default ;
    DescribeDataImportTaskInfoResponseBody& operator=(DescribeDataImportTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataImportTaskDetailInfo, dataImportTaskDetailInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataImportTaskDetailInfo, dataImportTaskDetailInfo_);
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
      class DataImportTaskDetailInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataImportTaskDetailInfo& obj) { 
          DARABONBA_PTR_TO_JSON(FsmId, fsmId_);
          DARABONBA_PTR_TO_JSON(FsmState, fsmState_);
          DARABONBA_PTR_TO_JSON(FsmStatus, fsmStatus_);
          DARABONBA_PTR_TO_JSON(ServiceDetailList, serviceDetailList_);
        };
        friend void from_json(const Darabonba::Json& j, DataImportTaskDetailInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FsmId, fsmId_);
          DARABONBA_PTR_FROM_JSON(FsmState, fsmState_);
          DARABONBA_PTR_FROM_JSON(FsmStatus, fsmStatus_);
          DARABONBA_PTR_FROM_JSON(ServiceDetailList, serviceDetailList_);
        };
        DataImportTaskDetailInfo() = default ;
        DataImportTaskDetailInfo(const DataImportTaskDetailInfo &) = default ;
        DataImportTaskDetailInfo(DataImportTaskDetailInfo &&) = default ;
        DataImportTaskDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataImportTaskDetailInfo() = default ;
        DataImportTaskDetailInfo& operator=(const DataImportTaskDetailInfo &) = default ;
        DataImportTaskDetailInfo& operator=(DataImportTaskDetailInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceDetailList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceDetailList& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskDetailList, taskDetailList_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceDetailList& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskDetailList, taskDetailList_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ServiceDetailList() = default ;
          ServiceDetailList(const ServiceDetailList &) = default ;
          ServiceDetailList(ServiceDetailList &&) = default ;
          ServiceDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceDetailList() = default ;
          ServiceDetailList& operator=(const ServiceDetailList &) = default ;
          ServiceDetailList& operator=(ServiceDetailList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TaskDetailList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TaskDetailList& obj) { 
              DARABONBA_PTR_TO_JSON(Delay, delay_);
              DARABONBA_PTR_TO_JSON(LastError, lastError_);
              DARABONBA_PTR_TO_JSON(PhysicalDbName, physicalDbName_);
              DARABONBA_PTR_TO_JSON(Progress, progress_);
              DARABONBA_PTR_TO_JSON(Statistics, statistics_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, TaskDetailList& obj) { 
              DARABONBA_PTR_FROM_JSON(Delay, delay_);
              DARABONBA_PTR_FROM_JSON(LastError, lastError_);
              DARABONBA_PTR_FROM_JSON(PhysicalDbName, physicalDbName_);
              DARABONBA_PTR_FROM_JSON(Progress, progress_);
              DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            TaskDetailList() = default ;
            TaskDetailList(const TaskDetailList &) = default ;
            TaskDetailList(TaskDetailList &&) = default ;
            TaskDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TaskDetailList() = default ;
            TaskDetailList& operator=(const TaskDetailList &) = default ;
            TaskDetailList& operator=(TaskDetailList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->delay_ == nullptr
        && this->lastError_ == nullptr && this->physicalDbName_ == nullptr && this->progress_ == nullptr && this->statistics_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->type_ == nullptr; };
            // delay Field Functions 
            bool hasDelay() const { return this->delay_ != nullptr;};
            void deleteDelay() { this->delay_ = nullptr;};
            inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
            inline TaskDetailList& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


            // lastError Field Functions 
            bool hasLastError() const { return this->lastError_ != nullptr;};
            void deleteLastError() { this->lastError_ = nullptr;};
            inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
            inline TaskDetailList& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


            // physicalDbName Field Functions 
            bool hasPhysicalDbName() const { return this->physicalDbName_ != nullptr;};
            void deletePhysicalDbName() { this->physicalDbName_ = nullptr;};
            inline string getPhysicalDbName() const { DARABONBA_PTR_GET_DEFAULT(physicalDbName_, "") };
            inline TaskDetailList& setPhysicalDbName(string physicalDbName) { DARABONBA_PTR_SET_VALUE(physicalDbName_, physicalDbName) };


            // progress Field Functions 
            bool hasProgress() const { return this->progress_ != nullptr;};
            void deleteProgress() { this->progress_ = nullptr;};
            inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
            inline TaskDetailList& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


            // statistics Field Functions 
            bool hasStatistics() const { return this->statistics_ != nullptr;};
            void deleteStatistics() { this->statistics_ = nullptr;};
            inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
            inline TaskDetailList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline TaskDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
            inline TaskDetailList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline TaskDetailList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<int64_t> delay_ {};
            shared_ptr<string> lastError_ {};
            shared_ptr<string> physicalDbName_ {};
            shared_ptr<int64_t> progress_ {};
            shared_ptr<string> statistics_ {};
            shared_ptr<string> status_ {};
            shared_ptr<int64_t> taskId_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->status_ == nullptr && this->taskDetailList_ == nullptr && this->type_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ServiceDetailList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ServiceDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskDetailList Field Functions 
          bool hasTaskDetailList() const { return this->taskDetailList_ != nullptr;};
          void deleteTaskDetailList() { this->taskDetailList_ = nullptr;};
          inline const vector<ServiceDetailList::TaskDetailList> & getTaskDetailList() const { DARABONBA_PTR_GET_CONST(taskDetailList_, vector<ServiceDetailList::TaskDetailList>) };
          inline vector<ServiceDetailList::TaskDetailList> getTaskDetailList() { DARABONBA_PTR_GET(taskDetailList_, vector<ServiceDetailList::TaskDetailList>) };
          inline ServiceDetailList& setTaskDetailList(const vector<ServiceDetailList::TaskDetailList> & taskDetailList) { DARABONBA_PTR_SET_VALUE(taskDetailList_, taskDetailList) };
          inline ServiceDetailList& setTaskDetailList(vector<ServiceDetailList::TaskDetailList> && taskDetailList) { DARABONBA_PTR_SET_RVALUE(taskDetailList_, taskDetailList) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ServiceDetailList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> status_ {};
          shared_ptr<vector<ServiceDetailList::TaskDetailList>> taskDetailList_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->fsmId_ == nullptr
        && this->fsmState_ == nullptr && this->fsmStatus_ == nullptr && this->serviceDetailList_ == nullptr; };
        // fsmId Field Functions 
        bool hasFsmId() const { return this->fsmId_ != nullptr;};
        void deleteFsmId() { this->fsmId_ = nullptr;};
        inline int64_t getFsmId() const { DARABONBA_PTR_GET_DEFAULT(fsmId_, 0L) };
        inline DataImportTaskDetailInfo& setFsmId(int64_t fsmId) { DARABONBA_PTR_SET_VALUE(fsmId_, fsmId) };


        // fsmState Field Functions 
        bool hasFsmState() const { return this->fsmState_ != nullptr;};
        void deleteFsmState() { this->fsmState_ = nullptr;};
        inline string getFsmState() const { DARABONBA_PTR_GET_DEFAULT(fsmState_, "") };
        inline DataImportTaskDetailInfo& setFsmState(string fsmState) { DARABONBA_PTR_SET_VALUE(fsmState_, fsmState) };


        // fsmStatus Field Functions 
        bool hasFsmStatus() const { return this->fsmStatus_ != nullptr;};
        void deleteFsmStatus() { this->fsmStatus_ = nullptr;};
        inline string getFsmStatus() const { DARABONBA_PTR_GET_DEFAULT(fsmStatus_, "") };
        inline DataImportTaskDetailInfo& setFsmStatus(string fsmStatus) { DARABONBA_PTR_SET_VALUE(fsmStatus_, fsmStatus) };


        // serviceDetailList Field Functions 
        bool hasServiceDetailList() const { return this->serviceDetailList_ != nullptr;};
        void deleteServiceDetailList() { this->serviceDetailList_ = nullptr;};
        inline const vector<DataImportTaskDetailInfo::ServiceDetailList> & getServiceDetailList() const { DARABONBA_PTR_GET_CONST(serviceDetailList_, vector<DataImportTaskDetailInfo::ServiceDetailList>) };
        inline vector<DataImportTaskDetailInfo::ServiceDetailList> getServiceDetailList() { DARABONBA_PTR_GET(serviceDetailList_, vector<DataImportTaskDetailInfo::ServiceDetailList>) };
        inline DataImportTaskDetailInfo& setServiceDetailList(const vector<DataImportTaskDetailInfo::ServiceDetailList> & serviceDetailList) { DARABONBA_PTR_SET_VALUE(serviceDetailList_, serviceDetailList) };
        inline DataImportTaskDetailInfo& setServiceDetailList(vector<DataImportTaskDetailInfo::ServiceDetailList> && serviceDetailList) { DARABONBA_PTR_SET_RVALUE(serviceDetailList_, serviceDetailList) };


      protected:
        shared_ptr<int64_t> fsmId_ {};
        shared_ptr<string> fsmState_ {};
        shared_ptr<string> fsmStatus_ {};
        shared_ptr<vector<DataImportTaskDetailInfo::ServiceDetailList>> serviceDetailList_ {};
      };

      virtual bool empty() const override { return this->dataImportTaskDetailInfo_ == nullptr; };
      // dataImportTaskDetailInfo Field Functions 
      bool hasDataImportTaskDetailInfo() const { return this->dataImportTaskDetailInfo_ != nullptr;};
      void deleteDataImportTaskDetailInfo() { this->dataImportTaskDetailInfo_ = nullptr;};
      inline const Data::DataImportTaskDetailInfo & getDataImportTaskDetailInfo() const { DARABONBA_PTR_GET_CONST(dataImportTaskDetailInfo_, Data::DataImportTaskDetailInfo) };
      inline Data::DataImportTaskDetailInfo getDataImportTaskDetailInfo() { DARABONBA_PTR_GET(dataImportTaskDetailInfo_, Data::DataImportTaskDetailInfo) };
      inline Data& setDataImportTaskDetailInfo(const Data::DataImportTaskDetailInfo & dataImportTaskDetailInfo) { DARABONBA_PTR_SET_VALUE(dataImportTaskDetailInfo_, dataImportTaskDetailInfo) };
      inline Data& setDataImportTaskDetailInfo(Data::DataImportTaskDetailInfo && dataImportTaskDetailInfo) { DARABONBA_PTR_SET_RVALUE(dataImportTaskDetailInfo_, dataImportTaskDetailInfo) };


    protected:
      shared_ptr<Data::DataImportTaskDetailInfo> dataImportTaskDetailInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeDataImportTaskInfoResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataImportTaskInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataImportTaskInfoResponseBody::Data) };
    inline DescribeDataImportTaskInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataImportTaskInfoResponseBody::Data) };
    inline DescribeDataImportTaskInfoResponseBody& setData(const DescribeDataImportTaskInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataImportTaskInfoResponseBody& setData(DescribeDataImportTaskInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDataImportTaskInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataImportTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeDataImportTaskInfoResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<DescribeDataImportTaskInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
