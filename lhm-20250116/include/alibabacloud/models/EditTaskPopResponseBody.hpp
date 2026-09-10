// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITTASKPOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EDITTASKPOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class EditTaskPopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditTaskPopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EditTaskPopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    EditTaskPopResponseBody() = default ;
    EditTaskPopResponseBody(const EditTaskPopResponseBody &) = default ;
    EditTaskPopResponseBody(EditTaskPopResponseBody &&) = default ;
    EditTaskPopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditTaskPopResponseBody() = default ;
    EditTaskPopResponseBody& operator=(const EditTaskPopResponseBody &) = default ;
    EditTaskPopResponseBody& operator=(EditTaskPopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(fileUploadParseId, fileUploadParseId_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(success, success_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(fileUploadParseId, fileUploadParseId_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(success, success_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      virtual bool empty() const override { return this->fileUploadParseId_ == nullptr
        && this->id_ == nullptr && this->message_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
      // fileUploadParseId Field Functions 
      bool hasFileUploadParseId() const { return this->fileUploadParseId_ != nullptr;};
      void deleteFileUploadParseId() { this->fileUploadParseId_ = nullptr;};
      inline int64_t getFileUploadParseId() const { DARABONBA_PTR_GET_DEFAULT(fileUploadParseId_, 0L) };
      inline Data& setFileUploadParseId(int64_t fileUploadParseId) { DARABONBA_PTR_SET_VALUE(fileUploadParseId_, fileUploadParseId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The file upload and parsing ID.
      shared_ptr<int64_t> fileUploadParseId_ {};
      // The primary key ID that uniquely identifies a record.
      shared_ptr<int64_t> id_ {};
      // The message content. In error scenarios, this field contains the error message. In log scenarios, this field contains the log content. In instance progress scenarios, this field may return a status or progress value.
      shared_ptr<string> message_ {};
      // Indicates whether the call is successful. Valid values:
      // 
      // - true: Successful.
      // - false: Failed. Check errCode and errMessage for troubleshooting.
      shared_ptr<bool> success_ {};
      // The task ID that uniquely identifies a task.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EditTaskPopResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EditTaskPopResponseBody::Data) };
    inline EditTaskPopResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EditTaskPopResponseBody::Data) };
    inline EditTaskPopResponseBody& setData(const EditTaskPopResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EditTaskPopResponseBody& setData(EditTaskPopResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline EditTaskPopResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline EditTaskPopResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EditTaskPopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EditTaskPopResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data body returned by the operation. For the field structure, see the child parameter descriptions.
    shared_ptr<EditTaskPopResponseBody::Data> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues with this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // - true: Successful.
    // - false: Failed. Check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
