// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYARCHIVETABLEPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYARCHIVETABLEPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityArchiveTableProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityArchiveTableProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityArchiveTableProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityArchiveTableProgressResponseBody() = default ;
    GetQualityArchiveTableProgressResponseBody(const GetQualityArchiveTableProgressResponseBody &) = default ;
    GetQualityArchiveTableProgressResponseBody(GetQualityArchiveTableProgressResponseBody &&) = default ;
    GetQualityArchiveTableProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityArchiveTableProgressResponseBody() = default ;
    GetQualityArchiveTableProgressResponseBody& operator=(const GetQualityArchiveTableProgressResponseBody &) = default ;
    GetQualityArchiveTableProgressResponseBody& operator=(GetQualityArchiveTableProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ArchiveTableId, archiveTableId_);
        DARABONBA_PTR_TO_JSON(ArchiveTableName, archiveTableName_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchiveTableId, archiveTableId_);
        DARABONBA_PTR_FROM_JSON(ArchiveTableName, archiveTableName_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->archiveTableId_ == nullptr
        && this->archiveTableName_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr; };
      // archiveTableId Field Functions 
      bool hasArchiveTableId() const { return this->archiveTableId_ != nullptr;};
      void deleteArchiveTableId() { this->archiveTableId_ = nullptr;};
      inline int64_t getArchiveTableId() const { DARABONBA_PTR_GET_DEFAULT(archiveTableId_, 0L) };
      inline Data& setArchiveTableId(int64_t archiveTableId) { DARABONBA_PTR_SET_VALUE(archiveTableId_, archiveTableId) };


      // archiveTableName Field Functions 
      bool hasArchiveTableName() const { return this->archiveTableName_ != nullptr;};
      void deleteArchiveTableName() { this->archiveTableName_ = nullptr;};
      inline string getArchiveTableName() const { DARABONBA_PTR_GET_DEFAULT(archiveTableName_, "") };
      inline Data& setArchiveTableName(string archiveTableName) { DARABONBA_PTR_SET_VALUE(archiveTableName_, archiveTableName) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The archived table ID. This parameter is returned after the task succeeds and can be used to switch the active table.
      shared_ptr<int64_t> archiveTableId_ {};
      // The full name of the archived table. This parameter is returned after the task succeeds. When creating a table, the name includes the automatically appended _exception_data suffix.
      shared_ptr<string> archiveTableName_ {};
      // The reason for the task failure. This parameter is returned only when Status is FAILED.
      shared_ptr<string> errorMessage_ {};
      // The task status. Valid values:
      // - PROGRESS: In progress.
      // - SUCCESS: Succeeded.
      // - FAILED: Failed.
      // - CANCEL: Canceled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityArchiveTableProgressResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityArchiveTableProgressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityArchiveTableProgressResponseBody::Data) };
    inline GetQualityArchiveTableProgressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityArchiveTableProgressResponseBody::Data) };
    inline GetQualityArchiveTableProgressResponseBody& setData(const GetQualityArchiveTableProgressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityArchiveTableProgressResponseBody& setData(GetQualityArchiveTableProgressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityArchiveTableProgressResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityArchiveTableProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityArchiveTableProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityArchiveTableProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The asynchronous task progress details.
    shared_ptr<GetQualityArchiveTableProgressResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
