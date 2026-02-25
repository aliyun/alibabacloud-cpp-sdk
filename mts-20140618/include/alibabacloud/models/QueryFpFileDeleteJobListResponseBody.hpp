// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPFILEDELETEJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPFILEDELETEJOBLISTRESPONSEBODY_HPP_
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
  class QueryFpFileDeleteJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpFileDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpFileDeleteJobList, fpFileDeleteJobList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpFileDeleteJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpFileDeleteJobList, fpFileDeleteJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFpFileDeleteJobListResponseBody() = default ;
    QueryFpFileDeleteJobListResponseBody(const QueryFpFileDeleteJobListResponseBody &) = default ;
    QueryFpFileDeleteJobListResponseBody(QueryFpFileDeleteJobListResponseBody &&) = default ;
    QueryFpFileDeleteJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpFileDeleteJobListResponseBody() = default ;
    QueryFpFileDeleteJobListResponseBody& operator=(const QueryFpFileDeleteJobListResponseBody &) = default ;
    QueryFpFileDeleteJobListResponseBody& operator=(QueryFpFileDeleteJobListResponseBody &&) = default ;
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

    class FpFileDeleteJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpFileDeleteJobList& obj) { 
        DARABONBA_PTR_TO_JSON(FpFileDeleteJob, fpFileDeleteJob_);
      };
      friend void from_json(const Darabonba::Json& j, FpFileDeleteJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(FpFileDeleteJob, fpFileDeleteJob_);
      };
      FpFileDeleteJobList() = default ;
      FpFileDeleteJobList(const FpFileDeleteJobList &) = default ;
      FpFileDeleteJobList(FpFileDeleteJobList &&) = default ;
      FpFileDeleteJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpFileDeleteJobList() = default ;
      FpFileDeleteJobList& operator=(const FpFileDeleteJobList &) = default ;
      FpFileDeleteJobList& operator=(FpFileDeleteJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FpFileDeleteJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FpFileDeleteJob& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, FpFileDeleteJob& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        FpFileDeleteJob() = default ;
        FpFileDeleteJob(const FpFileDeleteJob &) = default ;
        FpFileDeleteJob(FpFileDeleteJob &&) = default ;
        FpFileDeleteJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FpFileDeleteJob() = default ;
        FpFileDeleteJob& operator=(const FpFileDeleteJob &) = default ;
        FpFileDeleteJob& operator=(FpFileDeleteJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->creationTime_ == nullptr && this->fileIds_ == nullptr && this->finishTime_ == nullptr && this->fpDBId_ == nullptr && this->id_ == nullptr
        && this->message_ == nullptr && this->pipelineId_ == nullptr && this->status_ == nullptr && this->userData_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FpFileDeleteJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline FpFileDeleteJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // fileIds Field Functions 
        bool hasFileIds() const { return this->fileIds_ != nullptr;};
        void deleteFileIds() { this->fileIds_ = nullptr;};
        inline string getFileIds() const { DARABONBA_PTR_GET_DEFAULT(fileIds_, "") };
        inline FpFileDeleteJob& setFileIds(string fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline FpFileDeleteJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // fpDBId Field Functions 
        bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
        void deleteFpDBId() { this->fpDBId_ = nullptr;};
        inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
        inline FpFileDeleteJob& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FpFileDeleteJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline FpFileDeleteJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline FpFileDeleteJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FpFileDeleteJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline FpFileDeleteJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> fileIds_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<string> fpDBId_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> pipelineId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> userData_ {};
      };

      virtual bool empty() const override { return this->fpFileDeleteJob_ == nullptr; };
      // fpFileDeleteJob Field Functions 
      bool hasFpFileDeleteJob() const { return this->fpFileDeleteJob_ != nullptr;};
      void deleteFpFileDeleteJob() { this->fpFileDeleteJob_ = nullptr;};
      inline const vector<FpFileDeleteJobList::FpFileDeleteJob> & getFpFileDeleteJob() const { DARABONBA_PTR_GET_CONST(fpFileDeleteJob_, vector<FpFileDeleteJobList::FpFileDeleteJob>) };
      inline vector<FpFileDeleteJobList::FpFileDeleteJob> getFpFileDeleteJob() { DARABONBA_PTR_GET(fpFileDeleteJob_, vector<FpFileDeleteJobList::FpFileDeleteJob>) };
      inline FpFileDeleteJobList& setFpFileDeleteJob(const vector<FpFileDeleteJobList::FpFileDeleteJob> & fpFileDeleteJob) { DARABONBA_PTR_SET_VALUE(fpFileDeleteJob_, fpFileDeleteJob) };
      inline FpFileDeleteJobList& setFpFileDeleteJob(vector<FpFileDeleteJobList::FpFileDeleteJob> && fpFileDeleteJob) { DARABONBA_PTR_SET_RVALUE(fpFileDeleteJob_, fpFileDeleteJob) };


    protected:
      shared_ptr<vector<FpFileDeleteJobList::FpFileDeleteJob>> fpFileDeleteJob_ {};
    };

    virtual bool empty() const override { return this->fpFileDeleteJobList_ == nullptr
        && this->nonExistIds_ == nullptr && this->requestId_ == nullptr; };
    // fpFileDeleteJobList Field Functions 
    bool hasFpFileDeleteJobList() const { return this->fpFileDeleteJobList_ != nullptr;};
    void deleteFpFileDeleteJobList() { this->fpFileDeleteJobList_ = nullptr;};
    inline const QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList & getFpFileDeleteJobList() const { DARABONBA_PTR_GET_CONST(fpFileDeleteJobList_, QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList) };
    inline QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList getFpFileDeleteJobList() { DARABONBA_PTR_GET(fpFileDeleteJobList_, QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList) };
    inline QueryFpFileDeleteJobListResponseBody& setFpFileDeleteJobList(const QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList & fpFileDeleteJobList) { DARABONBA_PTR_SET_VALUE(fpFileDeleteJobList_, fpFileDeleteJobList) };
    inline QueryFpFileDeleteJobListResponseBody& setFpFileDeleteJobList(QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList && fpFileDeleteJobList) { DARABONBA_PTR_SET_RVALUE(fpFileDeleteJobList_, fpFileDeleteJobList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const QueryFpFileDeleteJobListResponseBody::NonExistIds & getNonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, QueryFpFileDeleteJobListResponseBody::NonExistIds) };
    inline QueryFpFileDeleteJobListResponseBody::NonExistIds getNonExistIds() { DARABONBA_PTR_GET(nonExistIds_, QueryFpFileDeleteJobListResponseBody::NonExistIds) };
    inline QueryFpFileDeleteJobListResponseBody& setNonExistIds(const QueryFpFileDeleteJobListResponseBody::NonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline QueryFpFileDeleteJobListResponseBody& setNonExistIds(QueryFpFileDeleteJobListResponseBody::NonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFpFileDeleteJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryFpFileDeleteJobListResponseBody::FpFileDeleteJobList> fpFileDeleteJobList_ {};
    shared_ptr<QueryFpFileDeleteJobListResponseBody::NonExistIds> nonExistIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
