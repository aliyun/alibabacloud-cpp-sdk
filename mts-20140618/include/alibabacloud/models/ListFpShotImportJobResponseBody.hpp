// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTIMPORTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTIMPORTJOBRESPONSEBODY_HPP_
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
  class ListFpShotImportJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotImportJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotImportJobList, fpShotImportJobList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotImportJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotImportJobList, fpShotImportJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFpShotImportJobResponseBody() = default ;
    ListFpShotImportJobResponseBody(const ListFpShotImportJobResponseBody &) = default ;
    ListFpShotImportJobResponseBody(ListFpShotImportJobResponseBody &&) = default ;
    ListFpShotImportJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotImportJobResponseBody() = default ;
    ListFpShotImportJobResponseBody& operator=(const ListFpShotImportJobResponseBody &) = default ;
    ListFpShotImportJobResponseBody& operator=(ListFpShotImportJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FpShotImportJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpShotImportJobList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, FpShotImportJobList& obj) { 
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
      FpShotImportJobList() = default ;
      FpShotImportJobList(const FpShotImportJobList &) = default ;
      FpShotImportJobList(FpShotImportJobList &&) = default ;
      FpShotImportJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpShotImportJobList() = default ;
      FpShotImportJobList& operator=(const FpShotImportJobList &) = default ;
      FpShotImportJobList& operator=(FpShotImportJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->fpDBId_ == nullptr && this->fpImportConfig_ == nullptr && this->id_ == nullptr
        && this->input_ == nullptr && this->message_ == nullptr && this->pipelineId_ == nullptr && this->processMessage_ == nullptr && this->status_ == nullptr
        && this->userData_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline FpShotImportJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FpShotImportJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline FpShotImportJobList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // fpDBId Field Functions 
      bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
      void deleteFpDBId() { this->fpDBId_ = nullptr;};
      inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
      inline FpShotImportJobList& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


      // fpImportConfig Field Functions 
      bool hasFpImportConfig() const { return this->fpImportConfig_ != nullptr;};
      void deleteFpImportConfig() { this->fpImportConfig_ = nullptr;};
      inline string getFpImportConfig() const { DARABONBA_PTR_GET_DEFAULT(fpImportConfig_, "") };
      inline FpShotImportJobList& setFpImportConfig(string fpImportConfig) { DARABONBA_PTR_SET_VALUE(fpImportConfig_, fpImportConfig) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline FpShotImportJobList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
      inline FpShotImportJobList& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FpShotImportJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline FpShotImportJobList& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // processMessage Field Functions 
      bool hasProcessMessage() const { return this->processMessage_ != nullptr;};
      void deleteProcessMessage() { this->processMessage_ = nullptr;};
      inline string getProcessMessage() const { DARABONBA_PTR_GET_DEFAULT(processMessage_, "") };
      inline FpShotImportJobList& setProcessMessage(string processMessage) { DARABONBA_PTR_SET_VALUE(processMessage_, processMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FpShotImportJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline FpShotImportJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The error code returned when the job fails.
      shared_ptr<string> code_ {};
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The time when the job was completed.
      shared_ptr<string> finishTime_ {};
      // The ID of the text fingerprint library.
      shared_ptr<string> fpDBId_ {};
      // The import configuration.
      shared_ptr<string> fpImportConfig_ {};
      // The job ID.
      shared_ptr<string> id_ {};
      // The input file.
      shared_ptr<string> input_ {};
      // The error message returned when the job fails.
      shared_ptr<string> message_ {};
      // The ID of the ApsaraVideo Media Processing (MPS) queue to which the job is submitted.
      shared_ptr<string> pipelineId_ {};
      // The processing information of the job.
      shared_ptr<string> processMessage_ {};
      // The status of the job. Valid values:
      // 
      // *   Processing: The job is in progress.
      // *   Fail: The job fails.
      // *   Success: The job is successful.
      shared_ptr<string> status_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->fpShotImportJobList_ == nullptr
        && this->nonExistIds_ == nullptr && this->requestId_ == nullptr; };
    // fpShotImportJobList Field Functions 
    bool hasFpShotImportJobList() const { return this->fpShotImportJobList_ != nullptr;};
    void deleteFpShotImportJobList() { this->fpShotImportJobList_ = nullptr;};
    inline const vector<ListFpShotImportJobResponseBody::FpShotImportJobList> & getFpShotImportJobList() const { DARABONBA_PTR_GET_CONST(fpShotImportJobList_, vector<ListFpShotImportJobResponseBody::FpShotImportJobList>) };
    inline vector<ListFpShotImportJobResponseBody::FpShotImportJobList> getFpShotImportJobList() { DARABONBA_PTR_GET(fpShotImportJobList_, vector<ListFpShotImportJobResponseBody::FpShotImportJobList>) };
    inline ListFpShotImportJobResponseBody& setFpShotImportJobList(const vector<ListFpShotImportJobResponseBody::FpShotImportJobList> & fpShotImportJobList) { DARABONBA_PTR_SET_VALUE(fpShotImportJobList_, fpShotImportJobList) };
    inline ListFpShotImportJobResponseBody& setFpShotImportJobList(vector<ListFpShotImportJobResponseBody::FpShotImportJobList> && fpShotImportJobList) { DARABONBA_PTR_SET_RVALUE(fpShotImportJobList_, fpShotImportJobList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const vector<string> & getNonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, vector<string>) };
    inline vector<string> getNonExistIds() { DARABONBA_PTR_GET(nonExistIds_, vector<string>) };
    inline ListFpShotImportJobResponseBody& setNonExistIds(const vector<string> & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline ListFpShotImportJobResponseBody& setNonExistIds(vector<string> && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFpShotImportJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The jobs of importing text files to a text fingerprint library.
    shared_ptr<vector<ListFpShotImportJobResponseBody::FpShotImportJobList>> fpShotImportJobList_ {};
    // The job IDs that do not exist. This parameter is not returned if all specified job IDs exist.
    shared_ptr<vector<string>> nonExistIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
