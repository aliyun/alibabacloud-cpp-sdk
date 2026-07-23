// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAAGENTACCURACYTESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAAGENTACCURACYTESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDataAgentAccuracyTestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataAgentAccuracyTestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataAgentAccuracyTestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateDataAgentAccuracyTestResponseBody() = default ;
    UpdateDataAgentAccuracyTestResponseBody(const UpdateDataAgentAccuracyTestResponseBody &) = default ;
    UpdateDataAgentAccuracyTestResponseBody(UpdateDataAgentAccuracyTestResponseBody &&) = default ;
    UpdateDataAgentAccuracyTestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataAgentAccuracyTestResponseBody() = default ;
    UpdateDataAgentAccuracyTestResponseBody& operator=(const UpdateDataAgentAccuracyTestResponseBody &) = default ;
    UpdateDataAgentAccuracyTestResponseBody& operator=(UpdateDataAgentAccuracyTestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccuracyTest, accuracyTest_);
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(Dataset, dataset_);
        DARABONBA_PTR_TO_JSON(Datasource, datasource_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(EvaluationPrompt, evaluationPrompt_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(MaxConcurrent, maxConcurrent_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NeedDelete, needDelete_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccuracyTest, accuracyTest_);
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(Datasource, datasource_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(EvaluationPrompt, evaluationPrompt_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrent, maxConcurrent_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NeedDelete, needDelete_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->accuracyTest_ == nullptr
        && this->agentId_ == nullptr && this->dataset_ == nullptr && this->datasource_ == nullptr && this->desc_ == nullptr && this->evaluationPrompt_ == nullptr
        && this->fileId_ == nullptr && this->maxConcurrent_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->needDelete_ == nullptr
        && this->workspaceId_ == nullptr; };
      // accuracyTest Field Functions 
      bool hasAccuracyTest() const { return this->accuracyTest_ != nullptr;};
      void deleteAccuracyTest() { this->accuracyTest_ = nullptr;};
      inline string getAccuracyTest() const { DARABONBA_PTR_GET_DEFAULT(accuracyTest_, "") };
      inline Data& setAccuracyTest(string accuracyTest) { DARABONBA_PTR_SET_VALUE(accuracyTest_, accuracyTest) };


      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
      inline Data& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


      // datasource Field Functions 
      bool hasDatasource() const { return this->datasource_ != nullptr;};
      void deleteDatasource() { this->datasource_ = nullptr;};
      inline string getDatasource() const { DARABONBA_PTR_GET_DEFAULT(datasource_, "") };
      inline Data& setDatasource(string datasource) { DARABONBA_PTR_SET_VALUE(datasource_, datasource) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Data& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // evaluationPrompt Field Functions 
      bool hasEvaluationPrompt() const { return this->evaluationPrompt_ != nullptr;};
      void deleteEvaluationPrompt() { this->evaluationPrompt_ = nullptr;};
      inline string getEvaluationPrompt() const { DARABONBA_PTR_GET_DEFAULT(evaluationPrompt_, "") };
      inline Data& setEvaluationPrompt(string evaluationPrompt) { DARABONBA_PTR_SET_VALUE(evaluationPrompt_, evaluationPrompt) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // maxConcurrent Field Functions 
      bool hasMaxConcurrent() const { return this->maxConcurrent_ != nullptr;};
      void deleteMaxConcurrent() { this->maxConcurrent_ = nullptr;};
      inline int32_t getMaxConcurrent() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrent_, 0) };
      inline Data& setMaxConcurrent(int32_t maxConcurrent) { DARABONBA_PTR_SET_VALUE(maxConcurrent_, maxConcurrent) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline Data& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // needDelete Field Functions 
      bool hasNeedDelete() const { return this->needDelete_ != nullptr;};
      void deleteNeedDelete() { this->needDelete_ = nullptr;};
      inline bool getNeedDelete() const { DARABONBA_PTR_GET_DEFAULT(needDelete_, false) };
      inline Data& setNeedDelete(bool needDelete) { DARABONBA_PTR_SET_VALUE(needDelete_, needDelete) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ID of the accuracy test item.
      shared_ptr<string> accuracyTest_ {};
      // Agent Id
      shared_ptr<string> agentId_ {};
      // The data source. We recommend that you configure this parameter in a custom agent.
      shared_ptr<string> dataset_ {};
      shared_ptr<string> datasource_ {};
      shared_ptr<string> desc_ {};
      // The accuracy evaluation criteria. An empty value indicates the default criteria.
      shared_ptr<string> evaluationPrompt_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      shared_ptr<int32_t> maxConcurrent_ {};
      // The analysis mode.
      shared_ptr<int32_t> mode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> needDelete_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateDataAgentAccuracyTestResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateDataAgentAccuracyTestResponseBody::Data) };
    inline UpdateDataAgentAccuracyTestResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateDataAgentAccuracyTestResponseBody::Data) };
    inline UpdateDataAgentAccuracyTestResponseBody& setData(const UpdateDataAgentAccuracyTestResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateDataAgentAccuracyTestResponseBody& setData(UpdateDataAgentAccuracyTestResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateDataAgentAccuracyTestResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateDataAgentAccuracyTestResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDataAgentAccuracyTestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateDataAgentAccuracyTestResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response struct.
    shared_ptr<UpdateDataAgentAccuracyTestResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.                                 
    // - **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
