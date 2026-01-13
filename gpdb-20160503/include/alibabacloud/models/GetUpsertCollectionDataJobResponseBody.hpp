// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPSERTCOLLECTIONDATAJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPSERTCOLLECTIONDATAJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetUpsertCollectionDataJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUpsertCollectionDataJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetUpsertCollectionDataJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetUpsertCollectionDataJobResponseBody() = default ;
    GetUpsertCollectionDataJobResponseBody(const GetUpsertCollectionDataJobResponseBody &) = default ;
    GetUpsertCollectionDataJobResponseBody(GetUpsertCollectionDataJobResponseBody &&) = default ;
    GetUpsertCollectionDataJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUpsertCollectionDataJobResponseBody() = default ;
    GetUpsertCollectionDataJobResponseBody& operator=(const GetUpsertCollectionDataJobResponseBody &) = default ;
    GetUpsertCollectionDataJobResponseBody& operator=(GetUpsertCollectionDataJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(Completed, completed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(Completed, completed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completed_ == nullptr
        && this->createTime_ == nullptr && this->error_ == nullptr && this->id_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
      // completed Field Functions 
      bool hasCompleted() const { return this->completed_ != nullptr;};
      void deleteCompleted() { this->completed_ = nullptr;};
      inline bool getCompleted() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
      inline Job& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Job& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Job& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Job& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Job& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Job& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Indicates whether the operation is complete.
      shared_ptr<bool> completed_ {};
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The error message.
      shared_ptr<string> error_ {};
      // The job ID.
      shared_ptr<string> id_ {};
      // The progress of the vector data upload job. The value of this parameter indicates the number of data entries that have been uploaded.
      shared_ptr<int32_t> progress_ {};
      // The status of the job.
      // 
      // >  Valid values:
      // 
      // *   Success
      // 
      // *   Failed (See the Error parameter for failure reasons.)
      // 
      // *   Cancelling
      // 
      // *   Cancelled
      // 
      // *   Start
      // 
      // *   Running
      shared_ptr<string> status_ {};
      // The time when the job was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetUpsertCollectionDataJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetUpsertCollectionDataJobResponseBody::Job) };
    inline GetUpsertCollectionDataJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetUpsertCollectionDataJobResponseBody::Job) };
    inline GetUpsertCollectionDataJobResponseBody& setJob(const GetUpsertCollectionDataJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetUpsertCollectionDataJobResponseBody& setJob(GetUpsertCollectionDataJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUpsertCollectionDataJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUpsertCollectionDataJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUpsertCollectionDataJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about the vector data upload job.
    shared_ptr<GetUpsertCollectionDataJobResponseBody::Job> job_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
