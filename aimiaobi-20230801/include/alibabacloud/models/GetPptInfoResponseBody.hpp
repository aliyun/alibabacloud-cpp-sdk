// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPPTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPPTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPptInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPptInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPptInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPptInfoResponseBody() = default ;
    GetPptInfoResponseBody(const GetPptInfoResponseBody &) = default ;
    GetPptInfoResponseBody(GetPptInfoResponseBody &&) = default ;
    GetPptInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPptInfoResponseBody() = default ;
    GetPptInfoResponseBody& operator=(const GetPptInfoResponseBody &) = default ;
    GetPptInfoResponseBody& operator=(GetPptInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExportFileLink, exportFileLink_);
        DARABONBA_PTR_TO_JSON(ExportTaskId, exportTaskId_);
        DARABONBA_PTR_TO_JSON(PptArtifactCover, pptArtifactCover_);
        DARABONBA_PTR_TO_JSON(PptArtifactId, pptArtifactId_);
        DARABONBA_PTR_TO_JSON(PptProcessId, pptProcessId_);
        DARABONBA_PTR_TO_JSON(Query, query_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExportFileLink, exportFileLink_);
        DARABONBA_PTR_FROM_JSON(ExportTaskId, exportTaskId_);
        DARABONBA_PTR_FROM_JSON(PptArtifactCover, pptArtifactCover_);
        DARABONBA_PTR_FROM_JSON(PptArtifactId, pptArtifactId_);
        DARABONBA_PTR_FROM_JSON(PptProcessId, pptProcessId_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->exportFileLink_ == nullptr
        && this->exportTaskId_ == nullptr && this->pptArtifactCover_ == nullptr && this->pptArtifactId_ == nullptr && this->pptProcessId_ == nullptr && this->query_ == nullptr
        && this->taskId_ == nullptr; };
      // exportFileLink Field Functions 
      bool hasExportFileLink() const { return this->exportFileLink_ != nullptr;};
      void deleteExportFileLink() { this->exportFileLink_ = nullptr;};
      inline const vector<string> & getExportFileLink() const { DARABONBA_PTR_GET_CONST(exportFileLink_, vector<string>) };
      inline vector<string> getExportFileLink() { DARABONBA_PTR_GET(exportFileLink_, vector<string>) };
      inline Data& setExportFileLink(const vector<string> & exportFileLink) { DARABONBA_PTR_SET_VALUE(exportFileLink_, exportFileLink) };
      inline Data& setExportFileLink(vector<string> && exportFileLink) { DARABONBA_PTR_SET_RVALUE(exportFileLink_, exportFileLink) };


      // exportTaskId Field Functions 
      bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
      void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
      inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
      inline Data& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


      // pptArtifactCover Field Functions 
      bool hasPptArtifactCover() const { return this->pptArtifactCover_ != nullptr;};
      void deletePptArtifactCover() { this->pptArtifactCover_ = nullptr;};
      inline string getPptArtifactCover() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactCover_, "") };
      inline Data& setPptArtifactCover(string pptArtifactCover) { DARABONBA_PTR_SET_VALUE(pptArtifactCover_, pptArtifactCover) };


      // pptArtifactId Field Functions 
      bool hasPptArtifactId() const { return this->pptArtifactId_ != nullptr;};
      void deletePptArtifactId() { this->pptArtifactId_ = nullptr;};
      inline string getPptArtifactId() const { DARABONBA_PTR_GET_DEFAULT(pptArtifactId_, "") };
      inline Data& setPptArtifactId(string pptArtifactId) { DARABONBA_PTR_SET_VALUE(pptArtifactId_, pptArtifactId) };


      // pptProcessId Field Functions 
      bool hasPptProcessId() const { return this->pptProcessId_ != nullptr;};
      void deletePptProcessId() { this->pptProcessId_ = nullptr;};
      inline string getPptProcessId() const { DARABONBA_PTR_GET_DEFAULT(pptProcessId_, "") };
      inline Data& setPptProcessId(string pptProcessId) { DARABONBA_PTR_SET_VALUE(pptProcessId_, pptProcessId) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline Data& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // Download links for the exported files.
      shared_ptr<vector<string>> exportFileLink_ {};
      // The ID of the export task.
      shared_ptr<string> exportTaskId_ {};
      // The URL of the cover image for the PPT artifact.
      shared_ptr<string> pptArtifactCover_ {};
      // The ID of the PPT artifact.
      shared_ptr<string> pptArtifactId_ {};
      // The ID of the PPT process.
      shared_ptr<string> pptProcessId_ {};
      // The query for the PPT task.
      shared_ptr<string> query_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPptInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPptInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPptInfoResponseBody::Data) };
    inline GetPptInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPptInfoResponseBody::Data) };
    inline GetPptInfoResponseBody& setData(const GetPptInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPptInfoResponseBody& setData(GetPptInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPptInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPptInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPptInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPptInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetPptInfoResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
