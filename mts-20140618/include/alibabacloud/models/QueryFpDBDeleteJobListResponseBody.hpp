// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpDBDeleteJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpDBDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpDBDeleteJobList, fpDBDeleteJobList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpDBDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpDBDeleteJobList, fpDBDeleteJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFpDBDeleteJobListResponseBody() = default ;
    QueryFpDBDeleteJobListResponseBody(const QueryFpDBDeleteJobListResponseBody &) = default ;
    QueryFpDBDeleteJobListResponseBody(QueryFpDBDeleteJobListResponseBody &&) = default ;
    QueryFpDBDeleteJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpDBDeleteJobListResponseBody() = default ;
    QueryFpDBDeleteJobListResponseBody& operator=(const QueryFpDBDeleteJobListResponseBody &) = default ;
    QueryFpDBDeleteJobListResponseBody& operator=(QueryFpDBDeleteJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistIds& obj) { 
        DARABONBA_PTR_TO_JSON(String, string_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistIds& obj) { 
        DARABONBA_PTR_FROM_JSON(String, string_);
      };
      NonExistIds() = default ;
      NonExistIds(const NonExistIds &) = default ;
      NonExistIds(NonExistIds &&) = default ;
      NonExistIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistIds() = default ;
      NonExistIds& operator=(const NonExistIds &) = default ;
      NonExistIds& operator=(NonExistIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->string_ == nullptr; };
      // string Field Functions 
      bool hasString() const { return this->string_ != nullptr;};
      void deleteString() { this->string_ = nullptr;};
      inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
      inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
      inline NonExistIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
      inline NonExistIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


    protected:
      shared_ptr<vector<string>> string_ {};
    };

    class FpDBDeleteJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpDBDeleteJobList& obj) { 
        DARABONBA_PTR_TO_JSON(FpDBDeleteJob, fpDBDeleteJob_);
      };
      friend void from_json(const Darabonba::Json& j, FpDBDeleteJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(FpDBDeleteJob, fpDBDeleteJob_);
      };
      FpDBDeleteJobList() = default ;
      FpDBDeleteJobList(const FpDBDeleteJobList &) = default ;
      FpDBDeleteJobList(FpDBDeleteJobList &&) = default ;
      FpDBDeleteJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpDBDeleteJobList() = default ;
      FpDBDeleteJobList& operator=(const FpDBDeleteJobList &) = default ;
      FpDBDeleteJobList& operator=(FpDBDeleteJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FpDBDeleteJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FpDBDeleteJob& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DelType, delType_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, FpDBDeleteJob& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DelType, delType_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        FpDBDeleteJob() = default ;
        FpDBDeleteJob(const FpDBDeleteJob &) = default ;
        FpDBDeleteJob(FpDBDeleteJob &&) = default ;
        FpDBDeleteJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FpDBDeleteJob() = default ;
        FpDBDeleteJob& operator=(const FpDBDeleteJob &) = default ;
        FpDBDeleteJob& operator=(FpDBDeleteJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->creationTime_ == nullptr && this->delType_ == nullptr && this->finishTime_ == nullptr && this->fpDBId_ == nullptr && this->id_ == nullptr
        && this->message_ == nullptr && this->pipelineId_ == nullptr && this->status_ == nullptr && this->userData_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FpDBDeleteJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline FpDBDeleteJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // delType Field Functions 
        bool hasDelType() const { return this->delType_ != nullptr;};
        void deleteDelType() { this->delType_ = nullptr;};
        inline string getDelType() const { DARABONBA_PTR_GET_DEFAULT(delType_, "") };
        inline FpDBDeleteJob& setDelType(string delType) { DARABONBA_PTR_SET_VALUE(delType_, delType) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline FpDBDeleteJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // fpDBId Field Functions 
        bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
        void deleteFpDBId() { this->fpDBId_ = nullptr;};
        inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
        inline FpDBDeleteJob& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FpDBDeleteJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline FpDBDeleteJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline FpDBDeleteJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FpDBDeleteJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline FpDBDeleteJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> delType_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<string> fpDBId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> pipelineId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> userData_ {};
      };

      virtual bool empty() const override { return this->fpDBDeleteJob_ == nullptr; };
      // fpDBDeleteJob Field Functions 
      bool hasFpDBDeleteJob() const { return this->fpDBDeleteJob_ != nullptr;};
      void deleteFpDBDeleteJob() { this->fpDBDeleteJob_ = nullptr;};
      inline const vector<FpDBDeleteJobList::FpDBDeleteJob> & getFpDBDeleteJob() const { DARABONBA_PTR_GET_CONST(fpDBDeleteJob_, vector<FpDBDeleteJobList::FpDBDeleteJob>) };
      inline vector<FpDBDeleteJobList::FpDBDeleteJob> getFpDBDeleteJob() { DARABONBA_PTR_GET(fpDBDeleteJob_, vector<FpDBDeleteJobList::FpDBDeleteJob>) };
      inline FpDBDeleteJobList& setFpDBDeleteJob(const vector<FpDBDeleteJobList::FpDBDeleteJob> & fpDBDeleteJob) { DARABONBA_PTR_SET_VALUE(fpDBDeleteJob_, fpDBDeleteJob) };
      inline FpDBDeleteJobList& setFpDBDeleteJob(vector<FpDBDeleteJobList::FpDBDeleteJob> && fpDBDeleteJob) { DARABONBA_PTR_SET_RVALUE(fpDBDeleteJob_, fpDBDeleteJob) };


    protected:
      shared_ptr<vector<FpDBDeleteJobList::FpDBDeleteJob>> fpDBDeleteJob_ {};
    };

    virtual bool empty() const override { return this->fpDBDeleteJobList_ == nullptr
        && this->nonExistIds_ == nullptr && this->requestId_ == nullptr; };
    // fpDBDeleteJobList Field Functions 
    bool hasFpDBDeleteJobList() const { return this->fpDBDeleteJobList_ != nullptr;};
    void deleteFpDBDeleteJobList() { this->fpDBDeleteJobList_ = nullptr;};
    inline const QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList & getFpDBDeleteJobList() const { DARABONBA_PTR_GET_CONST(fpDBDeleteJobList_, QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList) };
    inline QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList getFpDBDeleteJobList() { DARABONBA_PTR_GET(fpDBDeleteJobList_, QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList) };
    inline QueryFpDBDeleteJobListResponseBody& setFpDBDeleteJobList(const QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList & fpDBDeleteJobList) { DARABONBA_PTR_SET_VALUE(fpDBDeleteJobList_, fpDBDeleteJobList) };
    inline QueryFpDBDeleteJobListResponseBody& setFpDBDeleteJobList(QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList && fpDBDeleteJobList) { DARABONBA_PTR_SET_RVALUE(fpDBDeleteJobList_, fpDBDeleteJobList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryFpDBDeleteJobListResponseBody::NonExistIds & getNonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryFpDBDeleteJobListResponseBody::NonExistIds) };
    inline QueryFpDBDeleteJobListResponseBody::NonExistIds getNonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryFpDBDeleteJobListResponseBody::NonExistIds) };
    inline QueryFpDBDeleteJobListResponseBody& setNonExistIds(const QueryFpDBDeleteJobListResponseBody::NonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryFpDBDeleteJobListResponseBody& setNonExistIds(QueryFpDBDeleteJobListResponseBody::NonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFpDBDeleteJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryFpDBDeleteJobListResponseBody::FpDBDeleteJobList> fpDBDeleteJobList_ {};
    shared_ptr<QueryFpDBDeleteJobListResponseBody::NonExistIds> nonExistIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
