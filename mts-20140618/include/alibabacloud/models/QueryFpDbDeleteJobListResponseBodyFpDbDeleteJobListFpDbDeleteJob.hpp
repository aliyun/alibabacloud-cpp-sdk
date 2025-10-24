// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODYFPDBDELETEJOBLISTFPDBDELETEJOB_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPDBDELETEJOBLISTRESPONSEBODYFPDBDELETEJOBLISTFPDBDELETEJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& obj) { 
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
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob() = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob(const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob &) = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob(QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob &&) = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob() = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& operator=(const QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob &) = default ;
    QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& operator=(QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->creationTime_ == nullptr && return this->delType_ == nullptr && return this->finishTime_ == nullptr && return this->fpDBId_ == nullptr && return this->id_ == nullptr
        && return this->message_ == nullptr && return this->pipelineId_ == nullptr && return this->status_ == nullptr && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // delType Field Functions 
    bool hasDelType() const { return this->delType_ != nullptr;};
    void deleteDelType() { this->delType_ = nullptr;};
    inline string delType() const { DARABONBA_PTR_GET_DEFAULT(delType_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setDelType(string delType) { DARABONBA_PTR_SET_VALUE(delType_, delType) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryFpDBDeleteJobListResponseBodyFpDBDeleteJobListFpDBDeleteJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The type of the operation.
    std::shared_ptr<string> delType_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the media fingerprint library.
    std::shared_ptr<string> fpDBId_ = nullptr;
    // The ID of the job.
    std::shared_ptr<string> id_ = nullptr;
    // The error message returned if the job fails. This parameter is not returned if the job is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the ApsaraVideo Media Processing (MPS) queue to which the job was submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **Queuing**: The job is waiting in the queue.
    // *   **Analysing**: The job is in progress.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    std::shared_ptr<string> status_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
