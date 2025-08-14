// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDNAJOBLISTRESPONSEBODYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDNAJOBLISTRESPONSEBODYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDNAJobListResponseBodyJobListInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryDNAJobListResponseBodyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDNAJobListResponseBodyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBId, DBId_);
      DARABONBA_PTR_TO_JSON(DNAResult, DNAResult_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDNAJobListResponseBodyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBId, DBId_);
      DARABONBA_PTR_FROM_JSON(DNAResult, DNAResult_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QueryDNAJobListResponseBodyJobList() = default ;
    QueryDNAJobListResponseBodyJobList(const QueryDNAJobListResponseBodyJobList &) = default ;
    QueryDNAJobListResponseBodyJobList(QueryDNAJobListResponseBodyJobList &&) = default ;
    QueryDNAJobListResponseBodyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDNAJobListResponseBodyJobList() = default ;
    QueryDNAJobListResponseBodyJobList& operator=(const QueryDNAJobListResponseBodyJobList &) = default ;
    QueryDNAJobListResponseBodyJobList& operator=(QueryDNAJobListResponseBodyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->config_ != nullptr && this->creationTime_ != nullptr && this->DBId_ != nullptr && this->DNAResult_ != nullptr && this->finishTime_ != nullptr
        && this->id_ != nullptr && this->input_ != nullptr && this->message_ != nullptr && this->primaryKey_ != nullptr && this->status_ != nullptr
        && this->userData_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDNAJobListResponseBodyJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline QueryDNAJobListResponseBodyJobList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryDNAJobListResponseBodyJobList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBId Field Functions 
    bool hasDBId() const { return this->DBId_ != nullptr;};
    void deleteDBId() { this->DBId_ = nullptr;};
    inline string DBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
    inline QueryDNAJobListResponseBodyJobList& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


    // DNAResult Field Functions 
    bool hasDNAResult() const { return this->DNAResult_ != nullptr;};
    void deleteDNAResult() { this->DNAResult_ = nullptr;};
    inline string DNAResult() const { DARABONBA_PTR_GET_DEFAULT(DNAResult_, "") };
    inline QueryDNAJobListResponseBodyJobList& setDNAResult(string DNAResult) { DARABONBA_PTR_SET_VALUE(DNAResult_, DNAResult) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryDNAJobListResponseBodyJobList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryDNAJobListResponseBodyJobList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryDNAJobListResponseBodyJobListInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryDNAJobListResponseBodyJobListInput) };
    inline Models::QueryDNAJobListResponseBodyJobListInput input() { DARABONBA_PTR_GET(input_, Models::QueryDNAJobListResponseBodyJobListInput) };
    inline QueryDNAJobListResponseBodyJobList& setInput(const Models::QueryDNAJobListResponseBodyJobListInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryDNAJobListResponseBodyJobList& setInput(Models::QueryDNAJobListResponseBodyJobListInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryDNAJobListResponseBodyJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline QueryDNAJobListResponseBodyJobList& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryDNAJobListResponseBodyJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryDNAJobListResponseBodyJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The configurations of the media fingerprint analysis job.
    std::shared_ptr<string> config_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the media fingerprint library.
    std::shared_ptr<string> DBId_ = nullptr;
    // The URL of the media fingerprint analysis result.
    std::shared_ptr<string> DNAResult_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The job ID.
    std::shared_ptr<string> id_ = nullptr;
    // The details of the input file.
    std::shared_ptr<Models::QueryDNAJobListResponseBodyJobListInput> input_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The primary key of the video. You must make sure that each primary key is unique.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The job state. Valid values:
    // 
    // *   **Queuing**: The job is waiting in the queue.
    // *   **Analysing**: The job is in progress.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job failed.
    std::shared_ptr<string> status_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
