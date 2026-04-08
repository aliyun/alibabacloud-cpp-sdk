// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDagsResponseBody() = default ;
    ListDagsResponseBody(const ListDagsResponseBody &) = default ;
    ListDagsResponseBody(ListDagsResponseBody &&) = default ;
    ListDagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDagsResponseBody() = default ;
    ListDagsResponseBody& operator=(const ListDagsResponseBody &) = default ;
    ListDagsResponseBody& operator=(ListDagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Dags, dags_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Dags, dags_);
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
      class Dags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dags& obj) { 
          DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DagId, dagId_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Gmtdate, gmtdate_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OpSeq, opSeq_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Dags& obj) { 
          DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DagId, dagId_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Gmtdate, gmtdate_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OpSeq, opSeq_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Dags() = default ;
        Dags(const Dags &) = default ;
        Dags(Dags &&) = default ;
        Dags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dags() = default ;
        Dags& operator=(const Dags &) = default ;
        Dags& operator=(Dags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dagId_ == nullptr && this->finishTime_ == nullptr && this->gmtdate_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->opSeq_ == nullptr && this->projectId_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline Dags& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Dags& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Dags& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // dagId Field Functions 
        bool hasDagId() const { return this->dagId_ != nullptr;};
        void deleteDagId() { this->dagId_ = nullptr;};
        inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
        inline Dags& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline Dags& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // gmtdate Field Functions 
        bool hasGmtdate() const { return this->gmtdate_ != nullptr;};
        void deleteGmtdate() { this->gmtdate_ = nullptr;};
        inline int64_t getGmtdate() const { DARABONBA_PTR_GET_DEFAULT(gmtdate_, 0L) };
        inline Dags& setGmtdate(int64_t gmtdate) { DARABONBA_PTR_SET_VALUE(gmtdate_, gmtdate) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Dags& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Dags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // opSeq Field Functions 
        bool hasOpSeq() const { return this->opSeq_ != nullptr;};
        void deleteOpSeq() { this->opSeq_ = nullptr;};
        inline int64_t getOpSeq() const { DARABONBA_PTR_GET_DEFAULT(opSeq_, 0L) };
        inline Dags& setOpSeq(int64_t opSeq) { DARABONBA_PTR_SET_VALUE(opSeq_, opSeq) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Dags& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Dags& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Dags& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Dags& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The data timestamp.
        shared_ptr<int64_t> bizdate_ {};
        // The creation time.
        shared_ptr<int64_t> createTime_ {};
        // The creator.
        shared_ptr<string> createUser_ {};
        // The DAG ID.
        shared_ptr<int64_t> dagId_ {};
        // The end time.
        shared_ptr<int64_t> finishTime_ {};
        // The actual running time.
        shared_ptr<int64_t> gmtdate_ {};
        // The modification time.
        shared_ptr<int64_t> modifyTime_ {};
        // The name of the DAG.
        shared_ptr<string> name_ {};
        // The sequence number of the operation.
        shared_ptr<int64_t> opSeq_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The start time.
        shared_ptr<int64_t> startTime_ {};
        // The status of the DAG. Valid values:
        // 
        // *   CREATED
        // *   RUNNING
        // *   FAILURE
        // *   SUCCESS
        shared_ptr<string> status_ {};
        // The type of the DAG. Valid values:
        // 
        // *   MANUAL: DAG for a manually triggered workflow
        // *   SMOKE_TEST: DAG for a smoke testing workflow
        // *   SUPPLY_DATA: DAG for a data backfill instance
        // *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dags_ == nullptr; };
      // dags Field Functions 
      bool hasDags() const { return this->dags_ != nullptr;};
      void deleteDags() { this->dags_ = nullptr;};
      inline const vector<Data::Dags> & getDags() const { DARABONBA_PTR_GET_CONST(dags_, vector<Data::Dags>) };
      inline vector<Data::Dags> getDags() { DARABONBA_PTR_GET(dags_, vector<Data::Dags>) };
      inline Data& setDags(const vector<Data::Dags> & dags) { DARABONBA_PTR_SET_VALUE(dags_, dags) };
      inline Data& setDags(vector<Data::Dags> && dags) { DARABONBA_PTR_SET_RVALUE(dags_, dags) };


    protected:
      // The entities returned.
      shared_ptr<vector<Data::Dags>> dags_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDagsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDagsResponseBody::Data) };
    inline ListDagsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDagsResponseBody::Data) };
    inline ListDagsResponseBody& setData(const ListDagsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDagsResponseBody& setData(ListDagsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDagsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDagsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDagsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of DAGs.
    shared_ptr<ListDagsResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
