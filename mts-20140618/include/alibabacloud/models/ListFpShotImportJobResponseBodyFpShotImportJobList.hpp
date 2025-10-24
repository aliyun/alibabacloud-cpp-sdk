// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTIMPORTJOBRESPONSEBODYFPSHOTIMPORTJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTIMPORTJOBRESPONSEBODYFPSHOTIMPORTJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotImportJobResponseBodyFpShotImportJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotImportJobResponseBodyFpShotImportJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(FpImportConfig, fpImportConfig_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ProcessMessage, processMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotImportJobResponseBodyFpShotImportJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(FpImportConfig, fpImportConfig_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ProcessMessage, processMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ListFpShotImportJobResponseBodyFpShotImportJobList() = default ;
    ListFpShotImportJobResponseBodyFpShotImportJobList(const ListFpShotImportJobResponseBodyFpShotImportJobList &) = default ;
    ListFpShotImportJobResponseBodyFpShotImportJobList(ListFpShotImportJobResponseBodyFpShotImportJobList &&) = default ;
    ListFpShotImportJobResponseBodyFpShotImportJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotImportJobResponseBodyFpShotImportJobList() = default ;
    ListFpShotImportJobResponseBodyFpShotImportJobList& operator=(const ListFpShotImportJobResponseBodyFpShotImportJobList &) = default ;
    ListFpShotImportJobResponseBodyFpShotImportJobList& operator=(ListFpShotImportJobResponseBodyFpShotImportJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->createTime_ == nullptr && return this->finishTime_ == nullptr && return this->fpDBId_ == nullptr && return this->fpImportConfig_ == nullptr && return this->id_ == nullptr
        && return this->input_ == nullptr && return this->message_ == nullptr && return this->pipelineId_ == nullptr && return this->processMessage_ == nullptr && return this->status_ == nullptr
        && return this->userData_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // fpImportConfig Field Functions 
    bool hasFpImportConfig() const { return this->fpImportConfig_ != nullptr;};
    void deleteFpImportConfig() { this->fpImportConfig_ = nullptr;};
    inline string fpImportConfig() const { DARABONBA_PTR_GET_DEFAULT(fpImportConfig_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setFpImportConfig(string fpImportConfig) { DARABONBA_PTR_SET_VALUE(fpImportConfig_, fpImportConfig) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // processMessage Field Functions 
    bool hasProcessMessage() const { return this->processMessage_ != nullptr;};
    void deleteProcessMessage() { this->processMessage_ = nullptr;};
    inline string processMessage() const { DARABONBA_PTR_GET_DEFAULT(processMessage_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setProcessMessage(string processMessage) { DARABONBA_PTR_SET_VALUE(processMessage_, processMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListFpShotImportJobResponseBodyFpShotImportJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code returned when the job fails.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was completed.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the text fingerprint library.
    std::shared_ptr<string> fpDBId_ = nullptr;
    // The import configuration.
    std::shared_ptr<string> fpImportConfig_ = nullptr;
    // The job ID.
    std::shared_ptr<string> id_ = nullptr;
    // The input file.
    std::shared_ptr<string> input_ = nullptr;
    // The error message returned when the job fails.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the ApsaraVideo Media Processing (MPS) queue to which the job is submitted.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The processing information of the job.
    std::shared_ptr<string> processMessage_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   Processing: The job is in progress.
    // *   Fail: The job fails.
    // *   Success: The job is successful.
    std::shared_ptr<string> status_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
